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

  auto *get() {{ return reinterpret_cast<native_type *>(this); }}

  {1}
}};
)";

inline constexpr auto enum_template = "enum class {0}       {{ \n {1} }}; \n";
inline constexpr auto mask_template = "enum class {0} : {2} {{ \n {1} }}; \n";

inline constexpr auto ifdef_template = "#ifdef {0} \n {1} #endif \n";

inline constexpr auto enum_query = "types/type[@category = 'enum' and not(@alias)]";
inline constexpr auto empty_mask_query_32 = "types/type[@category = 'bitmask' and not(@alias) and not(@requires) and type='VkFlags']";
inline constexpr auto mask_query_32 = "types/type[@category = 'bitmask' and not(@alias) and (@requires) and type='VkFlags']";
inline constexpr auto mask_query_64 = "types/type[@category = 'bitmask' and not(@alias) and type='VkFlags64']";
inline constexpr auto structure_query = "types/type[@category = 'struct' and not(@alias)]";
inline constexpr auto protected_extension_query = "extensions/extension[@platform and @supported != 'disabled']";
inline constexpr auto vulkansc_types_query = "feature[@api='vulkansc']/require/type";
inline constexpr auto disabled_types_query = "extensions/extension[@supported = 'disabled' or @supported = 'vulkansc']/require/type";

} // namespace Volkolak

#endif // VOLKOLAK_TEMPLATES_H