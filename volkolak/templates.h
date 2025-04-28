#ifndef VOLKOLAK_TEMPLATES_H
#define VOLKOLAK_TEMPLATES_H

namespace Volkolak {

// 0 - structure name is vulkan name without prefix
// 1 - members
// 2 - constructor
inline constexpr auto structure_template = R"(
struct {0} {{

  using native_type = Vk{0};

  {2}

  {0}(const native_type &rhs): {0}(std::bit_cast<{0}>(rhs)) {{}}

  {0} &operator=(const native_type& rhs) {{
    *this = std::bit_cast<{0}>(rhs);
    return *this;
  }}

  auto operator<=>(const {0} &other) const = default;

  auto *get() {{ return reinterpret_cast<native_type *>(this); }}

  {1}
}};
)";

inline constexpr auto format_table_template = R"(
std::unordered_map<Format, FormatData> format_information = {{
  {0}
}};
)";

// 0 - format name
// 1 - block size
// 2 - texel per block
// 3 - components
inline constexpr auto format_table_element_template = "{{ Format::{0}, {{ {1}, {2}, {{ {3} }} }} }}, \n";

// 0 - name
// 1 - bits
inline constexpr auto format_component_template = "{{ \'{0}\', {1} }}";

inline constexpr auto enum_template = "enum class {0}       {{ \n {1} }}; \n";
inline constexpr auto mask_template = "enum class {0} : {2} {{ \n {1} }}; \n";

inline constexpr auto ifdef_template = "#ifdef {0} \n {1} #endif \n";

inline constexpr auto using_mask_template = "using {0} = Mask<{1}>;\n";

inline constexpr auto enum_query = "types/type[@category = 'enum' and not(@alias)]";
inline constexpr auto mask_query = "registry/types/type[@category = 'bitmask' and not(@alias)]";
inline constexpr auto structure_query = "types/type[@category = 'struct' and not(@alias)]";
inline constexpr auto protected_extension_query = "extensions/extension[@platform and @supported != 'disabled']";
inline constexpr auto vulkansc_types_query = "feature[@api='vulkansc']/require/type";
inline constexpr auto disabled_types_query = "extensions/extension[@supported = 'disabled' or @supported = 'vulkansc']/require/type";

} // namespace Volkolak

#endif // VOLKOLAK_TEMPLATES_H