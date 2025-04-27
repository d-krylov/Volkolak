#ifndef MASK_H
#define MASK_H

#include <concepts>
#include <utility>

template <typename T>
concept ScopedEnum = std::is_scoped_enum_v<T>;

template <ScopedEnum MaskBit> class Mask {
public:
  using MaskType = typename std::underlying_type_t<MaskBit>;

  constexpr Mask() : mask_(0) {}

  constexpr Mask(MaskBit bit) : mask_(std::to_underlying(bit)) {}

  constexpr explicit Mask(MaskType mask) : mask_(mask) {}

  auto operator<=>(const Mask<MaskBit> &) const = default;

  constexpr Mask<MaskBit> &operator|=(const Mask<MaskBit> &rhs) {
    mask_ |= rhs.mask_;
    return *this;
  }

  constexpr Mask<MaskBit> &operator&=(const Mask<MaskBit> &rhs) {
    mask_ &= rhs.mask_;
    return *this;
  }

  constexpr Mask<MaskBit> &operator^=(const Mask<MaskBit> &rhs) {
    mask_ ^= rhs.mask_;
    return *this;
  }

  constexpr Mask<MaskBit> operator&(const Mask<MaskBit> &rhs) const { return Mask<MaskBit>(mask_ & rhs.mask_); }

  constexpr Mask<MaskBit> operator|(const Mask<MaskBit> &rhs) const { return Mask<MaskBit>(mask_ | rhs.mask_); }

  constexpr Mask<MaskBit> operator^(const Mask<MaskBit> &rhs) const { return Mask<MaskBit>(mask_ ^ rhs.mask_); }

private:
  MaskType mask_;
};

template <typename MaskBit> inline constexpr Mask<MaskBit> operator&(MaskBit bit, const Mask<MaskBit> &flags) {
  return flags.operator&(bit);
}

template <typename MaskBit> inline constexpr Mask<MaskBit> operator|(MaskBit bit, const Mask<MaskBit> &flags) {
  return flags.operator|(bit);
}

template <ScopedEnum MaskBit> inline constexpr Mask<MaskBit> operator&(MaskBit lhs, MaskBit rhs) { return Mask<MaskBit>(lhs) & rhs; }

template <ScopedEnum MaskBit> inline constexpr Mask<MaskBit> operator|(MaskBit lhs, MaskBit rhs) { return Mask<MaskBit>(lhs) | rhs; }

template <ScopedEnum MaskBit> inline constexpr Mask<MaskBit> operator^(MaskBit lhs, MaskBit rhs) { return Mask<MaskBit>(lhs) ^ rhs; }

#endif // MASK_H