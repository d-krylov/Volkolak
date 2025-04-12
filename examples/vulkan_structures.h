#ifndef VULKAN_STRUCTURES_H
#define VULKAN_STRUCTURES_H

#include "vulkan_enums.h"

struct ImageAlignmentControlCreateInfoMESA {

  using native_type = VkImageAlignmentControlCreateInfoMESA;

  ImageAlignmentControlCreateInfoMESA(const void *next, uint32_t maximum_requested_alignment)
    : next_(next), maximum_requested_alignment_(maximum_requested_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t maximum_requested_alignment_;
};

struct PhysicalDeviceImageAlignmentControlPropertiesMESA {

  using native_type = VkPhysicalDeviceImageAlignmentControlPropertiesMESA;

  PhysicalDeviceImageAlignmentControlPropertiesMESA(void *next, uint32_t supported_image_alignment_mask)
    : next_(next), supported_image_alignment_mask_(supported_image_alignment_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t supported_image_alignment_mask_;
};

struct PhysicalDeviceMapMemoryPlacedPropertiesEXT {

  using native_type = VkPhysicalDeviceMapMemoryPlacedPropertiesEXT;

  PhysicalDeviceMapMemoryPlacedPropertiesEXT(void *next, VkDeviceSize min_placed_memory_map_alignment)
    : next_(next), min_placed_memory_map_alignment_(min_placed_memory_map_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize min_placed_memory_map_alignment_;
};

struct RenderingInputAttachmentIndexInfoKHR {

  using native_type = VkRenderingInputAttachmentIndexInfoKHR;

  RenderingInputAttachmentIndexInfoKHR(const void *next, uint32_t color_attachment_count, const uint32_t *color_attachment_input_indices,
                                       const uint32_t *depth_input_attachment_index, const uint32_t *stencil_input_attachment_index)
    : next_(next), color_attachment_count_(color_attachment_count), color_attachment_input_indices_(color_attachment_input_indices),
      depth_input_attachment_index_(depth_input_attachment_index), stencil_input_attachment_index_(stencil_input_attachment_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t color_attachment_count_;
  const uint32_t *color_attachment_input_indices_;
  const uint32_t *depth_input_attachment_index_;
  const uint32_t *stencil_input_attachment_index_;
};

struct RenderPassStripeBeginInfoARM {

  using native_type = VkRenderPassStripeBeginInfoARM;

  RenderPassStripeBeginInfoARM(const void *next, uint32_t stripe_info_count, const VkRenderPassStripeInfoARM *stripe_infos)
    : next_(next), stripe_info_count_(stripe_info_count), stripe_infos_(stripe_infos) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t stripe_info_count_;
  const VkRenderPassStripeInfoARM *stripe_infos_;
};

struct RenderPassStripeInfoARM {

  using native_type = VkRenderPassStripeInfoARM;

  RenderPassStripeInfoARM(const void *next, VkRect2D stripe_area) : next_(next), stripe_area_(stripe_area) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRect2D stripe_area_;
};

struct PhysicalDeviceRenderPassStripedFeaturesARM {

  using native_type = VkPhysicalDeviceRenderPassStripedFeaturesARM;

  PhysicalDeviceRenderPassStripedFeaturesARM(void *next, VkBool32 render_pass_striped)
    : next_(next), render_pass_striped_(render_pass_striped) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 render_pass_striped_;
};

struct PhysicalDeviceRelaxedLineRasterizationFeaturesIMG {

  using native_type = VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG;

  PhysicalDeviceRelaxedLineRasterizationFeaturesIMG(void *next, VkBool32 relaxed_line_rasterization)
    : next_(next), relaxed_line_rasterization_(relaxed_line_rasterization) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 relaxed_line_rasterization_;
};

struct PhysicalDeviceSchedulingControlsFeaturesARM {

  using native_type = VkPhysicalDeviceSchedulingControlsFeaturesARM;

  PhysicalDeviceSchedulingControlsFeaturesARM(void *next, VkBool32 scheduling_controls)
    : next_(next), scheduling_controls_(scheduling_controls) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 scheduling_controls_;
};

struct DeviceQueueShaderCoreControlCreateInfoARM {

  using native_type = VkDeviceQueueShaderCoreControlCreateInfoARM;

  DeviceQueueShaderCoreControlCreateInfoARM(void *next, uint32_t shader_core_count) : next_(next), shader_core_count_(shader_core_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t shader_core_count_;
};

struct PhysicalDeviceCudaKernelLaunchPropertiesNV {

  using native_type = VkPhysicalDeviceCudaKernelLaunchPropertiesNV;

  PhysicalDeviceCudaKernelLaunchPropertiesNV(void *next, uint32_t compute_capability_minor, uint32_t compute_capability_major)
    : next_(next), compute_capability_minor_(compute_capability_minor), compute_capability_major_(compute_capability_major) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t compute_capability_minor_;
  uint32_t compute_capability_major_;
};

struct SwapchainLatencyCreateInfoNV {

  using native_type = VkSwapchainLatencyCreateInfoNV;

  SwapchainLatencyCreateInfoNV(const void *next, VkBool32 latency_mode_enable) : next_(next), latency_mode_enable_(latency_mode_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 latency_mode_enable_;
};

struct OutOfBandQueueTypeInfoNV {

  using native_type = VkOutOfBandQueueTypeInfoNV;

  OutOfBandQueueTypeInfoNV(const void *next, OutOfBandQueueType queue_type) : next_(next), queue_type_(queue_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  OutOfBandQueueType queue_type_;
};

struct LatencySleepInfoNV {

  using native_type = VkLatencySleepInfoNV;

  LatencySleepInfoNV(const void *next, VkSemaphore signal_semaphore, uint64_t value)
    : next_(next), signal_semaphore_(signal_semaphore), value_(value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore signal_semaphore_;
  uint64_t value_;
};

struct PhysicalDeviceExternalFormatResolveFeaturesANDROID {

  using native_type = VkPhysicalDeviceExternalFormatResolveFeaturesANDROID;

  PhysicalDeviceExternalFormatResolveFeaturesANDROID(void *next, VkBool32 external_format_resolve)
    : next_(next), external_format_resolve_(external_format_resolve) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 external_format_resolve_;
};

struct PhysicalDeviceLayeredDriverPropertiesMSFT {

  using native_type = VkPhysicalDeviceLayeredDriverPropertiesMSFT;

  PhysicalDeviceLayeredDriverPropertiesMSFT(void *next, LayeredDriverUnderlyingApi underlying_api)
    : next_(next), underlying_api_(underlying_api) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  LayeredDriverUnderlyingApi underlying_api_;
};

struct PhysicalDeviceImageProcessing2FeaturesQCOM {

  using native_type = VkPhysicalDeviceImageProcessing2FeaturesQCOM;

  PhysicalDeviceImageProcessing2FeaturesQCOM(void *next, VkBool32 texture_block_match2)
    : next_(next), texture_block_match2_(texture_block_match2) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 texture_block_match2_;
};

struct BlitImageCubicWeightsInfoQCOM {

  using native_type = VkBlitImageCubicWeightsInfoQCOM;

  BlitImageCubicWeightsInfoQCOM(const void *next, CubicFilterWeights cubic_weights) : next_(next), cubic_weights_(cubic_weights) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  CubicFilterWeights cubic_weights_;
};

struct PhysicalDeviceYcbcrDegammaFeaturesQCOM {

  using native_type = VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;

  PhysicalDeviceYcbcrDegammaFeaturesQCOM(void *next, VkBool32 ycbcr_degamma) : next_(next), ycbcr_degamma_(ycbcr_degamma) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ycbcr_degamma_;
};

struct BindDescriptorBufferEmbeddedSamplersInfoEXT {

  using native_type = VkBindDescriptorBufferEmbeddedSamplersInfoEXT;

  BindDescriptorBufferEmbeddedSamplersInfoEXT(const void *next, VkShaderStageFlags stage_flags, VkPipelineLayout layout, uint32_t set)
    : next_(next), stage_flags_(stage_flags), layout_(layout), set_(set) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkShaderStageFlags stage_flags_;
  VkPipelineLayout layout_;
  uint32_t set_;
};

struct PushDescriptorSetWithTemplateInfoKHR {

  using native_type = VkPushDescriptorSetWithTemplateInfoKHR;

  PushDescriptorSetWithTemplateInfoKHR(const void *next, VkDescriptorUpdateTemplate descriptor_update_template, VkPipelineLayout layout,
                                       uint32_t set, const void *data)
    : next_(next), descriptor_update_template_(descriptor_update_template), layout_(layout), set_(set), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorUpdateTemplate descriptor_update_template_;
  VkPipelineLayout layout_;
  uint32_t set_;
  const void *data_;
};

struct PushConstantsInfoKHR {

  using native_type = VkPushConstantsInfoKHR;

  PushConstantsInfoKHR(const void *next, VkPipelineLayout layout, VkShaderStageFlags stage_flags, uint32_t offset, uint32_t size,
                       const void *values)
    : next_(next), layout_(layout), stage_flags_(stage_flags), offset_(offset), size_(size), values_(values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineLayout layout_;
  VkShaderStageFlags stage_flags_;
  uint32_t offset_;
  uint32_t size_;
  const void *values_;
};

struct PhysicalDeviceShaderEnqueueFeaturesAMDX {

  using native_type = VkPhysicalDeviceShaderEnqueueFeaturesAMDX;

  PhysicalDeviceShaderEnqueueFeaturesAMDX(void *next, VkBool32 shader_enqueue) : next_(next), shader_enqueue_(shader_enqueue) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_enqueue_;
};

struct PhysicalDeviceShaderFloatControls2FeaturesKHR {

  using native_type = VkPhysicalDeviceShaderFloatControls2FeaturesKHR;

  PhysicalDeviceShaderFloatControls2FeaturesKHR(void *next, VkBool32 shader_float_controls2)
    : next_(next), shader_float_controls2_(shader_float_controls2) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_float_controls2_;
};

struct PhysicalDeviceCooperativeMatrixFeaturesKHR {

  using native_type = VkPhysicalDeviceCooperativeMatrixFeaturesKHR;

  PhysicalDeviceCooperativeMatrixFeaturesKHR(void *next, VkBool32 cooperative_matrix, VkBool32 cooperative_matrix_robust_buffer_access)
    : next_(next), cooperative_matrix_(cooperative_matrix),
      cooperative_matrix_robust_buffer_access_(cooperative_matrix_robust_buffer_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 cooperative_matrix_;
  VkBool32 cooperative_matrix_robust_buffer_access_;
};

struct PhysicalDeviceShaderTileImagePropertiesEXT {

  using native_type = VkPhysicalDeviceShaderTileImagePropertiesEXT;

  PhysicalDeviceShaderTileImagePropertiesEXT(void *next, VkBool32 shader_tile_image_coherent_read_accelerated,
                                             VkBool32 shader_tile_image_read_sample_from_pixel_rate_invocation,
                                             VkBool32 shader_tile_image_read_from_helper_invocation)
    : next_(next), shader_tile_image_coherent_read_accelerated_(shader_tile_image_coherent_read_accelerated),
      shader_tile_image_read_sample_from_pixel_rate_invocation_(shader_tile_image_read_sample_from_pixel_rate_invocation),
      shader_tile_image_read_from_helper_invocation_(shader_tile_image_read_from_helper_invocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_tile_image_coherent_read_accelerated_;
  VkBool32 shader_tile_image_read_sample_from_pixel_rate_invocation_;
  VkBool32 shader_tile_image_read_from_helper_invocation_;
};

struct PhysicalDeviceShaderTileImageFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderTileImageFeaturesEXT;

  PhysicalDeviceShaderTileImageFeaturesEXT(void *next, VkBool32 shader_tile_image_color_read_access,
                                           VkBool32 shader_tile_image_depth_read_access, VkBool32 shader_tile_image_stencil_read_access)
    : next_(next), shader_tile_image_color_read_access_(shader_tile_image_color_read_access),
      shader_tile_image_depth_read_access_(shader_tile_image_depth_read_access),
      shader_tile_image_stencil_read_access_(shader_tile_image_stencil_read_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_tile_image_color_read_access_;
  VkBool32 shader_tile_image_depth_read_access_;
  VkBool32 shader_tile_image_stencil_read_access_;
};

struct ShaderCreateInfoEXT {

  using native_type = VkShaderCreateInfoEXT;

  ShaderCreateInfoEXT(const void *next, VkShaderCreateFlagsEXT flags, ShaderStageMaskBit stage, VkShaderStageFlags next_stage,
                      ShaderCodeType code_type, size_t code_size, const void *code, const char *name, uint32_t set_layout_count,
                      const VkDescriptorSetLayout *set_layouts, uint32_t push_constant_range_count,
                      const VkPushConstantRange *push_constant_ranges, const VkSpecializationInfo *specialization_info)
    : next_(next), flags_(flags), stage_(stage), next_stage_(next_stage), code_type_(code_type), code_size_(code_size), code_(code),
      name_(name), set_layout_count_(set_layout_count), set_layouts_(set_layouts), push_constant_range_count_(push_constant_range_count),
      push_constant_ranges_(push_constant_ranges), specialization_info_(specialization_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkShaderCreateFlagsEXT flags_;
  ShaderStageMaskBit stage_;
  VkShaderStageFlags next_stage_;
  ShaderCodeType code_type_;
  size_t code_size_;
  const void *code_;
  const char *name_;
  uint32_t set_layout_count_;
  const VkDescriptorSetLayout *set_layouts_;
  uint32_t push_constant_range_count_;
  const VkPushConstantRange *push_constant_ranges_;
  const VkSpecializationInfo *specialization_info_;
};

struct PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM {

  using native_type = VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;

  PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(void *next, VkBool32 multiview_per_view_viewports)
    : next_(next), multiview_per_view_viewports_(multiview_per_view_viewports) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 multiview_per_view_viewports_;
};

struct DirectDriverLoadingInfoLUNARG {

  using native_type = VkDirectDriverLoadingInfoLUNARG;

  DirectDriverLoadingInfoLUNARG(void *next, VkDirectDriverLoadingFlagsLUNARG flags,
                                PFN_vkGetInstanceProcAddrLUNARG pfn_get_instance_proc_addr)
    : next_(next), flags_(flags), pfn_get_instance_proc_addr_(pfn_get_instance_proc_addr) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDirectDriverLoadingFlagsLUNARG flags_;
  PFN_vkGetInstanceProcAddrLUNARG pfn_get_instance_proc_addr_;
};

struct PhysicalDeviceRayTracingInvocationReorderPropertiesNV {

  using native_type = VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV;

  PhysicalDeviceRayTracingInvocationReorderPropertiesNV(void *next,
                                                        RayTracingInvocationReorderMode ray_tracing_invocation_reorder_reordering_hint)
    : next_(next), ray_tracing_invocation_reorder_reordering_hint_(ray_tracing_invocation_reorder_reordering_hint) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  RayTracingInvocationReorderMode ray_tracing_invocation_reorder_reordering_hint_;
};

struct MemoryMapPlacedInfoEXT {

  using native_type = VkMemoryMapPlacedInfoEXT;

  MemoryMapPlacedInfoEXT(const void *next, void *placed_address) : next_(next), placed_address_(placed_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  void *placed_address_;
};

struct PhysicalDeviceRayTracingInvocationReorderFeaturesNV {

  using native_type = VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;

  PhysicalDeviceRayTracingInvocationReorderFeaturesNV(void *next, VkBool32 ray_tracing_invocation_reorder)
    : next_(next), ray_tracing_invocation_reorder_(ray_tracing_invocation_reorder) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_tracing_invocation_reorder_;
};

struct PhysicalDeviceDepthBiasControlFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthBiasControlFeaturesEXT;

  PhysicalDeviceDepthBiasControlFeaturesEXT(void *next, VkBool32 depth_bias_control,
                                            VkBool32 least_representable_value_force_unorm_representation, VkBool32 float_representation,
                                            VkBool32 depth_bias_exact)
    : next_(next), depth_bias_control_(depth_bias_control),
      least_representable_value_force_unorm_representation_(least_representable_value_force_unorm_representation),
      float_representation_(float_representation), depth_bias_exact_(depth_bias_exact) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 depth_bias_control_;
  VkBool32 least_representable_value_force_unorm_representation_;
  VkBool32 float_representation_;
  VkBool32 depth_bias_exact_;
};

struct ReleaseSwapchainImagesInfoEXT {

  using native_type = VkReleaseSwapchainImagesInfoEXT;

  ReleaseSwapchainImagesInfoEXT(const void *next, VkSwapchainKHR swapchain, uint32_t image_index_count, const uint32_t *image_indices)
    : next_(next), swapchain_(swapchain), image_index_count_(image_index_count), image_indices_(image_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSwapchainKHR swapchain_;
  uint32_t image_index_count_;
  const uint32_t *image_indices_;
};

struct SwapchainPresentModeInfoEXT {

  using native_type = VkSwapchainPresentModeInfoEXT;

  SwapchainPresentModeInfoEXT(const void *next, uint32_t swapchain_count, const PresentMode *present_modes)
    : next_(next), swapchain_count_(swapchain_count), present_modes_(present_modes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t swapchain_count_;
  const PresentMode *present_modes_;
};

struct SurfacePresentModeCompatibilityEXT {

  using native_type = VkSurfacePresentModeCompatibilityEXT;

  SurfacePresentModeCompatibilityEXT(void *next, uint32_t present_mode_count, PresentMode *present_modes)
    : next_(next), present_mode_count_(present_mode_count), present_modes_(present_modes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t present_mode_count_;
  PresentMode *present_modes_;
};

struct SurfacePresentModeEXT {

  using native_type = VkSurfacePresentModeEXT;

  SurfacePresentModeEXT(void *next, PresentMode present_mode) : next_(next), present_mode_(present_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  PresentMode present_mode_;
};

struct DecompressMemoryRegionNV {

  using native_type = VkDecompressMemoryRegionNV;

  DecompressMemoryRegionNV(VkDeviceAddress src_address, VkDeviceAddress dst_address, VkDeviceSize compressed_size,
                           VkDeviceSize decompressed_size, VkMemoryDecompressionMethodFlagsNV decompression_method)
    : src_address_(src_address), dst_address_(dst_address), compressed_size_(compressed_size), decompressed_size_(decompressed_size),
      decompression_method_(decompression_method) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress src_address_;
  VkDeviceAddress dst_address_;
  VkDeviceSize compressed_size_;
  VkDeviceSize decompressed_size_;
  VkMemoryDecompressionMethodFlagsNV decompression_method_;
};

struct DepthBiasInfoEXT {

  using native_type = VkDepthBiasInfoEXT;

  DepthBiasInfoEXT(const void *next, float depth_bias_constant_factor, float depth_bias_clamp, float depth_bias_slope_factor)
    : next_(next), depth_bias_constant_factor_(depth_bias_constant_factor), depth_bias_clamp_(depth_bias_clamp),
      depth_bias_slope_factor_(depth_bias_slope_factor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  float depth_bias_constant_factor_;
  float depth_bias_clamp_;
  float depth_bias_slope_factor_;
};

struct PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT {

  using native_type = VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT;

  PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(void *next, VkBool32 pipeline_library_group_handles)
    : next_(next), pipeline_library_group_handles_(pipeline_library_group_handles) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_library_group_handles_;
};

struct DeviceFaultVendorBinaryHeaderVersionOneEXT {

  using native_type = VkDeviceFaultVendorBinaryHeaderVersionOneEXT;

  DeviceFaultVendorBinaryHeaderVersionOneEXT(uint32_t header_size, DeviceFaultVendorBinaryHeaderVersion header_version, uint32_t vendor_id,
                                             uint32_t device_id, uint32_t driver_version, uint8_t pipeline_cache_uuid[VK_UUID_SIZE],
                                             uint32_t application_name_offset, uint32_t application_version, uint32_t engine_name_offset,
                                             uint32_t engine_version, uint32_t api_version)
    : header_size_(header_size), header_version_(header_version), vendor_id_(vendor_id), device_id_(device_id),
      driver_version_(driver_version), pipeline_cache_uuid_(pipeline_cache_uuid), application_name_offset_(application_name_offset),
      application_version_(application_version), engine_name_offset_(engine_name_offset), engine_version_(engine_version),
      api_version_(api_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t header_size_;
  DeviceFaultVendorBinaryHeaderVersion header_version_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  uint32_t driver_version_;
  uint8_t pipeline_cache_uuid[VK_UUID_SIZE] _;
  uint32_t application_name_offset_;
  uint32_t application_version_;
  uint32_t engine_name_offset_;
  uint32_t engine_version_;
  uint32_t api_version_;
};

struct DeviceFaultInfoEXT {

  using native_type = VkDeviceFaultInfoEXT;

  DeviceFaultInfoEXT(void *next, char description[VK_MAX_DESCRIPTION_SIZE], VkDeviceFaultAddressInfoEXT *address_infos,
                     VkDeviceFaultVendorInfoEXT *vendor_infos, void *vendor_binary_data)
    : next_(next), description_(description), address_infos_(address_infos), vendor_infos_(vendor_infos),
      vendor_binary_data_(vendor_binary_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
  VkDeviceFaultAddressInfoEXT *address_infos_;
  VkDeviceFaultVendorInfoEXT *vendor_infos_;
  void *vendor_binary_data_;
};

struct DeviceFaultCountsEXT {

  using native_type = VkDeviceFaultCountsEXT;

  DeviceFaultCountsEXT(void *next, uint32_t address_info_count, uint32_t vendor_info_count, VkDeviceSize vendor_binary_size)
    : next_(next), address_info_count_(address_info_count), vendor_info_count_(vendor_info_count), vendor_binary_size_(vendor_binary_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t address_info_count_;
  uint32_t vendor_info_count_;
  VkDeviceSize vendor_binary_size_;
};

struct DeviceFaultVendorInfoEXT {

  using native_type = VkDeviceFaultVendorInfoEXT;

  DeviceFaultVendorInfoEXT(char description[VK_MAX_DESCRIPTION_SIZE], uint64_t vendor_fault_code, uint64_t vendor_fault_data)
    : description_(description), vendor_fault_code_(vendor_fault_code), vendor_fault_data_(vendor_fault_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  char description[VK_MAX_DESCRIPTION_SIZE] _;
  uint64_t vendor_fault_code_;
  uint64_t vendor_fault_data_;
};

struct PhysicalDeviceShaderExpectAssumeFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderExpectAssumeFeaturesKHR;

  PhysicalDeviceShaderExpectAssumeFeaturesKHR(void *next, VkBool32 shader_expect_assume)
    : next_(next), shader_expect_assume_(shader_expect_assume) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_expect_assume_;
};

struct OpticalFlowExecuteInfoNV {

  using native_type = VkOpticalFlowExecuteInfoNV;

  OpticalFlowExecuteInfoNV(void *next, VkOpticalFlowExecuteFlagsNV flags, uint32_t region_count, const VkRect2D *regions)
    : next_(next), flags_(flags), region_count_(region_count), regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkOpticalFlowExecuteFlagsNV flags_;
  uint32_t region_count_;
  const VkRect2D *regions_;
};

struct OpticalFlowImageFormatInfoNV {

  using native_type = VkOpticalFlowImageFormatInfoNV;

  OpticalFlowImageFormatInfoNV(const void *next, VkOpticalFlowUsageFlagsNV usage) : next_(next), usage_(usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkOpticalFlowUsageFlagsNV usage_;
};

struct DirectDriverLoadingListLUNARG {

  using native_type = VkDirectDriverLoadingListLUNARG;

  DirectDriverLoadingListLUNARG(const void *next, DirectDriverLoadingMode mode, uint32_t driver_count,
                                const VkDirectDriverLoadingInfoLUNARG *drivers)
    : next_(next), mode_(mode), driver_count_(driver_count), drivers_(drivers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DirectDriverLoadingMode mode_;
  uint32_t driver_count_;
  const VkDirectDriverLoadingInfoLUNARG *drivers_;
};

struct PhysicalDeviceOpticalFlowPropertiesNV {

  using native_type = VkPhysicalDeviceOpticalFlowPropertiesNV;

  PhysicalDeviceOpticalFlowPropertiesNV(void *next, VkOpticalFlowGridSizeFlagsNV supported_output_grid_sizes,
                                        VkOpticalFlowGridSizeFlagsNV supported_hint_grid_sizes, VkBool32 hint_supported,
                                        VkBool32 cost_supported, VkBool32 bidirectional_flow_supported, VkBool32 global_flow_supported,
                                        uint32_t min_width, uint32_t min_height, uint32_t max_width, uint32_t max_height,
                                        uint32_t max_num_regions_of_interest)
    : next_(next), supported_output_grid_sizes_(supported_output_grid_sizes), supported_hint_grid_sizes_(supported_hint_grid_sizes),
      hint_supported_(hint_supported), cost_supported_(cost_supported), bidirectional_flow_supported_(bidirectional_flow_supported),
      global_flow_supported_(global_flow_supported), min_width_(min_width), min_height_(min_height), max_width_(max_width),
      max_height_(max_height), max_num_regions_of_interest_(max_num_regions_of_interest) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkOpticalFlowGridSizeFlagsNV supported_output_grid_sizes_;
  VkOpticalFlowGridSizeFlagsNV supported_hint_grid_sizes_;
  VkBool32 hint_supported_;
  VkBool32 cost_supported_;
  VkBool32 bidirectional_flow_supported_;
  VkBool32 global_flow_supported_;
  uint32_t min_width_;
  uint32_t min_height_;
  uint32_t max_width_;
  uint32_t max_height_;
  uint32_t max_num_regions_of_interest_;
};

struct PhysicalDeviceOpticalFlowFeaturesNV {

  using native_type = VkPhysicalDeviceOpticalFlowFeaturesNV;

  PhysicalDeviceOpticalFlowFeaturesNV(void *next, VkBool32 optical_flow) : next_(next), optical_flow_(optical_flow) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 optical_flow_;
};

struct PhysicalDeviceAddressBindingReportFeaturesEXT {

  using native_type = VkPhysicalDeviceAddressBindingReportFeaturesEXT;

  PhysicalDeviceAddressBindingReportFeaturesEXT(void *next, VkBool32 report_address_binding)
    : next_(next), report_address_binding_(report_address_binding) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 report_address_binding_;
};

struct AmigoProfilingSubmitInfoSEC {

  using native_type = VkAmigoProfilingSubmitInfoSEC;

  AmigoProfilingSubmitInfoSEC(const void *next, uint64_t first_draw_timestamp, uint64_t swap_buffer_timestamp)
    : next_(next), first_draw_timestamp_(first_draw_timestamp), swap_buffer_timestamp_(swap_buffer_timestamp) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t first_draw_timestamp_;
  uint64_t swap_buffer_timestamp_;
};

struct OpticalFlowSessionCreatePrivateDataInfoNV {

  using native_type = VkOpticalFlowSessionCreatePrivateDataInfoNV;

  OpticalFlowSessionCreatePrivateDataInfoNV(void *next, uint32_t id, uint32_t size, const void *private_data)
    : next_(next), id_(id), size_(size), private_data_(private_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t id_;
  uint32_t size_;
  const void *private_data_;
};

struct TilePropertiesQCOM {

  using native_type = VkTilePropertiesQCOM;

  TilePropertiesQCOM(void *next, VkExtent3D tile_size, VkExtent2D apron_size, VkOffset2D origin)
    : next_(next), tile_size_(tile_size), apron_size_(apron_size), origin_(origin) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent3D tile_size_;
  VkExtent2D apron_size_;
  VkOffset2D origin_;
};

struct PhysicalDevicePipelineRobustnessFeaturesEXT {

  using native_type = VkPhysicalDevicePipelineRobustnessFeaturesEXT;

  PhysicalDevicePipelineRobustnessFeaturesEXT(void *next, VkBool32 pipeline_robustness)
    : next_(next), pipeline_robustness_(pipeline_robustness) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_robustness_;
};

struct ExportMetalSharedEventInfoEXT {

  using native_type = VkExportMetalSharedEventInfoEXT;

  ExportMetalSharedEventInfoEXT(const void *next, VkSemaphore semaphore, VkEvent event, MTLSharedEvent_id mtl_shared_event)
    : next_(next), semaphore_(semaphore), event_(event), mtl_shared_event_(mtl_shared_event) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  VkEvent event_;
  MTLSharedEvent_id mtl_shared_event_;
};

struct PhysicalDeviceSwapchainMaintenance1FeaturesEXT {

  using native_type = VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT;

  PhysicalDeviceSwapchainMaintenance1FeaturesEXT(void *next, VkBool32 swapchain_maintenance1)
    : next_(next), swapchain_maintenance1_(swapchain_maintenance1) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 swapchain_maintenance1_;
};

struct ImportMetalIOSurfaceInfoEXT {

  using native_type = VkImportMetalIOSurfaceInfoEXT;

  ImportMetalIOSurfaceInfoEXT(const void *next, IOSurfaceRef io_surface) : next_(next), io_surface_(io_surface) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  IOSurfaceRef io_surface_;
};

struct ExportMetalIOSurfaceInfoEXT {

  using native_type = VkExportMetalIOSurfaceInfoEXT;

  ExportMetalIOSurfaceInfoEXT(const void *next, VkImage image, IOSurfaceRef io_surface)
    : next_(next), image_(image), io_surface_(io_surface) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
  IOSurfaceRef io_surface_;
};

struct ImportMetalTextureInfoEXT {

  using native_type = VkImportMetalTextureInfoEXT;

  ImportMetalTextureInfoEXT(const void *next, ImageAspectMaskBit plane, MTLTexture_id mtl_texture)
    : next_(next), plane_(plane), mtl_texture_(mtl_texture) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ImageAspectMaskBit plane_;
  MTLTexture_id mtl_texture_;
};

struct ExportMetalTextureInfoEXT {

  using native_type = VkExportMetalTextureInfoEXT;

  ExportMetalTextureInfoEXT(const void *next, VkImage image, VkImageView image_view, VkBufferView buffer_view, ImageAspectMaskBit plane,
                            MTLTexture_id mtl_texture)
    : next_(next), image_(image), image_view_(image_view), buffer_view_(buffer_view), plane_(plane), mtl_texture_(mtl_texture) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
  VkImageView image_view_;
  VkBufferView buffer_view_;
  ImageAspectMaskBit plane_;
  MTLTexture_id mtl_texture_;
};

struct ExportMetalBufferInfoEXT {

  using native_type = VkExportMetalBufferInfoEXT;

  ExportMetalBufferInfoEXT(const void *next, VkDeviceMemory memory, MTLBuffer_id mtl_buffer)
    : next_(next), memory_(memory), mtl_buffer_(mtl_buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  MTLBuffer_id mtl_buffer_;
};

struct ExportMetalObjectsInfoEXT {

  using native_type = VkExportMetalObjectsInfoEXT;

  ExportMetalObjectsInfoEXT(const void *next) : next_(next) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
};

struct PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD {

  using native_type = VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;

  PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(void *next, VkBool32 shader_early_and_late_fragment_tests)
    : next_(next), shader_early_and_late_fragment_tests_(shader_early_and_late_fragment_tests) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_early_and_late_fragment_tests_;
};

struct PipelinePropertiesIdentifierEXT {

  using native_type = VkPipelinePropertiesIdentifierEXT;

  PipelinePropertiesIdentifierEXT(void *next, uint8_t pipeline_identifier[VK_UUID_SIZE])
    : next_(next), pipeline_identifier_(pipeline_identifier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint8_t pipeline_identifier[VK_UUID_SIZE] _;
};

struct AccelerationStructureTrianglesDisplacementMicromapNV {

  using native_type = VkAccelerationStructureTrianglesDisplacementMicromapNV;

  AccelerationStructureTrianglesDisplacementMicromapNV(
    void *next, Format displacement_bias_and_scale_format, Format displacement_vector_format,
    VkDeviceOrHostAddressConstKHR displacement_bias_and_scale_buffer, VkDeviceSize displacement_bias_and_scale_stride,
    VkDeviceOrHostAddressConstKHR displacement_vector_buffer, VkDeviceSize displacement_vector_stride,
    VkDeviceOrHostAddressConstKHR displaced_micromap_primitive_flags, VkDeviceSize displaced_micromap_primitive_flags_stride,
    IndexType index_type, VkDeviceOrHostAddressConstKHR index_buffer, VkDeviceSize index_stride, uint32_t base_triangle,
    uint32_t usage_counts_count, const VkMicromapUsageEXT *usage_counts, const VkMicromapUsageEXT *const *usage_counts,
    VkMicromapEXT micromap)
    : next_(next), displacement_bias_and_scale_format_(displacement_bias_and_scale_format),
      displacement_vector_format_(displacement_vector_format), displacement_bias_and_scale_buffer_(displacement_bias_and_scale_buffer),
      displacement_bias_and_scale_stride_(displacement_bias_and_scale_stride), displacement_vector_buffer_(displacement_vector_buffer),
      displacement_vector_stride_(displacement_vector_stride), displaced_micromap_primitive_flags_(displaced_micromap_primitive_flags),
      displaced_micromap_primitive_flags_stride_(displaced_micromap_primitive_flags_stride), index_type_(index_type),
      index_buffer_(index_buffer), index_stride_(index_stride), base_triangle_(base_triangle), usage_counts_count_(usage_counts_count),
      usage_counts_(usage_counts), usage_counts_(usage_counts), micromap_(micromap) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  Format displacement_bias_and_scale_format_;
  Format displacement_vector_format_;
  VkDeviceOrHostAddressConstKHR displacement_bias_and_scale_buffer_;
  VkDeviceSize displacement_bias_and_scale_stride_;
  VkDeviceOrHostAddressConstKHR displacement_vector_buffer_;
  VkDeviceSize displacement_vector_stride_;
  VkDeviceOrHostAddressConstKHR displaced_micromap_primitive_flags_;
  VkDeviceSize displaced_micromap_primitive_flags_stride_;
  IndexType index_type_;
  VkDeviceOrHostAddressConstKHR index_buffer_;
  VkDeviceSize index_stride_;
  uint32_t base_triangle_;
  uint32_t usage_counts_count_;
  const VkMicromapUsageEXT *usage_counts_;
  const VkMicromapUsageEXT *const *usage_counts_;
  VkMicromapEXT micromap_;
};

struct PhysicalDeviceDisplacementMicromapPropertiesNV {

  using native_type = VkPhysicalDeviceDisplacementMicromapPropertiesNV;

  PhysicalDeviceDisplacementMicromapPropertiesNV(void *next, uint32_t max_displacement_micromap_subdivision_level)
    : next_(next), max_displacement_micromap_subdivision_level_(max_displacement_micromap_subdivision_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_displacement_micromap_subdivision_level_;
};

struct PhysicalDeviceDisplacementMicromapFeaturesNV {

  using native_type = VkPhysicalDeviceDisplacementMicromapFeaturesNV;

  PhysicalDeviceDisplacementMicromapFeaturesNV(void *next, VkBool32 displacement_micromap)
    : next_(next), displacement_micromap_(displacement_micromap) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 displacement_micromap_;
};

struct PhysicalDevicePerStageDescriptorSetFeaturesNV {

  using native_type = VkPhysicalDevicePerStageDescriptorSetFeaturesNV;

  PhysicalDevicePerStageDescriptorSetFeaturesNV(void *next, VkBool32 per_stage_descriptor_set, VkBool32 dynamic_pipeline_layout)
    : next_(next), per_stage_descriptor_set_(per_stage_descriptor_set), dynamic_pipeline_layout_(dynamic_pipeline_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 per_stage_descriptor_set_;
  VkBool32 dynamic_pipeline_layout_;
};

struct PhysicalDeviceOpacityMicromapPropertiesEXT {

  using native_type = VkPhysicalDeviceOpacityMicromapPropertiesEXT;

  PhysicalDeviceOpacityMicromapPropertiesEXT(void *next, uint32_t max_opacity2state_subdivision_level,
                                             uint32_t max_opacity4state_subdivision_level)
    : next_(next), max_opacity2state_subdivision_level_(max_opacity2state_subdivision_level),
      max_opacity4state_subdivision_level_(max_opacity4state_subdivision_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_opacity2state_subdivision_level_;
  uint32_t max_opacity4state_subdivision_level_;
};

struct PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT {

  using native_type = VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;

  PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(void *next, VkBool32 dynamic_rendering_unused_attachments)
    : next_(next), dynamic_rendering_unused_attachments_(dynamic_rendering_unused_attachments) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 dynamic_rendering_unused_attachments_;
};

struct PhysicalDeviceOpacityMicromapFeaturesEXT {

  using native_type = VkPhysicalDeviceOpacityMicromapFeaturesEXT;

  PhysicalDeviceOpacityMicromapFeaturesEXT(void *next, VkBool32 micromap, VkBool32 micromap_capture_replay, VkBool32 micromap_host_commands)
    : next_(next), micromap_(micromap), micromap_capture_replay_(micromap_capture_replay), micromap_host_commands_(micromap_host_commands) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 micromap_;
  VkBool32 micromap_capture_replay_;
  VkBool32 micromap_host_commands_;
};

struct MicromapTriangleEXT {

  using native_type = VkMicromapTriangleEXT;

  MicromapTriangleEXT(uint32_t data_offset, uint16_t subdivision_level, uint16_t format)
    : data_offset_(data_offset), subdivision_level_(subdivision_level), format_(format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t data_offset_;
  uint16_t subdivision_level_;
  uint16_t format_;
};

struct MicromapUsageEXT {

  using native_type = VkMicromapUsageEXT;

  MicromapUsageEXT(uint32_t count, uint32_t subdivision_level, uint32_t format)
    : count_(count), subdivision_level_(subdivision_level), format_(format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t count_;
  uint32_t subdivision_level_;
  uint32_t format_;
};

struct CopyMicromapInfoEXT {

  using native_type = VkCopyMicromapInfoEXT;

  CopyMicromapInfoEXT(const void *next, VkMicromapEXT src, VkMicromapEXT dst, CopyMicromapMode mode)
    : next_(next), src_(src), dst_(dst), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMicromapEXT src_;
  VkMicromapEXT dst_;
  CopyMicromapMode mode_;
};

struct MicromapBuildInfoEXT {

  using native_type = VkMicromapBuildInfoEXT;

  MicromapBuildInfoEXT(const void *next, MicromapType type, VkBuildMicromapFlagsEXT flags, BuildMicromapMode mode,
                       VkMicromapEXT dst_micromap, uint32_t usage_counts_count, const VkMicromapUsageEXT *usage_counts,
                       const VkMicromapUsageEXT *const *usage_counts, VkDeviceOrHostAddressConstKHR data,
                       VkDeviceOrHostAddressKHR scratch_data, VkDeviceOrHostAddressConstKHR triangle_array,
                       VkDeviceSize triangle_array_stride)
    : next_(next), type_(type), flags_(flags), mode_(mode), dst_micromap_(dst_micromap), usage_counts_count_(usage_counts_count),
      usage_counts_(usage_counts), usage_counts_(usage_counts), data_(data), scratch_data_(scratch_data), triangle_array_(triangle_array),
      triangle_array_stride_(triangle_array_stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  MicromapType type_;
  VkBuildMicromapFlagsEXT flags_;
  BuildMicromapMode mode_;
  VkMicromapEXT dst_micromap_;
  uint32_t usage_counts_count_;
  const VkMicromapUsageEXT *usage_counts_;
  const VkMicromapUsageEXT *const *usage_counts_;
  VkDeviceOrHostAddressConstKHR data_;
  VkDeviceOrHostAddressKHR scratch_data_;
  VkDeviceOrHostAddressConstKHR triangle_array_;
  VkDeviceSize triangle_array_stride_;
};

struct RenderPassSubpassFeedbackInfoEXT {

  using native_type = VkRenderPassSubpassFeedbackInfoEXT;

  RenderPassSubpassFeedbackInfoEXT(SubpassMergeStatus subpass_merge_status, char description[VK_MAX_DESCRIPTION_SIZE],
                                   uint32_t post_merge_index)
    : subpass_merge_status_(subpass_merge_status), description_(description), post_merge_index_(post_merge_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  SubpassMergeStatus subpass_merge_status_;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
  uint32_t post_merge_index_;
};

struct RenderPassCreationFeedbackCreateInfoEXT {

  using native_type = VkRenderPassCreationFeedbackCreateInfoEXT;

  RenderPassCreationFeedbackCreateInfoEXT(const void *next, VkRenderPassCreationFeedbackInfoEXT *render_pass_feedback)
    : next_(next), render_pass_feedback_(render_pass_feedback) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderPassCreationFeedbackInfoEXT *render_pass_feedback_;
};

struct ImageSubresource2KHR {

  using native_type = VkImageSubresource2KHR;

  ImageSubresource2KHR(void *next, VkImageSubresource image_subresource) : next_(next), image_subresource_(image_subresource) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkImageSubresource image_subresource_;
};

struct PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT {

  using native_type = VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;

  PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(void *next, VkBool32 image_compression_control_swapchain)
    : next_(next), image_compression_control_swapchain_(image_compression_control_swapchain) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 image_compression_control_swapchain_;
};

struct PhysicalDeviceShaderModuleIdentifierFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;

  PhysicalDeviceShaderModuleIdentifierFeaturesEXT(void *next, VkBool32 shader_module_identifier)
    : next_(next), shader_module_identifier_(shader_module_identifier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_module_identifier_;
};

struct PhysicalDeviceNestedCommandBufferPropertiesEXT {

  using native_type = VkPhysicalDeviceNestedCommandBufferPropertiesEXT;

  PhysicalDeviceNestedCommandBufferPropertiesEXT(void *next, uint32_t max_command_buffer_nesting_level)
    : next_(next), max_command_buffer_nesting_level_(max_command_buffer_nesting_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_command_buffer_nesting_level_;
};

struct DescriptorSetLayoutHostMappingInfoVALVE {

  using native_type = VkDescriptorSetLayoutHostMappingInfoVALVE;

  DescriptorSetLayoutHostMappingInfoVALVE(void *next, size_t descriptor_offset, uint32_t descriptor_size)
    : next_(next), descriptor_offset_(descriptor_offset), descriptor_size_(descriptor_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  size_t descriptor_offset_;
  uint32_t descriptor_size_;
};

struct DescriptorSetBindingReferenceVALVE {

  using native_type = VkDescriptorSetBindingReferenceVALVE;

  DescriptorSetBindingReferenceVALVE(const void *next, VkDescriptorSetLayout descriptor_set_layout, uint32_t binding)
    : next_(next), descriptor_set_layout_(descriptor_set_layout), binding_(binding) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorSetLayout descriptor_set_layout_;
  uint32_t binding_;
};

struct PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE {

  using native_type = VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;

  PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(void *next, VkBool32 descriptor_set_host_mapping)
    : next_(next), descriptor_set_host_mapping_(descriptor_set_host_mapping) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 descriptor_set_host_mapping_;
};

struct PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV {

  using native_type = VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;

  PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(void *next, VkBool32 shader_float16vector_atomics)
    : next_(next), shader_float16vector_atomics_(shader_float16vector_atomics) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_float16vector_atomics_;
};

struct PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT {

  using native_type = VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;

  PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(void *next, VkBool32 graphics_pipeline_library)
    : next_(next), graphics_pipeline_library_(graphics_pipeline_library) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 graphics_pipeline_library_;
};

struct PhysicalDeviceImageViewMinLodFeaturesEXT {

  using native_type = VkPhysicalDeviceImageViewMinLodFeaturesEXT;

  PhysicalDeviceImageViewMinLodFeaturesEXT(void *next, VkBool32 min_lod) : next_(next), min_lod_(min_lod) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 min_lod_;
};

struct MultiviewPerViewAttributesInfoNVX {

  using native_type = VkMultiviewPerViewAttributesInfoNVX;

  MultiviewPerViewAttributesInfoNVX(const void *next, VkBool32 per_view_attributes, VkBool32 per_view_attributes_position_xonly)
    : next_(next), per_view_attributes_(per_view_attributes), per_view_attributes_position_xonly_(per_view_attributes_position_xonly) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 per_view_attributes_;
  VkBool32 per_view_attributes_position_xonly_;
};

struct AttachmentSampleCountInfoAMD {

  using native_type = VkAttachmentSampleCountInfoAMD;

  AttachmentSampleCountInfoAMD(const void *next, uint32_t color_attachment_count, const SampleCountMaskBit *color_attachment_samples,
                               SampleCountMaskBit depth_stencil_attachment_samples)
    : next_(next), color_attachment_count_(color_attachment_count), color_attachment_samples_(color_attachment_samples),
      depth_stencil_attachment_samples_(depth_stencil_attachment_samples) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t color_attachment_count_;
  const SampleCountMaskBit *color_attachment_samples_;
  SampleCountMaskBit depth_stencil_attachment_samples_;
};

struct PhysicalDeviceDynamicRenderingFeatures {

  using native_type = VkPhysicalDeviceDynamicRenderingFeatures;

  PhysicalDeviceDynamicRenderingFeatures(void *next, VkBool32 dynamic_rendering) : next_(next), dynamic_rendering_(dynamic_rendering) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 dynamic_rendering_;
};

struct RenderingFragmentDensityMapAttachmentInfoEXT {

  using native_type = VkRenderingFragmentDensityMapAttachmentInfoEXT;

  RenderingFragmentDensityMapAttachmentInfoEXT(const void *next, VkImageView image_view, ImageLayout image_layout)
    : next_(next), image_view_(image_view), image_layout_(image_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageView image_view_;
  ImageLayout image_layout_;
};

struct RenderingFragmentShadingRateAttachmentInfoKHR {

  using native_type = VkRenderingFragmentShadingRateAttachmentInfoKHR;

  RenderingFragmentShadingRateAttachmentInfoKHR(const void *next, VkImageView image_view, ImageLayout image_layout,
                                                VkExtent2D shading_rate_attachment_texel_size)
    : next_(next), image_view_(image_view), image_layout_(image_layout),
      shading_rate_attachment_texel_size_(shading_rate_attachment_texel_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageView image_view_;
  ImageLayout image_layout_;
  VkExtent2D shading_rate_attachment_texel_size_;
};

struct RenderingAttachmentInfo {

  using native_type = VkRenderingAttachmentInfo;

  RenderingAttachmentInfo(const void *next, VkImageView image_view, ImageLayout image_layout, ResolveModeMaskBit resolve_mode,
                          VkImageView resolve_image_view, ImageLayout resolve_image_layout, AttachmentLoadOp load_op,
                          AttachmentStoreOp store_op, VkClearValue clear_value)
    : next_(next), image_view_(image_view), image_layout_(image_layout), resolve_mode_(resolve_mode),
      resolve_image_view_(resolve_image_view), resolve_image_layout_(resolve_image_layout), load_op_(load_op), store_op_(store_op),
      clear_value_(clear_value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageView image_view_;
  ImageLayout image_layout_;
  ResolveModeMaskBit resolve_mode_;
  VkImageView resolve_image_view_;
  ImageLayout resolve_image_layout_;
  AttachmentLoadOp load_op_;
  AttachmentStoreOp store_op_;
  VkClearValue clear_value_;
};

struct AndroidHardwareBufferFormatProperties2ANDROID {

  using native_type = VkAndroidHardwareBufferFormatProperties2ANDROID;

  AndroidHardwareBufferFormatProperties2ANDROID(void *next, Format format, uint64_t external_format, VkFormatFeatureFlags2 format_features,
                                                VkComponentMapping sampler_ycbcr_conversion_components,
                                                SamplerYcbcrModelConversion suggested_ycbcr_model, SamplerYcbcrRange suggested_ycbcr_range,
                                                ChromaLocation suggested_xchroma_offset, ChromaLocation suggested_ychroma_offset)
    : next_(next), format_(format), external_format_(external_format), format_features_(format_features),
      sampler_ycbcr_conversion_components_(sampler_ycbcr_conversion_components), suggested_ycbcr_model_(suggested_ycbcr_model),
      suggested_ycbcr_range_(suggested_ycbcr_range), suggested_xchroma_offset_(suggested_xchroma_offset),
      suggested_ychroma_offset_(suggested_ychroma_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  Format format_;
  uint64_t external_format_;
  VkFormatFeatureFlags2 format_features_;
  VkComponentMapping sampler_ycbcr_conversion_components_;
  SamplerYcbcrModelConversion suggested_ycbcr_model_;
  SamplerYcbcrRange suggested_ycbcr_range_;
  ChromaLocation suggested_xchroma_offset_;
  ChromaLocation suggested_ychroma_offset_;
};

struct PhysicalDeviceShaderObjectFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderObjectFeaturesEXT;

  PhysicalDeviceShaderObjectFeaturesEXT(void *next, VkBool32 shader_object) : next_(next), shader_object_(shader_object) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_object_;
};

struct BufferCollectionConstraintsInfoFUCHSIA {

  using native_type = VkBufferCollectionConstraintsInfoFUCHSIA;

  BufferCollectionConstraintsInfoFUCHSIA(const void *next, uint32_t min_buffer_count, uint32_t max_buffer_count,
                                         uint32_t min_buffer_count_for_camping, uint32_t min_buffer_count_for_dedicated_slack,
                                         uint32_t min_buffer_count_for_shared_slack)
    : next_(next), min_buffer_count_(min_buffer_count), max_buffer_count_(max_buffer_count),
      min_buffer_count_for_camping_(min_buffer_count_for_camping),
      min_buffer_count_for_dedicated_slack_(min_buffer_count_for_dedicated_slack),
      min_buffer_count_for_shared_slack_(min_buffer_count_for_shared_slack) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t min_buffer_count_;
  uint32_t max_buffer_count_;
  uint32_t min_buffer_count_for_camping_;
  uint32_t min_buffer_count_for_dedicated_slack_;
  uint32_t min_buffer_count_for_shared_slack_;
};

struct BufferCollectionPropertiesFUCHSIA {

  using native_type = VkBufferCollectionPropertiesFUCHSIA;

  BufferCollectionPropertiesFUCHSIA(void *next, uint32_t memory_type_bits, uint32_t buffer_count, uint32_t create_info_index,
                                    uint64_t sysmem_pixel_format, VkFormatFeatureFlags format_features,
                                    VkSysmemColorSpaceFUCHSIA sysmem_color_space_index,
                                    VkComponentMapping sampler_ycbcr_conversion_components,
                                    SamplerYcbcrModelConversion suggested_ycbcr_model, SamplerYcbcrRange suggested_ycbcr_range,
                                    ChromaLocation suggested_xchroma_offset, ChromaLocation suggested_ychroma_offset)
    : next_(next), memory_type_bits_(memory_type_bits), buffer_count_(buffer_count), create_info_index_(create_info_index),
      sysmem_pixel_format_(sysmem_pixel_format), format_features_(format_features), sysmem_color_space_index_(sysmem_color_space_index),
      sampler_ycbcr_conversion_components_(sampler_ycbcr_conversion_components), suggested_ycbcr_model_(suggested_ycbcr_model),
      suggested_ycbcr_range_(suggested_ycbcr_range), suggested_xchroma_offset_(suggested_xchroma_offset),
      suggested_ychroma_offset_(suggested_ychroma_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t memory_type_bits_;
  uint32_t buffer_count_;
  uint32_t create_info_index_;
  uint64_t sysmem_pixel_format_;
  VkFormatFeatureFlags format_features_;
  VkSysmemColorSpaceFUCHSIA sysmem_color_space_index_;
  VkComponentMapping sampler_ycbcr_conversion_components_;
  SamplerYcbcrModelConversion suggested_ycbcr_model_;
  SamplerYcbcrRange suggested_ycbcr_range_;
  ChromaLocation suggested_xchroma_offset_;
  ChromaLocation suggested_ychroma_offset_;
};

struct BufferCollectionBufferCreateInfoFUCHSIA {

  using native_type = VkBufferCollectionBufferCreateInfoFUCHSIA;

  BufferCollectionBufferCreateInfoFUCHSIA(const void *next, VkBufferCollectionFUCHSIA collection, uint32_t index)
    : next_(next), collection_(collection), index_(index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferCollectionFUCHSIA collection_;
  uint32_t index_;
};

struct BufferCollectionImageCreateInfoFUCHSIA {

  using native_type = VkBufferCollectionImageCreateInfoFUCHSIA;

  BufferCollectionImageCreateInfoFUCHSIA(const void *next, VkBufferCollectionFUCHSIA collection, uint32_t index)
    : next_(next), collection_(collection), index_(index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferCollectionFUCHSIA collection_;
  uint32_t index_;
};

struct MemoryGetRemoteAddressInfoNV {

  using native_type = VkMemoryGetRemoteAddressInfoNV;

  MemoryGetRemoteAddressInfoNV(const void *next, VkDeviceMemory memory, ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), memory_(memory), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct AccelerationStructureMatrixMotionInstanceNV {

  using native_type = VkAccelerationStructureMatrixMotionInstanceNV;

  AccelerationStructureMatrixMotionInstanceNV(VkTransformMatrixKHR transform_t0, VkTransformMatrixKHR transform_t1,
                                              uint32_t instance_custom_index : 24, uint32_t mask : 8,
                                              uint32_t instance_shader_binding_table_record_offset : 24,
                                              VkGeometryInstanceFlagsKHR flags : 8, uint64_t acceleration_structure_reference)
    : transform_t0_(transform_t0), transform_t1_(transform_t1), instance_custom_index_(instance_custom_index), mask_(mask),
      instance_shader_binding_table_record_offset_(instance_shader_binding_table_record_offset), flags_(flags),
      acceleration_structure_reference_(acceleration_structure_reference) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkTransformMatrixKHR transform_t0_;
  VkTransformMatrixKHR transform_t1_;
  uint32_t instance_custom_index : 24_;
  uint32_t mask : 8_;
  uint32_t instance_shader_binding_table_record_offset : 24_;
  VkGeometryInstanceFlagsKHR flags : 8_;
  uint64_t acceleration_structure_reference_;
};

struct PhysicalDeviceCubicWeightsFeaturesQCOM {

  using native_type = VkPhysicalDeviceCubicWeightsFeaturesQCOM;

  PhysicalDeviceCubicWeightsFeaturesQCOM(void *next, VkBool32 selectable_cubic_weights)
    : next_(next), selectable_cubic_weights_(selectable_cubic_weights) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 selectable_cubic_weights_;
};

struct AccelerationStructureGeometryMotionTrianglesDataNV {

  using native_type = VkAccelerationStructureGeometryMotionTrianglesDataNV;

  AccelerationStructureGeometryMotionTrianglesDataNV(const void *next, VkDeviceOrHostAddressConstKHR vertex_data)
    : next_(next), vertex_data_(vertex_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceOrHostAddressConstKHR vertex_data_;
};

struct PhysicalDeviceRayTracingValidationFeaturesNV {

  using native_type = VkPhysicalDeviceRayTracingValidationFeaturesNV;

  PhysicalDeviceRayTracingValidationFeaturesNV(void *next, VkBool32 ray_tracing_validation)
    : next_(next), ray_tracing_validation_(ray_tracing_validation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_tracing_validation_;
};

struct PhysicalDeviceFragmentShaderBarycentricPropertiesKHR {

  using native_type = VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR;

  PhysicalDeviceFragmentShaderBarycentricPropertiesKHR(void *next, VkBool32 tri_strip_vertex_order_independent_of_provoking_vertex)
    : next_(next), tri_strip_vertex_order_independent_of_provoking_vertex_(tri_strip_vertex_order_independent_of_provoking_vertex) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 tri_strip_vertex_order_independent_of_provoking_vertex_;
};

struct PhysicalDeviceShaderIntegerDotProductFeatures {

  using native_type = VkPhysicalDeviceShaderIntegerDotProductFeatures;

  PhysicalDeviceShaderIntegerDotProductFeatures(void *next, VkBool32 shader_integer_dot_product)
    : next_(next), shader_integer_dot_product_(shader_integer_dot_product) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_integer_dot_product_;
};

struct ImageViewCaptureDescriptorDataInfoEXT {

  using native_type = VkImageViewCaptureDescriptorDataInfoEXT;

  ImageViewCaptureDescriptorDataInfoEXT(const void *next, VkImageView image_view) : next_(next), image_view_(image_view) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageView image_view_;
};

struct DescriptorBufferBindingPushDescriptorBufferHandleEXT {

  using native_type = VkDescriptorBufferBindingPushDescriptorBufferHandleEXT;

  DescriptorBufferBindingPushDescriptorBufferHandleEXT(void *next, VkBuffer buffer) : next_(next), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBuffer buffer_;
};

struct DescriptorBufferBindingInfoEXT {

  using native_type = VkDescriptorBufferBindingInfoEXT;

  DescriptorBufferBindingInfoEXT(void *next, VkDeviceAddress address, VkBufferUsageFlags usage)
    : next_(next), address_(address), usage_(usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceAddress address_;
  VkBufferUsageFlags usage_;
};

struct PhysicalDeviceDescriptorBufferFeaturesEXT {

  using native_type = VkPhysicalDeviceDescriptorBufferFeaturesEXT;

  PhysicalDeviceDescriptorBufferFeaturesEXT(void *next, VkBool32 descriptor_buffer, VkBool32 descriptor_buffer_capture_replay,
                                            VkBool32 descriptor_buffer_image_layout_ignored, VkBool32 descriptor_buffer_push_descriptors)
    : next_(next), descriptor_buffer_(descriptor_buffer), descriptor_buffer_capture_replay_(descriptor_buffer_capture_replay),
      descriptor_buffer_image_layout_ignored_(descriptor_buffer_image_layout_ignored),
      descriptor_buffer_push_descriptors_(descriptor_buffer_push_descriptors) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 descriptor_buffer_;
  VkBool32 descriptor_buffer_capture_replay_;
  VkBool32 descriptor_buffer_image_layout_ignored_;
  VkBool32 descriptor_buffer_push_descriptors_;
};

struct PhysicalDeviceProvokingVertexPropertiesEXT {

  using native_type = VkPhysicalDeviceProvokingVertexPropertiesEXT;

  PhysicalDeviceProvokingVertexPropertiesEXT(void *next, VkBool32 provoking_vertex_mode_per_pipeline,
                                             VkBool32 transform_feedback_preserves_triangle_fan_provoking_vertex)
    : next_(next), provoking_vertex_mode_per_pipeline_(provoking_vertex_mode_per_pipeline),
      transform_feedback_preserves_triangle_fan_provoking_vertex_(transform_feedback_preserves_triangle_fan_provoking_vertex) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 provoking_vertex_mode_per_pipeline_;
  VkBool32 transform_feedback_preserves_triangle_fan_provoking_vertex_;
};

struct VideoEncodeH265DpbSlotInfoKHR {

  using native_type = VkVideoEncodeH265DpbSlotInfoKHR;

  VideoEncodeH265DpbSlotInfoKHR(const void *next, const StdVideoEncodeH265ReferenceInfo *std_reference_info)
    : next_(next), std_reference_info_(std_reference_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoEncodeH265ReferenceInfo *std_reference_info_;
};

struct VideoEncodeH265RateControlInfoKHR {

  using native_type = VkVideoEncodeH265RateControlInfoKHR;

  VideoEncodeH265RateControlInfoKHR(const void *next, VkVideoEncodeH265RateControlFlagsKHR flags, uint32_t gop_frame_count,
                                    uint32_t idr_period, uint32_t consecutive_bframe_count, uint32_t sub_layer_count)
    : next_(next), flags_(flags), gop_frame_count_(gop_frame_count), idr_period_(idr_period),
      consecutive_bframe_count_(consecutive_bframe_count), sub_layer_count_(sub_layer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEncodeH265RateControlFlagsKHR flags_;
  uint32_t gop_frame_count_;
  uint32_t idr_period_;
  uint32_t consecutive_bframe_count_;
  uint32_t sub_layer_count_;
};

struct VideoEncodeH265SessionParametersFeedbackInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersFeedbackInfoKHR;

  VideoEncodeH265SessionParametersFeedbackInfoKHR(void *next, VkBool32 has_std_vpsoverrides, VkBool32 has_std_spsoverrides,
                                                  VkBool32 has_std_ppsoverrides)
    : next_(next), has_std_vpsoverrides_(has_std_vpsoverrides), has_std_spsoverrides_(has_std_spsoverrides),
      has_std_ppsoverrides_(has_std_ppsoverrides) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 has_std_vpsoverrides_;
  VkBool32 has_std_spsoverrides_;
  VkBool32 has_std_ppsoverrides_;
};

struct PhysicalDeviceShaderReplicatedCompositesFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT;

  PhysicalDeviceShaderReplicatedCompositesFeaturesEXT(void *next, VkBool32 shader_replicated_composites)
    : next_(next), shader_replicated_composites_(shader_replicated_composites) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_replicated_composites_;
};

struct PhysicalDeviceImageProcessingPropertiesQCOM {

  using native_type = VkPhysicalDeviceImageProcessingPropertiesQCOM;

  PhysicalDeviceImageProcessingPropertiesQCOM(void *next, uint32_t max_weight_filter_phases, VkExtent2D max_weight_filter_dimension,
                                              VkExtent2D max_block_match_region, VkExtent2D max_box_filter_block_size)
    : next_(next), max_weight_filter_phases_(max_weight_filter_phases), max_weight_filter_dimension_(max_weight_filter_dimension),
      max_block_match_region_(max_block_match_region), max_box_filter_block_size_(max_box_filter_block_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_weight_filter_phases_;
  VkExtent2D max_weight_filter_dimension_;
  VkExtent2D max_block_match_region_;
  VkExtent2D max_box_filter_block_size_;
};

struct VideoEncodeH265SessionParametersGetInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersGetInfoKHR;

  VideoEncodeH265SessionParametersGetInfoKHR(const void *next, VkBool32 write_std_vps, VkBool32 write_std_sps, VkBool32 write_std_pps,
                                             uint32_t std_vpsid, uint32_t std_spsid, uint32_t std_ppsid)
    : next_(next), write_std_vps_(write_std_vps), write_std_sps_(write_std_sps), write_std_pps_(write_std_pps), std_vpsid_(std_vpsid),
      std_spsid_(std_spsid), std_ppsid_(std_ppsid) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 write_std_vps_;
  VkBool32 write_std_sps_;
  VkBool32 write_std_pps_;
  uint32_t std_vpsid_;
  uint32_t std_spsid_;
  uint32_t std_ppsid_;
};

struct VideoEncodeH265CapabilitiesKHR {

  using native_type = VkVideoEncodeH265CapabilitiesKHR;

  VideoEncodeH265CapabilitiesKHR(void *next, VkVideoEncodeH265CapabilityFlagsKHR flags, StdVideoH265LevelIdc max_level_idc,
                                 uint32_t max_slice_segment_count, VkExtent2D max_tiles, VkVideoEncodeH265CtbSizeFlagsKHR ctb_sizes,
                                 VkVideoEncodeH265TransformBlockSizeFlagsKHR transform_block_sizes, uint32_t max_ppicture_l0reference_count,
                                 uint32_t max_bpicture_l0reference_count, uint32_t max_l1reference_count, uint32_t max_sub_layer_count,
                                 VkBool32 expect_dyadic_temporal_sub_layer_pattern, int32_t min_qp, int32_t max_qp,
                                 VkBool32 prefers_gop_remaining_frames, VkBool32 requires_gop_remaining_frames,
                                 VkVideoEncodeH265StdFlagsKHR std_syntax_flags)
    : next_(next), flags_(flags), max_level_idc_(max_level_idc), max_slice_segment_count_(max_slice_segment_count), max_tiles_(max_tiles),
      ctb_sizes_(ctb_sizes), transform_block_sizes_(transform_block_sizes), max_ppicture_l0reference_count_(max_ppicture_l0reference_count),
      max_bpicture_l0reference_count_(max_bpicture_l0reference_count), max_l1reference_count_(max_l1reference_count),
      max_sub_layer_count_(max_sub_layer_count), expect_dyadic_temporal_sub_layer_pattern_(expect_dyadic_temporal_sub_layer_pattern),
      min_qp_(min_qp), max_qp_(max_qp), prefers_gop_remaining_frames_(prefers_gop_remaining_frames),
      requires_gop_remaining_frames_(requires_gop_remaining_frames), std_syntax_flags_(std_syntax_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoEncodeH265CapabilityFlagsKHR flags_;
  StdVideoH265LevelIdc max_level_idc_;
  uint32_t max_slice_segment_count_;
  VkExtent2D max_tiles_;
  VkVideoEncodeH265CtbSizeFlagsKHR ctb_sizes_;
  VkVideoEncodeH265TransformBlockSizeFlagsKHR transform_block_sizes_;
  uint32_t max_ppicture_l0reference_count_;
  uint32_t max_bpicture_l0reference_count_;
  uint32_t max_l1reference_count_;
  uint32_t max_sub_layer_count_;
  VkBool32 expect_dyadic_temporal_sub_layer_pattern_;
  int32_t min_qp_;
  int32_t max_qp_;
  VkBool32 prefers_gop_remaining_frames_;
  VkBool32 requires_gop_remaining_frames_;
  VkVideoEncodeH265StdFlagsKHR std_syntax_flags_;
};

struct VideoEncodeH264GopRemainingFrameInfoKHR {

  using native_type = VkVideoEncodeH264GopRemainingFrameInfoKHR;

  VideoEncodeH264GopRemainingFrameInfoKHR(const void *next, VkBool32 use_gop_remaining_frames, uint32_t gop_remaining_i,
                                          uint32_t gop_remaining_p, uint32_t gop_remaining_b)
    : next_(next), use_gop_remaining_frames_(use_gop_remaining_frames), gop_remaining_i_(gop_remaining_i),
      gop_remaining_p_(gop_remaining_p), gop_remaining_b_(gop_remaining_b) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 use_gop_remaining_frames_;
  uint32_t gop_remaining_i_;
  uint32_t gop_remaining_p_;
  uint32_t gop_remaining_b_;
};

struct VideoEncodeH264FrameSizeKHR {

  using native_type = VkVideoEncodeH264FrameSizeKHR;

  VideoEncodeH264FrameSizeKHR(uint32_t frame_isize, uint32_t frame_psize, uint32_t frame_bsize)
    : frame_isize_(frame_isize), frame_psize_(frame_psize), frame_bsize_(frame_bsize) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t frame_isize_;
  uint32_t frame_psize_;
  uint32_t frame_bsize_;
};

struct VideoEncodeH264QpKHR {

  using native_type = VkVideoEncodeH264QpKHR;

  VideoEncodeH264QpKHR(int32_t qp_i, int32_t qp_p, int32_t qp_b) : qp_i_(qp_i), qp_p_(qp_p), qp_b_(qp_b) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  int32_t qp_i_;
  int32_t qp_p_;
  int32_t qp_b_;
};

struct VideoEncodeH264RateControlInfoKHR {

  using native_type = VkVideoEncodeH264RateControlInfoKHR;

  VideoEncodeH264RateControlInfoKHR(const void *next, VkVideoEncodeH264RateControlFlagsKHR flags, uint32_t gop_frame_count,
                                    uint32_t idr_period, uint32_t consecutive_bframe_count, uint32_t temporal_layer_count)
    : next_(next), flags_(flags), gop_frame_count_(gop_frame_count), idr_period_(idr_period),
      consecutive_bframe_count_(consecutive_bframe_count), temporal_layer_count_(temporal_layer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEncodeH264RateControlFlagsKHR flags_;
  uint32_t gop_frame_count_;
  uint32_t idr_period_;
  uint32_t consecutive_bframe_count_;
  uint32_t temporal_layer_count_;
};

struct VideoEncodeH264NaluSliceInfoKHR {

  using native_type = VkVideoEncodeH264NaluSliceInfoKHR;

  VideoEncodeH264NaluSliceInfoKHR(const void *next, int32_t constant_qp, const StdVideoEncodeH264SliceHeader *std_slice_header)
    : next_(next), constant_qp_(constant_qp), std_slice_header_(std_slice_header) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  int32_t constant_qp_;
  const StdVideoEncodeH264SliceHeader *std_slice_header_;
};

struct VideoEncodeH264DpbSlotInfoKHR {

  using native_type = VkVideoEncodeH264DpbSlotInfoKHR;

  VideoEncodeH264DpbSlotInfoKHR(const void *next, const StdVideoEncodeH264ReferenceInfo *std_reference_info)
    : next_(next), std_reference_info_(std_reference_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoEncodeH264ReferenceInfo *std_reference_info_;
};

struct VideoEncodeH264SessionParametersFeedbackInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersFeedbackInfoKHR;

  VideoEncodeH264SessionParametersFeedbackInfoKHR(void *next, VkBool32 has_std_spsoverrides, VkBool32 has_std_ppsoverrides)
    : next_(next), has_std_spsoverrides_(has_std_spsoverrides), has_std_ppsoverrides_(has_std_ppsoverrides) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 has_std_spsoverrides_;
  VkBool32 has_std_ppsoverrides_;
};

struct VideoEncodeH264SessionParametersGetInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersGetInfoKHR;

  VideoEncodeH264SessionParametersGetInfoKHR(const void *next, VkBool32 write_std_sps, VkBool32 write_std_pps, uint32_t std_spsid,
                                             uint32_t std_ppsid)
    : next_(next), write_std_sps_(write_std_sps), write_std_pps_(write_std_pps), std_spsid_(std_spsid), std_ppsid_(std_ppsid) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 write_std_sps_;
  VkBool32 write_std_pps_;
  uint32_t std_spsid_;
  uint32_t std_ppsid_;
};

struct VideoEncodeH264SessionParametersCreateInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersCreateInfoKHR;

  VideoEncodeH264SessionParametersCreateInfoKHR(const void *next, uint32_t max_std_spscount, uint32_t max_std_ppscount,
                                                const VkVideoEncodeH264SessionParametersAddInfoKHR *parameters_add_info)
    : next_(next), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount), parameters_add_info_(parameters_add_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VkVideoEncodeH264SessionParametersAddInfoKHR *parameters_add_info_;
};

struct VideoEncodeRateControlInfoKHR {

  using native_type = VkVideoEncodeRateControlInfoKHR;

  VideoEncodeRateControlInfoKHR(const void *next, VkVideoEncodeRateControlFlagsKHR flags,
                                VideoEncodeRateControlModeMaskBit rate_control_mode, uint32_t layer_count,
                                const VkVideoEncodeRateControlLayerInfoKHR *layers, uint32_t virtual_buffer_size_in_ms,
                                uint32_t initial_virtual_buffer_size_in_ms)
    : next_(next), flags_(flags), rate_control_mode_(rate_control_mode), layer_count_(layer_count), layers_(layers),
      virtual_buffer_size_in_ms_(virtual_buffer_size_in_ms), initial_virtual_buffer_size_in_ms_(initial_virtual_buffer_size_in_ms) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEncodeRateControlFlagsKHR flags_;
  VideoEncodeRateControlModeMaskBit rate_control_mode_;
  uint32_t layer_count_;
  const VkVideoEncodeRateControlLayerInfoKHR *layers_;
  uint32_t virtual_buffer_size_in_ms_;
  uint32_t initial_virtual_buffer_size_in_ms_;
};

struct QueryPoolVideoEncodeFeedbackCreateInfoKHR {

  using native_type = VkQueryPoolVideoEncodeFeedbackCreateInfoKHR;

  QueryPoolVideoEncodeFeedbackCreateInfoKHR(const void *next, VkVideoEncodeFeedbackFlagsKHR encode_feedback_flags)
    : next_(next), encode_feedback_flags_(encode_feedback_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEncodeFeedbackFlagsKHR encode_feedback_flags_;
};

struct VideoEndCodingInfoKHR {

  using native_type = VkVideoEndCodingInfoKHR;

  VideoEndCodingInfoKHR(const void *next, VkVideoEndCodingFlagsKHR flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEndCodingFlagsKHR flags_;
};

struct VideoBeginCodingInfoKHR {

  using native_type = VkVideoBeginCodingInfoKHR;

  VideoBeginCodingInfoKHR(const void *next, VkVideoBeginCodingFlagsKHR flags, VkVideoSessionKHR video_session,
                          VkVideoSessionParametersKHR video_session_parameters, uint32_t reference_slot_count,
                          const VkVideoReferenceSlotInfoKHR *reference_slots)
    : next_(next), flags_(flags), video_session_(video_session), video_session_parameters_(video_session_parameters),
      reference_slot_count_(reference_slot_count), reference_slots_(reference_slots) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoBeginCodingFlagsKHR flags_;
  VkVideoSessionKHR video_session_;
  VkVideoSessionParametersKHR video_session_parameters_;
  uint32_t reference_slot_count_;
  const VkVideoReferenceSlotInfoKHR *reference_slots_;
};

struct VideoSessionParametersCreateInfoKHR {

  using native_type = VkVideoSessionParametersCreateInfoKHR;

  VideoSessionParametersCreateInfoKHR(const void *next, VkVideoSessionParametersCreateFlagsKHR flags,
                                      VkVideoSessionParametersKHR video_session_parameters_template, VkVideoSessionKHR video_session)
    : next_(next), flags_(flags), video_session_parameters_template_(video_session_parameters_template), video_session_(video_session) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoSessionParametersCreateFlagsKHR flags_;
  VkVideoSessionParametersKHR video_session_parameters_template_;
  VkVideoSessionKHR video_session_;
};

struct CudaModuleCreateInfoNV {

  using native_type = VkCudaModuleCreateInfoNV;

  CudaModuleCreateInfoNV(const void *next, size_t data_size, const void *data) : next_(next), data_size_(data_size), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  size_t data_size_;
  const void *data_;
};

struct VideoEncodeH265PictureInfoKHR {

  using native_type = VkVideoEncodeH265PictureInfoKHR;

  VideoEncodeH265PictureInfoKHR(const void *next, uint32_t nalu_slice_segment_entry_count,
                                const VkVideoEncodeH265NaluSliceSegmentInfoKHR *nalu_slice_segment_entries,
                                const StdVideoEncodeH265PictureInfo *std_picture_info)
    : next_(next), nalu_slice_segment_entry_count_(nalu_slice_segment_entry_count), nalu_slice_segment_entries_(nalu_slice_segment_entries),
      std_picture_info_(std_picture_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t nalu_slice_segment_entry_count_;
  const VkVideoEncodeH265NaluSliceSegmentInfoKHR *nalu_slice_segment_entries_;
  const StdVideoEncodeH265PictureInfo *std_picture_info_;
};

struct VideoDecodeAV1DpbSlotInfoKHR {

  using native_type = VkVideoDecodeAV1DpbSlotInfoKHR;

  VideoDecodeAV1DpbSlotInfoKHR(const void *next, const StdVideoDecodeAV1ReferenceInfo *std_reference_info)
    : next_(next), std_reference_info_(std_reference_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoDecodeAV1ReferenceInfo *std_reference_info_;
};

struct VideoDecodeAV1ProfileInfoKHR {

  using native_type = VkVideoDecodeAV1ProfileInfoKHR;

  VideoDecodeAV1ProfileInfoKHR(const void *next, StdVideoAV1Profile std_profile, VkBool32 film_grain_support)
    : next_(next), std_profile_(std_profile), film_grain_support_(film_grain_support) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  StdVideoAV1Profile std_profile_;
  VkBool32 film_grain_support_;
};

struct VideoDecodeH265PictureInfoKHR {

  using native_type = VkVideoDecodeH265PictureInfoKHR;

  VideoDecodeH265PictureInfoKHR(const void *next, const StdVideoDecodeH265PictureInfo *std_picture_info, uint32_t slice_segment_count,
                                const uint32_t *slice_segment_offsets)
    : next_(next), std_picture_info_(std_picture_info), slice_segment_count_(slice_segment_count),
      slice_segment_offsets_(slice_segment_offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoDecodeH265PictureInfo *std_picture_info_;
  uint32_t slice_segment_count_;
  const uint32_t *slice_segment_offsets_;
};

struct VideoDecodeH265SessionParametersCreateInfoKHR {

  using native_type = VkVideoDecodeH265SessionParametersCreateInfoKHR;

  VideoDecodeH265SessionParametersCreateInfoKHR(const void *next, uint32_t max_std_vpscount, uint32_t max_std_spscount,
                                                uint32_t max_std_ppscount,
                                                const VkVideoDecodeH265SessionParametersAddInfoKHR *parameters_add_info)
    : next_(next), max_std_vpscount_(max_std_vpscount), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount),
      parameters_add_info_(parameters_add_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_std_vpscount_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VkVideoDecodeH265SessionParametersAddInfoKHR *parameters_add_info_;
};

struct VideoDecodeH265ProfileInfoKHR {

  using native_type = VkVideoDecodeH265ProfileInfoKHR;

  VideoDecodeH265ProfileInfoKHR(const void *next, StdVideoH265ProfileIdc std_profile_idc) : next_(next), std_profile_idc_(std_profile_idc) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  StdVideoH265ProfileIdc std_profile_idc_;
};

struct VideoDecodeH264SessionParametersCreateInfoKHR {

  using native_type = VkVideoDecodeH264SessionParametersCreateInfoKHR;

  VideoDecodeH264SessionParametersCreateInfoKHR(const void *next, uint32_t max_std_spscount, uint32_t max_std_ppscount,
                                                const VkVideoDecodeH264SessionParametersAddInfoKHR *parameters_add_info)
    : next_(next), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount), parameters_add_info_(parameters_add_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VkVideoDecodeH264SessionParametersAddInfoKHR *parameters_add_info_;
};

struct VideoDecodeH264SessionParametersAddInfoKHR {

  using native_type = VkVideoDecodeH264SessionParametersAddInfoKHR;

  VideoDecodeH264SessionParametersAddInfoKHR(const void *next, uint32_t std_spscount, const StdVideoH264SequenceParameterSet *std_spss,
                                             uint32_t std_ppscount, const StdVideoH264PictureParameterSet *std_ppss)
    : next_(next), std_spscount_(std_spscount), std_spss_(std_spss), std_ppscount_(std_ppscount), std_ppss_(std_ppss) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t std_spscount_;
  const StdVideoH264SequenceParameterSet *std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH264PictureParameterSet *std_ppss_;
};

struct VideoDecodeH264ProfileInfoKHR {

  using native_type = VkVideoDecodeH264ProfileInfoKHR;

  VideoDecodeH264ProfileInfoKHR(const void *next, StdVideoH264ProfileIdc std_profile_idc,
                                VideoDecodeH264PictureLayoutMaskBit picture_layout)
    : next_(next), std_profile_idc_(std_profile_idc), picture_layout_(picture_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  StdVideoH264ProfileIdc std_profile_idc_;
  VideoDecodeH264PictureLayoutMaskBit picture_layout_;
};

struct PhysicalDeviceFrameBoundaryFeaturesEXT {

  using native_type = VkPhysicalDeviceFrameBoundaryFeaturesEXT;

  PhysicalDeviceFrameBoundaryFeaturesEXT(void *next, VkBool32 frame_boundary) : next_(next), frame_boundary_(frame_boundary) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 frame_boundary_;
};

struct PhysicalDeviceVideoMaintenance1FeaturesKHR {

  using native_type = VkPhysicalDeviceVideoMaintenance1FeaturesKHR;

  PhysicalDeviceVideoMaintenance1FeaturesKHR(void *next, VkBool32 video_maintenance1)
    : next_(next), video_maintenance1_(video_maintenance1) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 video_maintenance1_;
};

struct VideoDecodeInfoKHR {

  using native_type = VkVideoDecodeInfoKHR;

  VideoDecodeInfoKHR(const void *next, VkVideoDecodeFlagsKHR flags, VkBuffer src_buffer, VkDeviceSize src_buffer_offset,
                     VkDeviceSize src_buffer_range, VkVideoPictureResourceInfoKHR dst_picture_resource,
                     const VkVideoReferenceSlotInfoKHR *setup_reference_slot, uint32_t reference_slot_count,
                     const VkVideoReferenceSlotInfoKHR *reference_slots)
    : next_(next), flags_(flags), src_buffer_(src_buffer), src_buffer_offset_(src_buffer_offset), src_buffer_range_(src_buffer_range),
      dst_picture_resource_(dst_picture_resource), setup_reference_slot_(setup_reference_slot), reference_slot_count_(reference_slot_count),
      reference_slots_(reference_slots) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoDecodeFlagsKHR flags_;
  VkBuffer src_buffer_;
  VkDeviceSize src_buffer_offset_;
  VkDeviceSize src_buffer_range_;
  VkVideoPictureResourceInfoKHR dst_picture_resource_;
  const VkVideoReferenceSlotInfoKHR *setup_reference_slot_;
  uint32_t reference_slot_count_;
  const VkVideoReferenceSlotInfoKHR *reference_slots_;
};

struct VideoDecodeUsageInfoKHR {

  using native_type = VkVideoDecodeUsageInfoKHR;

  VideoDecodeUsageInfoKHR(const void *next, VkVideoDecodeUsageFlagsKHR video_usage_hints)
    : next_(next), video_usage_hints_(video_usage_hints) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoDecodeUsageFlagsKHR video_usage_hints_;
};

struct LatencySurfaceCapabilitiesNV {

  using native_type = VkLatencySurfaceCapabilitiesNV;

  LatencySurfaceCapabilitiesNV(const void *next, uint32_t present_mode_count, PresentMode *present_modes)
    : next_(next), present_mode_count_(present_mode_count), present_modes_(present_modes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t present_mode_count_;
  PresentMode *present_modes_;
};

struct BindMemoryStatusKHR {

  using native_type = VkBindMemoryStatusKHR;

  BindMemoryStatusKHR(const void *next, Result *result) : next_(next), result_(result) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Result *result_;
};

struct VideoReferenceSlotInfoKHR {

  using native_type = VkVideoReferenceSlotInfoKHR;

  VideoReferenceSlotInfoKHR(const void *next, int32_t slot_index, const VkVideoPictureResourceInfoKHR *picture_resource)
    : next_(next), slot_index_(slot_index), picture_resource_(picture_resource) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  int32_t slot_index_;
  const VkVideoPictureResourceInfoKHR *picture_resource_;
};

struct VideoPictureResourceInfoKHR {

  using native_type = VkVideoPictureResourceInfoKHR;

  VideoPictureResourceInfoKHR(const void *next, VkOffset2D coded_offset, VkExtent2D coded_extent, uint32_t base_array_layer,
                              VkImageView image_view_binding)
    : next_(next), coded_offset_(coded_offset), coded_extent_(coded_extent), base_array_layer_(base_array_layer),
      image_view_binding_(image_view_binding) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkOffset2D coded_offset_;
  VkExtent2D coded_extent_;
  uint32_t base_array_layer_;
  VkImageView image_view_binding_;
};

struct VideoSessionMemoryRequirementsKHR {

  using native_type = VkVideoSessionMemoryRequirementsKHR;

  VideoSessionMemoryRequirementsKHR(void *next, uint32_t memory_bind_index, VkMemoryRequirements memory_requirements)
    : next_(next), memory_bind_index_(memory_bind_index), memory_requirements_(memory_requirements) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t memory_bind_index_;
  VkMemoryRequirements memory_requirements_;
};

struct CooperativeMatrixPropertiesKHR {

  using native_type = VkCooperativeMatrixPropertiesKHR;

  CooperativeMatrixPropertiesKHR(void *next, uint32_t msize, uint32_t nsize, uint32_t ksize, ComponentType atype, ComponentType btype,
                                 ComponentType ctype, ComponentType result_type, VkBool32 saturating_accumulation, Scope scope)
    : next_(next), msize_(msize), nsize_(nsize), ksize_(ksize), atype_(atype), btype_(btype), ctype_(ctype), result_type_(result_type),
      saturating_accumulation_(saturating_accumulation), scope_(scope) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t msize_;
  uint32_t nsize_;
  uint32_t ksize_;
  ComponentType atype_;
  ComponentType btype_;
  ComponentType ctype_;
  ComponentType result_type_;
  VkBool32 saturating_accumulation_;
  Scope scope_;
};

struct AccelerationStructureMotionInstanceNV {

  using native_type = VkAccelerationStructureMotionInstanceNV;

  AccelerationStructureMotionInstanceNV(AccelerationStructureMotionInstanceType type, VkAccelerationStructureMotionInstanceFlagsNV flags,
                                        VkAccelerationStructureMotionInstanceDataNV data)
    : type_(type), flags_(flags), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  AccelerationStructureMotionInstanceType type_;
  VkAccelerationStructureMotionInstanceFlagsNV flags_;
  VkAccelerationStructureMotionInstanceDataNV data_;
};

struct VideoProfileInfoKHR {

  using native_type = VkVideoProfileInfoKHR;

  VideoProfileInfoKHR(const void *next, VideoCodecOperationMaskBit video_codec_operation,
                      VkVideoChromaSubsamplingFlagsKHR chroma_subsampling, VkVideoComponentBitDepthFlagsKHR luma_bit_depth,
                      VkVideoComponentBitDepthFlagsKHR chroma_bit_depth)
    : next_(next), video_codec_operation_(video_codec_operation), chroma_subsampling_(chroma_subsampling), luma_bit_depth_(luma_bit_depth),
      chroma_bit_depth_(chroma_bit_depth) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VideoCodecOperationMaskBit video_codec_operation_;
  VkVideoChromaSubsamplingFlagsKHR chroma_subsampling_;
  VkVideoComponentBitDepthFlagsKHR luma_bit_depth_;
  VkVideoComponentBitDepthFlagsKHR chroma_bit_depth_;
};

struct VideoProfileListInfoKHR {

  using native_type = VkVideoProfileListInfoKHR;

  VideoProfileListInfoKHR(const void *next, uint32_t profile_count, const VkVideoProfileInfoKHR *profiles)
    : next_(next), profile_count_(profile_count), profiles_(profiles) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t profile_count_;
  const VkVideoProfileInfoKHR *profiles_;
};

struct QueueFamilyVideoPropertiesKHR {

  using native_type = VkQueueFamilyVideoPropertiesKHR;

  QueueFamilyVideoPropertiesKHR(void *next, VkVideoCodecOperationFlagsKHR video_codec_operations)
    : next_(next), video_codec_operations_(video_codec_operations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoCodecOperationFlagsKHR video_codec_operations_;
};

struct PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT {

  using native_type = VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;

  PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(void *next, VkBool32 primitives_generated_query,
                                                    VkBool32 primitives_generated_query_with_rasterizer_discard,
                                                    VkBool32 primitives_generated_query_with_non_zero_streams)
    : next_(next), primitives_generated_query_(primitives_generated_query),
      primitives_generated_query_with_rasterizer_discard_(primitives_generated_query_with_rasterizer_discard),
      primitives_generated_query_with_non_zero_streams_(primitives_generated_query_with_non_zero_streams) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 primitives_generated_query_;
  VkBool32 primitives_generated_query_with_rasterizer_discard_;
  VkBool32 primitives_generated_query_with_non_zero_streams_;
};

struct SamplerBlockMatchWindowCreateInfoQCOM {

  using native_type = VkSamplerBlockMatchWindowCreateInfoQCOM;

  SamplerBlockMatchWindowCreateInfoQCOM(const void *next, VkExtent2D window_extent, BlockMatchWindowCompareMode window_compare_mode)
    : next_(next), window_extent_(window_extent), window_compare_mode_(window_compare_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExtent2D window_extent_;
  BlockMatchWindowCompareMode window_compare_mode_;
};

struct PhysicalDeviceVulkanSC10Features {

  using native_type = VkPhysicalDeviceVulkanSC10Features;

  PhysicalDeviceVulkanSC10Features(void *next, VkBool32 shader_atomic_instructions)
    : next_(next), shader_atomic_instructions_(shader_atomic_instructions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_atomic_instructions_;
};

struct CommandPoolMemoryConsumption {

  using native_type = VkCommandPoolMemoryConsumption;

  CommandPoolMemoryConsumption(void *next, VkDeviceSize command_pool_allocated, VkDeviceSize command_pool_reserved_size,
                               VkDeviceSize command_buffer_allocated)
    : next_(next), command_pool_allocated_(command_pool_allocated), command_pool_reserved_size_(command_pool_reserved_size),
      command_buffer_allocated_(command_buffer_allocated) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize command_pool_allocated_;
  VkDeviceSize command_pool_reserved_size_;
  VkDeviceSize command_buffer_allocated_;
};

struct CommandPoolMemoryReservationCreateInfo {

  using native_type = VkCommandPoolMemoryReservationCreateInfo;

  CommandPoolMemoryReservationCreateInfo(const void *next, VkDeviceSize command_pool_reserved_size,
                                         uint32_t command_pool_max_command_buffers)
    : next_(next), command_pool_reserved_size_(command_pool_reserved_size),
      command_pool_max_command_buffers_(command_pool_max_command_buffers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize command_pool_reserved_size_;
  uint32_t command_pool_max_command_buffers_;
};

struct DeviceObjectReservationCreateInfo {

  using native_type = VkDeviceObjectReservationCreateInfo;

  DeviceObjectReservationCreateInfo(
    const void *next, uint32_t pipeline_cache_create_info_count, const VkPipelineCacheCreateInfo *pipeline_cache_create_infos,
    uint32_t pipeline_pool_size_count, const VkPipelinePoolSize *pipeline_pool_sizes, uint32_t semaphore_request_count,
    uint32_t command_buffer_request_count, uint32_t fence_request_count, uint32_t device_memory_request_count,
    uint32_t buffer_request_count, uint32_t image_request_count, uint32_t event_request_count, uint32_t query_pool_request_count,
    uint32_t buffer_view_request_count, uint32_t image_view_request_count, uint32_t layered_image_view_request_count,
    uint32_t pipeline_cache_request_count, uint32_t pipeline_layout_request_count, uint32_t render_pass_request_count,
    uint32_t graphics_pipeline_request_count, uint32_t compute_pipeline_request_count, uint32_t descriptor_set_layout_request_count,
    uint32_t sampler_request_count, uint32_t descriptor_pool_request_count, uint32_t descriptor_set_request_count,
    uint32_t framebuffer_request_count, uint32_t command_pool_request_count, uint32_t sampler_ycbcr_conversion_request_count,
    uint32_t surface_request_count, uint32_t swapchain_request_count, uint32_t display_mode_request_count,
    uint32_t subpass_description_request_count, uint32_t attachment_description_request_count,
    uint32_t descriptor_set_layout_binding_request_count, uint32_t descriptor_set_layout_binding_limit, uint32_t max_image_view_mip_levels,
    uint32_t max_image_view_array_layers, uint32_t max_layered_image_view_mip_levels, uint32_t max_occlusion_queries_per_pool,
    uint32_t max_pipeline_statistics_queries_per_pool, uint32_t max_timestamp_queries_per_pool,
    uint32_t max_immutable_samplers_per_descriptor_set_layout)
    : next_(next), pipeline_cache_create_info_count_(pipeline_cache_create_info_count),
      pipeline_cache_create_infos_(pipeline_cache_create_infos), pipeline_pool_size_count_(pipeline_pool_size_count),
      pipeline_pool_sizes_(pipeline_pool_sizes), semaphore_request_count_(semaphore_request_count),
      command_buffer_request_count_(command_buffer_request_count), fence_request_count_(fence_request_count),
      device_memory_request_count_(device_memory_request_count), buffer_request_count_(buffer_request_count),
      image_request_count_(image_request_count), event_request_count_(event_request_count),
      query_pool_request_count_(query_pool_request_count), buffer_view_request_count_(buffer_view_request_count),
      image_view_request_count_(image_view_request_count), layered_image_view_request_count_(layered_image_view_request_count),
      pipeline_cache_request_count_(pipeline_cache_request_count), pipeline_layout_request_count_(pipeline_layout_request_count),
      render_pass_request_count_(render_pass_request_count), graphics_pipeline_request_count_(graphics_pipeline_request_count),
      compute_pipeline_request_count_(compute_pipeline_request_count),
      descriptor_set_layout_request_count_(descriptor_set_layout_request_count), sampler_request_count_(sampler_request_count),
      descriptor_pool_request_count_(descriptor_pool_request_count), descriptor_set_request_count_(descriptor_set_request_count),
      framebuffer_request_count_(framebuffer_request_count), command_pool_request_count_(command_pool_request_count),
      sampler_ycbcr_conversion_request_count_(sampler_ycbcr_conversion_request_count), surface_request_count_(surface_request_count),
      swapchain_request_count_(swapchain_request_count), display_mode_request_count_(display_mode_request_count),
      subpass_description_request_count_(subpass_description_request_count),
      attachment_description_request_count_(attachment_description_request_count),
      descriptor_set_layout_binding_request_count_(descriptor_set_layout_binding_request_count),
      descriptor_set_layout_binding_limit_(descriptor_set_layout_binding_limit), max_image_view_mip_levels_(max_image_view_mip_levels),
      max_image_view_array_layers_(max_image_view_array_layers), max_layered_image_view_mip_levels_(max_layered_image_view_mip_levels),
      max_occlusion_queries_per_pool_(max_occlusion_queries_per_pool),
      max_pipeline_statistics_queries_per_pool_(max_pipeline_statistics_queries_per_pool),
      max_timestamp_queries_per_pool_(max_timestamp_queries_per_pool),
      max_immutable_samplers_per_descriptor_set_layout_(max_immutable_samplers_per_descriptor_set_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t pipeline_cache_create_info_count_;
  const VkPipelineCacheCreateInfo *pipeline_cache_create_infos_;
  uint32_t pipeline_pool_size_count_;
  const VkPipelinePoolSize *pipeline_pool_sizes_;
  uint32_t semaphore_request_count_;
  uint32_t command_buffer_request_count_;
  uint32_t fence_request_count_;
  uint32_t device_memory_request_count_;
  uint32_t buffer_request_count_;
  uint32_t image_request_count_;
  uint32_t event_request_count_;
  uint32_t query_pool_request_count_;
  uint32_t buffer_view_request_count_;
  uint32_t image_view_request_count_;
  uint32_t layered_image_view_request_count_;
  uint32_t pipeline_cache_request_count_;
  uint32_t pipeline_layout_request_count_;
  uint32_t render_pass_request_count_;
  uint32_t graphics_pipeline_request_count_;
  uint32_t compute_pipeline_request_count_;
  uint32_t descriptor_set_layout_request_count_;
  uint32_t sampler_request_count_;
  uint32_t descriptor_pool_request_count_;
  uint32_t descriptor_set_request_count_;
  uint32_t framebuffer_request_count_;
  uint32_t command_pool_request_count_;
  uint32_t sampler_ycbcr_conversion_request_count_;
  uint32_t surface_request_count_;
  uint32_t swapchain_request_count_;
  uint32_t display_mode_request_count_;
  uint32_t subpass_description_request_count_;
  uint32_t attachment_description_request_count_;
  uint32_t descriptor_set_layout_binding_request_count_;
  uint32_t descriptor_set_layout_binding_limit_;
  uint32_t max_image_view_mip_levels_;
  uint32_t max_image_view_array_layers_;
  uint32_t max_layered_image_view_mip_levels_;
  uint32_t max_occlusion_queries_per_pool_;
  uint32_t max_pipeline_statistics_queries_per_pool_;
  uint32_t max_timestamp_queries_per_pool_;
  uint32_t max_immutable_samplers_per_descriptor_set_layout_;
};

struct SubresourceHostMemcpySizeEXT {

  using native_type = VkSubresourceHostMemcpySizeEXT;

  SubresourceHostMemcpySizeEXT(void *next, VkDeviceSize size) : next_(next), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize size_;
};

struct PhysicalDevicePipelineRobustnessPropertiesEXT {

  using native_type = VkPhysicalDevicePipelineRobustnessPropertiesEXT;

  PhysicalDevicePipelineRobustnessPropertiesEXT(void *next, PipelineRobustnessBufferBehavior default_robustness_storage_buffers,
                                                PipelineRobustnessBufferBehavior default_robustness_uniform_buffers,
                                                PipelineRobustnessBufferBehavior default_robustness_vertex_inputs,
                                                PipelineRobustnessImageBehavior default_robustness_images)
    : next_(next), default_robustness_storage_buffers_(default_robustness_storage_buffers),
      default_robustness_uniform_buffers_(default_robustness_uniform_buffers),
      default_robustness_vertex_inputs_(default_robustness_vertex_inputs), default_robustness_images_(default_robustness_images) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  PipelineRobustnessBufferBehavior default_robustness_storage_buffers_;
  PipelineRobustnessBufferBehavior default_robustness_uniform_buffers_;
  PipelineRobustnessBufferBehavior default_robustness_vertex_inputs_;
  PipelineRobustnessImageBehavior default_robustness_images_;
};

struct HostImageLayoutTransitionInfoEXT {

  using native_type = VkHostImageLayoutTransitionInfoEXT;

  HostImageLayoutTransitionInfoEXT(const void *next, VkImage image, ImageLayout old_layout, ImageLayout new_layout,
                                   VkImageSubresourceRange subresource_range)
    : next_(next), image_(image), old_layout_(old_layout), new_layout_(new_layout), subresource_range_(subresource_range) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
  ImageLayout old_layout_;
  ImageLayout new_layout_;
  VkImageSubresourceRange subresource_range_;
};

struct CopyImageToMemoryInfoEXT {

  using native_type = VkCopyImageToMemoryInfoEXT;

  CopyImageToMemoryInfoEXT(const void *next, VkHostImageCopyFlagsEXT flags, VkImage src_image, ImageLayout src_image_layout,
                           uint32_t region_count, const VkImageToMemoryCopyEXT *regions)
    : next_(next), flags_(flags), src_image_(src_image), src_image_layout_(src_image_layout), region_count_(region_count),
      regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkHostImageCopyFlagsEXT flags_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  uint32_t region_count_;
  const VkImageToMemoryCopyEXT *regions_;
};

struct CopyMemoryToImageInfoEXT {

  using native_type = VkCopyMemoryToImageInfoEXT;

  CopyMemoryToImageInfoEXT(const void *next, VkHostImageCopyFlagsEXT flags, VkImage dst_image, ImageLayout dst_image_layout,
                           uint32_t region_count, const VkMemoryToImageCopyEXT *regions)
    : next_(next), flags_(flags), dst_image_(dst_image), dst_image_layout_(dst_image_layout), region_count_(region_count),
      regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkHostImageCopyFlagsEXT flags_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const VkMemoryToImageCopyEXT *regions_;
};

struct PhysicalDeviceCubicClampFeaturesQCOM {

  using native_type = VkPhysicalDeviceCubicClampFeaturesQCOM;

  PhysicalDeviceCubicClampFeaturesQCOM(void *next, VkBool32 cubic_range_clamp) : next_(next), cubic_range_clamp_(cubic_range_clamp) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 cubic_range_clamp_;
};

struct ImageToMemoryCopyEXT {

  using native_type = VkImageToMemoryCopyEXT;

  ImageToMemoryCopyEXT(const void *next, void *host_pointer, uint32_t memory_row_length, uint32_t memory_image_height,
                       VkImageSubresourceLayers image_subresource, VkOffset3D image_offset, VkExtent3D image_extent)
    : next_(next), host_pointer_(host_pointer), memory_row_length_(memory_row_length), memory_image_height_(memory_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  void *host_pointer_;
  uint32_t memory_row_length_;
  uint32_t memory_image_height_;
  VkImageSubresourceLayers image_subresource_;
  VkOffset3D image_offset_;
  VkExtent3D image_extent_;
};

struct LatencyTimingsFrameReportNV {

  using native_type = VkLatencyTimingsFrameReportNV;

  LatencyTimingsFrameReportNV(const void *next, uint64_t present_id, uint64_t input_sample_time_us, uint64_t sim_start_time_us,
                              uint64_t sim_end_time_us, uint64_t render_submit_start_time_us, uint64_t render_submit_end_time_us,
                              uint64_t present_start_time_us, uint64_t present_end_time_us, uint64_t driver_start_time_us,
                              uint64_t driver_end_time_us, uint64_t os_render_queue_start_time_us, uint64_t os_render_queue_end_time_us,
                              uint64_t gpu_render_start_time_us, uint64_t gpu_render_end_time_us)
    : next_(next), present_id_(present_id), input_sample_time_us_(input_sample_time_us), sim_start_time_us_(sim_start_time_us),
      sim_end_time_us_(sim_end_time_us), render_submit_start_time_us_(render_submit_start_time_us),
      render_submit_end_time_us_(render_submit_end_time_us), present_start_time_us_(present_start_time_us),
      present_end_time_us_(present_end_time_us), driver_start_time_us_(driver_start_time_us), driver_end_time_us_(driver_end_time_us),
      os_render_queue_start_time_us_(os_render_queue_start_time_us), os_render_queue_end_time_us_(os_render_queue_end_time_us),
      gpu_render_start_time_us_(gpu_render_start_time_us), gpu_render_end_time_us_(gpu_render_end_time_us) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t present_id_;
  uint64_t input_sample_time_us_;
  uint64_t sim_start_time_us_;
  uint64_t sim_end_time_us_;
  uint64_t render_submit_start_time_us_;
  uint64_t render_submit_end_time_us_;
  uint64_t present_start_time_us_;
  uint64_t present_end_time_us_;
  uint64_t driver_start_time_us_;
  uint64_t driver_end_time_us_;
  uint64_t os_render_queue_start_time_us_;
  uint64_t os_render_queue_end_time_us_;
  uint64_t gpu_render_start_time_us_;
  uint64_t gpu_render_end_time_us_;
};

struct PhysicalDeviceHostImageCopyPropertiesEXT {

  using native_type = VkPhysicalDeviceHostImageCopyPropertiesEXT;

  PhysicalDeviceHostImageCopyPropertiesEXT(void *next, uint32_t copy_src_layout_count, ImageLayout *copy_src_layouts,
                                           uint32_t copy_dst_layout_count, ImageLayout *copy_dst_layouts,
                                           uint8_t optimal_tiling_layout_uuid[VK_UUID_SIZE], VkBool32 identical_memory_type_requirements)
    : next_(next), copy_src_layout_count_(copy_src_layout_count), copy_src_layouts_(copy_src_layouts),
      copy_dst_layout_count_(copy_dst_layout_count), copy_dst_layouts_(copy_dst_layouts),
      optimal_tiling_layout_uuid_(optimal_tiling_layout_uuid), identical_memory_type_requirements_(identical_memory_type_requirements) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t copy_src_layout_count_;
  ImageLayout *copy_src_layouts_;
  uint32_t copy_dst_layout_count_;
  ImageLayout *copy_dst_layouts_;
  uint8_t optimal_tiling_layout_uuid[VK_UUID_SIZE] _;
  VkBool32 identical_memory_type_requirements_;
};

struct PhysicalDeviceHostImageCopyFeaturesEXT {

  using native_type = VkPhysicalDeviceHostImageCopyFeaturesEXT;

  PhysicalDeviceHostImageCopyFeaturesEXT(void *next, VkBool32 host_image_copy) : next_(next), host_image_copy_(host_image_copy) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 host_image_copy_;
};

struct PhysicalDeviceSchedulingControlsPropertiesARM {

  using native_type = VkPhysicalDeviceSchedulingControlsPropertiesARM;

  PhysicalDeviceSchedulingControlsPropertiesARM(void *next, VkPhysicalDeviceSchedulingControlsFlagsARM scheduling_controls_flags)
    : next_(next), scheduling_controls_flags_(scheduling_controls_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPhysicalDeviceSchedulingControlsFlagsARM scheduling_controls_flags_;
};

struct PhysicalDeviceSynchronization2Features {

  using native_type = VkPhysicalDeviceSynchronization2Features;

  PhysicalDeviceSynchronization2Features(void *next, VkBool32 synchronization2) : next_(next), synchronization2_(synchronization2) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 synchronization2_;
};

struct QueueFamilyCheckpointProperties2NV {

  using native_type = VkQueueFamilyCheckpointProperties2NV;

  QueueFamilyCheckpointProperties2NV(void *next, VkPipelineStageFlags2 checkpoint_execution_stage_mask)
    : next_(next), checkpoint_execution_stage_mask_(checkpoint_execution_stage_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPipelineStageFlags2 checkpoint_execution_stage_mask_;
};

struct CommandBufferSubmitInfo {

  using native_type = VkCommandBufferSubmitInfo;

  CommandBufferSubmitInfo(const void *next, VkCommandBuffer command_buffer, uint32_t device_mask)
    : next_(next), command_buffer_(command_buffer), device_mask_(device_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCommandBuffer command_buffer_;
  uint32_t device_mask_;
};

struct PhysicalDeviceExtendedSparseAddressSpacePropertiesNV {

  using native_type = VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV;

  PhysicalDeviceExtendedSparseAddressSpacePropertiesNV(void *next, VkDeviceSize extended_sparse_address_space_size,
                                                       VkImageUsageFlags extended_sparse_image_usage_flags,
                                                       VkBufferUsageFlags extended_sparse_buffer_usage_flags)
    : next_(next), extended_sparse_address_space_size_(extended_sparse_address_space_size),
      extended_sparse_image_usage_flags_(extended_sparse_image_usage_flags),
      extended_sparse_buffer_usage_flags_(extended_sparse_buffer_usage_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize extended_sparse_address_space_size_;
  VkImageUsageFlags extended_sparse_image_usage_flags_;
  VkBufferUsageFlags extended_sparse_buffer_usage_flags_;
};

struct DependencyInfo {

  using native_type = VkDependencyInfo;

  DependencyInfo(const void *next, VkDependencyFlags dependency_flags, uint32_t memory_barrier_count,
                 const VkMemoryBarrier2 *memory_barriers, uint32_t buffer_memory_barrier_count,
                 const VkBufferMemoryBarrier2 *buffer_memory_barriers, uint32_t image_memory_barrier_count,
                 const VkImageMemoryBarrier2 *image_memory_barriers)
    : next_(next), dependency_flags_(dependency_flags), memory_barrier_count_(memory_barrier_count), memory_barriers_(memory_barriers),
      buffer_memory_barrier_count_(buffer_memory_barrier_count), buffer_memory_barriers_(buffer_memory_barriers),
      image_memory_barrier_count_(image_memory_barrier_count), image_memory_barriers_(image_memory_barriers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDependencyFlags dependency_flags_;
  uint32_t memory_barrier_count_;
  const VkMemoryBarrier2 *memory_barriers_;
  uint32_t buffer_memory_barrier_count_;
  const VkBufferMemoryBarrier2 *buffer_memory_barriers_;
  uint32_t image_memory_barrier_count_;
  const VkImageMemoryBarrier2 *image_memory_barriers_;
};

struct ImageMemoryBarrier2 {

  using native_type = VkImageMemoryBarrier2;

  ImageMemoryBarrier2(const void *next, VkPipelineStageFlags2 src_stage_mask, VkAccessFlags2 src_access_mask,
                      VkPipelineStageFlags2 dst_stage_mask, VkAccessFlags2 dst_access_mask, ImageLayout old_layout, ImageLayout new_layout,
                      uint32_t src_queue_family_index, uint32_t dst_queue_family_index, VkImage image,
                      VkImageSubresourceRange subresource_range)
    : next_(next), src_stage_mask_(src_stage_mask), src_access_mask_(src_access_mask), dst_stage_mask_(dst_stage_mask),
      dst_access_mask_(dst_access_mask), old_layout_(old_layout), new_layout_(new_layout), src_queue_family_index_(src_queue_family_index),
      dst_queue_family_index_(dst_queue_family_index), image_(image), subresource_range_(subresource_range) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineStageFlags2 src_stage_mask_;
  VkAccessFlags2 src_access_mask_;
  VkPipelineStageFlags2 dst_stage_mask_;
  VkAccessFlags2 dst_access_mask_;
  ImageLayout old_layout_;
  ImageLayout new_layout_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkImage image_;
  VkImageSubresourceRange subresource_range_;
};

struct PhysicalDeviceColorWriteEnableFeaturesEXT {

  using native_type = VkPhysicalDeviceColorWriteEnableFeaturesEXT;

  PhysicalDeviceColorWriteEnableFeaturesEXT(void *next, VkBool32 color_write_enable)
    : next_(next), color_write_enable_(color_write_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 color_write_enable_;
};

struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT {

  using native_type = VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;

  PhysicalDeviceVertexInputDynamicStateFeaturesEXT(void *next, VkBool32 vertex_input_dynamic_state)
    : next_(next), vertex_input_dynamic_state_(vertex_input_dynamic_state) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 vertex_input_dynamic_state_;
};

struct PhysicalDeviceDepthClipControlFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthClipControlFeaturesEXT;

  PhysicalDeviceDepthClipControlFeaturesEXT(void *next, VkBool32 depth_clip_control)
    : next_(next), depth_clip_control_(depth_clip_control) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 depth_clip_control_;
};

struct MutableDescriptorTypeCreateInfoEXT {

  using native_type = VkMutableDescriptorTypeCreateInfoEXT;

  MutableDescriptorTypeCreateInfoEXT(const void *next, uint32_t mutable_descriptor_type_list_count,
                                     const VkMutableDescriptorTypeListEXT *mutable_descriptor_type_lists)
    : next_(next), mutable_descriptor_type_list_count_(mutable_descriptor_type_list_count),
      mutable_descriptor_type_lists_(mutable_descriptor_type_lists) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t mutable_descriptor_type_list_count_;
  const VkMutableDescriptorTypeListEXT *mutable_descriptor_type_lists_;
};

struct PhysicalDeviceVideoFormatInfoKHR {

  using native_type = VkPhysicalDeviceVideoFormatInfoKHR;

  PhysicalDeviceVideoFormatInfoKHR(const void *next, VkImageUsageFlags image_usage) : next_(next), image_usage_(image_usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageUsageFlags image_usage_;
};

struct MutableDescriptorTypeListEXT {

  using native_type = VkMutableDescriptorTypeListEXT;

  MutableDescriptorTypeListEXT(uint32_t descriptor_type_count, const DescriptorType *descriptor_types)
    : descriptor_type_count_(descriptor_type_count), descriptor_types_(descriptor_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t descriptor_type_count_;
  const DescriptorType *descriptor_types_;
};

struct PhysicalDeviceMutableDescriptorTypeFeaturesEXT {

  using native_type = VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;

  PhysicalDeviceMutableDescriptorTypeFeaturesEXT(void *next, VkBool32 mutable_descriptor_type)
    : next_(next), mutable_descriptor_type_(mutable_descriptor_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 mutable_descriptor_type_;
};

struct VideoDecodeAV1PictureInfoKHR {

  using native_type = VkVideoDecodeAV1PictureInfoKHR;

  VideoDecodeAV1PictureInfoKHR(const void *next, const StdVideoDecodeAV1PictureInfo *std_picture_info,
                               int32_t reference_name_slot_indices[VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR], uint32_t frame_header_offset,
                               uint32_t tile_count, const uint32_t *tile_offsets, const uint32_t *tile_sizes)
    : next_(next), std_picture_info_(std_picture_info), reference_name_slot_indices_(reference_name_slot_indices),
      frame_header_offset_(frame_header_offset), tile_count_(tile_count), tile_offsets_(tile_offsets), tile_sizes_(tile_sizes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoDecodeAV1PictureInfo *std_picture_info_;
  int32_t reference_name_slot_indices[VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR] _;
  uint32_t frame_header_offset_;
  uint32_t tile_count_;
  const uint32_t *tile_offsets_;
  const uint32_t *tile_sizes_;
};

struct PhysicalDeviceLegacyVertexAttributesPropertiesEXT {

  using native_type = VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT;

  PhysicalDeviceLegacyVertexAttributesPropertiesEXT(void *next, VkBool32 native_unaligned_performance)
    : next_(next), native_unaligned_performance_(native_unaligned_performance) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 native_unaligned_performance_;
};

struct ScreenBufferFormatPropertiesQNX {

  using native_type = VkScreenBufferFormatPropertiesQNX;

  ScreenBufferFormatPropertiesQNX(void *next, Format format, uint64_t external_format, uint64_t screen_usage,
                                  VkFormatFeatureFlags format_features, VkComponentMapping sampler_ycbcr_conversion_components,
                                  SamplerYcbcrModelConversion suggested_ycbcr_model, SamplerYcbcrRange suggested_ycbcr_range,
                                  ChromaLocation suggested_xchroma_offset, ChromaLocation suggested_ychroma_offset)
    : next_(next), format_(format), external_format_(external_format), screen_usage_(screen_usage), format_features_(format_features),
      sampler_ycbcr_conversion_components_(sampler_ycbcr_conversion_components), suggested_ycbcr_model_(suggested_ycbcr_model),
      suggested_ycbcr_range_(suggested_ycbcr_range), suggested_xchroma_offset_(suggested_xchroma_offset),
      suggested_ychroma_offset_(suggested_ychroma_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  Format format_;
  uint64_t external_format_;
  uint64_t screen_usage_;
  VkFormatFeatureFlags format_features_;
  VkComponentMapping sampler_ycbcr_conversion_components_;
  SamplerYcbcrModelConversion suggested_ycbcr_model_;
  SamplerYcbcrRange suggested_ycbcr_range_;
  ChromaLocation suggested_xchroma_offset_;
  ChromaLocation suggested_ychroma_offset_;
};

struct PhysicalDeviceLegacyVertexAttributesFeaturesEXT {

  using native_type = VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT;

  PhysicalDeviceLegacyVertexAttributesFeaturesEXT(void *next, VkBool32 legacy_vertex_attributes)
    : next_(next), legacy_vertex_attributes_(legacy_vertex_attributes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 legacy_vertex_attributes_;
};

struct PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT {

  using native_type = VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;

  PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(void *next, VkBool32 attachment_feedback_loop_dynamic_state)
    : next_(next), attachment_feedback_loop_dynamic_state_(attachment_feedback_loop_dynamic_state) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 attachment_feedback_loop_dynamic_state_;
};

struct ImportMemoryBufferCollectionFUCHSIA {

  using native_type = VkImportMemoryBufferCollectionFUCHSIA;

  ImportMemoryBufferCollectionFUCHSIA(const void *next, VkBufferCollectionFUCHSIA collection, uint32_t index)
    : next_(next), collection_(collection), index_(index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferCollectionFUCHSIA collection_;
  uint32_t index_;
};

struct CheckpointData2NV {

  using native_type = VkCheckpointData2NV;

  CheckpointData2NV(void *next, VkPipelineStageFlags2 stage, void *checkpoint_marker)
    : next_(next), stage_(stage), checkpoint_marker_(checkpoint_marker) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPipelineStageFlags2 stage_;
  void *checkpoint_marker_;
};

struct PhysicalDeviceImageSlicedViewOf3DFeaturesEXT {

  using native_type = VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;

  PhysicalDeviceImageSlicedViewOf3DFeaturesEXT(void *next, VkBool32 image_sliced_view_of3d)
    : next_(next), image_sliced_view_of3d_(image_sliced_view_of3d) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 image_sliced_view_of3d_;
};

struct PhysicalDeviceImage2DViewOf3DFeaturesEXT {

  using native_type = VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;

  PhysicalDeviceImage2DViewOf3DFeaturesEXT(void *next, VkBool32 image2dview_of3d, VkBool32 sampler2dview_of3d)
    : next_(next), image2dview_of3d_(image2dview_of3d), sampler2dview_of3d_(sampler2dview_of3d) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 image2dview_of3d_;
  VkBool32 sampler2dview_of3d_;
};

struct VideoFormatPropertiesKHR {

  using native_type = VkVideoFormatPropertiesKHR;

  VideoFormatPropertiesKHR(void *next, Format format, VkComponentMapping component_mapping, VkImageCreateFlags image_create_flags,
                           ImageType image_type, ImageTiling image_tiling, VkImageUsageFlags image_usage_flags)
    : next_(next), format_(format), component_mapping_(component_mapping), image_create_flags_(image_create_flags), image_type_(image_type),
      image_tiling_(image_tiling), image_usage_flags_(image_usage_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  Format format_;
  VkComponentMapping component_mapping_;
  VkImageCreateFlags image_create_flags_;
  ImageType image_type_;
  ImageTiling image_tiling_;
  VkImageUsageFlags image_usage_flags_;
};

struct AccelerationStructureBuildSizesInfoKHR {

  using native_type = VkAccelerationStructureBuildSizesInfoKHR;

  AccelerationStructureBuildSizesInfoKHR(const void *next, VkDeviceSize acceleration_structure_size, VkDeviceSize update_scratch_size,
                                         VkDeviceSize build_scratch_size)
    : next_(next), acceleration_structure_size_(acceleration_structure_size), update_scratch_size_(update_scratch_size),
      build_scratch_size_(build_scratch_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize acceleration_structure_size_;
  VkDeviceSize update_scratch_size_;
  VkDeviceSize build_scratch_size_;
};

struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV {

  using native_type = VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV;

  PhysicalDeviceFragmentShadingRateEnumsPropertiesNV(void *next, SampleCountMaskBit max_fragment_shading_rate_invocation_count)
    : next_(next), max_fragment_shading_rate_invocation_count_(max_fragment_shading_rate_invocation_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  SampleCountMaskBit max_fragment_shading_rate_invocation_count_;
};

struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV {

  using native_type = VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;

  PhysicalDeviceFragmentShadingRateEnumsFeaturesNV(void *next, VkBool32 fragment_shading_rate_enums,
                                                   VkBool32 supersample_fragment_shading_rates,
                                                   VkBool32 no_invocation_fragment_shading_rates)
    : next_(next), fragment_shading_rate_enums_(fragment_shading_rate_enums),
      supersample_fragment_shading_rates_(supersample_fragment_shading_rates),
      no_invocation_fragment_shading_rates_(no_invocation_fragment_shading_rates) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 fragment_shading_rate_enums_;
  VkBool32 supersample_fragment_shading_rates_;
  VkBool32 no_invocation_fragment_shading_rates_;
};

struct PhysicalDeviceShaderTerminateInvocationFeatures {

  using native_type = VkPhysicalDeviceShaderTerminateInvocationFeatures;

  PhysicalDeviceShaderTerminateInvocationFeatures(void *next, VkBool32 shader_terminate_invocation)
    : next_(next), shader_terminate_invocation_(shader_terminate_invocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_terminate_invocation_;
};

struct SamplerCaptureDescriptorDataInfoEXT {

  using native_type = VkSamplerCaptureDescriptorDataInfoEXT;

  SamplerCaptureDescriptorDataInfoEXT(const void *next, VkSampler sampler) : next_(next), sampler_(sampler) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSampler sampler_;
};

struct PhysicalDeviceFragmentShadingRateKHR {

  using native_type = VkPhysicalDeviceFragmentShadingRateKHR;

  PhysicalDeviceFragmentShadingRateKHR(void *next, VkSampleCountFlags sample_counts, VkExtent2D fragment_size)
    : next_(next), sample_counts_(sample_counts), fragment_size_(fragment_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSampleCountFlags sample_counts_;
  VkExtent2D fragment_size_;
};

struct PhysicalDeviceFragmentShadingRatePropertiesKHR {

  using native_type = VkPhysicalDeviceFragmentShadingRatePropertiesKHR;

  PhysicalDeviceFragmentShadingRatePropertiesKHR(
    void *next, VkExtent2D min_fragment_shading_rate_attachment_texel_size, VkExtent2D max_fragment_shading_rate_attachment_texel_size,
    uint32_t max_fragment_shading_rate_attachment_texel_size_aspect_ratio, VkBool32 primitive_fragment_shading_rate_with_multiple_viewports,
    VkBool32 layered_shading_rate_attachments, VkBool32 fragment_shading_rate_non_trivial_combiner_ops, VkExtent2D max_fragment_size,
    uint32_t max_fragment_size_aspect_ratio, uint32_t max_fragment_shading_rate_coverage_samples,
    SampleCountMaskBit max_fragment_shading_rate_rasterization_samples, VkBool32 fragment_shading_rate_with_shader_depth_stencil_writes,
    VkBool32 fragment_shading_rate_with_sample_mask, VkBool32 fragment_shading_rate_with_shader_sample_mask,
    VkBool32 fragment_shading_rate_with_conservative_rasterization, VkBool32 fragment_shading_rate_with_fragment_shader_interlock,
    VkBool32 fragment_shading_rate_with_custom_sample_locations, VkBool32 fragment_shading_rate_strict_multiply_combiner)
    : next_(next), min_fragment_shading_rate_attachment_texel_size_(min_fragment_shading_rate_attachment_texel_size),
      max_fragment_shading_rate_attachment_texel_size_(max_fragment_shading_rate_attachment_texel_size),
      max_fragment_shading_rate_attachment_texel_size_aspect_ratio_(max_fragment_shading_rate_attachment_texel_size_aspect_ratio),
      primitive_fragment_shading_rate_with_multiple_viewports_(primitive_fragment_shading_rate_with_multiple_viewports),
      layered_shading_rate_attachments_(layered_shading_rate_attachments),
      fragment_shading_rate_non_trivial_combiner_ops_(fragment_shading_rate_non_trivial_combiner_ops),
      max_fragment_size_(max_fragment_size), max_fragment_size_aspect_ratio_(max_fragment_size_aspect_ratio),
      max_fragment_shading_rate_coverage_samples_(max_fragment_shading_rate_coverage_samples),
      max_fragment_shading_rate_rasterization_samples_(max_fragment_shading_rate_rasterization_samples),
      fragment_shading_rate_with_shader_depth_stencil_writes_(fragment_shading_rate_with_shader_depth_stencil_writes),
      fragment_shading_rate_with_sample_mask_(fragment_shading_rate_with_sample_mask),
      fragment_shading_rate_with_shader_sample_mask_(fragment_shading_rate_with_shader_sample_mask),
      fragment_shading_rate_with_conservative_rasterization_(fragment_shading_rate_with_conservative_rasterization),
      fragment_shading_rate_with_fragment_shader_interlock_(fragment_shading_rate_with_fragment_shader_interlock),
      fragment_shading_rate_with_custom_sample_locations_(fragment_shading_rate_with_custom_sample_locations),
      fragment_shading_rate_strict_multiply_combiner_(fragment_shading_rate_strict_multiply_combiner) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D min_fragment_shading_rate_attachment_texel_size_;
  VkExtent2D max_fragment_shading_rate_attachment_texel_size_;
  uint32_t max_fragment_shading_rate_attachment_texel_size_aspect_ratio_;
  VkBool32 primitive_fragment_shading_rate_with_multiple_viewports_;
  VkBool32 layered_shading_rate_attachments_;
  VkBool32 fragment_shading_rate_non_trivial_combiner_ops_;
  VkExtent2D max_fragment_size_;
  uint32_t max_fragment_size_aspect_ratio_;
  uint32_t max_fragment_shading_rate_coverage_samples_;
  SampleCountMaskBit max_fragment_shading_rate_rasterization_samples_;
  VkBool32 fragment_shading_rate_with_shader_depth_stencil_writes_;
  VkBool32 fragment_shading_rate_with_sample_mask_;
  VkBool32 fragment_shading_rate_with_shader_sample_mask_;
  VkBool32 fragment_shading_rate_with_conservative_rasterization_;
  VkBool32 fragment_shading_rate_with_fragment_shader_interlock_;
  VkBool32 fragment_shading_rate_with_custom_sample_locations_;
  VkBool32 fragment_shading_rate_strict_multiply_combiner_;
};

struct PipelineFragmentShadingRateStateCreateInfoKHR {

  using native_type = VkPipelineFragmentShadingRateStateCreateInfoKHR;

  PipelineFragmentShadingRateStateCreateInfoKHR(const void *next, VkExtent2D fragment_size, FragmentShadingRateCombinerOp combiner_ops[2])
    : next_(next), fragment_size_(fragment_size), combiner_ops_(combiner_ops) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExtent2D fragment_size_;
  FragmentShadingRateCombinerOp combiner_ops[2] _;
};

struct FragmentShadingRateAttachmentInfoKHR {

  using native_type = VkFragmentShadingRateAttachmentInfoKHR;

  FragmentShadingRateAttachmentInfoKHR(const void *next, const VkAttachmentReference2 *fragment_shading_rate_attachment,
                                       VkExtent2D shading_rate_attachment_texel_size)
    : next_(next), fragment_shading_rate_attachment_(fragment_shading_rate_attachment),
      shading_rate_attachment_texel_size_(shading_rate_attachment_texel_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const VkAttachmentReference2 *fragment_shading_rate_attachment_;
  VkExtent2D shading_rate_attachment_texel_size_;
};

struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT {

  using native_type = VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;

  PhysicalDeviceShaderImageAtomicInt64FeaturesEXT(void *next, VkBool32 shader_image_int64atomics, VkBool32 sparse_image_int64atomics)
    : next_(next), shader_image_int64atomics_(shader_image_int64atomics), sparse_image_int64atomics_(sparse_image_int64atomics) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_image_int64atomics_;
  VkBool32 sparse_image_int64atomics_;
};

struct ResolveImageInfo2 {

  using native_type = VkResolveImageInfo2;

  ResolveImageInfo2(const void *next, VkImage src_image, ImageLayout src_image_layout, VkImage dst_image, ImageLayout dst_image_layout,
                    uint32_t region_count, const VkImageResolve2 *regions)
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image), dst_image_layout_(dst_image_layout),
      region_count_(region_count), regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const VkImageResolve2 *regions_;
};

struct BufferImageCopy2 {

  using native_type = VkBufferImageCopy2;

  BufferImageCopy2(const void *next, VkDeviceSize buffer_offset, uint32_t buffer_row_length, uint32_t buffer_image_height,
                   VkImageSubresourceLayers image_subresource, VkOffset3D image_offset, VkExtent3D image_extent)
    : next_(next), buffer_offset_(buffer_offset), buffer_row_length_(buffer_row_length), buffer_image_height_(buffer_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize buffer_offset_;
  uint32_t buffer_row_length_;
  uint32_t buffer_image_height_;
  VkImageSubresourceLayers image_subresource_;
  VkOffset3D image_offset_;
  VkExtent3D image_extent_;
};

struct PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR {

  using native_type = VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR;

  PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(void *next, VkBool32 dynamic_rendering_local_read)
    : next_(next), dynamic_rendering_local_read_(dynamic_rendering_local_read) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 dynamic_rendering_local_read_;
};

struct ImageBlit2 {

  using native_type = VkImageBlit2;

  ImageBlit2(const void *next, VkImageSubresourceLayers src_subresource, VkOffset3D src_offsets[2],
             VkImageSubresourceLayers dst_subresource, VkOffset3D dst_offsets[2])
    : next_(next), src_subresource_(src_subresource), src_offsets_(src_offsets), dst_subresource_(dst_subresource),
      dst_offsets_(dst_offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageSubresourceLayers src_subresource_;
  VkOffset3D src_offsets[2] _;
  VkImageSubresourceLayers dst_subresource_;
  VkOffset3D dst_offsets[2] _;
};

struct PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI;

  PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(void *next, VkBool32 cluster_shading_rate)
    : next_(next), cluster_shading_rate_(cluster_shading_rate) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 cluster_shading_rate_;
};

struct PhysicalDeviceClusterCullingShaderFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;

  PhysicalDeviceClusterCullingShaderFeaturesHUAWEI(void *next, VkBool32 clusterculling_shader, VkBool32 multiview_cluster_culling_shader)
    : next_(next), clusterculling_shader_(clusterculling_shader), multiview_cluster_culling_shader_(multiview_cluster_culling_shader) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 clusterculling_shader_;
  VkBool32 multiview_cluster_culling_shader_;
};

struct PhysicalDevicePortabilitySubsetFeaturesKHR {

  using native_type = VkPhysicalDevicePortabilitySubsetFeaturesKHR;

  PhysicalDevicePortabilitySubsetFeaturesKHR(void *next, VkBool32 constant_alpha_color_blend_factors, VkBool32 events,
                                             VkBool32 image_view_format_reinterpretation, VkBool32 image_view_format_swizzle,
                                             VkBool32 image_view2don3dimage, VkBool32 multisample_array_image,
                                             VkBool32 mutable_comparison_samplers, VkBool32 point_polygons, VkBool32 sampler_mip_lod_bias,
                                             VkBool32 separate_stencil_mask_ref, VkBool32 shader_sample_rate_interpolation_functions,
                                             VkBool32 tessellation_isolines, VkBool32 tessellation_point_mode, VkBool32 triangle_fans,
                                             VkBool32 vertex_attribute_access_beyond_stride)
    : next_(next), constant_alpha_color_blend_factors_(constant_alpha_color_blend_factors), events_(events),
      image_view_format_reinterpretation_(image_view_format_reinterpretation), image_view_format_swizzle_(image_view_format_swizzle),
      image_view2don3dimage_(image_view2don3dimage), multisample_array_image_(multisample_array_image),
      mutable_comparison_samplers_(mutable_comparison_samplers), point_polygons_(point_polygons),
      sampler_mip_lod_bias_(sampler_mip_lod_bias), separate_stencil_mask_ref_(separate_stencil_mask_ref),
      shader_sample_rate_interpolation_functions_(shader_sample_rate_interpolation_functions),
      tessellation_isolines_(tessellation_isolines), tessellation_point_mode_(tessellation_point_mode), triangle_fans_(triangle_fans),
      vertex_attribute_access_beyond_stride_(vertex_attribute_access_beyond_stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 constant_alpha_color_blend_factors_;
  VkBool32 events_;
  VkBool32 image_view_format_reinterpretation_;
  VkBool32 image_view_format_swizzle_;
  VkBool32 image_view2don3dimage_;
  VkBool32 multisample_array_image_;
  VkBool32 mutable_comparison_samplers_;
  VkBool32 point_polygons_;
  VkBool32 sampler_mip_lod_bias_;
  VkBool32 separate_stencil_mask_ref_;
  VkBool32 shader_sample_rate_interpolation_functions_;
  VkBool32 tessellation_isolines_;
  VkBool32 tessellation_point_mode_;
  VkBool32 triangle_fans_;
  VkBool32 vertex_attribute_access_beyond_stride_;
};

struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;

  PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(void *next, VkBool32 shader_subgroup_uniform_control_flow)
    : next_(next), shader_subgroup_uniform_control_flow_(shader_subgroup_uniform_control_flow) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_subgroup_uniform_control_flow_;
};

struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures {

  using native_type = VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;

  PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(void *next, VkBool32 shader_zero_initialize_workgroup_memory)
    : next_(next), shader_zero_initialize_workgroup_memory_(shader_zero_initialize_workgroup_memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_zero_initialize_workgroup_memory_;
};

struct PipelineOfflineCreateInfo {

  using native_type = VkPipelineOfflineCreateInfo;

  PipelineOfflineCreateInfo(const void *next, uint8_t pipeline_identifier[VK_UUID_SIZE], PipelineMatchControl match_control,
                            VkDeviceSize pool_entry_size)
    : next_(next), pipeline_identifier_(pipeline_identifier), match_control_(match_control), pool_entry_size_(pool_entry_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint8_t pipeline_identifier[VK_UUID_SIZE] _;
  PipelineMatchControl match_control_;
  VkDeviceSize pool_entry_size_;
};

struct DeviceDiagnosticsConfigCreateInfoNV {

  using native_type = VkDeviceDiagnosticsConfigCreateInfoNV;

  DeviceDiagnosticsConfigCreateInfoNV(const void *next, VkDeviceDiagnosticsConfigFlagsNV flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceDiagnosticsConfigFlagsNV flags_;
};

struct PhysicalDeviceDiagnosticsConfigFeaturesNV {

  using native_type = VkPhysicalDeviceDiagnosticsConfigFeaturesNV;

  PhysicalDeviceDiagnosticsConfigFeaturesNV(void *next, VkBool32 diagnostics_config)
    : next_(next), diagnostics_config_(diagnostics_config) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 diagnostics_config_;
};

struct CommandBufferInheritanceRenderPassTransformInfoQCOM {

  using native_type = VkCommandBufferInheritanceRenderPassTransformInfoQCOM;

  CommandBufferInheritanceRenderPassTransformInfoQCOM(void *next, SurfaceTransformMaskBit transform, VkRect2D render_area)
    : next_(next), transform_(transform), render_area_(render_area) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  SurfaceTransformMaskBit transform_;
  VkRect2D render_area_;
};

struct VideoEncodeH264CapabilitiesKHR {

  using native_type = VkVideoEncodeH264CapabilitiesKHR;

  VideoEncodeH264CapabilitiesKHR(void *next, VkVideoEncodeH264CapabilityFlagsKHR flags, StdVideoH264LevelIdc max_level_idc,
                                 uint32_t max_slice_count, uint32_t max_ppicture_l0reference_count, uint32_t max_bpicture_l0reference_count,
                                 uint32_t max_l1reference_count, uint32_t max_temporal_layer_count,
                                 VkBool32 expect_dyadic_temporal_layer_pattern, int32_t min_qp, int32_t max_qp,
                                 VkBool32 prefers_gop_remaining_frames, VkBool32 requires_gop_remaining_frames,
                                 VkVideoEncodeH264StdFlagsKHR std_syntax_flags)
    : next_(next), flags_(flags), max_level_idc_(max_level_idc), max_slice_count_(max_slice_count),
      max_ppicture_l0reference_count_(max_ppicture_l0reference_count), max_bpicture_l0reference_count_(max_bpicture_l0reference_count),
      max_l1reference_count_(max_l1reference_count), max_temporal_layer_count_(max_temporal_layer_count),
      expect_dyadic_temporal_layer_pattern_(expect_dyadic_temporal_layer_pattern), min_qp_(min_qp), max_qp_(max_qp),
      prefers_gop_remaining_frames_(prefers_gop_remaining_frames), requires_gop_remaining_frames_(requires_gop_remaining_frames),
      std_syntax_flags_(std_syntax_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoEncodeH264CapabilityFlagsKHR flags_;
  StdVideoH264LevelIdc max_level_idc_;
  uint32_t max_slice_count_;
  uint32_t max_ppicture_l0reference_count_;
  uint32_t max_bpicture_l0reference_count_;
  uint32_t max_l1reference_count_;
  uint32_t max_temporal_layer_count_;
  VkBool32 expect_dyadic_temporal_layer_pattern_;
  int32_t min_qp_;
  int32_t max_qp_;
  VkBool32 prefers_gop_remaining_frames_;
  VkBool32 requires_gop_remaining_frames_;
  VkVideoEncodeH264StdFlagsKHR std_syntax_flags_;
};

struct ColorBlendAdvancedEXT {

  using native_type = VkColorBlendAdvancedEXT;

  ColorBlendAdvancedEXT(BlendOp advanced_blend_op, VkBool32 src_premultiplied, VkBool32 dst_premultiplied, BlendOverlap blend_overlap,
                        VkBool32 clamp_results)
    : advanced_blend_op_(advanced_blend_op), src_premultiplied_(src_premultiplied), dst_premultiplied_(dst_premultiplied),
      blend_overlap_(blend_overlap), clamp_results_(clamp_results) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  BlendOp advanced_blend_op_;
  VkBool32 src_premultiplied_;
  VkBool32 dst_premultiplied_;
  BlendOverlap blend_overlap_;
  VkBool32 clamp_results_;
};

struct PhysicalDeviceExtendedDynamicState3FeaturesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;

  PhysicalDeviceExtendedDynamicState3FeaturesEXT(
    void *next, VkBool32 extended_dynamic_state3tessellation_domain_origin, VkBool32 extended_dynamic_state3depth_clamp_enable,
    VkBool32 extended_dynamic_state3polygon_mode, VkBool32 extended_dynamic_state3rasterization_samples,
    VkBool32 extended_dynamic_state3sample_mask, VkBool32 extended_dynamic_state3alpha_to_coverage_enable,
    VkBool32 extended_dynamic_state3alpha_to_one_enable, VkBool32 extended_dynamic_state3logic_op_enable,
    VkBool32 extended_dynamic_state3color_blend_enable, VkBool32 extended_dynamic_state3color_blend_equation,
    VkBool32 extended_dynamic_state3color_write_mask, VkBool32 extended_dynamic_state3rasterization_stream,
    VkBool32 extended_dynamic_state3conservative_rasterization_mode, VkBool32 extended_dynamic_state3extra_primitive_overestimation_size,
    VkBool32 extended_dynamic_state3depth_clip_enable, VkBool32 extended_dynamic_state3sample_locations_enable,
    VkBool32 extended_dynamic_state3color_blend_advanced, VkBool32 extended_dynamic_state3provoking_vertex_mode,
    VkBool32 extended_dynamic_state3line_rasterization_mode, VkBool32 extended_dynamic_state3line_stipple_enable,
    VkBool32 extended_dynamic_state3depth_clip_negative_one_to_one, VkBool32 extended_dynamic_state3viewport_wscaling_enable,
    VkBool32 extended_dynamic_state3viewport_swizzle, VkBool32 extended_dynamic_state3coverage_to_color_enable,
    VkBool32 extended_dynamic_state3coverage_to_color_location, VkBool32 extended_dynamic_state3coverage_modulation_mode,
    VkBool32 extended_dynamic_state3coverage_modulation_table_enable, VkBool32 extended_dynamic_state3coverage_modulation_table,
    VkBool32 extended_dynamic_state3coverage_reduction_mode, VkBool32 extended_dynamic_state3representative_fragment_test_enable,
    VkBool32 extended_dynamic_state3shading_rate_image_enable)
    : next_(next), extended_dynamic_state3tessellation_domain_origin_(extended_dynamic_state3tessellation_domain_origin),
      extended_dynamic_state3depth_clamp_enable_(extended_dynamic_state3depth_clamp_enable),
      extended_dynamic_state3polygon_mode_(extended_dynamic_state3polygon_mode),
      extended_dynamic_state3rasterization_samples_(extended_dynamic_state3rasterization_samples),
      extended_dynamic_state3sample_mask_(extended_dynamic_state3sample_mask),
      extended_dynamic_state3alpha_to_coverage_enable_(extended_dynamic_state3alpha_to_coverage_enable),
      extended_dynamic_state3alpha_to_one_enable_(extended_dynamic_state3alpha_to_one_enable),
      extended_dynamic_state3logic_op_enable_(extended_dynamic_state3logic_op_enable),
      extended_dynamic_state3color_blend_enable_(extended_dynamic_state3color_blend_enable),
      extended_dynamic_state3color_blend_equation_(extended_dynamic_state3color_blend_equation),
      extended_dynamic_state3color_write_mask_(extended_dynamic_state3color_write_mask),
      extended_dynamic_state3rasterization_stream_(extended_dynamic_state3rasterization_stream),
      extended_dynamic_state3conservative_rasterization_mode_(extended_dynamic_state3conservative_rasterization_mode),
      extended_dynamic_state3extra_primitive_overestimation_size_(extended_dynamic_state3extra_primitive_overestimation_size),
      extended_dynamic_state3depth_clip_enable_(extended_dynamic_state3depth_clip_enable),
      extended_dynamic_state3sample_locations_enable_(extended_dynamic_state3sample_locations_enable),
      extended_dynamic_state3color_blend_advanced_(extended_dynamic_state3color_blend_advanced),
      extended_dynamic_state3provoking_vertex_mode_(extended_dynamic_state3provoking_vertex_mode),
      extended_dynamic_state3line_rasterization_mode_(extended_dynamic_state3line_rasterization_mode),
      extended_dynamic_state3line_stipple_enable_(extended_dynamic_state3line_stipple_enable),
      extended_dynamic_state3depth_clip_negative_one_to_one_(extended_dynamic_state3depth_clip_negative_one_to_one),
      extended_dynamic_state3viewport_wscaling_enable_(extended_dynamic_state3viewport_wscaling_enable),
      extended_dynamic_state3viewport_swizzle_(extended_dynamic_state3viewport_swizzle),
      extended_dynamic_state3coverage_to_color_enable_(extended_dynamic_state3coverage_to_color_enable),
      extended_dynamic_state3coverage_to_color_location_(extended_dynamic_state3coverage_to_color_location),
      extended_dynamic_state3coverage_modulation_mode_(extended_dynamic_state3coverage_modulation_mode),
      extended_dynamic_state3coverage_modulation_table_enable_(extended_dynamic_state3coverage_modulation_table_enable),
      extended_dynamic_state3coverage_modulation_table_(extended_dynamic_state3coverage_modulation_table),
      extended_dynamic_state3coverage_reduction_mode_(extended_dynamic_state3coverage_reduction_mode),
      extended_dynamic_state3representative_fragment_test_enable_(extended_dynamic_state3representative_fragment_test_enable),
      extended_dynamic_state3shading_rate_image_enable_(extended_dynamic_state3shading_rate_image_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 extended_dynamic_state3tessellation_domain_origin_;
  VkBool32 extended_dynamic_state3depth_clamp_enable_;
  VkBool32 extended_dynamic_state3polygon_mode_;
  VkBool32 extended_dynamic_state3rasterization_samples_;
  VkBool32 extended_dynamic_state3sample_mask_;
  VkBool32 extended_dynamic_state3alpha_to_coverage_enable_;
  VkBool32 extended_dynamic_state3alpha_to_one_enable_;
  VkBool32 extended_dynamic_state3logic_op_enable_;
  VkBool32 extended_dynamic_state3color_blend_enable_;
  VkBool32 extended_dynamic_state3color_blend_equation_;
  VkBool32 extended_dynamic_state3color_write_mask_;
  VkBool32 extended_dynamic_state3rasterization_stream_;
  VkBool32 extended_dynamic_state3conservative_rasterization_mode_;
  VkBool32 extended_dynamic_state3extra_primitive_overestimation_size_;
  VkBool32 extended_dynamic_state3depth_clip_enable_;
  VkBool32 extended_dynamic_state3sample_locations_enable_;
  VkBool32 extended_dynamic_state3color_blend_advanced_;
  VkBool32 extended_dynamic_state3provoking_vertex_mode_;
  VkBool32 extended_dynamic_state3line_rasterization_mode_;
  VkBool32 extended_dynamic_state3line_stipple_enable_;
  VkBool32 extended_dynamic_state3depth_clip_negative_one_to_one_;
  VkBool32 extended_dynamic_state3viewport_wscaling_enable_;
  VkBool32 extended_dynamic_state3viewport_swizzle_;
  VkBool32 extended_dynamic_state3coverage_to_color_enable_;
  VkBool32 extended_dynamic_state3coverage_to_color_location_;
  VkBool32 extended_dynamic_state3coverage_modulation_mode_;
  VkBool32 extended_dynamic_state3coverage_modulation_table_enable_;
  VkBool32 extended_dynamic_state3coverage_modulation_table_;
  VkBool32 extended_dynamic_state3coverage_reduction_mode_;
  VkBool32 extended_dynamic_state3representative_fragment_test_enable_;
  VkBool32 extended_dynamic_state3shading_rate_image_enable_;
};

struct RefreshObjectListKHR {

  using native_type = VkRefreshObjectListKHR;

  RefreshObjectListKHR(const void *next, uint32_t object_count, const VkRefreshObjectKHR *objects)
    : next_(next), object_count_(object_count), objects_(objects) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t object_count_;
  const VkRefreshObjectKHR *objects_;
};

struct PhysicalDeviceShaderIntegerDotProductProperties {

  using native_type = VkPhysicalDeviceShaderIntegerDotProductProperties;

  PhysicalDeviceShaderIntegerDotProductProperties(
    void *next, VkBool32 integer_dot_product8bit_unsigned_accelerated, VkBool32 integer_dot_product8bit_signed_accelerated,
    VkBool32 integer_dot_product8bit_mixed_signedness_accelerated, VkBool32 integer_dot_product4x8bit_packed_unsigned_accelerated,
    VkBool32 integer_dot_product4x8bit_packed_signed_accelerated, VkBool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated,
    VkBool32 integer_dot_product16bit_unsigned_accelerated, VkBool32 integer_dot_product16bit_signed_accelerated,
    VkBool32 integer_dot_product16bit_mixed_signedness_accelerated, VkBool32 integer_dot_product32bit_unsigned_accelerated,
    VkBool32 integer_dot_product32bit_signed_accelerated, VkBool32 integer_dot_product32bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product64bit_unsigned_accelerated, VkBool32 integer_dot_product64bit_signed_accelerated,
    VkBool32 integer_dot_product64bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated)
    : next_(next), integer_dot_product8bit_unsigned_accelerated_(integer_dot_product8bit_unsigned_accelerated),
      integer_dot_product8bit_signed_accelerated_(integer_dot_product8bit_signed_accelerated),
      integer_dot_product8bit_mixed_signedness_accelerated_(integer_dot_product8bit_mixed_signedness_accelerated),
      integer_dot_product4x8bit_packed_unsigned_accelerated_(integer_dot_product4x8bit_packed_unsigned_accelerated),
      integer_dot_product4x8bit_packed_signed_accelerated_(integer_dot_product4x8bit_packed_signed_accelerated),
      integer_dot_product4x8bit_packed_mixed_signedness_accelerated_(integer_dot_product4x8bit_packed_mixed_signedness_accelerated),
      integer_dot_product16bit_unsigned_accelerated_(integer_dot_product16bit_unsigned_accelerated),
      integer_dot_product16bit_signed_accelerated_(integer_dot_product16bit_signed_accelerated),
      integer_dot_product16bit_mixed_signedness_accelerated_(integer_dot_product16bit_mixed_signedness_accelerated),
      integer_dot_product32bit_unsigned_accelerated_(integer_dot_product32bit_unsigned_accelerated),
      integer_dot_product32bit_signed_accelerated_(integer_dot_product32bit_signed_accelerated),
      integer_dot_product32bit_mixed_signedness_accelerated_(integer_dot_product32bit_mixed_signedness_accelerated),
      integer_dot_product64bit_unsigned_accelerated_(integer_dot_product64bit_unsigned_accelerated),
      integer_dot_product64bit_signed_accelerated_(integer_dot_product64bit_signed_accelerated),
      integer_dot_product64bit_mixed_signedness_accelerated_(integer_dot_product64bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating8bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating8bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating8bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating8bit_signed_accelerated),
      integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated),
      integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated_(
        integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated),
      integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating16bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating16bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating16bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating16bit_signed_accelerated),
      integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating32bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating32bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating32bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating32bit_signed_accelerated),
      integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating64bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating64bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating64bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating64bit_signed_accelerated),
      integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 integer_dot_product8bit_unsigned_accelerated_;
  VkBool32 integer_dot_product8bit_signed_accelerated_;
  VkBool32 integer_dot_product8bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product4x8bit_packed_unsigned_accelerated_;
  VkBool32 integer_dot_product4x8bit_packed_signed_accelerated_;
  VkBool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product16bit_unsigned_accelerated_;
  VkBool32 integer_dot_product16bit_signed_accelerated_;
  VkBool32 integer_dot_product16bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product32bit_unsigned_accelerated_;
  VkBool32 integer_dot_product32bit_signed_accelerated_;
  VkBool32 integer_dot_product32bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product64bit_unsigned_accelerated_;
  VkBool32 integer_dot_product64bit_signed_accelerated_;
  VkBool32 integer_dot_product64bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated_;
};

struct RayTracingPipelineInterfaceCreateInfoKHR {

  using native_type = VkRayTracingPipelineInterfaceCreateInfoKHR;

  RayTracingPipelineInterfaceCreateInfoKHR(const void *next, uint32_t max_pipeline_ray_payload_size,
                                           uint32_t max_pipeline_ray_hit_attribute_size)
    : next_(next), max_pipeline_ray_payload_size_(max_pipeline_ray_payload_size),
      max_pipeline_ray_hit_attribute_size_(max_pipeline_ray_hit_attribute_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_pipeline_ray_payload_size_;
  uint32_t max_pipeline_ray_hit_attribute_size_;
};

struct AccelerationStructureVersionInfoKHR {

  using native_type = VkAccelerationStructureVersionInfoKHR;

  AccelerationStructureVersionInfoKHR(const void *next, const uint8_t *version_data) : next_(next), version_data_(version_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const uint8_t *version_data_;
};

struct AccelerationStructureDeviceAddressInfoKHR {

  using native_type = VkAccelerationStructureDeviceAddressInfoKHR;

  AccelerationStructureDeviceAddressInfoKHR(const void *next, VkAccelerationStructureKHR acceleration_structure)
    : next_(next), acceleration_structure_(acceleration_structure) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureKHR acceleration_structure_;
};

struct AccelerationStructureInstanceKHR {

  using native_type = VkAccelerationStructureInstanceKHR;

  AccelerationStructureInstanceKHR(VkTransformMatrixKHR transform, uint32_t instance_custom_index : 24, uint32_t mask : 8,
                                   uint32_t instance_shader_binding_table_record_offset : 24, VkGeometryInstanceFlagsKHR flags : 8,
                                   uint64_t acceleration_structure_reference)
    : transform_(transform), instance_custom_index_(instance_custom_index), mask_(mask),
      instance_shader_binding_table_record_offset_(instance_shader_binding_table_record_offset), flags_(flags),
      acceleration_structure_reference_(acceleration_structure_reference) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkTransformMatrixKHR transform_;
  uint32_t instance_custom_index : 24_;
  uint32_t mask : 8_;
  uint32_t instance_shader_binding_table_record_offset : 24_;
  VkGeometryInstanceFlagsKHR flags : 8_;
  uint64_t acceleration_structure_reference_;
};

struct AabbPositionsKHR {

  using native_type = VkAabbPositionsKHR;

  AabbPositionsKHR(float min_x, float min_y, float min_z, float max_x, float max_y, float max_z)
    : min_x_(min_x), min_y_(min_y), min_z_(min_z), max_x_(max_x), max_y_(max_y), max_z_(max_z) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float min_x_;
  float min_y_;
  float min_z_;
  float max_x_;
  float max_y_;
  float max_z_;
};

struct ImportMetalSharedEventInfoEXT {

  using native_type = VkImportMetalSharedEventInfoEXT;

  ImportMetalSharedEventInfoEXT(const void *next, MTLSharedEvent_id mtl_shared_event) : next_(next), mtl_shared_event_(mtl_shared_event) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  MTLSharedEvent_id mtl_shared_event_;
};

struct AccelerationStructureCreateInfoKHR {

  using native_type = VkAccelerationStructureCreateInfoKHR;

  AccelerationStructureCreateInfoKHR(const void *next, VkAccelerationStructureCreateFlagsKHR create_flags, VkBuffer buffer,
                                     VkDeviceSize offset, VkDeviceSize size, AccelerationStructureType type, VkDeviceAddress device_address)
    : next_(next), create_flags_(create_flags), buffer_(buffer), offset_(offset), size_(size), type_(type),
      device_address_(device_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureCreateFlagsKHR create_flags_;
  VkBuffer buffer_;
  VkDeviceSize offset_;
  VkDeviceSize size_;
  AccelerationStructureType type_;
  VkDeviceAddress device_address_;
};

struct AccelerationStructureBuildRangeInfoKHR {

  using native_type = VkAccelerationStructureBuildRangeInfoKHR;

  AccelerationStructureBuildRangeInfoKHR(uint32_t primitive_count, uint32_t primitive_offset, uint32_t first_vertex,
                                         uint32_t transform_offset)
    : primitive_count_(primitive_count), primitive_offset_(primitive_offset), first_vertex_(first_vertex),
      transform_offset_(transform_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t primitive_count_;
  uint32_t primitive_offset_;
  uint32_t first_vertex_;
  uint32_t transform_offset_;
};

struct AccelerationStructureGeometryKHR {

  using native_type = VkAccelerationStructureGeometryKHR;

  AccelerationStructureGeometryKHR(const void *next, GeometryType geometry_type, VkAccelerationStructureGeometryDataKHR geometry,
                                   VkGeometryFlagsKHR flags)
    : next_(next), geometry_type_(geometry_type), geometry_(geometry), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  GeometryType geometry_type_;
  VkAccelerationStructureGeometryDataKHR geometry_;
  VkGeometryFlagsKHR flags_;
};

struct AccelerationStructureGeometryInstancesDataKHR {

  using native_type = VkAccelerationStructureGeometryInstancesDataKHR;

  AccelerationStructureGeometryInstancesDataKHR(const void *next, VkBool32 array_of_pointers, VkDeviceOrHostAddressConstKHR data)
    : next_(next), array_of_pointers_(array_of_pointers), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 array_of_pointers_;
  VkDeviceOrHostAddressConstKHR data_;
};

struct AccelerationStructureGeometryAabbsDataKHR {

  using native_type = VkAccelerationStructureGeometryAabbsDataKHR;

  AccelerationStructureGeometryAabbsDataKHR(const void *next, VkDeviceOrHostAddressConstKHR data, VkDeviceSize stride)
    : next_(next), data_(data), stride_(stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceOrHostAddressConstKHR data_;
  VkDeviceSize stride_;
};

struct AccelerationStructureGeometryTrianglesDataKHR {

  using native_type = VkAccelerationStructureGeometryTrianglesDataKHR;

  AccelerationStructureGeometryTrianglesDataKHR(const void *next, Format vertex_format, VkDeviceOrHostAddressConstKHR vertex_data,
                                                VkDeviceSize vertex_stride, uint32_t max_vertex, IndexType index_type,
                                                VkDeviceOrHostAddressConstKHR index_data, VkDeviceOrHostAddressConstKHR transform_data)
    : next_(next), vertex_format_(vertex_format), vertex_data_(vertex_data), vertex_stride_(vertex_stride), max_vertex_(max_vertex),
      index_type_(index_type), index_data_(index_data), transform_data_(transform_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Format vertex_format_;
  VkDeviceOrHostAddressConstKHR vertex_data_;
  VkDeviceSize vertex_stride_;
  uint32_t max_vertex_;
  IndexType index_type_;
  VkDeviceOrHostAddressConstKHR index_data_;
  VkDeviceOrHostAddressConstKHR transform_data_;
};

struct CopyImageInfo2 {

  using native_type = VkCopyImageInfo2;

  CopyImageInfo2(const void *next, VkImage src_image, ImageLayout src_image_layout, VkImage dst_image, ImageLayout dst_image_layout,
                 uint32_t region_count, const VkImageCopy2 *regions)
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image), dst_image_layout_(dst_image_layout),
      region_count_(region_count), regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const VkImageCopy2 *regions_;
};

struct PhysicalDeviceBorderColorSwizzleFeaturesEXT {

  using native_type = VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;

  PhysicalDeviceBorderColorSwizzleFeaturesEXT(void *next, VkBool32 border_color_swizzle, VkBool32 border_color_swizzle_from_image)
    : next_(next), border_color_swizzle_(border_color_swizzle), border_color_swizzle_from_image_(border_color_swizzle_from_image) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 border_color_swizzle_;
  VkBool32 border_color_swizzle_from_image_;
};

struct RenderingInfo {

  using native_type = VkRenderingInfo;

  RenderingInfo(const void *next, VkRenderingFlags flags, VkRect2D render_area, uint32_t layer_count, uint32_t view_mask,
                uint32_t color_attachment_count, const VkRenderingAttachmentInfo *color_attachments,
                const VkRenderingAttachmentInfo *depth_attachment, const VkRenderingAttachmentInfo *stencil_attachment)
    : next_(next), flags_(flags), render_area_(render_area), layer_count_(layer_count), view_mask_(view_mask),
      color_attachment_count_(color_attachment_count), color_attachments_(color_attachments), depth_attachment_(depth_attachment),
      stencil_attachment_(stencil_attachment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderingFlags flags_;
  VkRect2D render_area_;
  uint32_t layer_count_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const VkRenderingAttachmentInfo *color_attachments_;
  const VkRenderingAttachmentInfo *depth_attachment_;
  const VkRenderingAttachmentInfo *stencil_attachment_;
};

struct SamplerBorderColorComponentMappingCreateInfoEXT {

  using native_type = VkSamplerBorderColorComponentMappingCreateInfoEXT;

  SamplerBorderColorComponentMappingCreateInfoEXT(const void *next, VkComponentMapping components, VkBool32 srgb)
    : next_(next), components_(components), srgb_(srgb) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkComponentMapping components_;
  VkBool32 srgb_;
};

struct PhysicalDeviceCustomBorderColorFeaturesEXT {

  using native_type = VkPhysicalDeviceCustomBorderColorFeaturesEXT;

  PhysicalDeviceCustomBorderColorFeaturesEXT(void *next, VkBool32 custom_border_colors, VkBool32 custom_border_color_without_format)
    : next_(next), custom_border_colors_(custom_border_colors), custom_border_color_without_format_(custom_border_color_without_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 custom_border_colors_;
  VkBool32 custom_border_color_without_format_;
};

struct SamplerCustomBorderColorCreateInfoEXT {

  using native_type = VkSamplerCustomBorderColorCreateInfoEXT;

  SamplerCustomBorderColorCreateInfoEXT(const void *next, VkClearColorValue custom_border_color, Format format)
    : next_(next), custom_border_color_(custom_border_color), format_(format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkClearColorValue custom_border_color_;
  Format format_;
};

struct FaultCallbackInfo {

  using native_type = VkFaultCallbackInfo;

  FaultCallbackInfo(const void *next, uint32_t fault_count, VkFaultData *faults, PFN_vkFaultCallbackFunction pfn_fault_callback)
    : next_(next), fault_count_(fault_count), faults_(faults), pfn_fault_callback_(pfn_fault_callback) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t fault_count_;
  VkFaultData *faults_;
  PFN_vkFaultCallbackFunction pfn_fault_callback_;
};

struct PipelineLibraryCreateInfoKHR {

  using native_type = VkPipelineLibraryCreateInfoKHR;

  PipelineLibraryCreateInfoKHR(const void *next, uint32_t library_count, const VkPipeline *libraries)
    : next_(next), library_count_(library_count), libraries_(libraries) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t library_count_;
  const VkPipeline *libraries_;
};

struct FaultData {

  using native_type = VkFaultData;

  FaultData(void *next, FaultLevel fault_level, FaultType fault_type) : next_(next), fault_level_(fault_level), fault_type_(fault_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  FaultLevel fault_level_;
  FaultType fault_type_;
};

struct VideoDecodeH265DpbSlotInfoKHR {

  using native_type = VkVideoDecodeH265DpbSlotInfoKHR;

  VideoDecodeH265DpbSlotInfoKHR(const void *next, const StdVideoDecodeH265ReferenceInfo *std_reference_info)
    : next_(next), std_reference_info_(std_reference_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoDecodeH265ReferenceInfo *std_reference_info_;
};

struct PhysicalDeviceVulkan13Properties {

  using native_type = VkPhysicalDeviceVulkan13Properties;

  PhysicalDeviceVulkan13Properties(
    void *next, uint32_t min_subgroup_size, uint32_t max_subgroup_size, uint32_t max_compute_workgroup_subgroups,
    VkShaderStageFlags required_subgroup_size_stages, uint32_t max_inline_uniform_block_size,
    uint32_t max_per_stage_descriptor_inline_uniform_blocks, uint32_t max_per_stage_descriptor_update_after_bind_inline_uniform_blocks,
    uint32_t max_descriptor_set_inline_uniform_blocks, uint32_t max_descriptor_set_update_after_bind_inline_uniform_blocks,
    uint32_t max_inline_uniform_total_size, VkBool32 integer_dot_product8bit_unsigned_accelerated,
    VkBool32 integer_dot_product8bit_signed_accelerated, VkBool32 integer_dot_product8bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product4x8bit_packed_unsigned_accelerated, VkBool32 integer_dot_product4x8bit_packed_signed_accelerated,
    VkBool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated, VkBool32 integer_dot_product16bit_unsigned_accelerated,
    VkBool32 integer_dot_product16bit_signed_accelerated, VkBool32 integer_dot_product16bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product32bit_unsigned_accelerated, VkBool32 integer_dot_product32bit_signed_accelerated,
    VkBool32 integer_dot_product32bit_mixed_signedness_accelerated, VkBool32 integer_dot_product64bit_unsigned_accelerated,
    VkBool32 integer_dot_product64bit_signed_accelerated, VkBool32 integer_dot_product64bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated,
    VkBool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated,
    VkDeviceSize storage_texel_buffer_offset_alignment_bytes, VkBool32 storage_texel_buffer_offset_single_texel_alignment,
    VkDeviceSize uniform_texel_buffer_offset_alignment_bytes, VkBool32 uniform_texel_buffer_offset_single_texel_alignment,
    VkDeviceSize max_buffer_size)
    : next_(next), min_subgroup_size_(min_subgroup_size), max_subgroup_size_(max_subgroup_size),
      max_compute_workgroup_subgroups_(max_compute_workgroup_subgroups), required_subgroup_size_stages_(required_subgroup_size_stages),
      max_inline_uniform_block_size_(max_inline_uniform_block_size),
      max_per_stage_descriptor_inline_uniform_blocks_(max_per_stage_descriptor_inline_uniform_blocks),
      max_per_stage_descriptor_update_after_bind_inline_uniform_blocks_(max_per_stage_descriptor_update_after_bind_inline_uniform_blocks),
      max_descriptor_set_inline_uniform_blocks_(max_descriptor_set_inline_uniform_blocks),
      max_descriptor_set_update_after_bind_inline_uniform_blocks_(max_descriptor_set_update_after_bind_inline_uniform_blocks),
      max_inline_uniform_total_size_(max_inline_uniform_total_size),
      integer_dot_product8bit_unsigned_accelerated_(integer_dot_product8bit_unsigned_accelerated),
      integer_dot_product8bit_signed_accelerated_(integer_dot_product8bit_signed_accelerated),
      integer_dot_product8bit_mixed_signedness_accelerated_(integer_dot_product8bit_mixed_signedness_accelerated),
      integer_dot_product4x8bit_packed_unsigned_accelerated_(integer_dot_product4x8bit_packed_unsigned_accelerated),
      integer_dot_product4x8bit_packed_signed_accelerated_(integer_dot_product4x8bit_packed_signed_accelerated),
      integer_dot_product4x8bit_packed_mixed_signedness_accelerated_(integer_dot_product4x8bit_packed_mixed_signedness_accelerated),
      integer_dot_product16bit_unsigned_accelerated_(integer_dot_product16bit_unsigned_accelerated),
      integer_dot_product16bit_signed_accelerated_(integer_dot_product16bit_signed_accelerated),
      integer_dot_product16bit_mixed_signedness_accelerated_(integer_dot_product16bit_mixed_signedness_accelerated),
      integer_dot_product32bit_unsigned_accelerated_(integer_dot_product32bit_unsigned_accelerated),
      integer_dot_product32bit_signed_accelerated_(integer_dot_product32bit_signed_accelerated),
      integer_dot_product32bit_mixed_signedness_accelerated_(integer_dot_product32bit_mixed_signedness_accelerated),
      integer_dot_product64bit_unsigned_accelerated_(integer_dot_product64bit_unsigned_accelerated),
      integer_dot_product64bit_signed_accelerated_(integer_dot_product64bit_signed_accelerated),
      integer_dot_product64bit_mixed_signedness_accelerated_(integer_dot_product64bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating8bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating8bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating8bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating8bit_signed_accelerated),
      integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated),
      integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated_(
        integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated),
      integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating16bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating16bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating16bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating16bit_signed_accelerated),
      integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating32bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating32bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating32bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating32bit_signed_accelerated),
      integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated),
      integer_dot_product_accumulating_saturating64bit_unsigned_accelerated_(
        integer_dot_product_accumulating_saturating64bit_unsigned_accelerated),
      integer_dot_product_accumulating_saturating64bit_signed_accelerated_(
        integer_dot_product_accumulating_saturating64bit_signed_accelerated),
      integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated_(
        integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated),
      storage_texel_buffer_offset_alignment_bytes_(storage_texel_buffer_offset_alignment_bytes),
      storage_texel_buffer_offset_single_texel_alignment_(storage_texel_buffer_offset_single_texel_alignment),
      uniform_texel_buffer_offset_alignment_bytes_(uniform_texel_buffer_offset_alignment_bytes),
      uniform_texel_buffer_offset_single_texel_alignment_(uniform_texel_buffer_offset_single_texel_alignment),
      max_buffer_size_(max_buffer_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t min_subgroup_size_;
  uint32_t max_subgroup_size_;
  uint32_t max_compute_workgroup_subgroups_;
  VkShaderStageFlags required_subgroup_size_stages_;
  uint32_t max_inline_uniform_block_size_;
  uint32_t max_per_stage_descriptor_inline_uniform_blocks_;
  uint32_t max_per_stage_descriptor_update_after_bind_inline_uniform_blocks_;
  uint32_t max_descriptor_set_inline_uniform_blocks_;
  uint32_t max_descriptor_set_update_after_bind_inline_uniform_blocks_;
  uint32_t max_inline_uniform_total_size_;
  VkBool32 integer_dot_product8bit_unsigned_accelerated_;
  VkBool32 integer_dot_product8bit_signed_accelerated_;
  VkBool32 integer_dot_product8bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product4x8bit_packed_unsigned_accelerated_;
  VkBool32 integer_dot_product4x8bit_packed_signed_accelerated_;
  VkBool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product16bit_unsigned_accelerated_;
  VkBool32 integer_dot_product16bit_signed_accelerated_;
  VkBool32 integer_dot_product16bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product32bit_unsigned_accelerated_;
  VkBool32 integer_dot_product32bit_signed_accelerated_;
  VkBool32 integer_dot_product32bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product64bit_unsigned_accelerated_;
  VkBool32 integer_dot_product64bit_signed_accelerated_;
  VkBool32 integer_dot_product64bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated_;
  VkBool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated_;
  VkDeviceSize storage_texel_buffer_offset_alignment_bytes_;
  VkBool32 storage_texel_buffer_offset_single_texel_alignment_;
  VkDeviceSize uniform_texel_buffer_offset_alignment_bytes_;
  VkBool32 uniform_texel_buffer_offset_single_texel_alignment_;
  VkDeviceSize max_buffer_size_;
};

struct PhysicalDeviceVulkan13Features {

  using native_type = VkPhysicalDeviceVulkan13Features;

  PhysicalDeviceVulkan13Features(void *next, VkBool32 robust_image_access, VkBool32 inline_uniform_block,
                                 VkBool32 descriptor_binding_inline_uniform_block_update_after_bind,
                                 VkBool32 pipeline_creation_cache_control, VkBool32 private_data,
                                 VkBool32 shader_demote_to_helper_invocation, VkBool32 shader_terminate_invocation,
                                 VkBool32 subgroup_size_control, VkBool32 compute_full_subgroups, VkBool32 synchronization2,
                                 VkBool32 texture_compression_astc_hdr, VkBool32 shader_zero_initialize_workgroup_memory,
                                 VkBool32 dynamic_rendering, VkBool32 shader_integer_dot_product, VkBool32 maintenance4)
    : next_(next), robust_image_access_(robust_image_access), inline_uniform_block_(inline_uniform_block),
      descriptor_binding_inline_uniform_block_update_after_bind_(descriptor_binding_inline_uniform_block_update_after_bind),
      pipeline_creation_cache_control_(pipeline_creation_cache_control), private_data_(private_data),
      shader_demote_to_helper_invocation_(shader_demote_to_helper_invocation), shader_terminate_invocation_(shader_terminate_invocation),
      subgroup_size_control_(subgroup_size_control), compute_full_subgroups_(compute_full_subgroups), synchronization2_(synchronization2),
      texture_compression_astc_hdr_(texture_compression_astc_hdr),
      shader_zero_initialize_workgroup_memory_(shader_zero_initialize_workgroup_memory), dynamic_rendering_(dynamic_rendering),
      shader_integer_dot_product_(shader_integer_dot_product), maintenance4_(maintenance4) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 robust_image_access_;
  VkBool32 inline_uniform_block_;
  VkBool32 descriptor_binding_inline_uniform_block_update_after_bind_;
  VkBool32 pipeline_creation_cache_control_;
  VkBool32 private_data_;
  VkBool32 shader_demote_to_helper_invocation_;
  VkBool32 shader_terminate_invocation_;
  VkBool32 subgroup_size_control_;
  VkBool32 compute_full_subgroups_;
  VkBool32 synchronization2_;
  VkBool32 texture_compression_astc_hdr_;
  VkBool32 shader_zero_initialize_workgroup_memory_;
  VkBool32 dynamic_rendering_;
  VkBool32 shader_integer_dot_product_;
  VkBool32 maintenance4_;
};

struct PhysicalDeviceVulkan12Properties {

  using native_type = VkPhysicalDeviceVulkan12Properties;

  PhysicalDeviceVulkan12Properties(
    void *next, DriverId driver_id, char driver_name[VK_MAX_DRIVER_NAME_SIZE], char driver_info[VK_MAX_DRIVER_INFO_SIZE],
    VkConformanceVersion conformance_version, ShaderFloatControlsIndependence denorm_behavior_independence,
    ShaderFloatControlsIndependence rounding_mode_independence, VkBool32 shader_signed_zero_inf_nan_preserve_float16,
    VkBool32 shader_signed_zero_inf_nan_preserve_float32, VkBool32 shader_signed_zero_inf_nan_preserve_float64,
    VkBool32 shader_denorm_preserve_float16, VkBool32 shader_denorm_preserve_float32, VkBool32 shader_denorm_preserve_float64,
    VkBool32 shader_denorm_flush_to_zero_float16, VkBool32 shader_denorm_flush_to_zero_float32,
    VkBool32 shader_denorm_flush_to_zero_float64, VkBool32 shader_rounding_mode_rtefloat16, VkBool32 shader_rounding_mode_rtefloat32,
    VkBool32 shader_rounding_mode_rtefloat64, VkBool32 shader_rounding_mode_rtzfloat16, VkBool32 shader_rounding_mode_rtzfloat32,
    VkBool32 shader_rounding_mode_rtzfloat64, uint32_t max_update_after_bind_descriptors_in_all_pools,
    VkBool32 shader_uniform_buffer_array_non_uniform_indexing_native, VkBool32 shader_sampled_image_array_non_uniform_indexing_native,
    VkBool32 shader_storage_buffer_array_non_uniform_indexing_native, VkBool32 shader_storage_image_array_non_uniform_indexing_native,
    VkBool32 shader_input_attachment_array_non_uniform_indexing_native, VkBool32 robust_buffer_access_update_after_bind,
    VkBool32 quad_divergent_implicit_lod, uint32_t max_per_stage_descriptor_update_after_bind_samplers,
    uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers,
    uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers, uint32_t max_per_stage_descriptor_update_after_bind_sampled_images,
    uint32_t max_per_stage_descriptor_update_after_bind_storage_images,
    uint32_t max_per_stage_descriptor_update_after_bind_input_attachments, uint32_t max_per_stage_update_after_bind_resources,
    uint32_t max_descriptor_set_update_after_bind_samplers, uint32_t max_descriptor_set_update_after_bind_uniform_buffers,
    uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic, uint32_t max_descriptor_set_update_after_bind_storage_buffers,
    uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic, uint32_t max_descriptor_set_update_after_bind_sampled_images,
    uint32_t max_descriptor_set_update_after_bind_storage_images, uint32_t max_descriptor_set_update_after_bind_input_attachments,
    VkResolveModeFlags supported_depth_resolve_modes, VkResolveModeFlags supported_stencil_resolve_modes, VkBool32 independent_resolve_none,
    VkBool32 independent_resolve, VkBool32 filter_minmax_single_component_formats, VkBool32 filter_minmax_image_component_mapping,
    uint64_t max_timeline_semaphore_value_difference, VkSampleCountFlags framebuffer_integer_color_sample_counts)
    : next_(next), driver_id_(driver_id), driver_name_(driver_name), driver_info_(driver_info), conformance_version_(conformance_version),
      denorm_behavior_independence_(denorm_behavior_independence), rounding_mode_independence_(rounding_mode_independence),
      shader_signed_zero_inf_nan_preserve_float16_(shader_signed_zero_inf_nan_preserve_float16),
      shader_signed_zero_inf_nan_preserve_float32_(shader_signed_zero_inf_nan_preserve_float32),
      shader_signed_zero_inf_nan_preserve_float64_(shader_signed_zero_inf_nan_preserve_float64),
      shader_denorm_preserve_float16_(shader_denorm_preserve_float16), shader_denorm_preserve_float32_(shader_denorm_preserve_float32),
      shader_denorm_preserve_float64_(shader_denorm_preserve_float64),
      shader_denorm_flush_to_zero_float16_(shader_denorm_flush_to_zero_float16),
      shader_denorm_flush_to_zero_float32_(shader_denorm_flush_to_zero_float32),
      shader_denorm_flush_to_zero_float64_(shader_denorm_flush_to_zero_float64),
      shader_rounding_mode_rtefloat16_(shader_rounding_mode_rtefloat16), shader_rounding_mode_rtefloat32_(shader_rounding_mode_rtefloat32),
      shader_rounding_mode_rtefloat64_(shader_rounding_mode_rtefloat64), shader_rounding_mode_rtzfloat16_(shader_rounding_mode_rtzfloat16),
      shader_rounding_mode_rtzfloat32_(shader_rounding_mode_rtzfloat32), shader_rounding_mode_rtzfloat64_(shader_rounding_mode_rtzfloat64),
      max_update_after_bind_descriptors_in_all_pools_(max_update_after_bind_descriptors_in_all_pools),
      shader_uniform_buffer_array_non_uniform_indexing_native_(shader_uniform_buffer_array_non_uniform_indexing_native),
      shader_sampled_image_array_non_uniform_indexing_native_(shader_sampled_image_array_non_uniform_indexing_native),
      shader_storage_buffer_array_non_uniform_indexing_native_(shader_storage_buffer_array_non_uniform_indexing_native),
      shader_storage_image_array_non_uniform_indexing_native_(shader_storage_image_array_non_uniform_indexing_native),
      shader_input_attachment_array_non_uniform_indexing_native_(shader_input_attachment_array_non_uniform_indexing_native),
      robust_buffer_access_update_after_bind_(robust_buffer_access_update_after_bind),
      quad_divergent_implicit_lod_(quad_divergent_implicit_lod),
      max_per_stage_descriptor_update_after_bind_samplers_(max_per_stage_descriptor_update_after_bind_samplers),
      max_per_stage_descriptor_update_after_bind_uniform_buffers_(max_per_stage_descriptor_update_after_bind_uniform_buffers),
      max_per_stage_descriptor_update_after_bind_storage_buffers_(max_per_stage_descriptor_update_after_bind_storage_buffers),
      max_per_stage_descriptor_update_after_bind_sampled_images_(max_per_stage_descriptor_update_after_bind_sampled_images),
      max_per_stage_descriptor_update_after_bind_storage_images_(max_per_stage_descriptor_update_after_bind_storage_images),
      max_per_stage_descriptor_update_after_bind_input_attachments_(max_per_stage_descriptor_update_after_bind_input_attachments),
      max_per_stage_update_after_bind_resources_(max_per_stage_update_after_bind_resources),
      max_descriptor_set_update_after_bind_samplers_(max_descriptor_set_update_after_bind_samplers),
      max_descriptor_set_update_after_bind_uniform_buffers_(max_descriptor_set_update_after_bind_uniform_buffers),
      max_descriptor_set_update_after_bind_uniform_buffers_dynamic_(max_descriptor_set_update_after_bind_uniform_buffers_dynamic),
      max_descriptor_set_update_after_bind_storage_buffers_(max_descriptor_set_update_after_bind_storage_buffers),
      max_descriptor_set_update_after_bind_storage_buffers_dynamic_(max_descriptor_set_update_after_bind_storage_buffers_dynamic),
      max_descriptor_set_update_after_bind_sampled_images_(max_descriptor_set_update_after_bind_sampled_images),
      max_descriptor_set_update_after_bind_storage_images_(max_descriptor_set_update_after_bind_storage_images),
      max_descriptor_set_update_after_bind_input_attachments_(max_descriptor_set_update_after_bind_input_attachments),
      supported_depth_resolve_modes_(supported_depth_resolve_modes), supported_stencil_resolve_modes_(supported_stencil_resolve_modes),
      independent_resolve_none_(independent_resolve_none), independent_resolve_(independent_resolve),
      filter_minmax_single_component_formats_(filter_minmax_single_component_formats),
      filter_minmax_image_component_mapping_(filter_minmax_image_component_mapping),
      max_timeline_semaphore_value_difference_(max_timeline_semaphore_value_difference),
      framebuffer_integer_color_sample_counts_(framebuffer_integer_color_sample_counts) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  DriverId driver_id_;
  char driver_name[VK_MAX_DRIVER_NAME_SIZE] _;
  char driver_info[VK_MAX_DRIVER_INFO_SIZE] _;
  VkConformanceVersion conformance_version_;
  ShaderFloatControlsIndependence denorm_behavior_independence_;
  ShaderFloatControlsIndependence rounding_mode_independence_;
  VkBool32 shader_signed_zero_inf_nan_preserve_float16_;
  VkBool32 shader_signed_zero_inf_nan_preserve_float32_;
  VkBool32 shader_signed_zero_inf_nan_preserve_float64_;
  VkBool32 shader_denorm_preserve_float16_;
  VkBool32 shader_denorm_preserve_float32_;
  VkBool32 shader_denorm_preserve_float64_;
  VkBool32 shader_denorm_flush_to_zero_float16_;
  VkBool32 shader_denorm_flush_to_zero_float32_;
  VkBool32 shader_denorm_flush_to_zero_float64_;
  VkBool32 shader_rounding_mode_rtefloat16_;
  VkBool32 shader_rounding_mode_rtefloat32_;
  VkBool32 shader_rounding_mode_rtefloat64_;
  VkBool32 shader_rounding_mode_rtzfloat16_;
  VkBool32 shader_rounding_mode_rtzfloat32_;
  VkBool32 shader_rounding_mode_rtzfloat64_;
  uint32_t max_update_after_bind_descriptors_in_all_pools_;
  VkBool32 shader_uniform_buffer_array_non_uniform_indexing_native_;
  VkBool32 shader_sampled_image_array_non_uniform_indexing_native_;
  VkBool32 shader_storage_buffer_array_non_uniform_indexing_native_;
  VkBool32 shader_storage_image_array_non_uniform_indexing_native_;
  VkBool32 shader_input_attachment_array_non_uniform_indexing_native_;
  VkBool32 robust_buffer_access_update_after_bind_;
  VkBool32 quad_divergent_implicit_lod_;
  uint32_t max_per_stage_descriptor_update_after_bind_samplers_;
  uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_sampled_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_input_attachments_;
  uint32_t max_per_stage_update_after_bind_resources_;
  uint32_t max_descriptor_set_update_after_bind_samplers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_sampled_images_;
  uint32_t max_descriptor_set_update_after_bind_storage_images_;
  uint32_t max_descriptor_set_update_after_bind_input_attachments_;
  VkResolveModeFlags supported_depth_resolve_modes_;
  VkResolveModeFlags supported_stencil_resolve_modes_;
  VkBool32 independent_resolve_none_;
  VkBool32 independent_resolve_;
  VkBool32 filter_minmax_single_component_formats_;
  VkBool32 filter_minmax_image_component_mapping_;
  uint64_t max_timeline_semaphore_value_difference_;
  VkSampleCountFlags framebuffer_integer_color_sample_counts_;
};

struct PhysicalDeviceVulkan12Features {

  using native_type = VkPhysicalDeviceVulkan12Features;

  PhysicalDeviceVulkan12Features(
    void *next, VkBool32 sampler_mirror_clamp_to_edge, VkBool32 draw_indirect_count, VkBool32 storage_buffer8bit_access,
    VkBool32 uniform_and_storage_buffer8bit_access, VkBool32 storage_push_constant8, VkBool32 shader_buffer_int64atomics,
    VkBool32 shader_shared_int64atomics, VkBool32 shader_float16, VkBool32 shader_int8, VkBool32 descriptor_indexing,
    VkBool32 shader_input_attachment_array_dynamic_indexing, VkBool32 shader_uniform_texel_buffer_array_dynamic_indexing,
    VkBool32 shader_storage_texel_buffer_array_dynamic_indexing, VkBool32 shader_uniform_buffer_array_non_uniform_indexing,
    VkBool32 shader_sampled_image_array_non_uniform_indexing, VkBool32 shader_storage_buffer_array_non_uniform_indexing,
    VkBool32 shader_storage_image_array_non_uniform_indexing, VkBool32 shader_input_attachment_array_non_uniform_indexing,
    VkBool32 shader_uniform_texel_buffer_array_non_uniform_indexing, VkBool32 shader_storage_texel_buffer_array_non_uniform_indexing,
    VkBool32 descriptor_binding_uniform_buffer_update_after_bind, VkBool32 descriptor_binding_sampled_image_update_after_bind,
    VkBool32 descriptor_binding_storage_image_update_after_bind, VkBool32 descriptor_binding_storage_buffer_update_after_bind,
    VkBool32 descriptor_binding_uniform_texel_buffer_update_after_bind, VkBool32 descriptor_binding_storage_texel_buffer_update_after_bind,
    VkBool32 descriptor_binding_update_unused_while_pending, VkBool32 descriptor_binding_partially_bound,
    VkBool32 descriptor_binding_variable_descriptor_count, VkBool32 runtime_descriptor_array, VkBool32 sampler_filter_minmax,
    VkBool32 scalar_block_layout, VkBool32 imageless_framebuffer, VkBool32 uniform_buffer_standard_layout,
    VkBool32 shader_subgroup_extended_types, VkBool32 separate_depth_stencil_layouts, VkBool32 host_query_reset,
    VkBool32 timeline_semaphore, VkBool32 buffer_device_address, VkBool32 buffer_device_address_capture_replay,
    VkBool32 buffer_device_address_multi_device, VkBool32 vulkan_memory_model, VkBool32 vulkan_memory_model_device_scope,
    VkBool32 vulkan_memory_model_availability_visibility_chains, VkBool32 shader_output_viewport_index, VkBool32 shader_output_layer,
    VkBool32 subgroup_broadcast_dynamic_id)
    : next_(next), sampler_mirror_clamp_to_edge_(sampler_mirror_clamp_to_edge), draw_indirect_count_(draw_indirect_count),
      storage_buffer8bit_access_(storage_buffer8bit_access), uniform_and_storage_buffer8bit_access_(uniform_and_storage_buffer8bit_access),
      storage_push_constant8_(storage_push_constant8), shader_buffer_int64atomics_(shader_buffer_int64atomics),
      shader_shared_int64atomics_(shader_shared_int64atomics), shader_float16_(shader_float16), shader_int8_(shader_int8),
      descriptor_indexing_(descriptor_indexing),
      shader_input_attachment_array_dynamic_indexing_(shader_input_attachment_array_dynamic_indexing),
      shader_uniform_texel_buffer_array_dynamic_indexing_(shader_uniform_texel_buffer_array_dynamic_indexing),
      shader_storage_texel_buffer_array_dynamic_indexing_(shader_storage_texel_buffer_array_dynamic_indexing),
      shader_uniform_buffer_array_non_uniform_indexing_(shader_uniform_buffer_array_non_uniform_indexing),
      shader_sampled_image_array_non_uniform_indexing_(shader_sampled_image_array_non_uniform_indexing),
      shader_storage_buffer_array_non_uniform_indexing_(shader_storage_buffer_array_non_uniform_indexing),
      shader_storage_image_array_non_uniform_indexing_(shader_storage_image_array_non_uniform_indexing),
      shader_input_attachment_array_non_uniform_indexing_(shader_input_attachment_array_non_uniform_indexing),
      shader_uniform_texel_buffer_array_non_uniform_indexing_(shader_uniform_texel_buffer_array_non_uniform_indexing),
      shader_storage_texel_buffer_array_non_uniform_indexing_(shader_storage_texel_buffer_array_non_uniform_indexing),
      descriptor_binding_uniform_buffer_update_after_bind_(descriptor_binding_uniform_buffer_update_after_bind),
      descriptor_binding_sampled_image_update_after_bind_(descriptor_binding_sampled_image_update_after_bind),
      descriptor_binding_storage_image_update_after_bind_(descriptor_binding_storage_image_update_after_bind),
      descriptor_binding_storage_buffer_update_after_bind_(descriptor_binding_storage_buffer_update_after_bind),
      descriptor_binding_uniform_texel_buffer_update_after_bind_(descriptor_binding_uniform_texel_buffer_update_after_bind),
      descriptor_binding_storage_texel_buffer_update_after_bind_(descriptor_binding_storage_texel_buffer_update_after_bind),
      descriptor_binding_update_unused_while_pending_(descriptor_binding_update_unused_while_pending),
      descriptor_binding_partially_bound_(descriptor_binding_partially_bound),
      descriptor_binding_variable_descriptor_count_(descriptor_binding_variable_descriptor_count),
      runtime_descriptor_array_(runtime_descriptor_array), sampler_filter_minmax_(sampler_filter_minmax),
      scalar_block_layout_(scalar_block_layout), imageless_framebuffer_(imageless_framebuffer),
      uniform_buffer_standard_layout_(uniform_buffer_standard_layout), shader_subgroup_extended_types_(shader_subgroup_extended_types),
      separate_depth_stencil_layouts_(separate_depth_stencil_layouts), host_query_reset_(host_query_reset),
      timeline_semaphore_(timeline_semaphore), buffer_device_address_(buffer_device_address),
      buffer_device_address_capture_replay_(buffer_device_address_capture_replay),
      buffer_device_address_multi_device_(buffer_device_address_multi_device), vulkan_memory_model_(vulkan_memory_model),
      vulkan_memory_model_device_scope_(vulkan_memory_model_device_scope),
      vulkan_memory_model_availability_visibility_chains_(vulkan_memory_model_availability_visibility_chains),
      shader_output_viewport_index_(shader_output_viewport_index), shader_output_layer_(shader_output_layer),
      subgroup_broadcast_dynamic_id_(subgroup_broadcast_dynamic_id) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 sampler_mirror_clamp_to_edge_;
  VkBool32 draw_indirect_count_;
  VkBool32 storage_buffer8bit_access_;
  VkBool32 uniform_and_storage_buffer8bit_access_;
  VkBool32 storage_push_constant8_;
  VkBool32 shader_buffer_int64atomics_;
  VkBool32 shader_shared_int64atomics_;
  VkBool32 shader_float16_;
  VkBool32 shader_int8_;
  VkBool32 descriptor_indexing_;
  VkBool32 shader_input_attachment_array_dynamic_indexing_;
  VkBool32 shader_uniform_texel_buffer_array_dynamic_indexing_;
  VkBool32 shader_storage_texel_buffer_array_dynamic_indexing_;
  VkBool32 shader_uniform_buffer_array_non_uniform_indexing_;
  VkBool32 shader_sampled_image_array_non_uniform_indexing_;
  VkBool32 shader_storage_buffer_array_non_uniform_indexing_;
  VkBool32 shader_storage_image_array_non_uniform_indexing_;
  VkBool32 shader_input_attachment_array_non_uniform_indexing_;
  VkBool32 shader_uniform_texel_buffer_array_non_uniform_indexing_;
  VkBool32 shader_storage_texel_buffer_array_non_uniform_indexing_;
  VkBool32 descriptor_binding_uniform_buffer_update_after_bind_;
  VkBool32 descriptor_binding_sampled_image_update_after_bind_;
  VkBool32 descriptor_binding_storage_image_update_after_bind_;
  VkBool32 descriptor_binding_storage_buffer_update_after_bind_;
  VkBool32 descriptor_binding_uniform_texel_buffer_update_after_bind_;
  VkBool32 descriptor_binding_storage_texel_buffer_update_after_bind_;
  VkBool32 descriptor_binding_update_unused_while_pending_;
  VkBool32 descriptor_binding_partially_bound_;
  VkBool32 descriptor_binding_variable_descriptor_count_;
  VkBool32 runtime_descriptor_array_;
  VkBool32 sampler_filter_minmax_;
  VkBool32 scalar_block_layout_;
  VkBool32 imageless_framebuffer_;
  VkBool32 uniform_buffer_standard_layout_;
  VkBool32 shader_subgroup_extended_types_;
  VkBool32 separate_depth_stencil_layouts_;
  VkBool32 host_query_reset_;
  VkBool32 timeline_semaphore_;
  VkBool32 buffer_device_address_;
  VkBool32 buffer_device_address_capture_replay_;
  VkBool32 buffer_device_address_multi_device_;
  VkBool32 vulkan_memory_model_;
  VkBool32 vulkan_memory_model_device_scope_;
  VkBool32 vulkan_memory_model_availability_visibility_chains_;
  VkBool32 shader_output_viewport_index_;
  VkBool32 shader_output_layer_;
  VkBool32 subgroup_broadcast_dynamic_id_;
};

struct PhysicalDevicePipelineCreationCacheControlFeatures {

  using native_type = VkPhysicalDevicePipelineCreationCacheControlFeatures;

  PhysicalDevicePipelineCreationCacheControlFeatures(void *next, VkBool32 pipeline_creation_cache_control)
    : next_(next), pipeline_creation_cache_control_(pipeline_creation_cache_control) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_creation_cache_control_;
};

struct DepthBiasRepresentationInfoEXT {

  using native_type = VkDepthBiasRepresentationInfoEXT;

  DepthBiasRepresentationInfoEXT(const void *next, DepthBiasRepresentation depth_bias_representation, VkBool32 depth_bias_exact)
    : next_(next), depth_bias_representation_(depth_bias_representation), depth_bias_exact_(depth_bias_exact) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DepthBiasRepresentation depth_bias_representation_;
  VkBool32 depth_bias_exact_;
};

struct PipelineRasterizationLineStateCreateInfoKHR {

  using native_type = VkPipelineRasterizationLineStateCreateInfoKHR;

  PipelineRasterizationLineStateCreateInfoKHR(const void *next, LineRasterizationMode line_rasterization_mode,
                                              VkBool32 stippled_line_enable, uint32_t line_stipple_factor, uint16_t line_stipple_pattern)
    : next_(next), line_rasterization_mode_(line_rasterization_mode), stippled_line_enable_(stippled_line_enable),
      line_stipple_factor_(line_stipple_factor), line_stipple_pattern_(line_stipple_pattern) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  LineRasterizationMode line_rasterization_mode_;
  VkBool32 stippled_line_enable_;
  uint32_t line_stipple_factor_;
  uint16_t line_stipple_pattern_;
};

struct PhysicalDeviceLineRasterizationPropertiesKHR {

  using native_type = VkPhysicalDeviceLineRasterizationPropertiesKHR;

  PhysicalDeviceLineRasterizationPropertiesKHR(void *next, uint32_t line_sub_pixel_precision_bits)
    : next_(next), line_sub_pixel_precision_bits_(line_sub_pixel_precision_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t line_sub_pixel_precision_bits_;
};

struct SamplerCubicWeightsCreateInfoQCOM {

  using native_type = VkSamplerCubicWeightsCreateInfoQCOM;

  SamplerCubicWeightsCreateInfoQCOM(const void *next, CubicFilterWeights cubic_weights) : next_(next), cubic_weights_(cubic_weights) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  CubicFilterWeights cubic_weights_;
};

struct RenderPassSubpassFeedbackCreateInfoEXT {

  using native_type = VkRenderPassSubpassFeedbackCreateInfoEXT;

  RenderPassSubpassFeedbackCreateInfoEXT(const void *next, VkRenderPassSubpassFeedbackInfoEXT *subpass_feedback)
    : next_(next), subpass_feedback_(subpass_feedback) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderPassSubpassFeedbackInfoEXT *subpass_feedback_;
};

struct PhysicalDeviceLineRasterizationFeaturesKHR {

  using native_type = VkPhysicalDeviceLineRasterizationFeaturesKHR;

  PhysicalDeviceLineRasterizationFeaturesKHR(void *next, VkBool32 rectangular_lines, VkBool32 bresenham_lines, VkBool32 smooth_lines,
                                             VkBool32 stippled_rectangular_lines, VkBool32 stippled_bresenham_lines,
                                             VkBool32 stippled_smooth_lines)
    : next_(next), rectangular_lines_(rectangular_lines), bresenham_lines_(bresenham_lines), smooth_lines_(smooth_lines),
      stippled_rectangular_lines_(stippled_rectangular_lines), stippled_bresenham_lines_(stippled_bresenham_lines),
      stippled_smooth_lines_(stippled_smooth_lines) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 rectangular_lines_;
  VkBool32 bresenham_lines_;
  VkBool32 smooth_lines_;
  VkBool32 stippled_rectangular_lines_;
  VkBool32 stippled_bresenham_lines_;
  VkBool32 stippled_smooth_lines_;
};

struct SemaphoreSubmitInfo {

  using native_type = VkSemaphoreSubmitInfo;

  SemaphoreSubmitInfo(const void *next, VkSemaphore semaphore, uint64_t value, VkPipelineStageFlags2 stage_mask, uint32_t device_index)
    : next_(next), semaphore_(semaphore), value_(value), stage_mask_(stage_mask), device_index_(device_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  uint64_t value_;
  VkPipelineStageFlags2 stage_mask_;
  uint32_t device_index_;
};

struct DeviceMemoryOpaqueCaptureAddressInfo {

  using native_type = VkDeviceMemoryOpaqueCaptureAddressInfo;

  DeviceMemoryOpaqueCaptureAddressInfo(const void *next, VkDeviceMemory memory) : next_(next), memory_(memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
};

struct PhysicalDeviceSubpassShadingPropertiesHUAWEI {

  using native_type = VkPhysicalDeviceSubpassShadingPropertiesHUAWEI;

  PhysicalDeviceSubpassShadingPropertiesHUAWEI(void *next, uint32_t max_subpass_shading_workgroup_size_aspect_ratio)
    : next_(next), max_subpass_shading_workgroup_size_aspect_ratio_(max_subpass_shading_workgroup_size_aspect_ratio) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_subpass_shading_workgroup_size_aspect_ratio_;
};

struct VideoEncodeQualityLevelInfoKHR {

  using native_type = VkVideoEncodeQualityLevelInfoKHR;

  VideoEncodeQualityLevelInfoKHR(const void *next, uint32_t quality_level) : next_(next), quality_level_(quality_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t quality_level_;
};

struct SubpassShadingPipelineCreateInfoHUAWEI {

  using native_type = VkSubpassShadingPipelineCreateInfoHUAWEI;

  SubpassShadingPipelineCreateInfoHUAWEI(void *next, VkRenderPass render_pass, uint32_t subpass)
    : next_(next), render_pass_(render_pass), subpass_(subpass) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkRenderPass render_pass_;
  uint32_t subpass_;
};

struct MemoryBarrier2 {

  using native_type = VkMemoryBarrier2;

  MemoryBarrier2(const void *next, VkPipelineStageFlags2 src_stage_mask, VkAccessFlags2 src_access_mask,
                 VkPipelineStageFlags2 dst_stage_mask, VkAccessFlags2 dst_access_mask)
    : next_(next), src_stage_mask_(src_stage_mask), src_access_mask_(src_access_mask), dst_stage_mask_(dst_stage_mask),
      dst_access_mask_(dst_access_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineStageFlags2 src_stage_mask_;
  VkAccessFlags2 src_access_mask_;
  VkPipelineStageFlags2 dst_stage_mask_;
  VkAccessFlags2 dst_access_mask_;
};

struct PipelineShaderStageRequiredSubgroupSizeCreateInfo {

  using native_type = VkPipelineShaderStageRequiredSubgroupSizeCreateInfo;

  PipelineShaderStageRequiredSubgroupSizeCreateInfo(void *next, uint32_t required_subgroup_size)
    : next_(next), required_subgroup_size_(required_subgroup_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t required_subgroup_size_;
};

struct PhysicalDeviceSubgroupSizeControlProperties {

  using native_type = VkPhysicalDeviceSubgroupSizeControlProperties;

  PhysicalDeviceSubgroupSizeControlProperties(void *next, uint32_t min_subgroup_size, uint32_t max_subgroup_size,
                                              uint32_t max_compute_workgroup_subgroups, VkShaderStageFlags required_subgroup_size_stages)
    : next_(next), min_subgroup_size_(min_subgroup_size), max_subgroup_size_(max_subgroup_size),
      max_compute_workgroup_subgroups_(max_compute_workgroup_subgroups), required_subgroup_size_stages_(required_subgroup_size_stages) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t min_subgroup_size_;
  uint32_t max_subgroup_size_;
  uint32_t max_compute_workgroup_subgroups_;
  VkShaderStageFlags required_subgroup_size_stages_;
};

struct VideoEncodeH265ProfileInfoKHR {

  using native_type = VkVideoEncodeH265ProfileInfoKHR;

  VideoEncodeH265ProfileInfoKHR(const void *next, StdVideoH265ProfileIdc std_profile_idc) : next_(next), std_profile_idc_(std_profile_idc) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  StdVideoH265ProfileIdc std_profile_idc_;
};

struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT {

  using native_type = VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;

  PhysicalDeviceTexelBufferAlignmentFeaturesEXT(void *next, VkBool32 texel_buffer_alignment)
    : next_(next), texel_buffer_alignment_(texel_buffer_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 texel_buffer_alignment_;
};

struct PipelineExecutableInternalRepresentationKHR {

  using native_type = VkPipelineExecutableInternalRepresentationKHR;

  PipelineExecutableInternalRepresentationKHR(void *next, char name[VK_MAX_DESCRIPTION_SIZE], char description[VK_MAX_DESCRIPTION_SIZE],
                                              VkBool32 is_text, size_t data_size, void *data)
    : next_(next), name_(name), description_(description), is_text_(is_text), data_size_(data_size), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  char name[VK_MAX_DESCRIPTION_SIZE] _;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
  VkBool32 is_text_;
  size_t data_size_;
  void *data_;
};

struct PipelineExecutableStatisticKHR {

  using native_type = VkPipelineExecutableStatisticKHR;

  PipelineExecutableStatisticKHR(void *next, char name[VK_MAX_DESCRIPTION_SIZE], char description[VK_MAX_DESCRIPTION_SIZE],
                                 PipelineExecutableStatisticFormat format, VkPipelineExecutableStatisticValueKHR value)
    : next_(next), name_(name), description_(description), format_(format), value_(value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  char name[VK_MAX_DESCRIPTION_SIZE] _;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
  PipelineExecutableStatisticFormat format_;
  VkPipelineExecutableStatisticValueKHR value_;
};

struct PhysicalDeviceInheritedViewportScissorFeaturesNV {

  using native_type = VkPhysicalDeviceInheritedViewportScissorFeaturesNV;

  PhysicalDeviceInheritedViewportScissorFeaturesNV(void *next, VkBool32 inherited_viewport_scissor2d)
    : next_(next), inherited_viewport_scissor2d_(inherited_viewport_scissor2d) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 inherited_viewport_scissor2d_;
};

struct PipelineExecutablePropertiesKHR {

  using native_type = VkPipelineExecutablePropertiesKHR;

  PipelineExecutablePropertiesKHR(void *next, VkShaderStageFlags stages, char name[VK_MAX_DESCRIPTION_SIZE],
                                  char description[VK_MAX_DESCRIPTION_SIZE], uint32_t subgroup_size)
    : next_(next), stages_(stages), name_(name), description_(description), subgroup_size_(subgroup_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkShaderStageFlags stages_;
  char name[VK_MAX_DESCRIPTION_SIZE] _;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
  uint32_t subgroup_size_;
};

struct PipelineInfoKHR {

  using native_type = VkPipelineInfoKHR;

  PipelineInfoKHR(const void *next, VkPipeline pipeline) : next_(next), pipeline_(pipeline) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipeline pipeline_;
};

struct PipelineCompilerControlCreateInfoAMD {

  using native_type = VkPipelineCompilerControlCreateInfoAMD;

  PipelineCompilerControlCreateInfoAMD(const void *next, VkPipelineCompilerControlFlagsAMD compiler_control_flags)
    : next_(next), compiler_control_flags_(compiler_control_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCompilerControlFlagsAMD compiler_control_flags_;
};

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR {

  using native_type = VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;

  PhysicalDevicePipelineExecutablePropertiesFeaturesKHR(void *next, VkBool32 pipeline_executable_info)
    : next_(next), pipeline_executable_info_(pipeline_executable_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_executable_info_;
};

struct SRTDataNV {

  using native_type = VkSRTDataNV;

  SRTDataNV(float sx, float a, float b, float pvx, float sy, float c, float pvy, float sz, float pvz, float qx, float qy, float qz,
            float qw, float tx, float ty, float tz)
    : sx_(sx), a_(a), b_(b), pvx_(pvx), sy_(sy), c_(c), pvy_(pvy), sz_(sz), pvz_(pvz), qx_(qx), qy_(qy), qz_(qz), qw_(qw), tx_(tx), ty_(ty),
      tz_(tz) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float sx_;
  float a_;
  float b_;
  float pvx_;
  float sy_;
  float c_;
  float pvy_;
  float sz_;
  float pvz_;
  float qx_;
  float qy_;
  float qz_;
  float qw_;
  float tx_;
  float ty_;
  float tz_;
};

struct AttachmentReferenceStencilLayout {

  using native_type = VkAttachmentReferenceStencilLayout;

  AttachmentReferenceStencilLayout(void *next, ImageLayout stencil_layout) : next_(next), stencil_layout_(stencil_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  ImageLayout stencil_layout_;
};

struct PhysicalDeviceDescriptorBufferPropertiesEXT {

  using native_type = VkPhysicalDeviceDescriptorBufferPropertiesEXT;

  PhysicalDeviceDescriptorBufferPropertiesEXT(
    void *next, VkBool32 combined_image_sampler_descriptor_single_array, VkBool32 bufferless_push_descriptors,
    VkBool32 allow_sampler_image_view_post_submit_creation, VkDeviceSize descriptor_buffer_offset_alignment,
    uint32_t max_descriptor_buffer_bindings, uint32_t max_resource_descriptor_buffer_bindings,
    uint32_t max_sampler_descriptor_buffer_bindings, uint32_t max_embedded_immutable_sampler_bindings,
    uint32_t max_embedded_immutable_samplers, size_t buffer_capture_replay_descriptor_data_size,
    size_t image_capture_replay_descriptor_data_size, size_t image_view_capture_replay_descriptor_data_size,
    size_t sampler_capture_replay_descriptor_data_size, size_t acceleration_structure_capture_replay_descriptor_data_size,
    size_t sampler_descriptor_size, size_t combined_image_sampler_descriptor_size, size_t sampled_image_descriptor_size,
    size_t storage_image_descriptor_size, size_t uniform_texel_buffer_descriptor_size, size_t robust_uniform_texel_buffer_descriptor_size,
    size_t storage_texel_buffer_descriptor_size, size_t robust_storage_texel_buffer_descriptor_size, size_t uniform_buffer_descriptor_size,
    size_t robust_uniform_buffer_descriptor_size, size_t storage_buffer_descriptor_size, size_t robust_storage_buffer_descriptor_size,
    size_t input_attachment_descriptor_size, size_t acceleration_structure_descriptor_size,
    VkDeviceSize max_sampler_descriptor_buffer_range, VkDeviceSize max_resource_descriptor_buffer_range,
    VkDeviceSize sampler_descriptor_buffer_address_space_size, VkDeviceSize resource_descriptor_buffer_address_space_size,
    VkDeviceSize descriptor_buffer_address_space_size)
    : next_(next), combined_image_sampler_descriptor_single_array_(combined_image_sampler_descriptor_single_array),
      bufferless_push_descriptors_(bufferless_push_descriptors),
      allow_sampler_image_view_post_submit_creation_(allow_sampler_image_view_post_submit_creation),
      descriptor_buffer_offset_alignment_(descriptor_buffer_offset_alignment),
      max_descriptor_buffer_bindings_(max_descriptor_buffer_bindings),
      max_resource_descriptor_buffer_bindings_(max_resource_descriptor_buffer_bindings),
      max_sampler_descriptor_buffer_bindings_(max_sampler_descriptor_buffer_bindings),
      max_embedded_immutable_sampler_bindings_(max_embedded_immutable_sampler_bindings),
      max_embedded_immutable_samplers_(max_embedded_immutable_samplers),
      buffer_capture_replay_descriptor_data_size_(buffer_capture_replay_descriptor_data_size),
      image_capture_replay_descriptor_data_size_(image_capture_replay_descriptor_data_size),
      image_view_capture_replay_descriptor_data_size_(image_view_capture_replay_descriptor_data_size),
      sampler_capture_replay_descriptor_data_size_(sampler_capture_replay_descriptor_data_size),
      acceleration_structure_capture_replay_descriptor_data_size_(acceleration_structure_capture_replay_descriptor_data_size),
      sampler_descriptor_size_(sampler_descriptor_size), combined_image_sampler_descriptor_size_(combined_image_sampler_descriptor_size),
      sampled_image_descriptor_size_(sampled_image_descriptor_size), storage_image_descriptor_size_(storage_image_descriptor_size),
      uniform_texel_buffer_descriptor_size_(uniform_texel_buffer_descriptor_size),
      robust_uniform_texel_buffer_descriptor_size_(robust_uniform_texel_buffer_descriptor_size),
      storage_texel_buffer_descriptor_size_(storage_texel_buffer_descriptor_size),
      robust_storage_texel_buffer_descriptor_size_(robust_storage_texel_buffer_descriptor_size),
      uniform_buffer_descriptor_size_(uniform_buffer_descriptor_size),
      robust_uniform_buffer_descriptor_size_(robust_uniform_buffer_descriptor_size),
      storage_buffer_descriptor_size_(storage_buffer_descriptor_size),
      robust_storage_buffer_descriptor_size_(robust_storage_buffer_descriptor_size),
      input_attachment_descriptor_size_(input_attachment_descriptor_size),
      acceleration_structure_descriptor_size_(acceleration_structure_descriptor_size),
      max_sampler_descriptor_buffer_range_(max_sampler_descriptor_buffer_range),
      max_resource_descriptor_buffer_range_(max_resource_descriptor_buffer_range),
      sampler_descriptor_buffer_address_space_size_(sampler_descriptor_buffer_address_space_size),
      resource_descriptor_buffer_address_space_size_(resource_descriptor_buffer_address_space_size),
      descriptor_buffer_address_space_size_(descriptor_buffer_address_space_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 combined_image_sampler_descriptor_single_array_;
  VkBool32 bufferless_push_descriptors_;
  VkBool32 allow_sampler_image_view_post_submit_creation_;
  VkDeviceSize descriptor_buffer_offset_alignment_;
  uint32_t max_descriptor_buffer_bindings_;
  uint32_t max_resource_descriptor_buffer_bindings_;
  uint32_t max_sampler_descriptor_buffer_bindings_;
  uint32_t max_embedded_immutable_sampler_bindings_;
  uint32_t max_embedded_immutable_samplers_;
  size_t buffer_capture_replay_descriptor_data_size_;
  size_t image_capture_replay_descriptor_data_size_;
  size_t image_view_capture_replay_descriptor_data_size_;
  size_t sampler_capture_replay_descriptor_data_size_;
  size_t acceleration_structure_capture_replay_descriptor_data_size_;
  size_t sampler_descriptor_size_;
  size_t combined_image_sampler_descriptor_size_;
  size_t sampled_image_descriptor_size_;
  size_t storage_image_descriptor_size_;
  size_t uniform_texel_buffer_descriptor_size_;
  size_t robust_uniform_texel_buffer_descriptor_size_;
  size_t storage_texel_buffer_descriptor_size_;
  size_t robust_storage_texel_buffer_descriptor_size_;
  size_t uniform_buffer_descriptor_size_;
  size_t robust_uniform_buffer_descriptor_size_;
  size_t storage_buffer_descriptor_size_;
  size_t robust_storage_buffer_descriptor_size_;
  size_t input_attachment_descriptor_size_;
  size_t acceleration_structure_descriptor_size_;
  VkDeviceSize max_sampler_descriptor_buffer_range_;
  VkDeviceSize max_resource_descriptor_buffer_range_;
  VkDeviceSize sampler_descriptor_buffer_address_space_size_;
  VkDeviceSize resource_descriptor_buffer_address_space_size_;
  VkDeviceSize descriptor_buffer_address_space_size_;
};

struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures {

  using native_type = VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;

  PhysicalDeviceSeparateDepthStencilLayoutsFeatures(void *next, VkBool32 separate_depth_stencil_layouts)
    : next_(next), separate_depth_stencil_layouts_(separate_depth_stencil_layouts) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 separate_depth_stencil_layouts_;
};

struct ExportMetalObjectCreateInfoEXT {

  using native_type = VkExportMetalObjectCreateInfoEXT;

  ExportMetalObjectCreateInfoEXT(const void *next, ExportMetalObjectTypeMaskBit export_object_type)
    : next_(next), export_object_type_(export_object_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExportMetalObjectTypeMaskBit export_object_type_;
};

struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT {

  using native_type = VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;

  PhysicalDeviceFragmentShaderInterlockFeaturesEXT(void *next, VkBool32 fragment_shader_sample_interlock,
                                                   VkBool32 fragment_shader_pixel_interlock,
                                                   VkBool32 fragment_shader_shading_rate_interlock)
    : next_(next), fragment_shader_sample_interlock_(fragment_shader_sample_interlock),
      fragment_shader_pixel_interlock_(fragment_shader_pixel_interlock),
      fragment_shader_shading_rate_interlock_(fragment_shader_shading_rate_interlock) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 fragment_shader_sample_interlock_;
  VkBool32 fragment_shader_pixel_interlock_;
  VkBool32 fragment_shader_shading_rate_interlock_;
};

struct ImageCompressionPropertiesEXT {

  using native_type = VkImageCompressionPropertiesEXT;

  ImageCompressionPropertiesEXT(void *next, VkImageCompressionFlagsEXT image_compression_flags,
                                VkImageCompressionFixedRateFlagsEXT image_compression_fixed_rate_flags)
    : next_(next), image_compression_flags_(image_compression_flags),
      image_compression_fixed_rate_flags_(image_compression_fixed_rate_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkImageCompressionFlagsEXT image_compression_flags_;
  VkImageCompressionFixedRateFlagsEXT image_compression_fixed_rate_flags_;
};

struct PhysicalDeviceShaderSMBuiltinsFeaturesNV {

  using native_type = VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;

  PhysicalDeviceShaderSMBuiltinsFeaturesNV(void *next, VkBool32 shader_smbuiltins) : next_(next), shader_smbuiltins_(shader_smbuiltins) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_smbuiltins_;
};

struct PhysicalDeviceIndexTypeUint8FeaturesKHR {

  using native_type = VkPhysicalDeviceIndexTypeUint8FeaturesKHR;

  PhysicalDeviceIndexTypeUint8FeaturesKHR(void *next, VkBool32 index_type_uint8) : next_(next), index_type_uint8_(index_type_uint8) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 index_type_uint8_;
};

struct PerformanceConfigurationAcquireInfoINTEL {

  using native_type = VkPerformanceConfigurationAcquireInfoINTEL;

  PerformanceConfigurationAcquireInfoINTEL(const void *next, PerformanceConfigurationType type) : next_(next), type_(type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  PerformanceConfigurationType type_;
};

struct PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT {

  using native_type = VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;

  PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(void *next, VkBool32 multisampled_render_to_single_sampled)
    : next_(next), multisampled_render_to_single_sampled_(multisampled_render_to_single_sampled) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 multisampled_render_to_single_sampled_;
};

struct PerformanceStreamMarkerInfoINTEL {

  using native_type = VkPerformanceStreamMarkerInfoINTEL;

  PerformanceStreamMarkerInfoINTEL(const void *next, uint32_t marker) : next_(next), marker_(marker) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t marker_;
};

struct PerformanceMarkerInfoINTEL {

  using native_type = VkPerformanceMarkerInfoINTEL;

  PerformanceMarkerInfoINTEL(const void *next, uint64_t marker) : next_(next), marker_(marker) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t marker_;
};

struct VertexInputBindingDescription2EXT {

  using native_type = VkVertexInputBindingDescription2EXT;

  VertexInputBindingDescription2EXT(void *next, uint32_t binding, uint32_t stride, VertexInputRate input_rate, uint32_t divisor)
    : next_(next), binding_(binding), stride_(stride), input_rate_(input_rate), divisor_(divisor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t binding_;
  uint32_t stride_;
  VertexInputRate input_rate_;
  uint32_t divisor_;
};

struct InitializePerformanceApiInfoINTEL {

  using native_type = VkInitializePerformanceApiInfoINTEL;

  InitializePerformanceApiInfoINTEL(const void *next, void *user_data) : next_(next), user_data_(user_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  void *user_data_;
};

struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {

  using native_type = VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;

  PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(void *next, VkBool32 shader_integer_functions2)
    : next_(next), shader_integer_functions2_(shader_integer_functions2) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_integer_functions2_;
};

struct CuLaunchInfoNVX {

  using native_type = VkCuLaunchInfoNVX;

  CuLaunchInfoNVX(const void *next, VkCuFunctionNVX function, uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                  uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z, uint32_t shared_mem_bytes, size_t param_count,
                  const void *const *params, size_t extra_count, const void *const *extras)
    : next_(next), function_(function), grid_dim_x_(grid_dim_x), grid_dim_y_(grid_dim_y), grid_dim_z_(grid_dim_z),
      block_dim_x_(block_dim_x), block_dim_y_(block_dim_y), block_dim_z_(block_dim_z), shared_mem_bytes_(shared_mem_bytes),
      param_count_(param_count), params_(params), extra_count_(extra_count), extras_(extras) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCuFunctionNVX function_;
  uint32_t grid_dim_x_;
  uint32_t grid_dim_y_;
  uint32_t grid_dim_z_;
  uint32_t block_dim_x_;
  uint32_t block_dim_y_;
  uint32_t block_dim_z_;
  uint32_t shared_mem_bytes_;
  size_t param_count_;
  const void *const *params_;
  size_t extra_count_;
  const void *const *extras_;
};

struct FramebufferMixedSamplesCombinationNV {

  using native_type = VkFramebufferMixedSamplesCombinationNV;

  FramebufferMixedSamplesCombinationNV(void *next, CoverageReductionMode coverage_reduction_mode, SampleCountMaskBit rasterization_samples,
                                       VkSampleCountFlags depth_stencil_samples, VkSampleCountFlags color_samples)
    : next_(next), coverage_reduction_mode_(coverage_reduction_mode), rasterization_samples_(rasterization_samples),
      depth_stencil_samples_(depth_stencil_samples), color_samples_(color_samples) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  CoverageReductionMode coverage_reduction_mode_;
  SampleCountMaskBit rasterization_samples_;
  VkSampleCountFlags depth_stencil_samples_;
  VkSampleCountFlags color_samples_;
};

struct PhysicalDeviceShaderSubgroupRotateFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR;

  PhysicalDeviceShaderSubgroupRotateFeaturesKHR(void *next, VkBool32 shader_subgroup_rotate, VkBool32 shader_subgroup_rotate_clustered)
    : next_(next), shader_subgroup_rotate_(shader_subgroup_rotate), shader_subgroup_rotate_clustered_(shader_subgroup_rotate_clustered) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_subgroup_rotate_;
  VkBool32 shader_subgroup_rotate_clustered_;
};

struct DispatchGraphCountInfoAMDX {

  using native_type = VkDispatchGraphCountInfoAMDX;

  DispatchGraphCountInfoAMDX(uint32_t count, VkDeviceOrHostAddressConstAMDX infos, uint64_t stride)
    : count_(count), infos_(infos), stride_(stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t count_;
  VkDeviceOrHostAddressConstAMDX infos_;
  uint64_t stride_;
};

struct PhysicalDeviceCoverageReductionModeFeaturesNV {

  using native_type = VkPhysicalDeviceCoverageReductionModeFeaturesNV;

  PhysicalDeviceCoverageReductionModeFeaturesNV(void *next, VkBool32 coverage_reduction_mode)
    : next_(next), coverage_reduction_mode_(coverage_reduction_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 coverage_reduction_mode_;
};

struct MicromapBuildSizesInfoEXT {

  using native_type = VkMicromapBuildSizesInfoEXT;

  MicromapBuildSizesInfoEXT(const void *next, VkDeviceSize micromap_size, VkDeviceSize build_scratch_size, VkBool32 discardable)
    : next_(next), micromap_size_(micromap_size), build_scratch_size_(build_scratch_size), discardable_(discardable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize micromap_size_;
  VkDeviceSize build_scratch_size_;
  VkBool32 discardable_;
};

struct HeadlessSurfaceCreateInfoEXT {

  using native_type = VkHeadlessSurfaceCreateInfoEXT;

  HeadlessSurfaceCreateInfoEXT(const void *next, VkHeadlessSurfaceCreateFlagsEXT flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkHeadlessSurfaceCreateFlagsEXT flags_;
};

struct AttachmentDescriptionStencilLayout {

  using native_type = VkAttachmentDescriptionStencilLayout;

  AttachmentDescriptionStencilLayout(void *next, ImageLayout stencil_initial_layout, ImageLayout stencil_final_layout)
    : next_(next), stencil_initial_layout_(stencil_initial_layout), stencil_final_layout_(stencil_final_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  ImageLayout stencil_initial_layout_;
  ImageLayout stencil_final_layout_;
};

struct PerformanceQuerySubmitInfoKHR {

  using native_type = VkPerformanceQuerySubmitInfoKHR;

  PerformanceQuerySubmitInfoKHR(const void *next, uint32_t counter_pass_index) : next_(next), counter_pass_index_(counter_pass_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t counter_pass_index_;
};

struct AcquireProfilingLockInfoKHR {

  using native_type = VkAcquireProfilingLockInfoKHR;

  AcquireProfilingLockInfoKHR(const void *next, VkAcquireProfilingLockFlagsKHR flags, uint64_t timeout)
    : next_(next), flags_(flags), timeout_(timeout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAcquireProfilingLockFlagsKHR flags_;
  uint64_t timeout_;
};

struct QueryPoolPerformanceCreateInfoKHR {

  using native_type = VkQueryPoolPerformanceCreateInfoKHR;

  QueryPoolPerformanceCreateInfoKHR(const void *next, uint32_t queue_family_index, uint32_t counter_index_count,
                                    const uint32_t *counter_indices)
    : next_(next), queue_family_index_(queue_family_index), counter_index_count_(counter_index_count), counter_indices_(counter_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t queue_family_index_;
  uint32_t counter_index_count_;
  const uint32_t *counter_indices_;
};

struct PerformanceCounterKHR {

  using native_type = VkPerformanceCounterKHR;

  PerformanceCounterKHR(void *next, PerformanceCounterUnit unit, PerformanceCounterScope scope, PerformanceCounterStorage storage,
                        uint8_t uuid[VK_UUID_SIZE])
    : next_(next), unit_(unit), scope_(scope), storage_(storage), uuid_(uuid) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  PerformanceCounterUnit unit_;
  PerformanceCounterScope scope_;
  PerformanceCounterStorage storage_;
  uint8_t uuid[VK_UUID_SIZE] _;
};

struct PhysicalDevicePerformanceQueryPropertiesKHR {

  using native_type = VkPhysicalDevicePerformanceQueryPropertiesKHR;

  PhysicalDevicePerformanceQueryPropertiesKHR(void *next, VkBool32 allow_command_buffer_query_copies)
    : next_(next), allow_command_buffer_query_copies_(allow_command_buffer_query_copies) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 allow_command_buffer_query_copies_;
};

struct PhysicalDeviceToolProperties {

  using native_type = VkPhysicalDeviceToolProperties;

  PhysicalDeviceToolProperties(void *next, char name[VK_MAX_EXTENSION_NAME_SIZE], char version[VK_MAX_EXTENSION_NAME_SIZE],
                               VkToolPurposeFlags purposes, char description[VK_MAX_DESCRIPTION_SIZE],
                               char layer[VK_MAX_EXTENSION_NAME_SIZE])
    : next_(next), name_(name), version_(version), purposes_(purposes), description_(description), layer_(layer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  char name[VK_MAX_EXTENSION_NAME_SIZE] _;
  char version[VK_MAX_EXTENSION_NAME_SIZE] _;
  VkToolPurposeFlags purposes_;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
  char layer[VK_MAX_EXTENSION_NAME_SIZE] _;
};

struct PhysicalDevicePerformanceQueryFeaturesKHR {

  using native_type = VkPhysicalDevicePerformanceQueryFeaturesKHR;

  PhysicalDevicePerformanceQueryFeaturesKHR(void *next, VkBool32 performance_counter_query_pools,
                                            VkBool32 performance_counter_multiple_query_pools)
    : next_(next), performance_counter_query_pools_(performance_counter_query_pools),
      performance_counter_multiple_query_pools_(performance_counter_multiple_query_pools) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 performance_counter_query_pools_;
  VkBool32 performance_counter_multiple_query_pools_;
};

struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT {

  using native_type = VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;

  PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(void *next, VkBool32 ycbcr2plane444formats)
    : next_(next), ycbcr2plane444formats_(ycbcr2plane444formats) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ycbcr2plane444formats_;
};

struct SwapchainPresentBarrierCreateInfoNV {

  using native_type = VkSwapchainPresentBarrierCreateInfoNV;

  SwapchainPresentBarrierCreateInfoNV(void *next, VkBool32 present_barrier_enable)
    : next_(next), present_barrier_enable_(present_barrier_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 present_barrier_enable_;
};

struct SurfaceCapabilitiesFullScreenExclusiveEXT {

  using native_type = VkSurfaceCapabilitiesFullScreenExclusiveEXT;

  SurfaceCapabilitiesFullScreenExclusiveEXT(void *next, VkBool32 full_screen_exclusive_supported)
    : next_(next), full_screen_exclusive_supported_(full_screen_exclusive_supported) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 full_screen_exclusive_supported_;
};

struct QueryLowLatencySupportNV {

  using native_type = VkQueryLowLatencySupportNV;

  QueryLowLatencySupportNV(const void *next, void *queried_low_latency_data)
    : next_(next), queried_low_latency_data_(queried_low_latency_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  void *queried_low_latency_data_;
};

struct RefreshObjectKHR {

  using native_type = VkRefreshObjectKHR;

  RefreshObjectKHR(ObjectType object_type, uint64_t object_handle, VkRefreshObjectFlagsKHR flags)
    : object_type_(object_type), object_handle_(object_handle), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  ObjectType object_type_;
  uint64_t object_handle_;
  VkRefreshObjectFlagsKHR flags_;
};

struct PipelineCreationFeedbackCreateInfo {

  using native_type = VkPipelineCreationFeedbackCreateInfo;

  PipelineCreationFeedbackCreateInfo(const void *next, VkPipelineCreationFeedback *pipeline_creation_feedback,
                                     uint32_t pipeline_stage_creation_feedback_count,
                                     VkPipelineCreationFeedback *pipeline_stage_creation_feedbacks)
    : next_(next), pipeline_creation_feedback_(pipeline_creation_feedback),
      pipeline_stage_creation_feedback_count_(pipeline_stage_creation_feedback_count),
      pipeline_stage_creation_feedbacks_(pipeline_stage_creation_feedbacks) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreationFeedback *pipeline_creation_feedback_;
  uint32_t pipeline_stage_creation_feedback_count_;
  VkPipelineCreationFeedback *pipeline_stage_creation_feedbacks_;
};

struct PipelineCreationFeedback {

  using native_type = VkPipelineCreationFeedback;

  PipelineCreationFeedback(VkPipelineCreationFeedbackFlags flags, uint64_t duration) : flags_(flags), duration_(duration) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkPipelineCreationFeedbackFlags flags_;
  uint64_t duration_;
};

struct PresentFrameTokenGGP {

  using native_type = VkPresentFrameTokenGGP;

  PresentFrameTokenGGP(const void *next, GgpFrameToken frame_token) : next_(next), frame_token_(frame_token) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  GgpFrameToken frame_token_;
};

struct PhysicalDeviceRobustness2FeaturesEXT {

  using native_type = VkPhysicalDeviceRobustness2FeaturesEXT;

  PhysicalDeviceRobustness2FeaturesEXT(void *next, VkBool32 robust_buffer_access2, VkBool32 robust_image_access2, VkBool32 null_descriptor)
    : next_(next), robust_buffer_access2_(robust_buffer_access2), robust_image_access2_(robust_image_access2),
      null_descriptor_(null_descriptor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 robust_buffer_access2_;
  VkBool32 robust_image_access2_;
  VkBool32 null_descriptor_;
};

struct ImageViewAddressPropertiesNVX {

  using native_type = VkImageViewAddressPropertiesNVX;

  ImageViewAddressPropertiesNVX(void *next, VkDeviceAddress device_address, VkDeviceSize size)
    : next_(next), device_address_(device_address), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceAddress device_address_;
  VkDeviceSize size_;
};

struct PhysicalDevice4444FormatsFeaturesEXT {

  using native_type = VkPhysicalDevice4444FormatsFeaturesEXT;

  PhysicalDevice4444FormatsFeaturesEXT(void *next, VkBool32 format_a4r4g4b4, VkBool32 format_a4b4g4r4)
    : next_(next), format_a4r4g4b4_(format_a4r4g4b4), format_a4b4g4r4_(format_a4b4g4r4) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 format_a4r4g4b4_;
  VkBool32 format_a4b4g4r4_;
};

struct ImageViewHandleInfoNVX {

  using native_type = VkImageViewHandleInfoNVX;

  ImageViewHandleInfoNVX(const void *next, VkImageView image_view, DescriptorType descriptor_type, VkSampler sampler)
    : next_(next), image_view_(image_view), descriptor_type_(descriptor_type), sampler_(sampler) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageView image_view_;
  DescriptorType descriptor_type_;
  VkSampler sampler_;
};

struct DisplayPowerInfoEXT {

  using native_type = VkDisplayPowerInfoEXT;

  DisplayPowerInfoEXT(const void *next, DisplayPowerState power_state) : next_(next), power_state_(power_state) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DisplayPowerState power_state_;
};

struct SciSyncAttributesInfoNV {

  using native_type = VkSciSyncAttributesInfoNV;

  SciSyncAttributesInfoNV(const void *next, SciSyncClientType client_type, SciSyncPrimitiveType primitive_type)
    : next_(next), client_type_(client_type), primitive_type_(primitive_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  SciSyncClientType client_type_;
  SciSyncPrimitiveType primitive_type_;
};

struct HostImageCopyDevicePerformanceQueryEXT {

  using native_type = VkHostImageCopyDevicePerformanceQueryEXT;

  HostImageCopyDevicePerformanceQueryEXT(void *next, VkBool32 optimal_device_access, VkBool32 identical_memory_layout)
    : next_(next), optimal_device_access_(optimal_device_access), identical_memory_layout_(identical_memory_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 optimal_device_access_;
  VkBool32 identical_memory_layout_;
};

struct Offset3D {

  using native_type = VkOffset3D;

  Offset3D(int32_t x, int32_t y, int32_t z) : x_(x), y_(y), z_(z) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  int32_t x_;
  int32_t y_;
  int32_t z_;
};

struct DescriptorImageInfo {

  using native_type = VkDescriptorImageInfo;

  DescriptorImageInfo(VkSampler sampler, VkImageView image_view, ImageLayout image_layout)
    : sampler_(sampler), image_view_(image_view), image_layout_(image_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkSampler sampler_;
  VkImageView image_view_;
  ImageLayout image_layout_;
};

struct SurfaceCapabilities2EXT {

  using native_type = VkSurfaceCapabilities2EXT;

  SurfaceCapabilities2EXT(void *next, uint32_t min_image_count, uint32_t max_image_count, VkExtent2D current_extent,
                          VkExtent2D min_image_extent, VkExtent2D max_image_extent, uint32_t max_image_array_layers,
                          VkSurfaceTransformFlagsKHR supported_transforms, SurfaceTransformMaskBit current_transform,
                          VkCompositeAlphaFlagsKHR supported_composite_alpha, VkImageUsageFlags supported_usage_flags,
                          VkSurfaceCounterFlagsEXT supported_surface_counters)
    : next_(next), min_image_count_(min_image_count), max_image_count_(max_image_count), current_extent_(current_extent),
      min_image_extent_(min_image_extent), max_image_extent_(max_image_extent), max_image_array_layers_(max_image_array_layers),
      supported_transforms_(supported_transforms), current_transform_(current_transform),
      supported_composite_alpha_(supported_composite_alpha), supported_usage_flags_(supported_usage_flags),
      supported_surface_counters_(supported_surface_counters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t min_image_count_;
  uint32_t max_image_count_;
  VkExtent2D current_extent_;
  VkExtent2D min_image_extent_;
  VkExtent2D max_image_extent_;
  uint32_t max_image_array_layers_;
  VkSurfaceTransformFlagsKHR supported_transforms_;
  SurfaceTransformMaskBit current_transform_;
  VkCompositeAlphaFlagsKHR supported_composite_alpha_;
  VkImageUsageFlags supported_usage_flags_;
  VkSurfaceCounterFlagsEXT supported_surface_counters_;
};

struct PhysicalDeviceFragmentShaderBarycentricFeaturesKHR {

  using native_type = VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;

  PhysicalDeviceFragmentShaderBarycentricFeaturesKHR(void *next, VkBool32 fragment_shader_barycentric)
    : next_(next), fragment_shader_barycentric_(fragment_shader_barycentric) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 fragment_shader_barycentric_;
};

struct ImageMemoryBarrier {

  using native_type = VkImageMemoryBarrier;

  ImageMemoryBarrier(const void *next, VkAccessFlags src_access_mask, VkAccessFlags dst_access_mask, ImageLayout old_layout,
                     ImageLayout new_layout, uint32_t src_queue_family_index, uint32_t dst_queue_family_index, VkImage image,
                     VkImageSubresourceRange subresource_range)
    : next_(next), src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), old_layout_(old_layout), new_layout_(new_layout),
      src_queue_family_index_(src_queue_family_index), dst_queue_family_index_(dst_queue_family_index), image_(image),
      subresource_range_(subresource_range) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccessFlags src_access_mask_;
  VkAccessFlags dst_access_mask_;
  ImageLayout old_layout_;
  ImageLayout new_layout_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkImage image_;
  VkImageSubresourceRange subresource_range_;
};

struct SubpassFragmentDensityMapOffsetEndInfoQCOM {

  using native_type = VkSubpassFragmentDensityMapOffsetEndInfoQCOM;

  SubpassFragmentDensityMapOffsetEndInfoQCOM(const void *next, uint32_t fragment_density_offset_count,
                                             const VkOffset2D *fragment_density_offsets)
    : next_(next), fragment_density_offset_count_(fragment_density_offset_count), fragment_density_offsets_(fragment_density_offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t fragment_density_offset_count_;
  const VkOffset2D *fragment_density_offsets_;
};

struct PhysicalDeviceFragmentShadingRateFeaturesKHR {

  using native_type = VkPhysicalDeviceFragmentShadingRateFeaturesKHR;

  PhysicalDeviceFragmentShadingRateFeaturesKHR(void *next, VkBool32 pipeline_fragment_shading_rate,
                                               VkBool32 primitive_fragment_shading_rate, VkBool32 attachment_fragment_shading_rate)
    : next_(next), pipeline_fragment_shading_rate_(pipeline_fragment_shading_rate),
      primitive_fragment_shading_rate_(primitive_fragment_shading_rate),
      attachment_fragment_shading_rate_(attachment_fragment_shading_rate) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_fragment_shading_rate_;
  VkBool32 primitive_fragment_shading_rate_;
  VkBool32 attachment_fragment_shading_rate_;
};

struct DebugUtilsObjectTagInfoEXT {

  using native_type = VkDebugUtilsObjectTagInfoEXT;

  DebugUtilsObjectTagInfoEXT(const void *next, ObjectType object_type, uint64_t object_handle, uint64_t tag_name, size_t tag_size,
                             const void *tag)
    : next_(next), object_type_(object_type), object_handle_(object_handle), tag_name_(tag_name), tag_size_(tag_size), tag_(tag) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ObjectType object_type_;
  uint64_t object_handle_;
  uint64_t tag_name_;
  size_t tag_size_;
  const void *tag_;
};

struct PerformanceOverrideInfoINTEL {

  using native_type = VkPerformanceOverrideInfoINTEL;

  PerformanceOverrideInfoINTEL(const void *next, PerformanceOverrideType type, VkBool32 enable, uint64_t parameter)
    : next_(next), type_(type), enable_(enable), parameter_(parameter) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  PerformanceOverrideType type_;
  VkBool32 enable_;
  uint64_t parameter_;
};

struct PhysicalDeviceMultiviewFeatures {

  using native_type = VkPhysicalDeviceMultiviewFeatures;

  PhysicalDeviceMultiviewFeatures(void *next, VkBool32 multiview, VkBool32 multiview_geometry_shader,
                                  VkBool32 multiview_tessellation_shader)
    : next_(next), multiview_(multiview), multiview_geometry_shader_(multiview_geometry_shader),
      multiview_tessellation_shader_(multiview_tessellation_shader) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 multiview_;
  VkBool32 multiview_geometry_shader_;
  VkBool32 multiview_tessellation_shader_;
};

struct DisplayEventInfoEXT {

  using native_type = VkDisplayEventInfoEXT;

  DisplayEventInfoEXT(const void *next, DisplayEventType display_event) : next_(next), display_event_(display_event) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DisplayEventType display_event_;
};

struct ImportAndroidHardwareBufferInfoANDROID {

  using native_type = VkImportAndroidHardwareBufferInfoANDROID;

  ImportAndroidHardwareBufferInfoANDROID(const void *next, struct AHardwareBuffer *buffer) : next_(next), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  struct AHardwareBuffer *buffer_;
};

struct PhysicalDeviceCooperativeMatrixPropertiesKHR {

  using native_type = VkPhysicalDeviceCooperativeMatrixPropertiesKHR;

  PhysicalDeviceCooperativeMatrixPropertiesKHR(void *next, VkShaderStageFlags cooperative_matrix_supported_stages)
    : next_(next), cooperative_matrix_supported_stages_(cooperative_matrix_supported_stages) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkShaderStageFlags cooperative_matrix_supported_stages_;
};

struct SemaphoreSciSyncCreateInfoNV {

  using native_type = VkSemaphoreSciSyncCreateInfoNV;

  SemaphoreSciSyncCreateInfoNV(const void *next, VkSemaphoreSciSyncPoolNV semaphore_pool, const NvSciSyncFence *fence)
    : next_(next), semaphore_pool_(semaphore_pool), fence_(fence) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphoreSciSyncPoolNV semaphore_pool_;
  const NvSciSyncFence *fence_;
};

struct MemoryUnmapInfoKHR {

  using native_type = VkMemoryUnmapInfoKHR;

  MemoryUnmapInfoKHR(const void *next, VkMemoryUnmapFlagsKHR flags, VkDeviceMemory memory) : next_(next), flags_(flags), memory_(memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMemoryUnmapFlagsKHR flags_;
  VkDeviceMemory memory_;
};

struct ExportFenceSciSyncInfoNV {

  using native_type = VkExportFenceSciSyncInfoNV;

  ExportFenceSciSyncInfoNV(const void *next, NvSciSyncAttrList attributes) : next_(next), attributes_(attributes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  NvSciSyncAttrList attributes_;
};

struct FenceGetFdInfoKHR {

  using native_type = VkFenceGetFdInfoKHR;

  FenceGetFdInfoKHR(const void *next, VkFence fence, ExternalFenceHandleTypeMaskBit handle_type)
    : next_(next), fence_(fence), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFence fence_;
  ExternalFenceHandleTypeMaskBit handle_type_;
};

struct DisplayPlaneInfo2KHR {

  using native_type = VkDisplayPlaneInfo2KHR;

  DisplayPlaneInfo2KHR(const void *next, VkDisplayModeKHR mode, uint32_t plane_index)
    : next_(next), mode_(mode), plane_index_(plane_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDisplayModeKHR mode_;
  uint32_t plane_index_;
};

struct ImageCopy2 {

  using native_type = VkImageCopy2;

  ImageCopy2(const void *next, VkImageSubresourceLayers src_subresource, VkOffset3D src_offset, VkImageSubresourceLayers dst_subresource,
             VkOffset3D dst_offset, VkExtent3D extent)
    : next_(next), src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageSubresourceLayers src_subresource_;
  VkOffset3D src_offset_;
  VkImageSubresourceLayers dst_subresource_;
  VkOffset3D dst_offset_;
  VkExtent3D extent_;
};

struct PhysicalDeviceExtendedDynamicState2FeaturesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;

  PhysicalDeviceExtendedDynamicState2FeaturesEXT(void *next, VkBool32 extended_dynamic_state2, VkBool32 extended_dynamic_state2logic_op,
                                                 VkBool32 extended_dynamic_state2patch_control_points)
    : next_(next), extended_dynamic_state2_(extended_dynamic_state2), extended_dynamic_state2logic_op_(extended_dynamic_state2logic_op),
      extended_dynamic_state2patch_control_points_(extended_dynamic_state2patch_control_points) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 extended_dynamic_state2_;
  VkBool32 extended_dynamic_state2logic_op_;
  VkBool32 extended_dynamic_state2patch_control_points_;
};

struct ImportFenceFdInfoKHR {

  using native_type = VkImportFenceFdInfoKHR;

  ImportFenceFdInfoKHR(const void *next, VkFence fence, VkFenceImportFlags flags, ExternalFenceHandleTypeMaskBit handle_type, int fd)
    : next_(next), fence_(fence), flags_(flags), handle_type_(handle_type), fd_(fd) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFence fence_;
  VkFenceImportFlags flags_;
  ExternalFenceHandleTypeMaskBit handle_type_;
  int fd_;
};

struct ExportFenceWin32HandleInfoKHR {

  using native_type = VkExportFenceWin32HandleInfoKHR;

  ExportFenceWin32HandleInfoKHR(const void *next, const SECURITY_ATTRIBUTES *attributes, DWORD dw_access, LPCWSTR name)
    : next_(next), attributes_(attributes), dw_access_(dw_access), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const SECURITY_ATTRIBUTES *attributes_;
  DWORD dw_access_;
  LPCWSTR name_;
};

struct DeviceAddressBindingCallbackDataEXT {

  using native_type = VkDeviceAddressBindingCallbackDataEXT;

  DeviceAddressBindingCallbackDataEXT(void *next, VkDeviceAddressBindingFlagsEXT flags, VkDeviceAddress base_address, VkDeviceSize size,
                                      DeviceAddressBindingType binding_type)
    : next_(next), flags_(flags), base_address_(base_address), size_(size), binding_type_(binding_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceAddressBindingFlagsEXT flags_;
  VkDeviceAddress base_address_;
  VkDeviceSize size_;
  DeviceAddressBindingType binding_type_;
};

struct ImportFenceWin32HandleInfoKHR {

  using native_type = VkImportFenceWin32HandleInfoKHR;

  ImportFenceWin32HandleInfoKHR(const void *next, VkFence fence, VkFenceImportFlags flags, ExternalFenceHandleTypeMaskBit handle_type,
                                HANDLE handle, LPCWSTR name)
    : next_(next), fence_(fence), flags_(flags), handle_type_(handle_type), handle_(handle), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFence fence_;
  VkFenceImportFlags flags_;
  ExternalFenceHandleTypeMaskBit handle_type_;
  HANDLE handle_;
  LPCWSTR name_;
};

struct PhysicalDeviceExternalMemoryRDMAFeaturesNV {

  using native_type = VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;

  PhysicalDeviceExternalMemoryRDMAFeaturesNV(void *next, VkBool32 external_memory_rdma)
    : next_(next), external_memory_rdma_(external_memory_rdma) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 external_memory_rdma_;
};

struct ImportSemaphoreFdInfoKHR {

  using native_type = VkImportSemaphoreFdInfoKHR;

  ImportSemaphoreFdInfoKHR(const void *next, VkSemaphore semaphore, VkSemaphoreImportFlags flags,
                           ExternalSemaphoreHandleTypeMaskBit handle_type, int fd)
    : next_(next), semaphore_(semaphore), flags_(flags), handle_type_(handle_type), fd_(fd) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  VkSemaphoreImportFlags flags_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
  int fd_;
};

struct QueryPoolCreateInfo {

  using native_type = VkQueryPoolCreateInfo;

  QueryPoolCreateInfo(const void *next, VkQueryPoolCreateFlags flags, QueryType query_type, uint32_t query_count,
                      VkQueryPipelineStatisticFlags pipeline_statistics)
    : next_(next), flags_(flags), query_type_(query_type), query_count_(query_count), pipeline_statistics_(pipeline_statistics) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkQueryPoolCreateFlags flags_;
  QueryType query_type_;
  uint32_t query_count_;
  VkQueryPipelineStatisticFlags pipeline_statistics_;
};

struct MemoryGetFdInfoKHR {

  using native_type = VkMemoryGetFdInfoKHR;

  MemoryGetFdInfoKHR(const void *next, VkDeviceMemory memory, ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), memory_(memory), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct ExportMemoryWin32HandleInfoKHR {

  using native_type = VkExportMemoryWin32HandleInfoKHR;

  ExportMemoryWin32HandleInfoKHR(const void *next, const SECURITY_ATTRIBUTES *attributes, DWORD dw_access, LPCWSTR name)
    : next_(next), attributes_(attributes), dw_access_(dw_access), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const SECURITY_ATTRIBUTES *attributes_;
  DWORD dw_access_;
  LPCWSTR name_;
};

struct ImportSemaphoreZirconHandleInfoFUCHSIA {

  using native_type = VkImportSemaphoreZirconHandleInfoFUCHSIA;

  ImportSemaphoreZirconHandleInfoFUCHSIA(const void *next, VkSemaphore semaphore, VkSemaphoreImportFlags flags,
                                         ExternalSemaphoreHandleTypeMaskBit handle_type, zx_handle_t zircon_handle)
    : next_(next), semaphore_(semaphore), flags_(flags), handle_type_(handle_type), zircon_handle_(zircon_handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  VkSemaphoreImportFlags flags_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
  zx_handle_t zircon_handle_;
};

struct PhysicalDeviceExternalSciSync2FeaturesNV {

  using native_type = VkPhysicalDeviceExternalSciSync2FeaturesNV;

  PhysicalDeviceExternalSciSync2FeaturesNV(void *next, VkBool32 sci_sync_fence, VkBool32 sci_sync_semaphore2, VkBool32 sci_sync_import,
                                           VkBool32 sci_sync_export)
    : next_(next), sci_sync_fence_(sci_sync_fence), sci_sync_semaphore2_(sci_sync_semaphore2), sci_sync_import_(sci_sync_import),
      sci_sync_export_(sci_sync_export) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 sci_sync_fence_;
  VkBool32 sci_sync_semaphore2_;
  VkBool32 sci_sync_import_;
  VkBool32 sci_sync_export_;
};

struct PhysicalDeviceAmigoProfilingFeaturesSEC {

  using native_type = VkPhysicalDeviceAmigoProfilingFeaturesSEC;

  PhysicalDeviceAmigoProfilingFeaturesSEC(void *next, VkBool32 amigo_profiling) : next_(next), amigo_profiling_(amigo_profiling) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 amigo_profiling_;
};

struct VideoDecodeAV1SessionParametersCreateInfoKHR {

  using native_type = VkVideoDecodeAV1SessionParametersCreateInfoKHR;

  VideoDecodeAV1SessionParametersCreateInfoKHR(const void *next, const StdVideoAV1SequenceHeader *std_sequence_header)
    : next_(next), std_sequence_header_(std_sequence_header) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoAV1SequenceHeader *std_sequence_header_;
};

struct DebugUtilsMessengerCallbackDataEXT {

  using native_type = VkDebugUtilsMessengerCallbackDataEXT;

  DebugUtilsMessengerCallbackDataEXT(const void *next, VkDebugUtilsMessengerCallbackDataFlagsEXT flags, const char *message_id_name,
                                     int32_t message_id_number, const char *message, uint32_t queue_label_count,
                                     const VkDebugUtilsLabelEXT *queue_labels, uint32_t cmd_buf_label_count,
                                     const VkDebugUtilsLabelEXT *cmd_buf_labels, uint32_t object_count,
                                     const VkDebugUtilsObjectNameInfoEXT *objects)
    : next_(next), flags_(flags), message_id_name_(message_id_name), message_id_number_(message_id_number), message_(message),
      queue_label_count_(queue_label_count), queue_labels_(queue_labels), cmd_buf_label_count_(cmd_buf_label_count),
      cmd_buf_labels_(cmd_buf_labels), object_count_(object_count), objects_(objects) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDebugUtilsMessengerCallbackDataFlagsEXT flags_;
  const char *message_id_name_;
  int32_t message_id_number_;
  const char *message_;
  uint32_t queue_label_count_;
  const VkDebugUtilsLabelEXT *queue_labels_;
  uint32_t cmd_buf_label_count_;
  const VkDebugUtilsLabelEXT *cmd_buf_labels_;
  uint32_t object_count_;
  const VkDebugUtilsObjectNameInfoEXT *objects_;
};

struct ImportMemoryWin32HandleInfoKHR {

  using native_type = VkImportMemoryWin32HandleInfoKHR;

  ImportMemoryWin32HandleInfoKHR(const void *next, ExternalMemoryHandleTypeMaskBit handle_type, HANDLE handle, LPCWSTR name)
    : next_(next), handle_type_(handle_type), handle_(handle), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  HANDLE handle_;
  LPCWSTR name_;
};

struct ExternalMemoryBufferCreateInfo {

  using native_type = VkExternalMemoryBufferCreateInfo;

  ExternalMemoryBufferCreateInfo(const void *next, VkExternalMemoryHandleTypeFlags handle_types)
    : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalMemoryHandleTypeFlags handle_types_;
};

struct AndroidHardwareBufferFormatResolvePropertiesANDROID {

  using native_type = VkAndroidHardwareBufferFormatResolvePropertiesANDROID;

  AndroidHardwareBufferFormatResolvePropertiesANDROID(void *next, Format color_attachment_format)
    : next_(next), color_attachment_format_(color_attachment_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  Format color_attachment_format_;
};

struct LayerSettingsCreateInfoEXT {

  using native_type = VkLayerSettingsCreateInfoEXT;

  LayerSettingsCreateInfoEXT(const void *next, uint32_t setting_count, const VkLayerSettingEXT *settings)
    : next_(next), setting_count_(setting_count), settings_(settings) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t setting_count_;
  const VkLayerSettingEXT *settings_;
};

struct PhysicalDeviceIDProperties {

  using native_type = VkPhysicalDeviceIDProperties;

  PhysicalDeviceIDProperties(void *next, uint8_t device_uuid[VK_UUID_SIZE], uint8_t driver_uuid[VK_UUID_SIZE],
                             uint8_t device_luid[VK_LUID_SIZE], uint32_t device_node_mask, VkBool32 device_luidvalid)
    : next_(next), device_uuid_(device_uuid), driver_uuid_(driver_uuid), device_luid_(device_luid), device_node_mask_(device_node_mask),
      device_luidvalid_(device_luidvalid) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint8_t device_uuid[VK_UUID_SIZE] _;
  uint8_t driver_uuid[VK_UUID_SIZE] _;
  uint8_t device_luid[VK_LUID_SIZE] _;
  uint32_t device_node_mask_;
  VkBool32 device_luidvalid_;
};

struct PhysicalDeviceMaintenance5PropertiesKHR {

  using native_type = VkPhysicalDeviceMaintenance5PropertiesKHR;

  PhysicalDeviceMaintenance5PropertiesKHR(void *next, VkBool32 early_fragment_multisample_coverage_after_sample_counting,
                                          VkBool32 early_fragment_sample_mask_test_before_sample_counting,
                                          VkBool32 depth_stencil_swizzle_one_support, VkBool32 polygon_mode_point_size,
                                          VkBool32 non_strict_single_pixel_wide_lines_use_parallelogram,
                                          VkBool32 non_strict_wide_lines_use_parallelogram)
    : next_(next), early_fragment_multisample_coverage_after_sample_counting_(early_fragment_multisample_coverage_after_sample_counting),
      early_fragment_sample_mask_test_before_sample_counting_(early_fragment_sample_mask_test_before_sample_counting),
      depth_stencil_swizzle_one_support_(depth_stencil_swizzle_one_support), polygon_mode_point_size_(polygon_mode_point_size),
      non_strict_single_pixel_wide_lines_use_parallelogram_(non_strict_single_pixel_wide_lines_use_parallelogram),
      non_strict_wide_lines_use_parallelogram_(non_strict_wide_lines_use_parallelogram) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 early_fragment_multisample_coverage_after_sample_counting_;
  VkBool32 early_fragment_sample_mask_test_before_sample_counting_;
  VkBool32 depth_stencil_swizzle_one_support_;
  VkBool32 polygon_mode_point_size_;
  VkBool32 non_strict_single_pixel_wide_lines_use_parallelogram_;
  VkBool32 non_strict_wide_lines_use_parallelogram_;
};

struct ExternalImageFormatProperties {

  using native_type = VkExternalImageFormatProperties;

  ExternalImageFormatProperties(void *next, VkExternalMemoryProperties external_memory_properties)
    : next_(next), external_memory_properties_(external_memory_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExternalMemoryProperties external_memory_properties_;
};

struct PipelineLayoutCreateInfo {

  using native_type = VkPipelineLayoutCreateInfo;

  PipelineLayoutCreateInfo(const void *next, VkPipelineLayoutCreateFlags flags, uint32_t set_layout_count,
                           const VkDescriptorSetLayout *set_layouts, uint32_t push_constant_range_count,
                           const VkPushConstantRange *push_constant_ranges)
    : next_(next), flags_(flags), set_layout_count_(set_layout_count), set_layouts_(set_layouts),
      push_constant_range_count_(push_constant_range_count), push_constant_ranges_(push_constant_ranges) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineLayoutCreateFlags flags_;
  uint32_t set_layout_count_;
  const VkDescriptorSetLayout *set_layouts_;
  uint32_t push_constant_range_count_;
  const VkPushConstantRange *push_constant_ranges_;
};

struct ImageFormatProperties {

  using native_type = VkImageFormatProperties;

  ImageFormatProperties(VkExtent3D max_extent, uint32_t max_mip_levels, uint32_t max_array_layers, VkSampleCountFlags sample_counts,
                        VkDeviceSize max_resource_size)
    : max_extent_(max_extent), max_mip_levels_(max_mip_levels), max_array_layers_(max_array_layers), sample_counts_(sample_counts),
      max_resource_size_(max_resource_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkExtent3D max_extent_;
  uint32_t max_mip_levels_;
  uint32_t max_array_layers_;
  VkSampleCountFlags sample_counts_;
  VkDeviceSize max_resource_size_;
};

struct ExportFenceCreateInfo {

  using native_type = VkExportFenceCreateInfo;

  ExportFenceCreateInfo(const void *next, VkExternalFenceHandleTypeFlags handle_types) : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalFenceHandleTypeFlags handle_types_;
};

struct PresentRegionsKHR {

  using native_type = VkPresentRegionsKHR;

  PresentRegionsKHR(const void *next, uint32_t swapchain_count, const VkPresentRegionKHR *regions)
    : next_(next), swapchain_count_(swapchain_count), regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t swapchain_count_;
  const VkPresentRegionKHR *regions_;
};

struct ExternalSemaphoreProperties {

  using native_type = VkExternalSemaphoreProperties;

  ExternalSemaphoreProperties(void *next, VkExternalSemaphoreHandleTypeFlags export_from_imported_handle_types,
                              VkExternalSemaphoreHandleTypeFlags compatible_handle_types,
                              VkExternalSemaphoreFeatureFlags external_semaphore_features)
    : next_(next), export_from_imported_handle_types_(export_from_imported_handle_types), compatible_handle_types_(compatible_handle_types),
      external_semaphore_features_(external_semaphore_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExternalSemaphoreHandleTypeFlags export_from_imported_handle_types_;
  VkExternalSemaphoreHandleTypeFlags compatible_handle_types_;
  VkExternalSemaphoreFeatureFlags external_semaphore_features_;
};

struct FormatProperties2 {

  using native_type = VkFormatProperties2;

  FormatProperties2(void *next, VkFormatProperties format_properties) : next_(next), format_properties_(format_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkFormatProperties format_properties_;
};

struct ImageViewASTCDecodeModeEXT {

  using native_type = VkImageViewASTCDecodeModeEXT;

  ImageViewASTCDecodeModeEXT(const void *next, Format decode_mode) : next_(next), decode_mode_(decode_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Format decode_mode_;
};

struct PhysicalDeviceProperties2 {

  using native_type = VkPhysicalDeviceProperties2;

  PhysicalDeviceProperties2(void *next, VkPhysicalDeviceProperties properties) : next_(next), properties_(properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPhysicalDeviceProperties properties_;
};

struct ImportFenceSciSyncInfoNV {

  using native_type = VkImportFenceSciSyncInfoNV;

  ImportFenceSciSyncInfoNV(const void *next, VkFence fence, ExternalFenceHandleTypeMaskBit handle_type, void *handle)
    : next_(next), fence_(fence), handle_type_(handle_type), handle_(handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFence fence_;
  ExternalFenceHandleTypeMaskBit handle_type_;
  void *handle_;
};

struct SampleLocationEXT {

  using native_type = VkSampleLocationEXT;

  SampleLocationEXT(float x, float y) : x_(x), y_(y) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float x_;
  float y_;
};

struct PipelineColorBlendStateCreateInfo {

  using native_type = VkPipelineColorBlendStateCreateInfo;

  PipelineColorBlendStateCreateInfo(const void *next, VkPipelineColorBlendStateCreateFlags flags, VkBool32 logic_op_enable,
                                    LogicOp logic_op, uint32_t attachment_count, const VkPipelineColorBlendAttachmentState *attachments,
                                    float blend_constants[4])
    : next_(next), flags_(flags), logic_op_enable_(logic_op_enable), logic_op_(logic_op), attachment_count_(attachment_count),
      attachments_(attachments), blend_constants_(blend_constants) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineColorBlendStateCreateFlags flags_;
  VkBool32 logic_op_enable_;
  LogicOp logic_op_;
  uint32_t attachment_count_;
  const VkPipelineColorBlendAttachmentState *attachments_;
  float blend_constants[4] _;
};

struct PhysicalDeviceFeatures2 {

  using native_type = VkPhysicalDeviceFeatures2;

  PhysicalDeviceFeatures2(void *next, VkPhysicalDeviceFeatures features) : next_(next), features_(features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPhysicalDeviceFeatures features_;
};

struct PhysicalDeviceExternalSciSyncFeaturesNV {

  using native_type = VkPhysicalDeviceExternalSciSyncFeaturesNV;

  PhysicalDeviceExternalSciSyncFeaturesNV(void *next, VkBool32 sci_sync_fence, VkBool32 sci_sync_semaphore, VkBool32 sci_sync_import,
                                          VkBool32 sci_sync_export)
    : next_(next), sci_sync_fence_(sci_sync_fence), sci_sync_semaphore_(sci_sync_semaphore), sci_sync_import_(sci_sync_import),
      sci_sync_export_(sci_sync_export) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 sci_sync_fence_;
  VkBool32 sci_sync_semaphore_;
  VkBool32 sci_sync_import_;
  VkBool32 sci_sync_export_;
};

struct PhysicalDeviceShaderCoreBuiltinsFeaturesARM {

  using native_type = VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;

  PhysicalDeviceShaderCoreBuiltinsFeaturesARM(void *next, VkBool32 shader_core_builtins)
    : next_(next), shader_core_builtins_(shader_core_builtins) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_core_builtins_;
};

struct BindIndexBufferIndirectCommandNV {

  using native_type = VkBindIndexBufferIndirectCommandNV;

  BindIndexBufferIndirectCommandNV(VkDeviceAddress buffer_address, uint32_t size, IndexType index_type)
    : buffer_address_(buffer_address), size_(size), index_type_(index_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress buffer_address_;
  uint32_t size_;
  IndexType index_type_;
};

struct SurfaceFullScreenExclusiveWin32InfoEXT {

  using native_type = VkSurfaceFullScreenExclusiveWin32InfoEXT;

  SurfaceFullScreenExclusiveWin32InfoEXT(const void *next, HMONITOR hmonitor) : next_(next), hmonitor_(hmonitor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  HMONITOR hmonitor_;
};

struct BufferCopy {

  using native_type = VkBufferCopy;

  BufferCopy(VkDeviceSize src_offset, VkDeviceSize dst_offset, VkDeviceSize size)
    : src_offset_(src_offset), dst_offset_(dst_offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceSize src_offset_;
  VkDeviceSize dst_offset_;
  VkDeviceSize size_;
};

struct GraphicsShaderGroupCreateInfoNV {

  using native_type = VkGraphicsShaderGroupCreateInfoNV;

  GraphicsShaderGroupCreateInfoNV(const void *next, uint32_t stage_count, const VkPipelineShaderStageCreateInfo *stages,
                                  const VkPipelineVertexInputStateCreateInfo *vertex_input_state,
                                  const VkPipelineTessellationStateCreateInfo *tessellation_state)
    : next_(next), stage_count_(stage_count), stages_(stages), vertex_input_state_(vertex_input_state),
      tessellation_state_(tessellation_state) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t stage_count_;
  const VkPipelineShaderStageCreateInfo *stages_;
  const VkPipelineVertexInputStateCreateInfo *vertex_input_state_;
  const VkPipelineTessellationStateCreateInfo *tessellation_state_;
};

struct DeviceImageSubresourceInfoKHR {

  using native_type = VkDeviceImageSubresourceInfoKHR;

  DeviceImageSubresourceInfoKHR(const void *next, const VkImageCreateInfo *create_info, const VkImageSubresource2KHR *subresource)
    : next_(next), create_info_(create_info), subresource_(subresource) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const VkImageCreateInfo *create_info_;
  const VkImageSubresource2KHR *subresource_;
};

struct PhysicalDeviceRayTracingMotionBlurFeaturesNV {

  using native_type = VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;

  PhysicalDeviceRayTracingMotionBlurFeaturesNV(void *next, VkBool32 ray_tracing_motion_blur,
                                               VkBool32 ray_tracing_motion_blur_pipeline_trace_rays_indirect)
    : next_(next), ray_tracing_motion_blur_(ray_tracing_motion_blur),
      ray_tracing_motion_blur_pipeline_trace_rays_indirect_(ray_tracing_motion_blur_pipeline_trace_rays_indirect) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_tracing_motion_blur_;
  VkBool32 ray_tracing_motion_blur_pipeline_trace_rays_indirect_;
};

struct PhysicalDeviceRayTracingPropertiesNV {

  using native_type = VkPhysicalDeviceRayTracingPropertiesNV;

  PhysicalDeviceRayTracingPropertiesNV(void *next, uint32_t shader_group_handle_size, uint32_t max_recursion_depth,
                                       uint32_t max_shader_group_stride, uint32_t shader_group_base_alignment, uint64_t max_geometry_count,
                                       uint64_t max_instance_count, uint64_t max_triangle_count,
                                       uint32_t max_descriptor_set_acceleration_structures)
    : next_(next), shader_group_handle_size_(shader_group_handle_size), max_recursion_depth_(max_recursion_depth),
      max_shader_group_stride_(max_shader_group_stride), shader_group_base_alignment_(shader_group_base_alignment),
      max_geometry_count_(max_geometry_count), max_instance_count_(max_instance_count), max_triangle_count_(max_triangle_count),
      max_descriptor_set_acceleration_structures_(max_descriptor_set_acceleration_structures) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t shader_group_handle_size_;
  uint32_t max_recursion_depth_;
  uint32_t max_shader_group_stride_;
  uint32_t shader_group_base_alignment_;
  uint64_t max_geometry_count_;
  uint64_t max_instance_count_;
  uint64_t max_triangle_count_;
  uint32_t max_descriptor_set_acceleration_structures_;
};

struct SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM {

  using native_type = VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM;

  SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(void *next, VkBool32 enable_ydegamma, VkBool32 enable_cb_cr_degamma)
    : next_(next), enable_ydegamma_(enable_ydegamma), enable_cb_cr_degamma_(enable_cb_cr_degamma) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 enable_ydegamma_;
  VkBool32 enable_cb_cr_degamma_;
};

struct ExportSemaphoreSciSyncInfoNV {

  using native_type = VkExportSemaphoreSciSyncInfoNV;

  ExportSemaphoreSciSyncInfoNV(const void *next, NvSciSyncAttrList attributes) : next_(next), attributes_(attributes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  NvSciSyncAttrList attributes_;
};

struct D3D12FenceSubmitInfoKHR {

  using native_type = VkD3D12FenceSubmitInfoKHR;

  D3D12FenceSubmitInfoKHR(const void *next, uint32_t wait_semaphore_values_count, const uint64_t *wait_semaphore_values,
                          uint32_t signal_semaphore_values_count, const uint64_t *signal_semaphore_values)
    : next_(next), wait_semaphore_values_count_(wait_semaphore_values_count), wait_semaphore_values_(wait_semaphore_values),
      signal_semaphore_values_count_(signal_semaphore_values_count), signal_semaphore_values_(signal_semaphore_values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t wait_semaphore_values_count_;
  const uint64_t *wait_semaphore_values_;
  uint32_t signal_semaphore_values_count_;
  const uint64_t *signal_semaphore_values_;
};

struct BufferImageCopy {

  using native_type = VkBufferImageCopy;

  BufferImageCopy(VkDeviceSize buffer_offset, uint32_t buffer_row_length, uint32_t buffer_image_height,
                  VkImageSubresourceLayers image_subresource, VkOffset3D image_offset, VkExtent3D image_extent)
    : buffer_offset_(buffer_offset), buffer_row_length_(buffer_row_length), buffer_image_height_(buffer_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceSize buffer_offset_;
  uint32_t buffer_row_length_;
  uint32_t buffer_image_height_;
  VkImageSubresourceLayers image_subresource_;
  VkOffset3D image_offset_;
  VkExtent3D image_extent_;
};

struct PhysicalDeviceAccelerationStructureFeaturesKHR {

  using native_type = VkPhysicalDeviceAccelerationStructureFeaturesKHR;

  PhysicalDeviceAccelerationStructureFeaturesKHR(void *next, VkBool32 acceleration_structure,
                                                 VkBool32 acceleration_structure_capture_replay,
                                                 VkBool32 acceleration_structure_indirect_build,
                                                 VkBool32 acceleration_structure_host_commands,
                                                 VkBool32 descriptor_binding_acceleration_structure_update_after_bind)
    : next_(next), acceleration_structure_(acceleration_structure),
      acceleration_structure_capture_replay_(acceleration_structure_capture_replay),
      acceleration_structure_indirect_build_(acceleration_structure_indirect_build),
      acceleration_structure_host_commands_(acceleration_structure_host_commands),
      descriptor_binding_acceleration_structure_update_after_bind_(descriptor_binding_acceleration_structure_update_after_bind) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 acceleration_structure_;
  VkBool32 acceleration_structure_capture_replay_;
  VkBool32 acceleration_structure_indirect_build_;
  VkBool32 acceleration_structure_host_commands_;
  VkBool32 descriptor_binding_acceleration_structure_update_after_bind_;
};

struct SubpassEndInfo {

  using native_type = VkSubpassEndInfo;

  SubpassEndInfo(const void *next) : next_(next) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
};

struct PhysicalDevicePrivateDataFeatures {

  using native_type = VkPhysicalDevicePrivateDataFeatures;

  PhysicalDevicePrivateDataFeatures(void *next, VkBool32 private_data) : next_(next), private_data_(private_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 private_data_;
};

struct ImageSwapchainCreateInfoKHR {

  using native_type = VkImageSwapchainCreateInfoKHR;

  ImageSwapchainCreateInfoKHR(const void *next, VkSwapchainKHR swapchain) : next_(next), swapchain_(swapchain) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSwapchainKHR swapchain_;
};

struct MemorySciBufPropertiesNV {

  using native_type = VkMemorySciBufPropertiesNV;

  MemorySciBufPropertiesNV(const void *next, uint32_t memory_type_bits) : next_(next), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t memory_type_bits_;
};

struct ExportMemoryWin32HandleInfoNV {

  using native_type = VkExportMemoryWin32HandleInfoNV;

  ExportMemoryWin32HandleInfoNV(const void *next, const SECURITY_ATTRIBUTES *attributes, DWORD dw_access)
    : next_(next), attributes_(attributes), dw_access_(dw_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const SECURITY_ATTRIBUTES *attributes_;
  DWORD dw_access_;
};

struct VideoEncodeH265FrameSizeKHR {

  using native_type = VkVideoEncodeH265FrameSizeKHR;

  VideoEncodeH265FrameSizeKHR(uint32_t frame_isize, uint32_t frame_psize, uint32_t frame_bsize)
    : frame_isize_(frame_isize), frame_psize_(frame_psize), frame_bsize_(frame_bsize) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t frame_isize_;
  uint32_t frame_psize_;
  uint32_t frame_bsize_;
};

struct ImportMemoryWin32HandleInfoNV {

  using native_type = VkImportMemoryWin32HandleInfoNV;

  ImportMemoryWin32HandleInfoNV(const void *next, VkExternalMemoryHandleTypeFlagsNV handle_type, HANDLE handle)
    : next_(next), handle_type_(handle_type), handle_(handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalMemoryHandleTypeFlagsNV handle_type_;
  HANDLE handle_;
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures {

  using native_type = VkPhysicalDeviceSamplerYcbcrConversionFeatures;

  PhysicalDeviceSamplerYcbcrConversionFeatures(void *next, VkBool32 sampler_ycbcr_conversion)
    : next_(next), sampler_ycbcr_conversion_(sampler_ycbcr_conversion) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 sampler_ycbcr_conversion_;
};

struct Viewport {

  using native_type = VkViewport;

  Viewport(float x, float y, float width, float height, float min_depth, float max_depth)
    : x_(x), y_(y), width_(width), height_(height), min_depth_(min_depth), max_depth_(max_depth) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float x_;
  float y_;
  float width_;
  float height_;
  float min_depth_;
  float max_depth_;
};

struct SubresourceLayout2KHR {

  using native_type = VkSubresourceLayout2KHR;

  SubresourceLayout2KHR(void *next, VkSubresourceLayout subresource_layout) : next_(next), subresource_layout_(subresource_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSubresourceLayout subresource_layout_;
};

struct IOSSurfaceCreateInfoMVK {

  using native_type = VkIOSSurfaceCreateInfoMVK;

  IOSSurfaceCreateInfoMVK(const void *next, VkIOSSurfaceCreateFlagsMVK flags, const void *view) : next_(next), flags_(flags), view_(view) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkIOSSurfaceCreateFlagsMVK flags_;
  const void *view_;
};

struct VideoDecodeH264PictureInfoKHR {

  using native_type = VkVideoDecodeH264PictureInfoKHR;

  VideoDecodeH264PictureInfoKHR(const void *next, const StdVideoDecodeH264PictureInfo *std_picture_info, uint32_t slice_count,
                                const uint32_t *slice_offsets)
    : next_(next), std_picture_info_(std_picture_info), slice_count_(slice_count), slice_offsets_(slice_offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoDecodeH264PictureInfo *std_picture_info_;
  uint32_t slice_count_;
  const uint32_t *slice_offsets_;
};

struct PipelineExecutableInfoKHR {

  using native_type = VkPipelineExecutableInfoKHR;

  PipelineExecutableInfoKHR(const void *next, VkPipeline pipeline, uint32_t executable_index)
    : next_(next), pipeline_(pipeline), executable_index_(executable_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipeline pipeline_;
  uint32_t executable_index_;
};

struct ExternalMemoryImageCreateInfoNV {

  using native_type = VkExternalMemoryImageCreateInfoNV;

  ExternalMemoryImageCreateInfoNV(const void *next, VkExternalMemoryHandleTypeFlagsNV handle_types)
    : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalMemoryHandleTypeFlagsNV handle_types_;
};

struct VideoEncodeRateControlLayerInfoKHR {

  using native_type = VkVideoEncodeRateControlLayerInfoKHR;

  VideoEncodeRateControlLayerInfoKHR(const void *next, uint64_t average_bitrate, uint64_t max_bitrate, uint32_t frame_rate_numerator,
                                     uint32_t frame_rate_denominator)
    : next_(next), average_bitrate_(average_bitrate), max_bitrate_(max_bitrate), frame_rate_numerator_(frame_rate_numerator),
      frame_rate_denominator_(frame_rate_denominator) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t average_bitrate_;
  uint64_t max_bitrate_;
  uint32_t frame_rate_numerator_;
  uint32_t frame_rate_denominator_;
};

struct PhysicalDeviceMemoryDecompressionPropertiesNV {

  using native_type = VkPhysicalDeviceMemoryDecompressionPropertiesNV;

  PhysicalDeviceMemoryDecompressionPropertiesNV(void *next, VkMemoryDecompressionMethodFlagsNV decompression_methods,
                                                uint64_t max_decompression_indirect_count)
    : next_(next), decompression_methods_(decompression_methods), max_decompression_indirect_count_(max_decompression_indirect_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkMemoryDecompressionMethodFlagsNV decompression_methods_;
  uint64_t max_decompression_indirect_count_;
};

struct DedicatedAllocationMemoryAllocateInfoNV {

  using native_type = VkDedicatedAllocationMemoryAllocateInfoNV;

  DedicatedAllocationMemoryAllocateInfoNV(const void *next, VkImage image, VkBuffer buffer) : next_(next), image_(image), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
  VkBuffer buffer_;
};

struct PhysicalDevicePipelinePropertiesFeaturesEXT {

  using native_type = VkPhysicalDevicePipelinePropertiesFeaturesEXT;

  PhysicalDevicePipelinePropertiesFeaturesEXT(void *next, VkBool32 pipeline_properties_identifier)
    : next_(next), pipeline_properties_identifier_(pipeline_properties_identifier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_properties_identifier_;
};

struct DebugMarkerObjectNameInfoEXT {

  using native_type = VkDebugMarkerObjectNameInfoEXT;

  DebugMarkerObjectNameInfoEXT(const void *next, DebugReportObjectType object_type, uint64_t object, const char *object_name)
    : next_(next), object_type_(object_type), object_(object), object_name_(object_name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DebugReportObjectType object_type_;
  uint64_t object_;
  const char *object_name_;
};

struct PhysicalDeviceHostQueryResetFeatures {

  using native_type = VkPhysicalDeviceHostQueryResetFeatures;

  PhysicalDeviceHostQueryResetFeatures(void *next, VkBool32 host_query_reset) : next_(next), host_query_reset_(host_query_reset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 host_query_reset_;
};

struct DebugMarkerMarkerInfoEXT {

  using native_type = VkDebugMarkerMarkerInfoEXT;

  DebugMarkerMarkerInfoEXT(const void *next, const char *marker_name, float color[4])
    : next_(next), marker_name_(marker_name), color_(color) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const char *marker_name_;
  float color[4] _;
};

struct PhysicalDeviceShaderEnqueuePropertiesAMDX {

  using native_type = VkPhysicalDeviceShaderEnqueuePropertiesAMDX;

  PhysicalDeviceShaderEnqueuePropertiesAMDX(void *next, uint32_t max_execution_graph_depth,
                                            uint32_t max_execution_graph_shader_output_nodes,
                                            uint32_t max_execution_graph_shader_payload_size,
                                            uint32_t max_execution_graph_shader_payload_count,
                                            uint32_t execution_graph_dispatch_address_alignment)
    : next_(next), max_execution_graph_depth_(max_execution_graph_depth),
      max_execution_graph_shader_output_nodes_(max_execution_graph_shader_output_nodes),
      max_execution_graph_shader_payload_size_(max_execution_graph_shader_payload_size),
      max_execution_graph_shader_payload_count_(max_execution_graph_shader_payload_count),
      execution_graph_dispatch_address_alignment_(execution_graph_dispatch_address_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_execution_graph_depth_;
  uint32_t max_execution_graph_shader_output_nodes_;
  uint32_t max_execution_graph_shader_payload_size_;
  uint32_t max_execution_graph_shader_payload_count_;
  uint32_t execution_graph_dispatch_address_alignment_;
};

struct ApplicationParametersEXT {

  using native_type = VkApplicationParametersEXT;

  ApplicationParametersEXT(const void *next, uint32_t vendor_id, uint32_t device_id, uint32_t key, uint64_t value)
    : next_(next), vendor_id_(vendor_id), device_id_(device_id), key_(key), value_(value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  uint32_t key_;
  uint64_t value_;
};

struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT {

  using native_type = VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;

  PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(void *next, VkBool32 rasterization_order_color_attachment_access,
                                                              VkBool32 rasterization_order_depth_attachment_access,
                                                              VkBool32 rasterization_order_stencil_attachment_access)
    : next_(next), rasterization_order_color_attachment_access_(rasterization_order_color_attachment_access),
      rasterization_order_depth_attachment_access_(rasterization_order_depth_attachment_access),
      rasterization_order_stencil_attachment_access_(rasterization_order_stencil_attachment_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 rasterization_order_color_attachment_access_;
  VkBool32 rasterization_order_depth_attachment_access_;
  VkBool32 rasterization_order_stencil_attachment_access_;
};

struct SubmitInfo2 {

  using native_type = VkSubmitInfo2;

  SubmitInfo2(const void *next, VkSubmitFlags flags, uint32_t wait_semaphore_info_count, const VkSemaphoreSubmitInfo *wait_semaphore_infos,
              uint32_t command_buffer_info_count, const VkCommandBufferSubmitInfo *command_buffer_infos,
              uint32_t signal_semaphore_info_count, const VkSemaphoreSubmitInfo *signal_semaphore_infos)
    : next_(next), flags_(flags), wait_semaphore_info_count_(wait_semaphore_info_count), wait_semaphore_infos_(wait_semaphore_infos),
      command_buffer_info_count_(command_buffer_info_count), command_buffer_infos_(command_buffer_infos),
      signal_semaphore_info_count_(signal_semaphore_info_count), signal_semaphore_infos_(signal_semaphore_infos) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSubmitFlags flags_;
  uint32_t wait_semaphore_info_count_;
  const VkSemaphoreSubmitInfo *wait_semaphore_infos_;
  uint32_t command_buffer_info_count_;
  const VkCommandBufferSubmitInfo *command_buffer_infos_;
  uint32_t signal_semaphore_info_count_;
  const VkSemaphoreSubmitInfo *signal_semaphore_infos_;
};

struct WriteDescriptorSet {

  using native_type = VkWriteDescriptorSet;

  WriteDescriptorSet(const void *next, VkDescriptorSet dst_set, uint32_t dst_binding, uint32_t dst_array_element, uint32_t descriptor_count,
                     DescriptorType descriptor_type, const VkDescriptorImageInfo *image_info, const VkDescriptorBufferInfo *buffer_info,
                     const VkBufferView *texel_buffer_view)
    : next_(next), dst_set_(dst_set), dst_binding_(dst_binding), dst_array_element_(dst_array_element), descriptor_count_(descriptor_count),
      descriptor_type_(descriptor_type), image_info_(image_info), buffer_info_(buffer_info), texel_buffer_view_(texel_buffer_view) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorSet dst_set_;
  uint32_t dst_binding_;
  uint32_t dst_array_element_;
  uint32_t descriptor_count_;
  DescriptorType descriptor_type_;
  const VkDescriptorImageInfo *image_info_;
  const VkDescriptorBufferInfo *buffer_info_;
  const VkBufferView *texel_buffer_view_;
};

struct TimelineSemaphoreSubmitInfo {

  using native_type = VkTimelineSemaphoreSubmitInfo;

  TimelineSemaphoreSubmitInfo(const void *next, uint32_t wait_semaphore_value_count, const uint64_t *wait_semaphore_values,
                              uint32_t signal_semaphore_value_count, const uint64_t *signal_semaphore_values)
    : next_(next), wait_semaphore_value_count_(wait_semaphore_value_count), wait_semaphore_values_(wait_semaphore_values),
      signal_semaphore_value_count_(signal_semaphore_value_count), signal_semaphore_values_(signal_semaphore_values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t wait_semaphore_value_count_;
  const uint64_t *wait_semaphore_values_;
  uint32_t signal_semaphore_value_count_;
  const uint64_t *signal_semaphore_values_;
};

struct ValidationFeaturesEXT {

  using native_type = VkValidationFeaturesEXT;

  ValidationFeaturesEXT(const void *next, uint32_t enabled_validation_feature_count,
                        const ValidationFeatureEnable *enabled_validation_features, uint32_t disabled_validation_feature_count,
                        const ValidationFeatureDisable *disabled_validation_features)
    : next_(next), enabled_validation_feature_count_(enabled_validation_feature_count),
      enabled_validation_features_(enabled_validation_features), disabled_validation_feature_count_(disabled_validation_feature_count),
      disabled_validation_features_(disabled_validation_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t enabled_validation_feature_count_;
  const ValidationFeatureEnable *enabled_validation_features_;
  uint32_t disabled_validation_feature_count_;
  const ValidationFeatureDisable *disabled_validation_features_;
};

struct OpticalFlowImageFormatPropertiesNV {

  using native_type = VkOpticalFlowImageFormatPropertiesNV;

  OpticalFlowImageFormatPropertiesNV(const void *next, Format format) : next_(next), format_(format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Format format_;
};

struct PhysicalDeviceShaderFloat16Int8Features {

  using native_type = VkPhysicalDeviceShaderFloat16Int8Features;

  PhysicalDeviceShaderFloat16Int8Features(void *next, VkBool32 shader_float16, VkBool32 shader_int8)
    : next_(next), shader_float16_(shader_float16), shader_int8_(shader_int8) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_float16_;
  VkBool32 shader_int8_;
};

struct PhysicalDeviceVariablePointersFeatures {

  using native_type = VkPhysicalDeviceVariablePointersFeatures;

  PhysicalDeviceVariablePointersFeatures(void *next, VkBool32 variable_pointers_storage_buffer, VkBool32 variable_pointers)
    : next_(next), variable_pointers_storage_buffer_(variable_pointers_storage_buffer), variable_pointers_(variable_pointers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 variable_pointers_storage_buffer_;
  VkBool32 variable_pointers_;
};

struct PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT {

  using native_type = VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;

  PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(void *next, VkBool32 graphics_pipeline_library_fast_linking,
                                                     VkBool32 graphics_pipeline_library_independent_interpolation_decoration)
    : next_(next), graphics_pipeline_library_fast_linking_(graphics_pipeline_library_fast_linking),
      graphics_pipeline_library_independent_interpolation_decoration_(graphics_pipeline_library_independent_interpolation_decoration) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 graphics_pipeline_library_fast_linking_;
  VkBool32 graphics_pipeline_library_independent_interpolation_decoration_;
};

struct ExportSemaphoreWin32HandleInfoKHR {

  using native_type = VkExportSemaphoreWin32HandleInfoKHR;

  ExportSemaphoreWin32HandleInfoKHR(const void *next, const SECURITY_ATTRIBUTES *attributes, DWORD dw_access, LPCWSTR name)
    : next_(next), attributes_(attributes), dw_access_(dw_access), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const SECURITY_ATTRIBUTES *attributes_;
  DWORD dw_access_;
  LPCWSTR name_;
};

struct AccelerationStructureTrianglesOpacityMicromapEXT {

  using native_type = VkAccelerationStructureTrianglesOpacityMicromapEXT;

  AccelerationStructureTrianglesOpacityMicromapEXT(void *next, IndexType index_type, VkDeviceOrHostAddressConstKHR index_buffer,
                                                   VkDeviceSize index_stride, uint32_t base_triangle, uint32_t usage_counts_count,
                                                   const VkMicromapUsageEXT *usage_counts, const VkMicromapUsageEXT *const *usage_counts,
                                                   VkMicromapEXT micromap)
    : next_(next), index_type_(index_type), index_buffer_(index_buffer), index_stride_(index_stride), base_triangle_(base_triangle),
      usage_counts_count_(usage_counts_count), usage_counts_(usage_counts), usage_counts_(usage_counts), micromap_(micromap) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  IndexType index_type_;
  VkDeviceOrHostAddressConstKHR index_buffer_;
  VkDeviceSize index_stride_;
  uint32_t base_triangle_;
  uint32_t usage_counts_count_;
  const VkMicromapUsageEXT *usage_counts_;
  const VkMicromapUsageEXT *const *usage_counts_;
  VkMicromapEXT micromap_;
};

struct ValidationFlagsEXT {

  using native_type = VkValidationFlagsEXT;

  ValidationFlagsEXT(const void *next, uint32_t disabled_validation_check_count, const ValidationCheck *disabled_validation_checks)
    : next_(next), disabled_validation_check_count_(disabled_validation_check_count),
      disabled_validation_checks_(disabled_validation_checks) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t disabled_validation_check_count_;
  const ValidationCheck *disabled_validation_checks_;
};

struct RenderingAttachmentLocationInfoKHR {

  using native_type = VkRenderingAttachmentLocationInfoKHR;

  RenderingAttachmentLocationInfoKHR(const void *next, uint32_t color_attachment_count, const uint32_t *color_attachment_locations)
    : next_(next), color_attachment_count_(color_attachment_count), color_attachment_locations_(color_attachment_locations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t color_attachment_count_;
  const uint32_t *color_attachment_locations_;
};

struct PresentInfoKHR {

  using native_type = VkPresentInfoKHR;

  PresentInfoKHR(const void *next, uint32_t wait_semaphore_count, const VkSemaphore *wait_semaphores, uint32_t swapchain_count,
                 const VkSwapchainKHR *swapchains, const uint32_t *image_indices, Result *results)
    : next_(next), wait_semaphore_count_(wait_semaphore_count), wait_semaphores_(wait_semaphores), swapchain_count_(swapchain_count),
      swapchains_(swapchains), image_indices_(image_indices), results_(results) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *wait_semaphores_;
  uint32_t swapchain_count_;
  const VkSwapchainKHR *swapchains_;
  const uint32_t *image_indices_;
  Result *results_;
};

struct RenderPassCreateInfo {

  using native_type = VkRenderPassCreateInfo;

  RenderPassCreateInfo(const void *next, VkRenderPassCreateFlags flags, uint32_t attachment_count,
                       const VkAttachmentDescription *attachments, uint32_t subpass_count, const VkSubpassDescription *subpasses,
                       uint32_t dependency_count, const VkSubpassDependency *dependencies)
    : next_(next), flags_(flags), attachment_count_(attachment_count), attachments_(attachments), subpass_count_(subpass_count),
      subpasses_(subpasses), dependency_count_(dependency_count), dependencies_(dependencies) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderPassCreateFlags flags_;
  uint32_t attachment_count_;
  const VkAttachmentDescription *attachments_;
  uint32_t subpass_count_;
  const VkSubpassDescription *subpasses_;
  uint32_t dependency_count_;
  const VkSubpassDependency *dependencies_;
};

struct ImportSemaphoreWin32HandleInfoKHR {

  using native_type = VkImportSemaphoreWin32HandleInfoKHR;

  ImportSemaphoreWin32HandleInfoKHR(const void *next, VkSemaphore semaphore, VkSemaphoreImportFlags flags,
                                    ExternalSemaphoreHandleTypeMaskBit handle_type, HANDLE handle, LPCWSTR name)
    : next_(next), semaphore_(semaphore), flags_(flags), handle_type_(handle_type), handle_(handle), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  VkSemaphoreImportFlags flags_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
  HANDLE handle_;
  LPCWSTR name_;
};

struct PhysicalDeviceMultiviewProperties {

  using native_type = VkPhysicalDeviceMultiviewProperties;

  PhysicalDeviceMultiviewProperties(void *next, uint32_t max_multiview_view_count, uint32_t max_multiview_instance_index)
    : next_(next), max_multiview_view_count_(max_multiview_view_count), max_multiview_instance_index_(max_multiview_instance_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_multiview_view_count_;
  uint32_t max_multiview_instance_index_;
};

struct PhysicalDeviceDriverProperties {

  using native_type = VkPhysicalDeviceDriverProperties;

  PhysicalDeviceDriverProperties(void *next, DriverId driver_id, char driver_name[VK_MAX_DRIVER_NAME_SIZE],
                                 char driver_info[VK_MAX_DRIVER_INFO_SIZE], VkConformanceVersion conformance_version)
    : next_(next), driver_id_(driver_id), driver_name_(driver_name), driver_info_(driver_info), conformance_version_(conformance_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  DriverId driver_id_;
  char driver_name[VK_MAX_DRIVER_NAME_SIZE] _;
  char driver_info[VK_MAX_DRIVER_INFO_SIZE] _;
  VkConformanceVersion conformance_version_;
};

struct PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT {

  using native_type = VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT;

  PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(void *next, size_t combined_image_sampler_density_map_descriptor_size)
    : next_(next), combined_image_sampler_density_map_descriptor_size_(combined_image_sampler_density_map_descriptor_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  size_t combined_image_sampler_density_map_descriptor_size_;
};

struct SamplerCreateInfo {

  using native_type = VkSamplerCreateInfo;

  SamplerCreateInfo(const void *next, VkSamplerCreateFlags flags, Filter mag_filter, Filter min_filter, SamplerMipmapMode mipmap_mode,
                    SamplerAddressMode address_mode_u, SamplerAddressMode address_mode_v, SamplerAddressMode address_mode_w,
                    float mip_lod_bias, VkBool32 anisotropy_enable, float max_anisotropy, VkBool32 compare_enable, CompareOp compare_op,
                    float min_lod, float max_lod, BorderColor border_color, VkBool32 unnormalized_coordinates)
    : next_(next), flags_(flags), mag_filter_(mag_filter), min_filter_(min_filter), mipmap_mode_(mipmap_mode),
      address_mode_u_(address_mode_u), address_mode_v_(address_mode_v), address_mode_w_(address_mode_w), mip_lod_bias_(mip_lod_bias),
      anisotropy_enable_(anisotropy_enable), max_anisotropy_(max_anisotropy), compare_enable_(compare_enable), compare_op_(compare_op),
      min_lod_(min_lod), max_lod_(max_lod), border_color_(border_color), unnormalized_coordinates_(unnormalized_coordinates) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSamplerCreateFlags flags_;
  Filter mag_filter_;
  Filter min_filter_;
  SamplerMipmapMode mipmap_mode_;
  SamplerAddressMode address_mode_u_;
  SamplerAddressMode address_mode_v_;
  SamplerAddressMode address_mode_w_;
  float mip_lod_bias_;
  VkBool32 anisotropy_enable_;
  float max_anisotropy_;
  VkBool32 compare_enable_;
  CompareOp compare_op_;
  float min_lod_;
  float max_lod_;
  BorderColor border_color_;
  VkBool32 unnormalized_coordinates_;
};

struct MemoryAllocateFlagsInfo {

  using native_type = VkMemoryAllocateFlagsInfo;

  MemoryAllocateFlagsInfo(const void *next, VkMemoryAllocateFlags flags, uint32_t device_mask)
    : next_(next), flags_(flags), device_mask_(device_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMemoryAllocateFlags flags_;
  uint32_t device_mask_;
};

struct PhysicalDeviceRawAccessChainsFeaturesNV {

  using native_type = VkPhysicalDeviceRawAccessChainsFeaturesNV;

  PhysicalDeviceRawAccessChainsFeaturesNV(void *next, VkBool32 shader_raw_access_chains)
    : next_(next), shader_raw_access_chains_(shader_raw_access_chains) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_raw_access_chains_;
};

struct QueueFamilyProperties2 {

  using native_type = VkQueueFamilyProperties2;

  QueueFamilyProperties2(void *next, VkQueueFamilyProperties queue_family_properties)
    : next_(next), queue_family_properties_(queue_family_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkQueueFamilyProperties queue_family_properties_;
};

struct MemoryWin32HandlePropertiesKHR {

  using native_type = VkMemoryWin32HandlePropertiesKHR;

  MemoryWin32HandlePropertiesKHR(void *next, uint32_t memory_type_bits) : next_(next), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t memory_type_bits_;
};

struct PhysicalDeviceExternalSemaphoreInfo {

  using native_type = VkPhysicalDeviceExternalSemaphoreInfo;

  PhysicalDeviceExternalSemaphoreInfo(const void *next, ExternalSemaphoreHandleTypeMaskBit handle_type)
    : next_(next), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct ImageCreateInfo {

  using native_type = VkImageCreateInfo;

  ImageCreateInfo(const void *next, VkImageCreateFlags flags, ImageType image_type, Format format, VkExtent3D extent, uint32_t mip_levels,
                  uint32_t array_layers, SampleCountMaskBit samples, ImageTiling tiling, VkImageUsageFlags usage, SharingMode sharing_mode,
                  uint32_t queue_family_index_count, const uint32_t *queue_family_indices, ImageLayout initial_layout)
    : next_(next), flags_(flags), image_type_(image_type), format_(format), extent_(extent), mip_levels_(mip_levels),
      array_layers_(array_layers), samples_(samples), tiling_(tiling), usage_(usage), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), queue_family_indices_(queue_family_indices), initial_layout_(initial_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageCreateFlags flags_;
  ImageType image_type_;
  Format format_;
  VkExtent3D extent_;
  uint32_t mip_levels_;
  uint32_t array_layers_;
  SampleCountMaskBit samples_;
  ImageTiling tiling_;
  VkImageUsageFlags usage_;
  SharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *queue_family_indices_;
  ImageLayout initial_layout_;
};

struct DeviceBufferMemoryRequirements {

  using native_type = VkDeviceBufferMemoryRequirements;

  DeviceBufferMemoryRequirements(const void *next, const VkBufferCreateInfo *create_info) : next_(next), create_info_(create_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const VkBufferCreateInfo *create_info_;
};

struct PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;

  PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(void *next, VkBool32 shader_relaxed_extended_instruction)
    : next_(next), shader_relaxed_extended_instruction_(shader_relaxed_extended_instruction) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_relaxed_extended_instruction_;
};

struct PhysicalDeviceTimelineSemaphoreProperties {

  using native_type = VkPhysicalDeviceTimelineSemaphoreProperties;

  PhysicalDeviceTimelineSemaphoreProperties(void *next, uint64_t max_timeline_semaphore_value_difference)
    : next_(next), max_timeline_semaphore_value_difference_(max_timeline_semaphore_value_difference) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t max_timeline_semaphore_value_difference_;
};

struct SurfaceFormatKHR {

  using native_type = VkSurfaceFormatKHR;

  SurfaceFormatKHR(Format format, ColorSpace color_space) : format_(format), color_space_(color_space) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  Format format_;
  ColorSpace color_space_;
};

struct PhysicalDeviceImageDrmFormatModifierInfoEXT {

  using native_type = VkPhysicalDeviceImageDrmFormatModifierInfoEXT;

  PhysicalDeviceImageDrmFormatModifierInfoEXT(const void *next, uint64_t drm_format_modifier, SharingMode sharing_mode,
                                              uint32_t queue_family_index_count, const uint32_t *queue_family_indices)
    : next_(next), drm_format_modifier_(drm_format_modifier), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), queue_family_indices_(queue_family_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t drm_format_modifier_;
  SharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *queue_family_indices_;
};

struct PhysicalDeviceConservativeRasterizationPropertiesEXT {

  using native_type = VkPhysicalDeviceConservativeRasterizationPropertiesEXT;

  PhysicalDeviceConservativeRasterizationPropertiesEXT(
    void *next, float primitive_overestimation_size, float max_extra_primitive_overestimation_size,
    float extra_primitive_overestimation_size_granularity, VkBool32 primitive_underestimation,
    VkBool32 conservative_point_and_line_rasterization, VkBool32 degenerate_triangles_rasterized, VkBool32 degenerate_lines_rasterized,
    VkBool32 fully_covered_fragment_shader_input_variable, VkBool32 conservative_rasterization_post_depth_coverage)
    : next_(next), primitive_overestimation_size_(primitive_overestimation_size),
      max_extra_primitive_overestimation_size_(max_extra_primitive_overestimation_size),
      extra_primitive_overestimation_size_granularity_(extra_primitive_overestimation_size_granularity),
      primitive_underestimation_(primitive_underestimation),
      conservative_point_and_line_rasterization_(conservative_point_and_line_rasterization),
      degenerate_triangles_rasterized_(degenerate_triangles_rasterized), degenerate_lines_rasterized_(degenerate_lines_rasterized),
      fully_covered_fragment_shader_input_variable_(fully_covered_fragment_shader_input_variable),
      conservative_rasterization_post_depth_coverage_(conservative_rasterization_post_depth_coverage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  float primitive_overestimation_size_;
  float max_extra_primitive_overestimation_size_;
  float extra_primitive_overestimation_size_granularity_;
  VkBool32 primitive_underestimation_;
  VkBool32 conservative_point_and_line_rasterization_;
  VkBool32 degenerate_triangles_rasterized_;
  VkBool32 degenerate_lines_rasterized_;
  VkBool32 fully_covered_fragment_shader_input_variable_;
  VkBool32 conservative_rasterization_post_depth_coverage_;
};

struct SemaphoreSciSyncPoolCreateInfoNV {

  using native_type = VkSemaphoreSciSyncPoolCreateInfoNV;

  SemaphoreSciSyncPoolCreateInfoNV(const void *next, NvSciSyncObj handle) : next_(next), handle_(handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  NvSciSyncObj handle_;
};

struct PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV {

  using native_type = VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;

  PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(void *next, VkBool32 extended_sparse_address_space)
    : next_(next), extended_sparse_address_space_(extended_sparse_address_space) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 extended_sparse_address_space_;
};

struct VideoInlineQueryInfoKHR {

  using native_type = VkVideoInlineQueryInfoKHR;

  VideoInlineQueryInfoKHR(const void *next, VkQueryPool query_pool, uint32_t first_query, uint32_t query_count)
    : next_(next), query_pool_(query_pool), first_query_(first_query), query_count_(query_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkQueryPool query_pool_;
  uint32_t first_query_;
  uint32_t query_count_;
};

struct BindSparseInfo {

  using native_type = VkBindSparseInfo;

  BindSparseInfo(const void *next, uint32_t wait_semaphore_count, const VkSemaphore *wait_semaphores, uint32_t buffer_bind_count,
                 const VkSparseBufferMemoryBindInfo *buffer_binds, uint32_t image_opaque_bind_count,
                 const VkSparseImageOpaqueMemoryBindInfo *image_opaque_binds, uint32_t image_bind_count,
                 const VkSparseImageMemoryBindInfo *image_binds, uint32_t signal_semaphore_count, const VkSemaphore *signal_semaphores)
    : next_(next), wait_semaphore_count_(wait_semaphore_count), wait_semaphores_(wait_semaphores), buffer_bind_count_(buffer_bind_count),
      buffer_binds_(buffer_binds), image_opaque_bind_count_(image_opaque_bind_count), image_opaque_binds_(image_opaque_binds),
      image_bind_count_(image_bind_count), image_binds_(image_binds), signal_semaphore_count_(signal_semaphore_count),
      signal_semaphores_(signal_semaphores) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *wait_semaphores_;
  uint32_t buffer_bind_count_;
  const VkSparseBufferMemoryBindInfo *buffer_binds_;
  uint32_t image_opaque_bind_count_;
  const VkSparseImageOpaqueMemoryBindInfo *image_opaque_binds_;
  uint32_t image_bind_count_;
  const VkSparseImageMemoryBindInfo *image_binds_;
  uint32_t signal_semaphore_count_;
  const VkSemaphore *signal_semaphores_;
};

struct MemoryPriorityAllocateInfoEXT {

  using native_type = VkMemoryPriorityAllocateInfoEXT;

  MemoryPriorityAllocateInfoEXT(const void *next, float priority) : next_(next), priority_(priority) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  float priority_;
};

struct StreamDescriptorSurfaceCreateInfoGGP {

  using native_type = VkStreamDescriptorSurfaceCreateInfoGGP;

  StreamDescriptorSurfaceCreateInfoGGP(const void *next, VkStreamDescriptorSurfaceCreateFlagsGGP flags,
                                       GgpStreamDescriptor stream_descriptor)
    : next_(next), flags_(flags), stream_descriptor_(stream_descriptor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkStreamDescriptorSurfaceCreateFlagsGGP flags_;
  GgpStreamDescriptor stream_descriptor_;
};

struct MemoryToImageCopyEXT {

  using native_type = VkMemoryToImageCopyEXT;

  MemoryToImageCopyEXT(const void *next, const void *host_pointer, uint32_t memory_row_length, uint32_t memory_image_height,
                       VkImageSubresourceLayers image_subresource, VkOffset3D image_offset, VkExtent3D image_extent)
    : next_(next), host_pointer_(host_pointer), memory_row_length_(memory_row_length), memory_image_height_(memory_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const void *host_pointer_;
  uint32_t memory_row_length_;
  uint32_t memory_image_height_;
  VkImageSubresourceLayers image_subresource_;
  VkOffset3D image_offset_;
  VkExtent3D image_extent_;
};

struct ShaderModuleValidationCacheCreateInfoEXT {

  using native_type = VkShaderModuleValidationCacheCreateInfoEXT;

  ShaderModuleValidationCacheCreateInfoEXT(const void *next, VkValidationCacheEXT validation_cache)
    : next_(next), validation_cache_(validation_cache) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkValidationCacheEXT validation_cache_;
};

struct ExportMetalDeviceInfoEXT {

  using native_type = VkExportMetalDeviceInfoEXT;

  ExportMetalDeviceInfoEXT(const void *next, MTLDevice_id mtl_device) : next_(next), mtl_device_(mtl_device) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  MTLDevice_id mtl_device_;
};

struct ImageSubresource {

  using native_type = VkImageSubresource;

  ImageSubresource(VkImageAspectFlags aspect_mask, uint32_t mip_level, uint32_t array_layer)
    : aspect_mask_(aspect_mask), mip_level_(mip_level), array_layer_(array_layer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageAspectFlags aspect_mask_;
  uint32_t mip_level_;
  uint32_t array_layer_;
};

struct ImagePipeSurfaceCreateInfoFUCHSIA {

  using native_type = VkImagePipeSurfaceCreateInfoFUCHSIA;

  ImagePipeSurfaceCreateInfoFUCHSIA(const void *next, VkImagePipeSurfaceCreateFlagsFUCHSIA flags, zx_handle_t image_pipe_handle)
    : next_(next), flags_(flags), image_pipe_handle_(image_pipe_handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImagePipeSurfaceCreateFlagsFUCHSIA flags_;
  zx_handle_t image_pipe_handle_;
};

struct DedicatedAllocationImageCreateInfoNV {

  using native_type = VkDedicatedAllocationImageCreateInfoNV;

  DedicatedAllocationImageCreateInfoNV(const void *next, VkBool32 dedicated_allocation)
    : next_(next), dedicated_allocation_(dedicated_allocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 dedicated_allocation_;
};

struct PhysicalDeviceCornerSampledImageFeaturesNV {

  using native_type = VkPhysicalDeviceCornerSampledImageFeaturesNV;

  PhysicalDeviceCornerSampledImageFeaturesNV(void *next, VkBool32 corner_sampled_image)
    : next_(next), corner_sampled_image_(corner_sampled_image) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 corner_sampled_image_;
};

struct DirectFBSurfaceCreateInfoEXT {

  using native_type = VkDirectFBSurfaceCreateInfoEXT;

  DirectFBSurfaceCreateInfoEXT(const void *next, VkDirectFBSurfaceCreateFlagsEXT flags, IDirectFB *dfb, IDirectFBSurface *surface)
    : next_(next), flags_(flags), dfb_(dfb), surface_(surface) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDirectFBSurfaceCreateFlagsEXT flags_;
  IDirectFB *dfb_;
  IDirectFBSurface *surface_;
};

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {

  using native_type = VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

  PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(void *next, VkBool32 dedicated_allocation_image_aliasing)
    : next_(next), dedicated_allocation_image_aliasing_(dedicated_allocation_image_aliasing) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 dedicated_allocation_image_aliasing_;
};

struct MemoryGetZirconHandleInfoFUCHSIA {

  using native_type = VkMemoryGetZirconHandleInfoFUCHSIA;

  MemoryGetZirconHandleInfoFUCHSIA(const void *next, VkDeviceMemory memory, ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), memory_(memory), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct XlibSurfaceCreateInfoKHR {

  using native_type = VkXlibSurfaceCreateInfoKHR;

  XlibSurfaceCreateInfoKHR(const void *next, VkXlibSurfaceCreateFlagsKHR flags, Display *dpy, Window window)
    : next_(next), flags_(flags), dpy_(dpy), window_(window) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkXlibSurfaceCreateFlagsKHR flags_;
  Display *dpy_;
  Window window_;
};

struct PresentIdKHR {

  using native_type = VkPresentIdKHR;

  PresentIdKHR(const void *next, uint32_t swapchain_count, const uint64_t *present_ids)
    : next_(next), swapchain_count_(swapchain_count), present_ids_(present_ids) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t swapchain_count_;
  const uint64_t *present_ids_;
};

struct DisplayModeProperties2KHR {

  using native_type = VkDisplayModeProperties2KHR;

  DisplayModeProperties2KHR(void *next, VkDisplayModePropertiesKHR display_mode_properties)
    : next_(next), display_mode_properties_(display_mode_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDisplayModePropertiesKHR display_mode_properties_;
};

struct ImportMemoryHostPointerInfoEXT {

  using native_type = VkImportMemoryHostPointerInfoEXT;

  ImportMemoryHostPointerInfoEXT(const void *next, ExternalMemoryHandleTypeMaskBit handle_type, void *host_pointer)
    : next_(next), handle_type_(handle_type), host_pointer_(host_pointer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  void *host_pointer_;
};

struct BindPipelineIndirectCommandNV {

  using native_type = VkBindPipelineIndirectCommandNV;

  BindPipelineIndirectCommandNV(VkDeviceAddress pipeline_address) : pipeline_address_(pipeline_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress pipeline_address_;
};

struct CopyBufferToImageInfo2 {

  using native_type = VkCopyBufferToImageInfo2;

  CopyBufferToImageInfo2(const void *next, VkBuffer src_buffer, VkImage dst_image, ImageLayout dst_image_layout, uint32_t region_count,
                         const VkBufferImageCopy2 *regions)
    : next_(next), src_buffer_(src_buffer), dst_image_(dst_image), dst_image_layout_(dst_image_layout), region_count_(region_count),
      regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer src_buffer_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const VkBufferImageCopy2 *regions_;
};

struct ImageCopy {

  using native_type = VkImageCopy;

  ImageCopy(VkImageSubresourceLayers src_subresource, VkOffset3D src_offset, VkImageSubresourceLayers dst_subresource,
            VkOffset3D dst_offset, VkExtent3D extent)
    : src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageSubresourceLayers src_subresource_;
  VkOffset3D src_offset_;
  VkImageSubresourceLayers dst_subresource_;
  VkOffset3D dst_offset_;
  VkExtent3D extent_;
};

struct MemoryZirconHandlePropertiesFUCHSIA {

  using native_type = VkMemoryZirconHandlePropertiesFUCHSIA;

  MemoryZirconHandlePropertiesFUCHSIA(void *next, uint32_t memory_type_bits) : next_(next), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t memory_type_bits_;
};

struct AccelerationStructureCaptureDescriptorDataInfoEXT {

  using native_type = VkAccelerationStructureCaptureDescriptorDataInfoEXT;

  AccelerationStructureCaptureDescriptorDataInfoEXT(const void *next, VkAccelerationStructureKHR acceleration_structure,
                                                    VkAccelerationStructureNV acceleration_structure_nv)
    : next_(next), acceleration_structure_(acceleration_structure), acceleration_structure_nv_(acceleration_structure_nv) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureKHR acceleration_structure_;
  VkAccelerationStructureNV acceleration_structure_nv_;
};

struct SurfaceFullScreenExclusiveInfoEXT {

  using native_type = VkSurfaceFullScreenExclusiveInfoEXT;

  SurfaceFullScreenExclusiveInfoEXT(void *next, FullScreenExclusive full_screen_exclusive)
    : next_(next), full_screen_exclusive_(full_screen_exclusive) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  FullScreenExclusive full_screen_exclusive_;
};

struct DeviceSemaphoreSciSyncPoolReservationCreateInfoNV {

  using native_type = VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV;

  DeviceSemaphoreSciSyncPoolReservationCreateInfoNV(const void *next, uint32_t semaphore_sci_sync_pool_request_count)
    : next_(next), semaphore_sci_sync_pool_request_count_(semaphore_sci_sync_pool_request_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t semaphore_sci_sync_pool_request_count_;
};

struct SwapchainPresentModesCreateInfoEXT {

  using native_type = VkSwapchainPresentModesCreateInfoEXT;

  SwapchainPresentModesCreateInfoEXT(const void *next, uint32_t present_mode_count, const PresentMode *present_modes)
    : next_(next), present_mode_count_(present_mode_count), present_modes_(present_modes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t present_mode_count_;
  const PresentMode *present_modes_;
};

struct Win32KeyedMutexAcquireReleaseInfoKHR {

  using native_type = VkWin32KeyedMutexAcquireReleaseInfoKHR;

  Win32KeyedMutexAcquireReleaseInfoKHR(const void *next, uint32_t acquire_count, const VkDeviceMemory *acquire_syncs,
                                       const uint64_t *acquire_keys, const uint32_t *acquire_timeouts, uint32_t release_count,
                                       const VkDeviceMemory *release_syncs, const uint64_t *release_keys)
    : next_(next), acquire_count_(acquire_count), acquire_syncs_(acquire_syncs), acquire_keys_(acquire_keys),
      acquire_timeouts_(acquire_timeouts), release_count_(release_count), release_syncs_(release_syncs), release_keys_(release_keys) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t acquire_count_;
  const VkDeviceMemory *acquire_syncs_;
  const uint64_t *acquire_keys_;
  const uint32_t *acquire_timeouts_;
  uint32_t release_count_;
  const VkDeviceMemory *release_syncs_;
  const uint64_t *release_keys_;
};

struct CopyCommandTransformInfoQCOM {

  using native_type = VkCopyCommandTransformInfoQCOM;

  CopyCommandTransformInfoQCOM(const void *next, SurfaceTransformMaskBit transform) : next_(next), transform_(transform) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  SurfaceTransformMaskBit transform_;
};

struct SparseImageMemoryBindInfo {

  using native_type = VkSparseImageMemoryBindInfo;

  SparseImageMemoryBindInfo(VkImage image, uint32_t bind_count, const VkSparseImageMemoryBind *binds)
    : image_(image), bind_count_(bind_count), binds_(binds) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImage image_;
  uint32_t bind_count_;
  const VkSparseImageMemoryBind *binds_;
};

struct ExecutionGraphPipelineCreateInfoAMDX {

  using native_type = VkExecutionGraphPipelineCreateInfoAMDX;

  ExecutionGraphPipelineCreateInfoAMDX(const void *next, VkPipelineCreateFlags flags, uint32_t stage_count,
                                       const VkPipelineShaderStageCreateInfo *stages, const VkPipelineLibraryCreateInfoKHR *library_info,
                                       VkPipelineLayout layout, VkPipeline base_pipeline_handle, int32_t base_pipeline_index)
    : next_(next), flags_(flags), stage_count_(stage_count), stages_(stages), library_info_(library_info), layout_(layout),
      base_pipeline_handle_(base_pipeline_handle), base_pipeline_index_(base_pipeline_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreateFlags flags_;
  uint32_t stage_count_;
  const VkPipelineShaderStageCreateInfo *stages_;
  const VkPipelineLibraryCreateInfoKHR *library_info_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct SparseImageOpaqueMemoryBindInfo {

  using native_type = VkSparseImageOpaqueMemoryBindInfo;

  SparseImageOpaqueMemoryBindInfo(VkImage image, uint32_t bind_count, const VkSparseMemoryBind *binds)
    : image_(image), bind_count_(bind_count), binds_(binds) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImage image_;
  uint32_t bind_count_;
  const VkSparseMemoryBind *binds_;
};

struct DevicePrivateDataCreateInfo {

  using native_type = VkDevicePrivateDataCreateInfo;

  DevicePrivateDataCreateInfo(const void *next, uint32_t private_data_slot_request_count)
    : next_(next), private_data_slot_request_count_(private_data_slot_request_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t private_data_slot_request_count_;
};

struct PipelineRasterizationStateCreateInfo {

  using native_type = VkPipelineRasterizationStateCreateInfo;

  PipelineRasterizationStateCreateInfo(const void *next, VkPipelineRasterizationStateCreateFlags flags, VkBool32 depth_clamp_enable,
                                       VkBool32 rasterizer_discard_enable, PolygonMode polygon_mode, VkCullModeFlags cull_mode,
                                       FrontFace front_face, VkBool32 depth_bias_enable, float depth_bias_constant_factor,
                                       float depth_bias_clamp, float depth_bias_slope_factor, float line_width)
    : next_(next), flags_(flags), depth_clamp_enable_(depth_clamp_enable), rasterizer_discard_enable_(rasterizer_discard_enable),
      polygon_mode_(polygon_mode), cull_mode_(cull_mode), front_face_(front_face), depth_bias_enable_(depth_bias_enable),
      depth_bias_constant_factor_(depth_bias_constant_factor), depth_bias_clamp_(depth_bias_clamp),
      depth_bias_slope_factor_(depth_bias_slope_factor), line_width_(line_width) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineRasterizationStateCreateFlags flags_;
  VkBool32 depth_clamp_enable_;
  VkBool32 rasterizer_discard_enable_;
  PolygonMode polygon_mode_;
  VkCullModeFlags cull_mode_;
  FrontFace front_face_;
  VkBool32 depth_bias_enable_;
  float depth_bias_constant_factor_;
  float depth_bias_clamp_;
  float depth_bias_slope_factor_;
  float line_width_;
};

struct MemoryGetSciBufInfoNV {

  using native_type = VkMemoryGetSciBufInfoNV;

  MemoryGetSciBufInfoNV(const void *next, VkDeviceMemory memory, ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), memory_(memory), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct PhysicalDeviceDepthClipEnableFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthClipEnableFeaturesEXT;

  PhysicalDeviceDepthClipEnableFeaturesEXT(void *next, VkBool32 depth_clip_enable) : next_(next), depth_clip_enable_(depth_clip_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 depth_clip_enable_;
};

struct SparseImageMemoryBind {

  using native_type = VkSparseImageMemoryBind;

  SparseImageMemoryBind(VkImageSubresource subresource, VkOffset3D offset, VkExtent3D extent, VkDeviceMemory memory,
                        VkDeviceSize memory_offset, VkSparseMemoryBindFlags flags)
    : subresource_(subresource), offset_(offset), extent_(extent), memory_(memory), memory_offset_(memory_offset), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageSubresource subresource_;
  VkOffset3D offset_;
  VkExtent3D extent_;
  VkDeviceMemory memory_;
  VkDeviceSize memory_offset_;
  VkSparseMemoryBindFlags flags_;
};

struct CuModuleCreateInfoNVX {

  using native_type = VkCuModuleCreateInfoNVX;

  CuModuleCreateInfoNVX(const void *next, size_t data_size, const void *data) : next_(next), data_size_(data_size), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  size_t data_size_;
  const void *data_;
};

struct VideoDecodeAV1CapabilitiesKHR {

  using native_type = VkVideoDecodeAV1CapabilitiesKHR;

  VideoDecodeAV1CapabilitiesKHR(void *next, StdVideoAV1Level max_level) : next_(next), max_level_(max_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  StdVideoAV1Level max_level_;
};

struct PipelineViewportCoarseSampleOrderStateCreateInfoNV {

  using native_type = VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;

  PipelineViewportCoarseSampleOrderStateCreateInfoNV(const void *next, CoarseSampleOrderType sample_order_type,
                                                     uint32_t custom_sample_order_count,
                                                     const VkCoarseSampleOrderCustomNV *custom_sample_orders)
    : next_(next), sample_order_type_(sample_order_type), custom_sample_order_count_(custom_sample_order_count),
      custom_sample_orders_(custom_sample_orders) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  CoarseSampleOrderType sample_order_type_;
  uint32_t custom_sample_order_count_;
  const VkCoarseSampleOrderCustomNV *custom_sample_orders_;
};

struct GeometryTrianglesNV {

  using native_type = VkGeometryTrianglesNV;

  GeometryTrianglesNV(const void *next, VkBuffer vertex_data, VkDeviceSize vertex_offset, uint32_t vertex_count, VkDeviceSize vertex_stride,
                      Format vertex_format, VkBuffer index_data, VkDeviceSize index_offset, uint32_t index_count, IndexType index_type,
                      VkBuffer transform_data, VkDeviceSize transform_offset)
    : next_(next), vertex_data_(vertex_data), vertex_offset_(vertex_offset), vertex_count_(vertex_count), vertex_stride_(vertex_stride),
      vertex_format_(vertex_format), index_data_(index_data), index_offset_(index_offset), index_count_(index_count),
      index_type_(index_type), transform_data_(transform_data), transform_offset_(transform_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer vertex_data_;
  VkDeviceSize vertex_offset_;
  uint32_t vertex_count_;
  VkDeviceSize vertex_stride_;
  Format vertex_format_;
  VkBuffer index_data_;
  VkDeviceSize index_offset_;
  uint32_t index_count_;
  IndexType index_type_;
  VkBuffer transform_data_;
  VkDeviceSize transform_offset_;
};

struct VideoEncodeSessionParametersGetInfoKHR {

  using native_type = VkVideoEncodeSessionParametersGetInfoKHR;

  VideoEncodeSessionParametersGetInfoKHR(const void *next, VkVideoSessionParametersKHR video_session_parameters)
    : next_(next), video_session_parameters_(video_session_parameters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoSessionParametersKHR video_session_parameters_;
};

struct MemoryRequirements {

  using native_type = VkMemoryRequirements;

  MemoryRequirements(VkDeviceSize size, VkDeviceSize alignment, uint32_t memory_type_bits)
    : size_(size), alignment_(alignment), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceSize size_;
  VkDeviceSize alignment_;
  uint32_t memory_type_bits_;
};

struct ExternalFenceProperties {

  using native_type = VkExternalFenceProperties;

  ExternalFenceProperties(void *next, VkExternalFenceHandleTypeFlags export_from_imported_handle_types,
                          VkExternalFenceHandleTypeFlags compatible_handle_types, VkExternalFenceFeatureFlags external_fence_features)
    : next_(next), export_from_imported_handle_types_(export_from_imported_handle_types), compatible_handle_types_(compatible_handle_types),
      external_fence_features_(external_fence_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExternalFenceHandleTypeFlags export_from_imported_handle_types_;
  VkExternalFenceHandleTypeFlags compatible_handle_types_;
  VkExternalFenceFeatureFlags external_fence_features_;
};

struct MultisamplePropertiesEXT {

  using native_type = VkMultisamplePropertiesEXT;

  MultisamplePropertiesEXT(void *next, VkExtent2D max_sample_location_grid_size)
    : next_(next), max_sample_location_grid_size_(max_sample_location_grid_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D max_sample_location_grid_size_;
};

struct ExternalMemoryAcquireUnmodifiedEXT {

  using native_type = VkExternalMemoryAcquireUnmodifiedEXT;

  ExternalMemoryAcquireUnmodifiedEXT(const void *next, VkBool32 acquire_unmodified_memory)
    : next_(next), acquire_unmodified_memory_(acquire_unmodified_memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 acquire_unmodified_memory_;
};

struct PipelineViewportStateCreateInfo {

  using native_type = VkPipelineViewportStateCreateInfo;

  PipelineViewportStateCreateInfo(const void *next, VkPipelineViewportStateCreateFlags flags, uint32_t viewport_count,
                                  const VkViewport *viewports, uint32_t scissor_count, const VkRect2D *scissors)
    : next_(next), flags_(flags), viewport_count_(viewport_count), viewports_(viewports), scissor_count_(scissor_count),
      scissors_(scissors) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineViewportStateCreateFlags flags_;
  uint32_t viewport_count_;
  const VkViewport *viewports_;
  uint32_t scissor_count_;
  const VkRect2D *scissors_;
};

struct ImageViewCreateInfo {

  using native_type = VkImageViewCreateInfo;

  ImageViewCreateInfo(const void *next, VkImageViewCreateFlags flags, VkImage image, ImageViewType view_type, Format format,
                      VkComponentMapping components, VkImageSubresourceRange subresource_range)
    : next_(next), flags_(flags), image_(image), view_type_(view_type), format_(format), components_(components),
      subresource_range_(subresource_range) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageViewCreateFlags flags_;
  VkImage image_;
  ImageViewType view_type_;
  Format format_;
  VkComponentMapping components_;
  VkImageSubresourceRange subresource_range_;
};

struct ComponentMapping {

  using native_type = VkComponentMapping;

  ComponentMapping(ComponentSwizzle r, ComponentSwizzle g, ComponentSwizzle b, ComponentSwizzle a) : r_(r), g_(g), b_(b), a_(a) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  ComponentSwizzle r_;
  ComponentSwizzle g_;
  ComponentSwizzle b_;
  ComponentSwizzle a_;
};

struct PhysicalDeviceFaultFeaturesEXT {

  using native_type = VkPhysicalDeviceFaultFeaturesEXT;

  PhysicalDeviceFaultFeaturesEXT(void *next, VkBool32 device_fault, VkBool32 device_fault_vendor_binary)
    : next_(next), device_fault_(device_fault), device_fault_vendor_binary_(device_fault_vendor_binary) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 device_fault_;
  VkBool32 device_fault_vendor_binary_;
};

struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT {

  using native_type = VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;

  PhysicalDeviceShaderAtomicFloat2FeaturesEXT(void *next, VkBool32 shader_buffer_float16atomics, VkBool32 shader_buffer_float16atomic_add,
                                              VkBool32 shader_buffer_float16atomic_min_max, VkBool32 shader_buffer_float32atomic_min_max,
                                              VkBool32 shader_buffer_float64atomic_min_max, VkBool32 shader_shared_float16atomics,
                                              VkBool32 shader_shared_float16atomic_add, VkBool32 shader_shared_float16atomic_min_max,
                                              VkBool32 shader_shared_float32atomic_min_max, VkBool32 shader_shared_float64atomic_min_max,
                                              VkBool32 shader_image_float32atomic_min_max, VkBool32 sparse_image_float32atomic_min_max)
    : next_(next), shader_buffer_float16atomics_(shader_buffer_float16atomics),
      shader_buffer_float16atomic_add_(shader_buffer_float16atomic_add),
      shader_buffer_float16atomic_min_max_(shader_buffer_float16atomic_min_max),
      shader_buffer_float32atomic_min_max_(shader_buffer_float32atomic_min_max),
      shader_buffer_float64atomic_min_max_(shader_buffer_float64atomic_min_max),
      shader_shared_float16atomics_(shader_shared_float16atomics), shader_shared_float16atomic_add_(shader_shared_float16atomic_add),
      shader_shared_float16atomic_min_max_(shader_shared_float16atomic_min_max),
      shader_shared_float32atomic_min_max_(shader_shared_float32atomic_min_max),
      shader_shared_float64atomic_min_max_(shader_shared_float64atomic_min_max),
      shader_image_float32atomic_min_max_(shader_image_float32atomic_min_max),
      sparse_image_float32atomic_min_max_(sparse_image_float32atomic_min_max) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_buffer_float16atomics_;
  VkBool32 shader_buffer_float16atomic_add_;
  VkBool32 shader_buffer_float16atomic_min_max_;
  VkBool32 shader_buffer_float32atomic_min_max_;
  VkBool32 shader_buffer_float64atomic_min_max_;
  VkBool32 shader_shared_float16atomics_;
  VkBool32 shader_shared_float16atomic_add_;
  VkBool32 shader_shared_float16atomic_min_max_;
  VkBool32 shader_shared_float32atomic_min_max_;
  VkBool32 shader_shared_float64atomic_min_max_;
  VkBool32 shader_image_float32atomic_min_max_;
  VkBool32 sparse_image_float32atomic_min_max_;
};

struct VideoEncodeH265SessionCreateInfoKHR {

  using native_type = VkVideoEncodeH265SessionCreateInfoKHR;

  VideoEncodeH265SessionCreateInfoKHR(const void *next, VkBool32 use_max_level_idc, StdVideoH265LevelIdc max_level_idc)
    : next_(next), use_max_level_idc_(use_max_level_idc), max_level_idc_(max_level_idc) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 use_max_level_idc_;
  StdVideoH265LevelIdc max_level_idc_;
};

struct PrivateDataSlotCreateInfo {

  using native_type = VkPrivateDataSlotCreateInfo;

  PrivateDataSlotCreateInfo(const void *next, VkPrivateDataSlotCreateFlags flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPrivateDataSlotCreateFlags flags_;
};

struct DedicatedAllocationBufferCreateInfoNV {

  using native_type = VkDedicatedAllocationBufferCreateInfoNV;

  DedicatedAllocationBufferCreateInfoNV(const void *next, VkBool32 dedicated_allocation)
    : next_(next), dedicated_allocation_(dedicated_allocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 dedicated_allocation_;
};

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT {

  using native_type = VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;

  PhysicalDeviceBlendOperationAdvancedFeaturesEXT(void *next, VkBool32 advanced_blend_coherent_operations)
    : next_(next), advanced_blend_coherent_operations_(advanced_blend_coherent_operations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 advanced_blend_coherent_operations_;
};

struct SemaphoreGetSciSyncInfoNV {

  using native_type = VkSemaphoreGetSciSyncInfoNV;

  SemaphoreGetSciSyncInfoNV(const void *next, VkSemaphore semaphore, ExternalSemaphoreHandleTypeMaskBit handle_type)
    : next_(next), semaphore_(semaphore), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct ImageSubresourceLayers {

  using native_type = VkImageSubresourceLayers;

  ImageSubresourceLayers(VkImageAspectFlags aspect_mask, uint32_t mip_level, uint32_t base_array_layer, uint32_t layer_count)
    : aspect_mask_(aspect_mask), mip_level_(mip_level), base_array_layer_(base_array_layer), layer_count_(layer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageAspectFlags aspect_mask_;
  uint32_t mip_level_;
  uint32_t base_array_layer_;
  uint32_t layer_count_;
};

struct ClearAttachment {

  using native_type = VkClearAttachment;

  ClearAttachment(VkImageAspectFlags aspect_mask, uint32_t color_attachment, VkClearValue clear_value)
    : aspect_mask_(aspect_mask), color_attachment_(color_attachment), clear_value_(clear_value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageAspectFlags aspect_mask_;
  uint32_t color_attachment_;
  VkClearValue clear_value_;
};

struct BindImageMemoryInfo {

  using native_type = VkBindImageMemoryInfo;

  BindImageMemoryInfo(const void *next, VkImage image, VkDeviceMemory memory, VkDeviceSize memory_offset)
    : next_(next), image_(image), memory_(memory), memory_offset_(memory_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
  VkDeviceMemory memory_;
  VkDeviceSize memory_offset_;
};

struct PhysicalDeviceImageFormatInfo2 {

  using native_type = VkPhysicalDeviceImageFormatInfo2;

  PhysicalDeviceImageFormatInfo2(const void *next, Format format, ImageType type, ImageTiling tiling, VkImageUsageFlags usage,
                                 VkImageCreateFlags flags)
    : next_(next), format_(format), type_(type), tiling_(tiling), usage_(usage), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Format format_;
  ImageType type_;
  ImageTiling tiling_;
  VkImageUsageFlags usage_;
  VkImageCreateFlags flags_;
};

struct SparseMemoryBind {

  using native_type = VkSparseMemoryBind;

  SparseMemoryBind(VkDeviceSize resource_offset, VkDeviceSize size, VkDeviceMemory memory, VkDeviceSize memory_offset,
                   VkSparseMemoryBindFlags flags)
    : resource_offset_(resource_offset), size_(size), memory_(memory), memory_offset_(memory_offset), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceSize resource_offset_;
  VkDeviceSize size_;
  VkDeviceMemory memory_;
  VkDeviceSize memory_offset_;
  VkSparseMemoryBindFlags flags_;
};

struct SwapchainPresentFenceInfoEXT {

  using native_type = VkSwapchainPresentFenceInfoEXT;

  SwapchainPresentFenceInfoEXT(const void *next, uint32_t swapchain_count, const VkFence *fences)
    : next_(next), swapchain_count_(swapchain_count), fences_(fences) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t swapchain_count_;
  const VkFence *fences_;
};

struct DisplaySurfaceCreateInfoKHR {

  using native_type = VkDisplaySurfaceCreateInfoKHR;

  DisplaySurfaceCreateInfoKHR(const void *next, VkDisplaySurfaceCreateFlagsKHR flags, VkDisplayModeKHR display_mode, uint32_t plane_index,
                              uint32_t plane_stack_index, SurfaceTransformMaskBit transform, float global_alpha,
                              DisplayPlaneAlphaMaskBit alpha_mode, VkExtent2D image_extent)
    : next_(next), flags_(flags), display_mode_(display_mode), plane_index_(plane_index), plane_stack_index_(plane_stack_index),
      transform_(transform), global_alpha_(global_alpha), alpha_mode_(alpha_mode), image_extent_(image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDisplaySurfaceCreateFlagsKHR flags_;
  VkDisplayModeKHR display_mode_;
  uint32_t plane_index_;
  uint32_t plane_stack_index_;
  SurfaceTransformMaskBit transform_;
  float global_alpha_;
  DisplayPlaneAlphaMaskBit alpha_mode_;
  VkExtent2D image_extent_;
};

struct ImageConstraintsInfoFUCHSIA {

  using native_type = VkImageConstraintsInfoFUCHSIA;

  ImageConstraintsInfoFUCHSIA(const void *next, uint32_t format_constraints_count,
                              const VkImageFormatConstraintsInfoFUCHSIA *format_constraints,
                              VkBufferCollectionConstraintsInfoFUCHSIA buffer_collection_constraints,
                              VkImageConstraintsInfoFlagsFUCHSIA flags)
    : next_(next), format_constraints_count_(format_constraints_count), format_constraints_(format_constraints),
      buffer_collection_constraints_(buffer_collection_constraints), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t format_constraints_count_;
  const VkImageFormatConstraintsInfoFUCHSIA *format_constraints_;
  VkBufferCollectionConstraintsInfoFUCHSIA buffer_collection_constraints_;
  VkImageConstraintsInfoFlagsFUCHSIA flags_;
};

struct BufferViewCreateInfo {

  using native_type = VkBufferViewCreateInfo;

  BufferViewCreateInfo(const void *next, VkBufferViewCreateFlags flags, VkBuffer buffer, Format format, VkDeviceSize offset,
                       VkDeviceSize range)
    : next_(next), flags_(flags), buffer_(buffer), format_(format), offset_(offset), range_(range) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferViewCreateFlags flags_;
  VkBuffer buffer_;
  Format format_;
  VkDeviceSize offset_;
  VkDeviceSize range_;
};

struct PhysicalDeviceShaderCorePropertiesARM {

  using native_type = VkPhysicalDeviceShaderCorePropertiesARM;

  PhysicalDeviceShaderCorePropertiesARM(void *next, uint32_t pixel_rate, uint32_t texel_rate, uint32_t fma_rate)
    : next_(next), pixel_rate_(pixel_rate), texel_rate_(texel_rate), fma_rate_(fma_rate) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t pixel_rate_;
  uint32_t texel_rate_;
  uint32_t fma_rate_;
};

struct PhysicalDeviceSurfaceInfo2KHR {

  using native_type = VkPhysicalDeviceSurfaceInfo2KHR;

  PhysicalDeviceSurfaceInfo2KHR(const void *next, VkSurfaceKHR surface) : next_(next), surface_(surface) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSurfaceKHR surface_;
};

struct OpaqueCaptureDescriptorDataCreateInfoEXT {

  using native_type = VkOpaqueCaptureDescriptorDataCreateInfoEXT;

  OpaqueCaptureDescriptorDataCreateInfoEXT(const void *next, const void *opaque_capture_descriptor_data)
    : next_(next), opaque_capture_descriptor_data_(opaque_capture_descriptor_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const void *opaque_capture_descriptor_data_;
};

struct BufferCopy2 {

  using native_type = VkBufferCopy2;

  BufferCopy2(const void *next, VkDeviceSize src_offset, VkDeviceSize dst_offset, VkDeviceSize size)
    : next_(next), src_offset_(src_offset), dst_offset_(dst_offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize src_offset_;
  VkDeviceSize dst_offset_;
  VkDeviceSize size_;
};

struct PhysicalDeviceAccelerationStructurePropertiesKHR {

  using native_type = VkPhysicalDeviceAccelerationStructurePropertiesKHR;

  PhysicalDeviceAccelerationStructurePropertiesKHR(void *next, uint64_t max_geometry_count, uint64_t max_instance_count,
                                                   uint64_t max_primitive_count, uint32_t max_per_stage_descriptor_acceleration_structures,
                                                   uint32_t max_per_stage_descriptor_update_after_bind_acceleration_structures,
                                                   uint32_t max_descriptor_set_acceleration_structures,
                                                   uint32_t max_descriptor_set_update_after_bind_acceleration_structures,
                                                   uint32_t min_acceleration_structure_scratch_offset_alignment)
    : next_(next), max_geometry_count_(max_geometry_count), max_instance_count_(max_instance_count),
      max_primitive_count_(max_primitive_count),
      max_per_stage_descriptor_acceleration_structures_(max_per_stage_descriptor_acceleration_structures),
      max_per_stage_descriptor_update_after_bind_acceleration_structures_(
        max_per_stage_descriptor_update_after_bind_acceleration_structures),
      max_descriptor_set_acceleration_structures_(max_descriptor_set_acceleration_structures),
      max_descriptor_set_update_after_bind_acceleration_structures_(max_descriptor_set_update_after_bind_acceleration_structures),
      min_acceleration_structure_scratch_offset_alignment_(min_acceleration_structure_scratch_offset_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t max_geometry_count_;
  uint64_t max_instance_count_;
  uint64_t max_primitive_count_;
  uint32_t max_per_stage_descriptor_acceleration_structures_;
  uint32_t max_per_stage_descriptor_update_after_bind_acceleration_structures_;
  uint32_t max_descriptor_set_acceleration_structures_;
  uint32_t max_descriptor_set_update_after_bind_acceleration_structures_;
  uint32_t min_acceleration_structure_scratch_offset_alignment_;
};

struct SwapchainImageCreateInfoANDROID {

  using native_type = VkSwapchainImageCreateInfoANDROID;

  SwapchainImageCreateInfoANDROID(const void *next, VkSwapchainImageUsageFlagsANDROID usage) : next_(next), usage_(usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSwapchainImageUsageFlagsANDROID usage_;
};

struct SemaphoreGetFdInfoKHR {

  using native_type = VkSemaphoreGetFdInfoKHR;

  SemaphoreGetFdInfoKHR(const void *next, VkSemaphore semaphore, ExternalSemaphoreHandleTypeMaskBit handle_type)
    : next_(next), semaphore_(semaphore), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct PhysicalDeviceRayTracingPositionFetchFeaturesKHR {

  using native_type = VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;

  PhysicalDeviceRayTracingPositionFetchFeaturesKHR(void *next, VkBool32 ray_tracing_position_fetch)
    : next_(next), ray_tracing_position_fetch_(ray_tracing_position_fetch) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_tracing_position_fetch_;
};

struct PhysicalDeviceShaderModuleIdentifierPropertiesEXT {

  using native_type = VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT;

  PhysicalDeviceShaderModuleIdentifierPropertiesEXT(void *next, uint8_t shader_module_identifier_algorithm_uuid[VK_UUID_SIZE])
    : next_(next), shader_module_identifier_algorithm_uuid_(shader_module_identifier_algorithm_uuid) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint8_t shader_module_identifier_algorithm_uuid[VK_UUID_SIZE] _;
};

struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {

  using native_type = VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;

  PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(void *next, VkBool32 workgroup_memory_explicit_layout,
                                                         VkBool32 workgroup_memory_explicit_layout_scalar_block_layout,
                                                         VkBool32 workgroup_memory_explicit_layout8bit_access,
                                                         VkBool32 workgroup_memory_explicit_layout16bit_access)
    : next_(next), workgroup_memory_explicit_layout_(workgroup_memory_explicit_layout),
      workgroup_memory_explicit_layout_scalar_block_layout_(workgroup_memory_explicit_layout_scalar_block_layout),
      workgroup_memory_explicit_layout8bit_access_(workgroup_memory_explicit_layout8bit_access),
      workgroup_memory_explicit_layout16bit_access_(workgroup_memory_explicit_layout16bit_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 workgroup_memory_explicit_layout_;
  VkBool32 workgroup_memory_explicit_layout_scalar_block_layout_;
  VkBool32 workgroup_memory_explicit_layout8bit_access_;
  VkBool32 workgroup_memory_explicit_layout16bit_access_;
};

struct PhysicalDeviceRobustness2PropertiesEXT {

  using native_type = VkPhysicalDeviceRobustness2PropertiesEXT;

  PhysicalDeviceRobustness2PropertiesEXT(void *next, VkDeviceSize robust_storage_buffer_access_size_alignment,
                                         VkDeviceSize robust_uniform_buffer_access_size_alignment)
    : next_(next), robust_storage_buffer_access_size_alignment_(robust_storage_buffer_access_size_alignment),
      robust_uniform_buffer_access_size_alignment_(robust_uniform_buffer_access_size_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize robust_storage_buffer_access_size_alignment_;
  VkDeviceSize robust_uniform_buffer_access_size_alignment_;
};

struct SetStateFlagsIndirectCommandNV {

  using native_type = VkSetStateFlagsIndirectCommandNV;

  SetStateFlagsIndirectCommandNV(uint32_t data) : data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t data_;
};

struct MetalSurfaceCreateInfoEXT {

  using native_type = VkMetalSurfaceCreateInfoEXT;

  MetalSurfaceCreateInfoEXT(const void *next, VkMetalSurfaceCreateFlagsEXT flags, const CAMetalLayer *layer)
    : next_(next), flags_(flags), layer_(layer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMetalSurfaceCreateFlagsEXT flags_;
  const CAMetalLayer *layer_;
};

struct Extent3D {

  using native_type = VkExtent3D;

  Extent3D(uint32_t width, uint32_t height, uint32_t depth) : width_(width), height_(height), depth_(depth) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct CopyMemoryToMicromapInfoEXT {

  using native_type = VkCopyMemoryToMicromapInfoEXT;

  CopyMemoryToMicromapInfoEXT(const void *next, VkDeviceOrHostAddressConstKHR src, VkMicromapEXT dst, CopyMicromapMode mode)
    : next_(next), src_(src), dst_(dst), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceOrHostAddressConstKHR src_;
  VkMicromapEXT dst_;
  CopyMicromapMode mode_;
};

struct VideoEncodeH264PictureInfoKHR {

  using native_type = VkVideoEncodeH264PictureInfoKHR;

  VideoEncodeH264PictureInfoKHR(const void *next, uint32_t nalu_slice_entry_count,
                                const VkVideoEncodeH264NaluSliceInfoKHR *nalu_slice_entries,
                                const StdVideoEncodeH264PictureInfo *std_picture_info, VkBool32 generate_prefix_nalu)
    : next_(next), nalu_slice_entry_count_(nalu_slice_entry_count), nalu_slice_entries_(nalu_slice_entries),
      std_picture_info_(std_picture_info), generate_prefix_nalu_(generate_prefix_nalu) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t nalu_slice_entry_count_;
  const VkVideoEncodeH264NaluSliceInfoKHR *nalu_slice_entries_;
  const StdVideoEncodeH264PictureInfo *std_picture_info_;
  VkBool32 generate_prefix_nalu_;
};

struct GraphicsPipelineShaderGroupsCreateInfoNV {

  using native_type = VkGraphicsPipelineShaderGroupsCreateInfoNV;

  GraphicsPipelineShaderGroupsCreateInfoNV(const void *next, uint32_t group_count, const VkGraphicsShaderGroupCreateInfoNV *groups,
                                           uint32_t pipeline_count, const VkPipeline *pipelines)
    : next_(next), group_count_(group_count), groups_(groups), pipeline_count_(pipeline_count), pipelines_(pipelines) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t group_count_;
  const VkGraphicsShaderGroupCreateInfoNV *groups_;
  uint32_t pipeline_count_;
  const VkPipeline *pipelines_;
};

struct AttachmentReference2 {

  using native_type = VkAttachmentReference2;

  AttachmentReference2(const void *next, uint32_t attachment, ImageLayout layout, VkImageAspectFlags aspect_mask)
    : next_(next), attachment_(attachment), layout_(layout), aspect_mask_(aspect_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t attachment_;
  ImageLayout layout_;
  VkImageAspectFlags aspect_mask_;
};

struct BufferMemoryBarrier2 {

  using native_type = VkBufferMemoryBarrier2;

  BufferMemoryBarrier2(const void *next, VkPipelineStageFlags2 src_stage_mask, VkAccessFlags2 src_access_mask,
                       VkPipelineStageFlags2 dst_stage_mask, VkAccessFlags2 dst_access_mask, uint32_t src_queue_family_index,
                       uint32_t dst_queue_family_index, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size)
    : next_(next), src_stage_mask_(src_stage_mask), src_access_mask_(src_access_mask), dst_stage_mask_(dst_stage_mask),
      dst_access_mask_(dst_access_mask), src_queue_family_index_(src_queue_family_index), dst_queue_family_index_(dst_queue_family_index),
      buffer_(buffer), offset_(offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineStageFlags2 src_stage_mask_;
  VkAccessFlags2 src_access_mask_;
  VkPipelineStageFlags2 dst_stage_mask_;
  VkAccessFlags2 dst_access_mask_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkBuffer buffer_;
  VkDeviceSize offset_;
  VkDeviceSize size_;
};

struct DescriptorPoolCreateInfo {

  using native_type = VkDescriptorPoolCreateInfo;

  DescriptorPoolCreateInfo(const void *next, VkDescriptorPoolCreateFlags flags, uint32_t max_sets, uint32_t pool_size_count,
                           const VkDescriptorPoolSize *pool_sizes)
    : next_(next), flags_(flags), max_sets_(max_sets), pool_size_count_(pool_size_count), pool_sizes_(pool_sizes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorPoolCreateFlags flags_;
  uint32_t max_sets_;
  uint32_t pool_size_count_;
  const VkDescriptorPoolSize *pool_sizes_;
};

struct MemoryOpaqueCaptureAddressAllocateInfo {

  using native_type = VkMemoryOpaqueCaptureAddressAllocateInfo;

  MemoryOpaqueCaptureAddressAllocateInfo(const void *next, uint64_t opaque_capture_address)
    : next_(next), opaque_capture_address_(opaque_capture_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t opaque_capture_address_;
};

struct ScreenSurfaceCreateInfoQNX {

  using native_type = VkScreenSurfaceCreateInfoQNX;

  ScreenSurfaceCreateInfoQNX(const void *next, VkScreenSurfaceCreateFlagsQNX flags, struct _screen_context *context,
                             struct _screen_window *window)
    : next_(next), flags_(flags), context_(context), window_(window) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkScreenSurfaceCreateFlagsQNX flags_;
  struct _screen_context *context_;
  struct _screen_window *window_;
};

struct PhysicalDeviceInvocationMaskFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;

  PhysicalDeviceInvocationMaskFeaturesHUAWEI(void *next, VkBool32 invocation_mask) : next_(next), invocation_mask_(invocation_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 invocation_mask_;
};

struct ImageResolve {

  using native_type = VkImageResolve;

  ImageResolve(VkImageSubresourceLayers src_subresource, VkOffset3D src_offset, VkImageSubresourceLayers dst_subresource,
               VkOffset3D dst_offset, VkExtent3D extent)
    : src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageSubresourceLayers src_subresource_;
  VkOffset3D src_offset_;
  VkImageSubresourceLayers dst_subresource_;
  VkOffset3D dst_offset_;
  VkExtent3D extent_;
};

struct VideoEncodeQualityLevelPropertiesKHR {

  using native_type = VkVideoEncodeQualityLevelPropertiesKHR;

  VideoEncodeQualityLevelPropertiesKHR(void *next, VideoEncodeRateControlModeMaskBit preferred_rate_control_mode,
                                       uint32_t preferred_rate_control_layer_count)
    : next_(next), preferred_rate_control_mode_(preferred_rate_control_mode),
      preferred_rate_control_layer_count_(preferred_rate_control_layer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VideoEncodeRateControlModeMaskBit preferred_rate_control_mode_;
  uint32_t preferred_rate_control_layer_count_;
};

struct VideoDecodeH265SessionParametersAddInfoKHR {

  using native_type = VkVideoDecodeH265SessionParametersAddInfoKHR;

  VideoDecodeH265SessionParametersAddInfoKHR(const void *next, uint32_t std_vpscount, const StdVideoH265VideoParameterSet *std_vpss,
                                             uint32_t std_spscount, const StdVideoH265SequenceParameterSet *std_spss, uint32_t std_ppscount,
                                             const StdVideoH265PictureParameterSet *std_ppss)
    : next_(next), std_vpscount_(std_vpscount), std_vpss_(std_vpss), std_spscount_(std_spscount), std_spss_(std_spss),
      std_ppscount_(std_ppscount), std_ppss_(std_ppss) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t std_vpscount_;
  const StdVideoH265VideoParameterSet *std_vpss_;
  uint32_t std_spscount_;
  const StdVideoH265SequenceParameterSet *std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH265PictureParameterSet *std_ppss_;
};

struct SparseBufferMemoryBindInfo {

  using native_type = VkSparseBufferMemoryBindInfo;

  SparseBufferMemoryBindInfo(VkBuffer buffer, uint32_t bind_count, const VkSparseMemoryBind *binds)
    : buffer_(buffer), bind_count_(bind_count), binds_(binds) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkBuffer buffer_;
  uint32_t bind_count_;
  const VkSparseMemoryBind *binds_;
};

struct DeviceQueueGlobalPriorityCreateInfoKHR {

  using native_type = VkDeviceQueueGlobalPriorityCreateInfoKHR;

  DeviceQueueGlobalPriorityCreateInfoKHR(const void *next, QueueGlobalPriority global_priority)
    : next_(next), global_priority_(global_priority) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  QueueGlobalPriority global_priority_;
};

struct PhysicalDeviceExternalFormatResolvePropertiesANDROID {

  using native_type = VkPhysicalDeviceExternalFormatResolvePropertiesANDROID;

  PhysicalDeviceExternalFormatResolvePropertiesANDROID(void *next, VkBool32 null_color_attachment_with_external_format_resolve,
                                                       ChromaLocation external_format_resolve_chroma_offset_x,
                                                       ChromaLocation external_format_resolve_chroma_offset_y)
    : next_(next), null_color_attachment_with_external_format_resolve_(null_color_attachment_with_external_format_resolve),
      external_format_resolve_chroma_offset_x_(external_format_resolve_chroma_offset_x),
      external_format_resolve_chroma_offset_y_(external_format_resolve_chroma_offset_y) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 null_color_attachment_with_external_format_resolve_;
  ChromaLocation external_format_resolve_chroma_offset_x_;
  ChromaLocation external_format_resolve_chroma_offset_y_;
};

struct BufferCaptureDescriptorDataInfoEXT {

  using native_type = VkBufferCaptureDescriptorDataInfoEXT;

  BufferCaptureDescriptorDataInfoEXT(const void *next, VkBuffer buffer) : next_(next), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer buffer_;
};

struct RayTracingShaderGroupCreateInfoKHR {

  using native_type = VkRayTracingShaderGroupCreateInfoKHR;

  RayTracingShaderGroupCreateInfoKHR(const void *next, RayTracingShaderGroupType type, uint32_t general_shader, uint32_t closest_hit_shader,
                                     uint32_t any_hit_shader, uint32_t intersection_shader, const void *shader_group_capture_replay_handle)
    : next_(next), type_(type), general_shader_(general_shader), closest_hit_shader_(closest_hit_shader), any_hit_shader_(any_hit_shader),
      intersection_shader_(intersection_shader), shader_group_capture_replay_handle_(shader_group_capture_replay_handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  RayTracingShaderGroupType type_;
  uint32_t general_shader_;
  uint32_t closest_hit_shader_;
  uint32_t any_hit_shader_;
  uint32_t intersection_shader_;
  const void *shader_group_capture_replay_handle_;
};

struct MicromapVersionInfoEXT {

  using native_type = VkMicromapVersionInfoEXT;

  MicromapVersionInfoEXT(const void *next, const uint8_t *version_data) : next_(next), version_data_(version_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const uint8_t *version_data_;
};

struct MemoryGetWin32HandleInfoKHR {

  using native_type = VkMemoryGetWin32HandleInfoKHR;

  MemoryGetWin32HandleInfoKHR(const void *next, VkDeviceMemory memory, ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), memory_(memory), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct MappedMemoryRange {

  using native_type = VkMappedMemoryRange;

  MappedMemoryRange(const void *next, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size)
    : next_(next), memory_(memory), offset_(offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
  VkDeviceSize offset_;
  VkDeviceSize size_;
};

struct MemoryBarrier {

  using native_type = VkMemoryBarrier;

  MemoryBarrier(const void *next, VkAccessFlags src_access_mask, VkAccessFlags dst_access_mask)
    : next_(next), src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccessFlags src_access_mask_;
  VkAccessFlags dst_access_mask_;
};

struct DisplayPropertiesKHR {

  using native_type = VkDisplayPropertiesKHR;

  DisplayPropertiesKHR(VkDisplayKHR display, const char *display_name, VkExtent2D physical_dimensions, VkExtent2D physical_resolution,
                       VkSurfaceTransformFlagsKHR supported_transforms, VkBool32 plane_reorder_possible, VkBool32 persistent_content)
    : display_(display), display_name_(display_name), physical_dimensions_(physical_dimensions), physical_resolution_(physical_resolution),
      supported_transforms_(supported_transforms), plane_reorder_possible_(plane_reorder_possible),
      persistent_content_(persistent_content) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDisplayKHR display_;
  const char *display_name_;
  VkExtent2D physical_dimensions_;
  VkExtent2D physical_resolution_;
  VkSurfaceTransformFlagsKHR supported_transforms_;
  VkBool32 plane_reorder_possible_;
  VkBool32 persistent_content_;
};

struct PhysicalDevicePortabilitySubsetPropertiesKHR {

  using native_type = VkPhysicalDevicePortabilitySubsetPropertiesKHR;

  PhysicalDevicePortabilitySubsetPropertiesKHR(void *next, uint32_t min_vertex_input_binding_stride_alignment)
    : next_(next), min_vertex_input_binding_stride_alignment_(min_vertex_input_binding_stride_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t min_vertex_input_binding_stride_alignment_;
};

struct RectLayerKHR {

  using native_type = VkRectLayerKHR;

  RectLayerKHR(VkOffset2D offset, VkExtent2D extent, uint32_t layer) : offset_(offset), extent_(extent), layer_(layer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkOffset2D offset_;
  VkExtent2D extent_;
  uint32_t layer_;
};

struct PhysicalDeviceDeviceMemoryReportFeaturesEXT {

  using native_type = VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;

  PhysicalDeviceDeviceMemoryReportFeaturesEXT(void *next, VkBool32 device_memory_report)
    : next_(next), device_memory_report_(device_memory_report) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 device_memory_report_;
};

struct GeneratedCommandsInfoNV {

  using native_type = VkGeneratedCommandsInfoNV;

  GeneratedCommandsInfoNV(const void *next, PipelineBindPoint pipeline_bind_point, VkPipeline pipeline,
                          VkIndirectCommandsLayoutNV indirect_commands_layout, uint32_t stream_count,
                          const VkIndirectCommandsStreamNV *streams, uint32_t sequences_count, VkBuffer preprocess_buffer,
                          VkDeviceSize preprocess_offset, VkDeviceSize preprocess_size, VkBuffer sequences_count_buffer,
                          VkDeviceSize sequences_count_offset, VkBuffer sequences_index_buffer, VkDeviceSize sequences_index_offset)
    : next_(next), pipeline_bind_point_(pipeline_bind_point), pipeline_(pipeline), indirect_commands_layout_(indirect_commands_layout),
      stream_count_(stream_count), streams_(streams), sequences_count_(sequences_count), preprocess_buffer_(preprocess_buffer),
      preprocess_offset_(preprocess_offset), preprocess_size_(preprocess_size), sequences_count_buffer_(sequences_count_buffer),
      sequences_count_offset_(sequences_count_offset), sequences_index_buffer_(sequences_index_buffer),
      sequences_index_offset_(sequences_index_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipeline pipeline_;
  VkIndirectCommandsLayoutNV indirect_commands_layout_;
  uint32_t stream_count_;
  const VkIndirectCommandsStreamNV *streams_;
  uint32_t sequences_count_;
  VkBuffer preprocess_buffer_;
  VkDeviceSize preprocess_offset_;
  VkDeviceSize preprocess_size_;
  VkBuffer sequences_count_buffer_;
  VkDeviceSize sequences_count_offset_;
  VkBuffer sequences_index_buffer_;
  VkDeviceSize sequences_index_offset_;
};

struct SparseImageFormatProperties2 {

  using native_type = VkSparseImageFormatProperties2;

  SparseImageFormatProperties2(void *next, VkSparseImageFormatProperties properties) : next_(next), properties_(properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSparseImageFormatProperties properties_;
};

struct PhysicalDeviceSubgroupSizeControlFeatures {

  using native_type = VkPhysicalDeviceSubgroupSizeControlFeatures;

  PhysicalDeviceSubgroupSizeControlFeatures(void *next, VkBool32 subgroup_size_control, VkBool32 compute_full_subgroups)
    : next_(next), subgroup_size_control_(subgroup_size_control), compute_full_subgroups_(compute_full_subgroups) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 subgroup_size_control_;
  VkBool32 compute_full_subgroups_;
};

struct DeviceImageMemoryRequirements {

  using native_type = VkDeviceImageMemoryRequirements;

  DeviceImageMemoryRequirements(const void *next, const VkImageCreateInfo *create_info, ImageAspectMaskBit plane_aspect)
    : next_(next), create_info_(create_info), plane_aspect_(plane_aspect) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const VkImageCreateInfo *create_info_;
  ImageAspectMaskBit plane_aspect_;
};

struct BufferConstraintsInfoFUCHSIA {

  using native_type = VkBufferConstraintsInfoFUCHSIA;

  BufferConstraintsInfoFUCHSIA(const void *next, VkBufferCreateInfo create_info, VkFormatFeatureFlags required_format_features,
                               VkBufferCollectionConstraintsInfoFUCHSIA buffer_collection_constraints)
    : next_(next), create_info_(create_info), required_format_features_(required_format_features),
      buffer_collection_constraints_(buffer_collection_constraints) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferCreateInfo create_info_;
  VkFormatFeatureFlags required_format_features_;
  VkBufferCollectionConstraintsInfoFUCHSIA buffer_collection_constraints_;
};

struct InstanceCreateInfo {

  using native_type = VkInstanceCreateInfo;

  InstanceCreateInfo(const void *next, VkInstanceCreateFlags flags, const VkApplicationInfo *application_info, uint32_t enabled_layer_count,
                     const char *const *enabled_layer_names, uint32_t enabled_extension_count, const char *const *enabled_extension_names)
    : next_(next), flags_(flags), application_info_(application_info), enabled_layer_count_(enabled_layer_count),
      enabled_layer_names_(enabled_layer_names), enabled_extension_count_(enabled_extension_count),
      enabled_extension_names_(enabled_extension_names) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkInstanceCreateFlags flags_;
  const VkApplicationInfo *application_info_;
  uint32_t enabled_layer_count_;
  const char *const *enabled_layer_names_;
  uint32_t enabled_extension_count_;
  const char *const *enabled_extension_names_;
};

struct SwapchainPresentScalingCreateInfoEXT {

  using native_type = VkSwapchainPresentScalingCreateInfoEXT;

  SwapchainPresentScalingCreateInfoEXT(const void *next, VkPresentScalingFlagsEXT scaling_behavior,
                                       VkPresentGravityFlagsEXT present_gravity_x, VkPresentGravityFlagsEXT present_gravity_y)
    : next_(next), scaling_behavior_(scaling_behavior), present_gravity_x_(present_gravity_x), present_gravity_y_(present_gravity_y) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPresentScalingFlagsEXT scaling_behavior_;
  VkPresentGravityFlagsEXT present_gravity_x_;
  VkPresentGravityFlagsEXT present_gravity_y_;
};

struct BufferUsageFlags2CreateInfoKHR {

  using native_type = VkBufferUsageFlags2CreateInfoKHR;

  BufferUsageFlags2CreateInfoKHR(const void *next, VkBufferUsageFlags2KHR usage) : next_(next), usage_(usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferUsageFlags2KHR usage_;
};

struct LayerProperties {

  using native_type = VkLayerProperties;

  LayerProperties(char layer_name[VK_MAX_EXTENSION_NAME_SIZE], uint32_t spec_version, uint32_t implementation_version,
                  char description[VK_MAX_DESCRIPTION_SIZE])
    : layer_name_(layer_name), spec_version_(spec_version), implementation_version_(implementation_version), description_(description) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  char layer_name[VK_MAX_EXTENSION_NAME_SIZE] _;
  uint32_t spec_version_;
  uint32_t implementation_version_;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
};

struct AccelerationStructureCreateInfoNV {

  using native_type = VkAccelerationStructureCreateInfoNV;

  AccelerationStructureCreateInfoNV(const void *next, VkDeviceSize compacted_size, VkAccelerationStructureInfoNV info)
    : next_(next), compacted_size_(compacted_size), info_(info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize compacted_size_;
  VkAccelerationStructureInfoNV info_;
};

struct ShaderModuleIdentifierEXT {

  using native_type = VkShaderModuleIdentifierEXT;

  ShaderModuleIdentifierEXT(void *next, uint32_t identifier_size, uint8_t identifier[VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT])
    : next_(next), identifier_size_(identifier_size), identifier_(identifier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t identifier_size_;
  uint8_t identifier[VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT] _;
};

struct VideoDecodeH264CapabilitiesKHR {

  using native_type = VkVideoDecodeH264CapabilitiesKHR;

  VideoDecodeH264CapabilitiesKHR(void *next, StdVideoH264LevelIdc max_level_idc, VkOffset2D field_offset_granularity)
    : next_(next), max_level_idc_(max_level_idc), field_offset_granularity_(field_offset_granularity) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  StdVideoH264LevelIdc max_level_idc_;
  VkOffset2D field_offset_granularity_;
};

struct DescriptorBufferInfo {

  using native_type = VkDescriptorBufferInfo;

  DescriptorBufferInfo(VkBuffer buffer, VkDeviceSize offset, VkDeviceSize range) : buffer_(buffer), offset_(offset), range_(range) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkBuffer buffer_;
  VkDeviceSize offset_;
  VkDeviceSize range_;
};

struct ExternalFormatQNX {

  using native_type = VkExternalFormatQNX;

  ExternalFormatQNX(void *next, uint64_t external_format) : next_(next), external_format_(external_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t external_format_;
};

struct PresentRegionKHR {

  using native_type = VkPresentRegionKHR;

  PresentRegionKHR(uint32_t rectangle_count, const VkRectLayerKHR *rectangles)
    : rectangle_count_(rectangle_count), rectangles_(rectangles) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t rectangle_count_;
  const VkRectLayerKHR *rectangles_;
};

struct DeviceGroupCommandBufferBeginInfo {

  using native_type = VkDeviceGroupCommandBufferBeginInfo;

  DeviceGroupCommandBufferBeginInfo(const void *next, uint32_t device_mask) : next_(next), device_mask_(device_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t device_mask_;
};

struct PhysicalDeviceSubpassMergeFeedbackFeaturesEXT {

  using native_type = VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;

  PhysicalDeviceSubpassMergeFeedbackFeaturesEXT(void *next, VkBool32 subpass_merge_feedback)
    : next_(next), subpass_merge_feedback_(subpass_merge_feedback) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 subpass_merge_feedback_;
};

struct CoarseSampleLocationNV {

  using native_type = VkCoarseSampleLocationNV;

  CoarseSampleLocationNV(uint32_t pixel_x, uint32_t pixel_y, uint32_t sample) : pixel_x_(pixel_x), pixel_y_(pixel_y), sample_(sample) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t pixel_x_;
  uint32_t pixel_y_;
  uint32_t sample_;
};

struct Win32SurfaceCreateInfoKHR {

  using native_type = VkWin32SurfaceCreateInfoKHR;

  Win32SurfaceCreateInfoKHR(const void *next, VkWin32SurfaceCreateFlagsKHR flags, HINSTANCE hinstance, HWND hwnd)
    : next_(next), flags_(flags), hinstance_(hinstance), hwnd_(hwnd) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkWin32SurfaceCreateFlagsKHR flags_;
  HINSTANCE hinstance_;
  HWND hwnd_;
};

struct SemaphoreGetWin32HandleInfoKHR {

  using native_type = VkSemaphoreGetWin32HandleInfoKHR;

  SemaphoreGetWin32HandleInfoKHR(const void *next, VkSemaphore semaphore, ExternalSemaphoreHandleTypeMaskBit handle_type)
    : next_(next), semaphore_(semaphore), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct PhysicalDeviceSubpassShadingFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;

  PhysicalDeviceSubpassShadingFeaturesHUAWEI(void *next, VkBool32 subpass_shading) : next_(next), subpass_shading_(subpass_shading) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 subpass_shading_;
};

struct BaseOutStructure {

  using native_type = VkBaseOutStructure;

  BaseOutStructure(struct VkBaseOutStructure *next) : next_(next) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  struct VkBaseOutStructure *next_;
};

struct SubpassResolvePerformanceQueryEXT {

  using native_type = VkSubpassResolvePerformanceQueryEXT;

  SubpassResolvePerformanceQueryEXT(void *next, VkBool32 optimal) : next_(next), optimal_(optimal) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 optimal_;
};

struct ImportMemoryZirconHandleInfoFUCHSIA {

  using native_type = VkImportMemoryZirconHandleInfoFUCHSIA;

  ImportMemoryZirconHandleInfoFUCHSIA(const void *next, ExternalMemoryHandleTypeMaskBit handle_type, zx_handle_t handle)
    : next_(next), handle_type_(handle_type), handle_(handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  zx_handle_t handle_;
};

struct QueueFamilyProperties {

  using native_type = VkQueueFamilyProperties;

  QueueFamilyProperties(VkQueueFlags queue_flags, uint32_t queue_count, uint32_t timestamp_valid_bits,
                        VkExtent3D min_image_transfer_granularity)
    : queue_flags_(queue_flags), queue_count_(queue_count), timestamp_valid_bits_(timestamp_valid_bits),
      min_image_transfer_granularity_(min_image_transfer_granularity) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkQueueFlags queue_flags_;
  uint32_t queue_count_;
  uint32_t timestamp_valid_bits_;
  VkExtent3D min_image_transfer_granularity_;
};

struct CopyImageToImageInfoEXT {

  using native_type = VkCopyImageToImageInfoEXT;

  CopyImageToImageInfoEXT(const void *next, VkHostImageCopyFlagsEXT flags, VkImage src_image, ImageLayout src_image_layout,
                          VkImage dst_image, ImageLayout dst_image_layout, uint32_t region_count, const VkImageCopy2 *regions)
    : next_(next), flags_(flags), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image),
      dst_image_layout_(dst_image_layout), region_count_(region_count), regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkHostImageCopyFlagsEXT flags_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const VkImageCopy2 *regions_;
};

struct VertexInputAttributeDescription2EXT {

  using native_type = VkVertexInputAttributeDescription2EXT;

  VertexInputAttributeDescription2EXT(void *next, uint32_t location, uint32_t binding, Format format, uint32_t offset)
    : next_(next), location_(location), binding_(binding), format_(format), offset_(offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t location_;
  uint32_t binding_;
  Format format_;
  uint32_t offset_;
};

struct RayTracingPipelineCreateInfoKHR {

  using native_type = VkRayTracingPipelineCreateInfoKHR;

  RayTracingPipelineCreateInfoKHR(const void *next, VkPipelineCreateFlags flags, uint32_t stage_count,
                                  const VkPipelineShaderStageCreateInfo *stages, uint32_t group_count,
                                  const VkRayTracingShaderGroupCreateInfoKHR *groups, uint32_t max_pipeline_ray_recursion_depth,
                                  const VkPipelineLibraryCreateInfoKHR *library_info,
                                  const VkRayTracingPipelineInterfaceCreateInfoKHR *library_interface,
                                  const VkPipelineDynamicStateCreateInfo *dynamic_state, VkPipelineLayout layout,
                                  VkPipeline base_pipeline_handle, int32_t base_pipeline_index)
    : next_(next), flags_(flags), stage_count_(stage_count), stages_(stages), group_count_(group_count), groups_(groups),
      max_pipeline_ray_recursion_depth_(max_pipeline_ray_recursion_depth), library_info_(library_info),
      library_interface_(library_interface), dynamic_state_(dynamic_state), layout_(layout), base_pipeline_handle_(base_pipeline_handle),
      base_pipeline_index_(base_pipeline_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreateFlags flags_;
  uint32_t stage_count_;
  const VkPipelineShaderStageCreateInfo *stages_;
  uint32_t group_count_;
  const VkRayTracingShaderGroupCreateInfoKHR *groups_;
  uint32_t max_pipeline_ray_recursion_depth_;
  const VkPipelineLibraryCreateInfoKHR *library_info_;
  const VkRayTracingPipelineInterfaceCreateInfoKHR *library_interface_;
  const VkPipelineDynamicStateCreateInfo *dynamic_state_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct AttachmentSampleLocationsEXT {

  using native_type = VkAttachmentSampleLocationsEXT;

  AttachmentSampleLocationsEXT(uint32_t attachment_index, VkSampleLocationsInfoEXT sample_locations_info)
    : attachment_index_(attachment_index), sample_locations_info_(sample_locations_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t attachment_index_;
  VkSampleLocationsInfoEXT sample_locations_info_;
};

struct MemoryHeap {

  using native_type = VkMemoryHeap;

  MemoryHeap(VkDeviceSize size, VkMemoryHeapFlags flags) : size_(size), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceSize size_;
  VkMemoryHeapFlags flags_;
};

struct DeviceGroupDeviceCreateInfo {

  using native_type = VkDeviceGroupDeviceCreateInfo;

  DeviceGroupDeviceCreateInfo(const void *next, uint32_t physical_device_count, const VkPhysicalDevice *physical_devices)
    : next_(next), physical_device_count_(physical_device_count), physical_devices_(physical_devices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t physical_device_count_;
  const VkPhysicalDevice *physical_devices_;
};

struct CopyMemoryIndirectCommandNV {

  using native_type = VkCopyMemoryIndirectCommandNV;

  CopyMemoryIndirectCommandNV(VkDeviceAddress src_address, VkDeviceAddress dst_address, VkDeviceSize size)
    : src_address_(src_address), dst_address_(dst_address), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress src_address_;
  VkDeviceAddress dst_address_;
  VkDeviceSize size_;
};

struct BufferMemoryBarrier {

  using native_type = VkBufferMemoryBarrier;

  BufferMemoryBarrier(const void *next, VkAccessFlags src_access_mask, VkAccessFlags dst_access_mask, uint32_t src_queue_family_index,
                      uint32_t dst_queue_family_index, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size)
    : next_(next), src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), src_queue_family_index_(src_queue_family_index),
      dst_queue_family_index_(dst_queue_family_index), buffer_(buffer), offset_(offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccessFlags src_access_mask_;
  VkAccessFlags dst_access_mask_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkBuffer buffer_;
  VkDeviceSize offset_;
  VkDeviceSize size_;
};

struct PhysicalDeviceMemoryProperties {

  using native_type = VkPhysicalDeviceMemoryProperties;

  PhysicalDeviceMemoryProperties(uint32_t memory_type_count, VkMemoryType memory_types[VK_MAX_MEMORY_TYPES], uint32_t memory_heap_count,
                                 VkMemoryHeap memory_heaps[VK_MAX_MEMORY_HEAPS])
    : memory_type_count_(memory_type_count), memory_types_(memory_types), memory_heap_count_(memory_heap_count),
      memory_heaps_(memory_heaps) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t memory_type_count_;
  VkMemoryType memory_types[VK_MAX_MEMORY_TYPES] _;
  uint32_t memory_heap_count_;
  VkMemoryHeap memory_heaps[VK_MAX_MEMORY_HEAPS] _;
};

struct PhysicalDeviceShaderAtomicFloatFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;

  PhysicalDeviceShaderAtomicFloatFeaturesEXT(void *next, VkBool32 shader_buffer_float32atomics, VkBool32 shader_buffer_float32atomic_add,
                                             VkBool32 shader_buffer_float64atomics, VkBool32 shader_buffer_float64atomic_add,
                                             VkBool32 shader_shared_float32atomics, VkBool32 shader_shared_float32atomic_add,
                                             VkBool32 shader_shared_float64atomics, VkBool32 shader_shared_float64atomic_add,
                                             VkBool32 shader_image_float32atomics, VkBool32 shader_image_float32atomic_add,
                                             VkBool32 sparse_image_float32atomics, VkBool32 sparse_image_float32atomic_add)
    : next_(next), shader_buffer_float32atomics_(shader_buffer_float32atomics),
      shader_buffer_float32atomic_add_(shader_buffer_float32atomic_add), shader_buffer_float64atomics_(shader_buffer_float64atomics),
      shader_buffer_float64atomic_add_(shader_buffer_float64atomic_add), shader_shared_float32atomics_(shader_shared_float32atomics),
      shader_shared_float32atomic_add_(shader_shared_float32atomic_add), shader_shared_float64atomics_(shader_shared_float64atomics),
      shader_shared_float64atomic_add_(shader_shared_float64atomic_add), shader_image_float32atomics_(shader_image_float32atomics),
      shader_image_float32atomic_add_(shader_image_float32atomic_add), sparse_image_float32atomics_(sparse_image_float32atomics),
      sparse_image_float32atomic_add_(sparse_image_float32atomic_add) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_buffer_float32atomics_;
  VkBool32 shader_buffer_float32atomic_add_;
  VkBool32 shader_buffer_float64atomics_;
  VkBool32 shader_buffer_float64atomic_add_;
  VkBool32 shader_shared_float32atomics_;
  VkBool32 shader_shared_float32atomic_add_;
  VkBool32 shader_shared_float64atomics_;
  VkBool32 shader_shared_float64atomic_add_;
  VkBool32 shader_image_float32atomics_;
  VkBool32 shader_image_float32atomic_add_;
  VkBool32 sparse_image_float32atomics_;
  VkBool32 sparse_image_float32atomic_add_;
};

struct ClearDepthStencilValue {

  using native_type = VkClearDepthStencilValue;

  ClearDepthStencilValue(float depth, uint32_t stencil) : depth_(depth), stencil_(stencil) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float depth_;
  uint32_t stencil_;
};

struct MemoryHostPointerPropertiesEXT {

  using native_type = VkMemoryHostPointerPropertiesEXT;

  MemoryHostPointerPropertiesEXT(void *next, uint32_t memory_type_bits) : next_(next), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t memory_type_bits_;
};

struct DrmFormatModifierPropertiesList2EXT {

  using native_type = VkDrmFormatModifierPropertiesList2EXT;

  DrmFormatModifierPropertiesList2EXT(void *next, uint32_t drm_format_modifier_count,
                                      VkDrmFormatModifierProperties2EXT *drm_format_modifier_properties)
    : next_(next), drm_format_modifier_count_(drm_format_modifier_count), drm_format_modifier_properties_(drm_format_modifier_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t drm_format_modifier_count_;
  VkDrmFormatModifierProperties2EXT *drm_format_modifier_properties_;
};

struct VertexInputBindingDescription {

  using native_type = VkVertexInputBindingDescription;

  VertexInputBindingDescription(uint32_t binding, uint32_t stride, VertexInputRate input_rate)
    : binding_(binding), stride_(stride), input_rate_(input_rate) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t binding_;
  uint32_t stride_;
  VertexInputRate input_rate_;
};

struct SurfaceFormat2KHR {

  using native_type = VkSurfaceFormat2KHR;

  SurfaceFormat2KHR(void *next, VkSurfaceFormatKHR surface_format) : next_(next), surface_format_(surface_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSurfaceFormatKHR surface_format_;
};

struct PipelineRasterizationStateRasterizationOrderAMD {

  using native_type = VkPipelineRasterizationStateRasterizationOrderAMD;

  PipelineRasterizationStateRasterizationOrderAMD(const void *next, RasterizationOrder rasterization_order)
    : next_(next), rasterization_order_(rasterization_order) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  RasterizationOrder rasterization_order_;
};

struct SamplerYcbcrConversionInfo {

  using native_type = VkSamplerYcbcrConversionInfo;

  SamplerYcbcrConversionInfo(const void *next, VkSamplerYcbcrConversion conversion) : next_(next), conversion_(conversion) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSamplerYcbcrConversion conversion_;
};

struct CommandBufferInheritanceViewportScissorInfoNV {

  using native_type = VkCommandBufferInheritanceViewportScissorInfoNV;

  CommandBufferInheritanceViewportScissorInfoNV(const void *next, VkBool32 viewport_scissor2d, uint32_t viewport_depth_count,
                                                const VkViewport *viewport_depths)
    : next_(next), viewport_scissor2d_(viewport_scissor2d), viewport_depth_count_(viewport_depth_count), viewport_depths_(viewport_depths) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 viewport_scissor2d_;
  uint32_t viewport_depth_count_;
  const VkViewport *viewport_depths_;
};

struct PhysicalDeviceYcbcrImageArraysFeaturesEXT {

  using native_type = VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;

  PhysicalDeviceYcbcrImageArraysFeaturesEXT(void *next, VkBool32 ycbcr_image_arrays)
    : next_(next), ycbcr_image_arrays_(ycbcr_image_arrays) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ycbcr_image_arrays_;
};

struct Extent2D {

  using native_type = VkExtent2D;

  Extent2D(uint32_t width, uint32_t height) : width_(width), height_(height) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t width_;
  uint32_t height_;
};

struct SubresourceLayout {

  using native_type = VkSubresourceLayout;

  SubresourceLayout(VkDeviceSize offset, VkDeviceSize size, VkDeviceSize row_pitch, VkDeviceSize array_pitch, VkDeviceSize depth_pitch)
    : offset_(offset), size_(size), row_pitch_(row_pitch), array_pitch_(array_pitch), depth_pitch_(depth_pitch) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceSize offset_;
  VkDeviceSize size_;
  VkDeviceSize row_pitch_;
  VkDeviceSize array_pitch_;
  VkDeviceSize depth_pitch_;
};

struct VideoEncodeSessionParametersFeedbackInfoKHR {

  using native_type = VkVideoEncodeSessionParametersFeedbackInfoKHR;

  VideoEncodeSessionParametersFeedbackInfoKHR(void *next, VkBool32 has_overrides) : next_(next), has_overrides_(has_overrides) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 has_overrides_;
};

struct DeviceMemoryReportCallbackDataEXT {

  using native_type = VkDeviceMemoryReportCallbackDataEXT;

  DeviceMemoryReportCallbackDataEXT(void *next, VkDeviceMemoryReportFlagsEXT flags, DeviceMemoryReportEventType type,
                                    uint64_t memory_object_id, VkDeviceSize size, ObjectType object_type, uint64_t object_handle,
                                    uint32_t heap_index)
    : next_(next), flags_(flags), type_(type), memory_object_id_(memory_object_id), size_(size), object_type_(object_type),
      object_handle_(object_handle), heap_index_(heap_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceMemoryReportFlagsEXT flags_;
  DeviceMemoryReportEventType type_;
  uint64_t memory_object_id_;
  VkDeviceSize size_;
  ObjectType object_type_;
  uint64_t object_handle_;
  uint32_t heap_index_;
};

struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT {

  using native_type = VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;

  PhysicalDeviceRGBA10X6FormatsFeaturesEXT(void *next, VkBool32 format_rgba10x6without_ycb_cr_sampler)
    : next_(next), format_rgba10x6without_ycb_cr_sampler_(format_rgba10x6without_ycb_cr_sampler) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 format_rgba10x6without_ycb_cr_sampler_;
};

struct PhysicalDeviceImageRobustnessFeatures {

  using native_type = VkPhysicalDeviceImageRobustnessFeatures;

  PhysicalDeviceImageRobustnessFeatures(void *next, VkBool32 robust_image_access) : next_(next), robust_image_access_(robust_image_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 robust_image_access_;
};

struct GeometryDataNV {

  using native_type = VkGeometryDataNV;

  GeometryDataNV(VkGeometryTrianglesNV triangles, VkGeometryAABBNV aabbs) : triangles_(triangles), aabbs_(aabbs) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkGeometryTrianglesNV triangles_;
  VkGeometryAABBNV aabbs_;
};

struct PhysicalDeviceMemoryPriorityFeaturesEXT {

  using native_type = VkPhysicalDeviceMemoryPriorityFeaturesEXT;

  PhysicalDeviceMemoryPriorityFeaturesEXT(void *next, VkBool32 memory_priority) : next_(next), memory_priority_(memory_priority) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 memory_priority_;
};

struct BaseInStructure {

  using native_type = VkBaseInStructure;

  BaseInStructure(const struct VkBaseInStructure *next) : next_(next) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const struct VkBaseInStructure *next_;
};

struct CopyDescriptorSet {

  using native_type = VkCopyDescriptorSet;

  CopyDescriptorSet(const void *next, VkDescriptorSet src_set, uint32_t src_binding, uint32_t src_array_element, VkDescriptorSet dst_set,
                    uint32_t dst_binding, uint32_t dst_array_element, uint32_t descriptor_count)
    : next_(next), src_set_(src_set), src_binding_(src_binding), src_array_element_(src_array_element), dst_set_(dst_set),
      dst_binding_(dst_binding), dst_array_element_(dst_array_element), descriptor_count_(descriptor_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorSet src_set_;
  uint32_t src_binding_;
  uint32_t src_array_element_;
  VkDescriptorSet dst_set_;
  uint32_t dst_binding_;
  uint32_t dst_array_element_;
  uint32_t descriptor_count_;
};

struct ImageMemoryRequirementsInfo2 {

  using native_type = VkImageMemoryRequirementsInfo2;

  ImageMemoryRequirementsInfo2(const void *next, VkImage image) : next_(next), image_(image) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
};

struct PipelineColorWriteCreateInfoEXT {

  using native_type = VkPipelineColorWriteCreateInfoEXT;

  PipelineColorWriteCreateInfoEXT(const void *next, uint32_t attachment_count, const VkBool32 *color_write_enables)
    : next_(next), attachment_count_(attachment_count), color_write_enables_(color_write_enables) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t attachment_count_;
  const VkBool32 *color_write_enables_;
};

struct ImportSemaphoreSciSyncInfoNV {

  using native_type = VkImportSemaphoreSciSyncInfoNV;

  ImportSemaphoreSciSyncInfoNV(const void *next, VkSemaphore semaphore, ExternalSemaphoreHandleTypeMaskBit handle_type, void *handle)
    : next_(next), semaphore_(semaphore), handle_type_(handle_type), handle_(handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
  void *handle_;
};

struct PipelineCacheCreateInfo {

  using native_type = VkPipelineCacheCreateInfo;

  PipelineCacheCreateInfo(const void *next, VkPipelineCacheCreateFlags flags, size_t initial_data_size, size_t initial_data_size,
                          const void *initial_data)
    : next_(next), flags_(flags), initial_data_size_(initial_data_size), initial_data_size_(initial_data_size),
      initial_data_(initial_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCacheCreateFlags flags_;
  size_t initial_data_size_;
  size_t initial_data_size_;
  const void *initial_data_;
};

struct VertexInputAttributeDescription {

  using native_type = VkVertexInputAttributeDescription;

  VertexInputAttributeDescription(uint32_t location, uint32_t binding, Format format, uint32_t offset)
    : location_(location), binding_(binding), format_(format), offset_(offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t location_;
  uint32_t binding_;
  Format format_;
  uint32_t offset_;
};

struct ExternalMemoryProperties {

  using native_type = VkExternalMemoryProperties;

  ExternalMemoryProperties(VkExternalMemoryFeatureFlags external_memory_features,
                           VkExternalMemoryHandleTypeFlags export_from_imported_handle_types,
                           VkExternalMemoryHandleTypeFlags compatible_handle_types)
    : external_memory_features_(external_memory_features), export_from_imported_handle_types_(export_from_imported_handle_types),
      compatible_handle_types_(compatible_handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkExternalMemoryFeatureFlags external_memory_features_;
  VkExternalMemoryHandleTypeFlags export_from_imported_handle_types_;
  VkExternalMemoryHandleTypeFlags compatible_handle_types_;
};

struct StencilOpState {

  using native_type = VkStencilOpState;

  StencilOpState(StencilOp fail_op, StencilOp pass_op, StencilOp depth_fail_op, CompareOp compare_op, uint32_t compare_mask,
                 uint32_t write_mask, uint32_t reference)
    : fail_op_(fail_op), pass_op_(pass_op), depth_fail_op_(depth_fail_op), compare_op_(compare_op), compare_mask_(compare_mask),
      write_mask_(write_mask), reference_(reference) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StencilOp fail_op_;
  StencilOp pass_op_;
  StencilOp depth_fail_op_;
  CompareOp compare_op_;
  uint32_t compare_mask_;
  uint32_t write_mask_;
  uint32_t reference_;
};

struct PipelineFragmentShadingRateEnumStateCreateInfoNV {

  using native_type = VkPipelineFragmentShadingRateEnumStateCreateInfoNV;

  PipelineFragmentShadingRateEnumStateCreateInfoNV(const void *next, FragmentShadingRateType shading_rate_type,
                                                   FragmentShadingRate shading_rate, FragmentShadingRateCombinerOp combiner_ops[2])
    : next_(next), shading_rate_type_(shading_rate_type), shading_rate_(shading_rate), combiner_ops_(combiner_ops) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  FragmentShadingRateType shading_rate_type_;
  FragmentShadingRate shading_rate_;
  FragmentShadingRateCombinerOp combiner_ops[2] _;
};

struct QueryPoolPerformanceQueryCreateInfoINTEL {

  using native_type = VkQueryPoolPerformanceQueryCreateInfoINTEL;

  QueryPoolPerformanceQueryCreateInfoINTEL(const void *next, QueryPoolSamplingMode performance_counters_sampling)
    : next_(next), performance_counters_sampling_(performance_counters_sampling) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  QueryPoolSamplingMode performance_counters_sampling_;
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT {

  using native_type = VkPhysicalDeviceExternalMemoryHostPropertiesEXT;

  PhysicalDeviceExternalMemoryHostPropertiesEXT(void *next, VkDeviceSize min_imported_host_pointer_alignment)
    : next_(next), min_imported_host_pointer_alignment_(min_imported_host_pointer_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize min_imported_host_pointer_alignment_;
};

struct PhysicalDeviceTransformFeedbackFeaturesEXT {

  using native_type = VkPhysicalDeviceTransformFeedbackFeaturesEXT;

  PhysicalDeviceTransformFeedbackFeaturesEXT(void *next, VkBool32 transform_feedback, VkBool32 geometry_streams)
    : next_(next), transform_feedback_(transform_feedback), geometry_streams_(geometry_streams) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 transform_feedback_;
  VkBool32 geometry_streams_;
};

struct SetLatencyMarkerInfoNV {

  using native_type = VkSetLatencyMarkerInfoNV;

  SetLatencyMarkerInfoNV(const void *next, uint64_t present_id, LatencyMarker marker)
    : next_(next), present_id_(present_id), marker_(marker) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t present_id_;
  LatencyMarker marker_;
};

struct BindDescriptorSetsInfoKHR {

  using native_type = VkBindDescriptorSetsInfoKHR;

  BindDescriptorSetsInfoKHR(const void *next, VkShaderStageFlags stage_flags, VkPipelineLayout layout, uint32_t first_set,
                            uint32_t descriptor_set_count, const VkDescriptorSet *descriptor_sets, uint32_t dynamic_offset_count,
                            const uint32_t *dynamic_offsets)
    : next_(next), stage_flags_(stage_flags), layout_(layout), first_set_(first_set), descriptor_set_count_(descriptor_set_count),
      descriptor_sets_(descriptor_sets), dynamic_offset_count_(dynamic_offset_count), dynamic_offsets_(dynamic_offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkShaderStageFlags stage_flags_;
  VkPipelineLayout layout_;
  uint32_t first_set_;
  uint32_t descriptor_set_count_;
  const VkDescriptorSet *descriptor_sets_;
  uint32_t dynamic_offset_count_;
  const uint32_t *dynamic_offsets_;
};

struct ColorBlendEquationEXT {

  using native_type = VkColorBlendEquationEXT;

  ColorBlendEquationEXT(BlendFactor src_color_blend_factor, BlendFactor dst_color_blend_factor, BlendOp color_blend_op,
                        BlendFactor src_alpha_blend_factor, BlendFactor dst_alpha_blend_factor, BlendOp alpha_blend_op)
    : src_color_blend_factor_(src_color_blend_factor), dst_color_blend_factor_(dst_color_blend_factor), color_blend_op_(color_blend_op),
      src_alpha_blend_factor_(src_alpha_blend_factor), dst_alpha_blend_factor_(dst_alpha_blend_factor), alpha_blend_op_(alpha_blend_op) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  BlendFactor src_color_blend_factor_;
  BlendFactor dst_color_blend_factor_;
  BlendOp color_blend_op_;
  BlendFactor src_alpha_blend_factor_;
  BlendFactor dst_alpha_blend_factor_;
  BlendOp alpha_blend_op_;
};

struct ConformanceVersion {

  using native_type = VkConformanceVersion;

  ConformanceVersion(uint8_t major, uint8_t minor, uint8_t subminor, uint8_t patch)
    : major_(major), minor_(minor), subminor_(subminor), patch_(patch) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint8_t major_;
  uint8_t minor_;
  uint8_t subminor_;
  uint8_t patch_;
};

struct PhysicalDeviceMemoryDecompressionFeaturesNV {

  using native_type = VkPhysicalDeviceMemoryDecompressionFeaturesNV;

  PhysicalDeviceMemoryDecompressionFeaturesNV(void *next, VkBool32 memory_decompression)
    : next_(next), memory_decompression_(memory_decompression) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 memory_decompression_;
};

struct VideoEncodeH264SessionParametersAddInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersAddInfoKHR;

  VideoEncodeH264SessionParametersAddInfoKHR(const void *next, uint32_t std_spscount, const StdVideoH264SequenceParameterSet *std_spss,
                                             uint32_t std_ppscount, const StdVideoH264PictureParameterSet *std_ppss)
    : next_(next), std_spscount_(std_spscount), std_spss_(std_spss), std_ppscount_(std_ppscount), std_ppss_(std_ppss) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t std_spscount_;
  const StdVideoH264SequenceParameterSet *std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH264PictureParameterSet *std_ppss_;
};

struct ExportMemorySciBufInfoNV {

  using native_type = VkExportMemorySciBufInfoNV;

  ExportMemorySciBufInfoNV(const void *next, NvSciBufAttrList attributes) : next_(next), attributes_(attributes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  NvSciBufAttrList attributes_;
};

struct VideoEncodeH264SessionCreateInfoKHR {

  using native_type = VkVideoEncodeH264SessionCreateInfoKHR;

  VideoEncodeH264SessionCreateInfoKHR(const void *next, VkBool32 use_max_level_idc, StdVideoH264LevelIdc max_level_idc)
    : next_(next), use_max_level_idc_(use_max_level_idc), max_level_idc_(max_level_idc) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 use_max_level_idc_;
  StdVideoH264LevelIdc max_level_idc_;
};

struct PhysicalDevicePointClippingProperties {

  using native_type = VkPhysicalDevicePointClippingProperties;

  PhysicalDevicePointClippingProperties(void *next, PointClippingBehavior point_clipping_behavior)
    : next_(next), point_clipping_behavior_(point_clipping_behavior) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  PointClippingBehavior point_clipping_behavior_;
};

struct SpecializationInfo {

  using native_type = VkSpecializationInfo;

  SpecializationInfo(uint32_t map_entry_count, const VkSpecializationMapEntry *map_entries, size_t data_size, const void *data)
    : map_entry_count_(map_entry_count), map_entries_(map_entries), data_size_(data_size), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t map_entry_count_;
  const VkSpecializationMapEntry *map_entries_;
  size_t data_size_;
  const void *data_;
};

struct MemoryAllocateInfo {

  using native_type = VkMemoryAllocateInfo;

  MemoryAllocateInfo(const void *next, VkDeviceSize allocation_size, uint32_t memory_type_index)
    : next_(next), allocation_size_(allocation_size), memory_type_index_(memory_type_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize allocation_size_;
  uint32_t memory_type_index_;
};

struct IndirectCommandsStreamNV {

  using native_type = VkIndirectCommandsStreamNV;

  IndirectCommandsStreamNV(VkBuffer buffer, VkDeviceSize offset) : buffer_(buffer), offset_(offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkBuffer buffer_;
  VkDeviceSize offset_;
};

struct GraphicsPipelineCreateInfo {

  using native_type = VkGraphicsPipelineCreateInfo;

  GraphicsPipelineCreateInfo(
    const void *next, VkPipelineCreateFlags flags, uint32_t stage_count, const VkPipelineShaderStageCreateInfo *stages,
    const VkPipelineShaderStageCreateInfo *stages, const VkPipelineVertexInputStateCreateInfo *vertex_input_state,
    const VkPipelineInputAssemblyStateCreateInfo *input_assembly_state, const VkPipelineTessellationStateCreateInfo *tessellation_state,
    const VkPipelineViewportStateCreateInfo *viewport_state, const VkPipelineRasterizationStateCreateInfo *rasterization_state,
    const VkPipelineMultisampleStateCreateInfo *multisample_state, const VkPipelineDepthStencilStateCreateInfo *depth_stencil_state,
    const VkPipelineColorBlendStateCreateInfo *color_blend_state, const VkPipelineDynamicStateCreateInfo *dynamic_state,
    VkPipelineLayout layout, VkRenderPass render_pass, uint32_t subpass, VkPipeline base_pipeline_handle, int32_t base_pipeline_index)
    : next_(next), flags_(flags), stage_count_(stage_count), stages_(stages), stages_(stages), vertex_input_state_(vertex_input_state),
      input_assembly_state_(input_assembly_state), tessellation_state_(tessellation_state), viewport_state_(viewport_state),
      rasterization_state_(rasterization_state), multisample_state_(multisample_state), depth_stencil_state_(depth_stencil_state),
      color_blend_state_(color_blend_state), dynamic_state_(dynamic_state), layout_(layout), render_pass_(render_pass), subpass_(subpass),
      base_pipeline_handle_(base_pipeline_handle), base_pipeline_index_(base_pipeline_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreateFlags flags_;
  uint32_t stage_count_;
  const VkPipelineShaderStageCreateInfo *stages_;
  const VkPipelineShaderStageCreateInfo *stages_;
  const VkPipelineVertexInputStateCreateInfo *vertex_input_state_;
  const VkPipelineInputAssemblyStateCreateInfo *input_assembly_state_;
  const VkPipelineTessellationStateCreateInfo *tessellation_state_;
  const VkPipelineViewportStateCreateInfo *viewport_state_;
  const VkPipelineRasterizationStateCreateInfo *rasterization_state_;
  const VkPipelineMultisampleStateCreateInfo *multisample_state_;
  const VkPipelineDepthStencilStateCreateInfo *depth_stencil_state_;
  const VkPipelineColorBlendStateCreateInfo *color_blend_state_;
  const VkPipelineDynamicStateCreateInfo *dynamic_state_;
  VkPipelineLayout layout_;
  VkRenderPass render_pass_;
  uint32_t subpass_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct VideoEncodeH265SessionParametersCreateInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersCreateInfoKHR;

  VideoEncodeH265SessionParametersCreateInfoKHR(const void *next, uint32_t max_std_vpscount, uint32_t max_std_spscount,
                                                uint32_t max_std_ppscount,
                                                const VkVideoEncodeH265SessionParametersAddInfoKHR *parameters_add_info)
    : next_(next), max_std_vpscount_(max_std_vpscount), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount),
      parameters_add_info_(parameters_add_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_std_vpscount_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VkVideoEncodeH265SessionParametersAddInfoKHR *parameters_add_info_;
};

struct DeviceQueueCreateInfo {

  using native_type = VkDeviceQueueCreateInfo;

  DeviceQueueCreateInfo(const void *next, VkDeviceQueueCreateFlags flags, uint32_t queue_family_index, uint32_t queue_count,
                        const float *queue_priorities)
    : next_(next), flags_(flags), queue_family_index_(queue_family_index), queue_count_(queue_count), queue_priorities_(queue_priorities) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceQueueCreateFlags flags_;
  uint32_t queue_family_index_;
  uint32_t queue_count_;
  const float *queue_priorities_;
};

struct ApplicationInfo {

  using native_type = VkApplicationInfo;

  ApplicationInfo(const void *next, const char *application_name, uint32_t application_version, const char *engine_name,
                  uint32_t engine_version, uint32_t api_version)
    : next_(next), application_name_(application_name), application_version_(application_version), engine_name_(engine_name),
      engine_version_(engine_version), api_version_(api_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const char *application_name_;
  uint32_t application_version_;
  const char *engine_name_;
  uint32_t engine_version_;
  uint32_t api_version_;
};

struct OpticalFlowSessionCreateInfoNV {

  using native_type = VkOpticalFlowSessionCreateInfoNV;

  OpticalFlowSessionCreateInfoNV(void *next, uint32_t width, uint32_t height, Format image_format, Format flow_vector_format,
                                 Format cost_format, VkOpticalFlowGridSizeFlagsNV output_grid_size,
                                 VkOpticalFlowGridSizeFlagsNV hint_grid_size, OpticalFlowPerformanceLevel performance_level,
                                 VkOpticalFlowSessionCreateFlagsNV flags)
    : next_(next), width_(width), height_(height), image_format_(image_format), flow_vector_format_(flow_vector_format),
      cost_format_(cost_format), output_grid_size_(output_grid_size), hint_grid_size_(hint_grid_size),
      performance_level_(performance_level), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t width_;
  uint32_t height_;
  Format image_format_;
  Format flow_vector_format_;
  Format cost_format_;
  VkOpticalFlowGridSizeFlagsNV output_grid_size_;
  VkOpticalFlowGridSizeFlagsNV hint_grid_size_;
  OpticalFlowPerformanceLevel performance_level_;
  VkOpticalFlowSessionCreateFlagsNV flags_;
};

struct GraphicsPipelineLibraryCreateInfoEXT {

  using native_type = VkGraphicsPipelineLibraryCreateInfoEXT;

  GraphicsPipelineLibraryCreateInfoEXT(const void *next, VkGraphicsPipelineLibraryFlagsEXT flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkGraphicsPipelineLibraryFlagsEXT flags_;
};

struct VideoEncodeInfoKHR {

  using native_type = VkVideoEncodeInfoKHR;

  VideoEncodeInfoKHR(const void *next, VkVideoEncodeFlagsKHR flags, VkBuffer dst_buffer, VkDeviceSize dst_buffer_offset,
                     VkDeviceSize dst_buffer_range, VkVideoPictureResourceInfoKHR src_picture_resource,
                     const VkVideoReferenceSlotInfoKHR *setup_reference_slot, uint32_t reference_slot_count,
                     const VkVideoReferenceSlotInfoKHR *reference_slots, uint32_t preceding_externally_encoded_bytes)
    : next_(next), flags_(flags), dst_buffer_(dst_buffer), dst_buffer_offset_(dst_buffer_offset), dst_buffer_range_(dst_buffer_range),
      src_picture_resource_(src_picture_resource), setup_reference_slot_(setup_reference_slot), reference_slot_count_(reference_slot_count),
      reference_slots_(reference_slots), preceding_externally_encoded_bytes_(preceding_externally_encoded_bytes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEncodeFlagsKHR flags_;
  VkBuffer dst_buffer_;
  VkDeviceSize dst_buffer_offset_;
  VkDeviceSize dst_buffer_range_;
  VkVideoPictureResourceInfoKHR src_picture_resource_;
  const VkVideoReferenceSlotInfoKHR *setup_reference_slot_;
  uint32_t reference_slot_count_;
  const VkVideoReferenceSlotInfoKHR *reference_slots_;
  uint32_t preceding_externally_encoded_bytes_;
};

struct PipelineCreateFlags2CreateInfoKHR {

  using native_type = VkPipelineCreateFlags2CreateInfoKHR;

  PipelineCreateFlags2CreateInfoKHR(const void *next, VkPipelineCreateFlags2KHR flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreateFlags2KHR flags_;
};

struct PhysicalDeviceRenderPassStripedPropertiesARM {

  using native_type = VkPhysicalDeviceRenderPassStripedPropertiesARM;

  PhysicalDeviceRenderPassStripedPropertiesARM(void *next, VkExtent2D render_pass_stripe_granularity, uint32_t max_render_pass_stripes)
    : next_(next), render_pass_stripe_granularity_(render_pass_stripe_granularity), max_render_pass_stripes_(max_render_pass_stripes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D render_pass_stripe_granularity_;
  uint32_t max_render_pass_stripes_;
};

struct RenderPassCreationControlEXT {

  using native_type = VkRenderPassCreationControlEXT;

  RenderPassCreationControlEXT(const void *next, VkBool32 disallow_merging) : next_(next), disallow_merging_(disallow_merging) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 disallow_merging_;
};

struct AttachmentDescription {

  using native_type = VkAttachmentDescription;

  AttachmentDescription(VkAttachmentDescriptionFlags flags, Format format, SampleCountMaskBit samples, AttachmentLoadOp load_op,
                        AttachmentStoreOp store_op, AttachmentLoadOp stencil_load_op, AttachmentStoreOp stencil_store_op,
                        ImageLayout initial_layout, ImageLayout final_layout)
    : flags_(flags), format_(format), samples_(samples), load_op_(load_op), store_op_(store_op), stencil_load_op_(stencil_load_op),
      stencil_store_op_(stencil_store_op), initial_layout_(initial_layout), final_layout_(final_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkAttachmentDescriptionFlags flags_;
  Format format_;
  SampleCountMaskBit samples_;
  AttachmentLoadOp load_op_;
  AttachmentStoreOp store_op_;
  AttachmentLoadOp stencil_load_op_;
  AttachmentStoreOp stencil_store_op_;
  ImageLayout initial_layout_;
  ImageLayout final_layout_;
};

struct ViewportSwizzleNV {

  using native_type = VkViewportSwizzleNV;

  ViewportSwizzleNV(ViewportCoordinateSwizzle x, ViewportCoordinateSwizzle y, ViewportCoordinateSwizzle z, ViewportCoordinateSwizzle w)
    : x_(x), y_(y), z_(z), w_(w) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  ViewportCoordinateSwizzle x_;
  ViewportCoordinateSwizzle y_;
  ViewportCoordinateSwizzle z_;
  ViewportCoordinateSwizzle w_;
};

struct PipelineCacheHeaderVersionSafetyCriticalOne {

  using native_type = VkPipelineCacheHeaderVersionSafetyCriticalOne;

  PipelineCacheHeaderVersionSafetyCriticalOne(VkPipelineCacheHeaderVersionOne header_version_one,
                                              PipelineCacheValidationVersion validation_version, uint32_t implementation_data,
                                              uint32_t pipeline_index_count, uint32_t pipeline_index_stride, uint64_t pipeline_index_offset)
    : header_version_one_(header_version_one), validation_version_(validation_version), implementation_data_(implementation_data),
      pipeline_index_count_(pipeline_index_count), pipeline_index_stride_(pipeline_index_stride),
      pipeline_index_offset_(pipeline_index_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkPipelineCacheHeaderVersionOne header_version_one_;
  PipelineCacheValidationVersion validation_version_;
  uint32_t implementation_data_;
  uint32_t pipeline_index_count_;
  uint32_t pipeline_index_stride_;
  uint64_t pipeline_index_offset_;
};

struct VideoEncodeH264QualityLevelPropertiesKHR {

  using native_type = VkVideoEncodeH264QualityLevelPropertiesKHR;

  VideoEncodeH264QualityLevelPropertiesKHR(void *next, VkVideoEncodeH264RateControlFlagsKHR preferred_rate_control_flags,
                                           uint32_t preferred_gop_frame_count, uint32_t preferred_idr_period,
                                           uint32_t preferred_consecutive_bframe_count, uint32_t preferred_temporal_layer_count,
                                           VkVideoEncodeH264QpKHR preferred_constant_qp, uint32_t preferred_max_l0reference_count,
                                           uint32_t preferred_max_l1reference_count, VkBool32 preferred_std_entropy_coding_mode_flag)
    : next_(next), preferred_rate_control_flags_(preferred_rate_control_flags), preferred_gop_frame_count_(preferred_gop_frame_count),
      preferred_idr_period_(preferred_idr_period), preferred_consecutive_bframe_count_(preferred_consecutive_bframe_count),
      preferred_temporal_layer_count_(preferred_temporal_layer_count), preferred_constant_qp_(preferred_constant_qp),
      preferred_max_l0reference_count_(preferred_max_l0reference_count), preferred_max_l1reference_count_(preferred_max_l1reference_count),
      preferred_std_entropy_coding_mode_flag_(preferred_std_entropy_coding_mode_flag) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoEncodeH264RateControlFlagsKHR preferred_rate_control_flags_;
  uint32_t preferred_gop_frame_count_;
  uint32_t preferred_idr_period_;
  uint32_t preferred_consecutive_bframe_count_;
  uint32_t preferred_temporal_layer_count_;
  VkVideoEncodeH264QpKHR preferred_constant_qp_;
  uint32_t preferred_max_l0reference_count_;
  uint32_t preferred_max_l1reference_count_;
  VkBool32 preferred_std_entropy_coding_mode_flag_;
};

struct PhysicalDeviceCooperativeMatrixPropertiesNV {

  using native_type = VkPhysicalDeviceCooperativeMatrixPropertiesNV;

  PhysicalDeviceCooperativeMatrixPropertiesNV(void *next, VkShaderStageFlags cooperative_matrix_supported_stages)
    : next_(next), cooperative_matrix_supported_stages_(cooperative_matrix_supported_stages) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkShaderStageFlags cooperative_matrix_supported_stages_;
};

struct PushDescriptorSetInfoKHR {

  using native_type = VkPushDescriptorSetInfoKHR;

  PushDescriptorSetInfoKHR(const void *next, VkShaderStageFlags stage_flags, VkPipelineLayout layout, uint32_t set,
                           uint32_t descriptor_write_count, const VkWriteDescriptorSet *descriptor_writes)
    : next_(next), stage_flags_(stage_flags), layout_(layout), set_(set), descriptor_write_count_(descriptor_write_count),
      descriptor_writes_(descriptor_writes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkShaderStageFlags stage_flags_;
  VkPipelineLayout layout_;
  uint32_t set_;
  uint32_t descriptor_write_count_;
  const VkWriteDescriptorSet *descriptor_writes_;
};

struct CommandBufferInheritanceRenderingInfo {

  using native_type = VkCommandBufferInheritanceRenderingInfo;

  CommandBufferInheritanceRenderingInfo(const void *next, VkRenderingFlags flags, uint32_t view_mask, uint32_t color_attachment_count,
                                        uint32_t color_attachment_count, const Format *color_attachment_formats,
                                        Format depth_attachment_format, Format stencil_attachment_format,
                                        SampleCountMaskBit rasterization_samples)
    : next_(next), flags_(flags), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      color_attachment_count_(color_attachment_count), color_attachment_formats_(color_attachment_formats),
      depth_attachment_format_(depth_attachment_format), stencil_attachment_format_(stencil_attachment_format),
      rasterization_samples_(rasterization_samples) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderingFlags flags_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  uint32_t color_attachment_count_;
  const Format *color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
  SampleCountMaskBit rasterization_samples_;
};

struct PhysicalDeviceProperties {

  using native_type = VkPhysicalDeviceProperties;

  PhysicalDeviceProperties(uint32_t api_version, uint32_t driver_version, uint32_t vendor_id, uint32_t device_id,
                           PhysicalDeviceType device_type, char device_name[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE],
                           uint8_t pipeline_cache_uuid[VK_UUID_SIZE], VkPhysicalDeviceLimits limits,
                           VkPhysicalDeviceSparseProperties sparse_properties)
    : api_version_(api_version), driver_version_(driver_version), vendor_id_(vendor_id), device_id_(device_id), device_type_(device_type),
      device_name_(device_name), pipeline_cache_uuid_(pipeline_cache_uuid), limits_(limits), sparse_properties_(sparse_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t api_version_;
  uint32_t driver_version_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  PhysicalDeviceType device_type_;
  char device_name[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE] _;
  uint8_t pipeline_cache_uuid[VK_UUID_SIZE] _;
  VkPhysicalDeviceLimits limits_;
  VkPhysicalDeviceSparseProperties sparse_properties_;
};

struct SurfaceCapabilities2KHR {

  using native_type = VkSurfaceCapabilities2KHR;

  SurfaceCapabilities2KHR(void *next, VkSurfaceCapabilitiesKHR surface_capabilities)
    : next_(next), surface_capabilities_(surface_capabilities) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSurfaceCapabilitiesKHR surface_capabilities_;
};

struct ExtensionProperties {

  using native_type = VkExtensionProperties;

  ExtensionProperties(char extension_name[VK_MAX_EXTENSION_NAME_SIZE], uint32_t spec_version)
    : extension_name_(extension_name), spec_version_(spec_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  char extension_name[VK_MAX_EXTENSION_NAME_SIZE] _;
  uint32_t spec_version_;
};

struct CooperativeMatrixPropertiesNV {

  using native_type = VkCooperativeMatrixPropertiesNV;

  CooperativeMatrixPropertiesNV(void *next, uint32_t msize, uint32_t nsize, uint32_t ksize, VkComponentTypeNV atype,
                                VkComponentTypeNV btype, VkComponentTypeNV ctype, VkComponentTypeNV dtype, VkScopeNV scope)
    : next_(next), msize_(msize), nsize_(nsize), ksize_(ksize), atype_(atype), btype_(btype), ctype_(ctype), dtype_(dtype), scope_(scope) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t msize_;
  uint32_t nsize_;
  uint32_t ksize_;
  VkComponentTypeNV atype_;
  VkComponentTypeNV btype_;
  VkComponentTypeNV ctype_;
  VkComponentTypeNV dtype_;
  VkScopeNV scope_;
};

struct CopyMemoryToImageIndirectCommandNV {

  using native_type = VkCopyMemoryToImageIndirectCommandNV;

  CopyMemoryToImageIndirectCommandNV(VkDeviceAddress src_address, uint32_t buffer_row_length, uint32_t buffer_image_height,
                                     VkImageSubresourceLayers image_subresource, VkOffset3D image_offset, VkExtent3D image_extent)
    : src_address_(src_address), buffer_row_length_(buffer_row_length), buffer_image_height_(buffer_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress src_address_;
  uint32_t buffer_row_length_;
  uint32_t buffer_image_height_;
  VkImageSubresourceLayers image_subresource_;
  VkOffset3D image_offset_;
  VkExtent3D image_extent_;
};

struct PhysicalDeviceProvokingVertexFeaturesEXT {

  using native_type = VkPhysicalDeviceProvokingVertexFeaturesEXT;

  PhysicalDeviceProvokingVertexFeaturesEXT(void *next, VkBool32 provoking_vertex_last,
                                           VkBool32 transform_feedback_preserves_provoking_vertex)
    : next_(next), provoking_vertex_last_(provoking_vertex_last),
      transform_feedback_preserves_provoking_vertex_(transform_feedback_preserves_provoking_vertex) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 provoking_vertex_last_;
  VkBool32 transform_feedback_preserves_provoking_vertex_;
};

struct PhysicalDeviceSparseProperties {

  using native_type = VkPhysicalDeviceSparseProperties;

  PhysicalDeviceSparseProperties(VkBool32 residency_standard2dblock_shape, VkBool32 residency_standard2dmultisample_block_shape,
                                 VkBool32 residency_standard3dblock_shape, VkBool32 residency_aligned_mip_size,
                                 VkBool32 residency_non_resident_strict)
    : residency_standard2dblock_shape_(residency_standard2dblock_shape),
      residency_standard2dmultisample_block_shape_(residency_standard2dmultisample_block_shape),
      residency_standard3dblock_shape_(residency_standard3dblock_shape), residency_aligned_mip_size_(residency_aligned_mip_size),
      residency_non_resident_strict_(residency_non_resident_strict) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkBool32 residency_standard2dblock_shape_;
  VkBool32 residency_standard2dmultisample_block_shape_;
  VkBool32 residency_standard3dblock_shape_;
  VkBool32 residency_aligned_mip_size_;
  VkBool32 residency_non_resident_strict_;
};

struct VideoEncodeH264RateControlLayerInfoKHR {

  using native_type = VkVideoEncodeH264RateControlLayerInfoKHR;

  VideoEncodeH264RateControlLayerInfoKHR(const void *next, VkBool32 use_min_qp, VkVideoEncodeH264QpKHR min_qp, VkBool32 use_max_qp,
                                         VkVideoEncodeH264QpKHR max_qp, VkBool32 use_max_frame_size,
                                         VkVideoEncodeH264FrameSizeKHR max_frame_size)
    : next_(next), use_min_qp_(use_min_qp), min_qp_(min_qp), use_max_qp_(use_max_qp), max_qp_(max_qp),
      use_max_frame_size_(use_max_frame_size), max_frame_size_(max_frame_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 use_min_qp_;
  VkVideoEncodeH264QpKHR min_qp_;
  VkBool32 use_max_qp_;
  VkVideoEncodeH264QpKHR max_qp_;
  VkBool32 use_max_frame_size_;
  VkVideoEncodeH264FrameSizeKHR max_frame_size_;
};

struct ExportMemoryAllocateInfoNV {

  using native_type = VkExportMemoryAllocateInfoNV;

  ExportMemoryAllocateInfoNV(const void *next, VkExternalMemoryHandleTypeFlagsNV handle_types) : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalMemoryHandleTypeFlagsNV handle_types_;
};

struct AllocationCallbacks {

  using native_type = VkAllocationCallbacks;

  AllocationCallbacks(void *user_data, PFN_vkAllocationFunction pfn_allocation, PFN_vkReallocationFunction pfn_reallocation,
                      PFN_vkFreeFunction pfn_free, PFN_vkInternalAllocationNotification pfn_internal_allocation,
                      PFN_vkInternalFreeNotification pfn_internal_free)
    : user_data_(user_data), pfn_allocation_(pfn_allocation), pfn_reallocation_(pfn_reallocation), pfn_free_(pfn_free),
      pfn_internal_allocation_(pfn_internal_allocation), pfn_internal_free_(pfn_internal_free) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  void *user_data_;
  PFN_vkAllocationFunction pfn_allocation_;
  PFN_vkReallocationFunction pfn_reallocation_;
  PFN_vkFreeFunction pfn_free_;
  PFN_vkInternalAllocationNotification pfn_internal_allocation_;
  PFN_vkInternalFreeNotification pfn_internal_free_;
};

struct PhysicalDeviceMemoryProperties2 {

  using native_type = VkPhysicalDeviceMemoryProperties2;

  PhysicalDeviceMemoryProperties2(void *next, VkPhysicalDeviceMemoryProperties memory_properties)
    : next_(next), memory_properties_(memory_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPhysicalDeviceMemoryProperties memory_properties_;
};

struct SparseImageMemoryRequirements {

  using native_type = VkSparseImageMemoryRequirements;

  SparseImageMemoryRequirements(VkSparseImageFormatProperties format_properties, uint32_t image_mip_tail_first_lod,
                                VkDeviceSize image_mip_tail_size, VkDeviceSize image_mip_tail_offset, VkDeviceSize image_mip_tail_stride)
    : format_properties_(format_properties), image_mip_tail_first_lod_(image_mip_tail_first_lod), image_mip_tail_size_(image_mip_tail_size),
      image_mip_tail_offset_(image_mip_tail_offset), image_mip_tail_stride_(image_mip_tail_stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkSparseImageFormatProperties format_properties_;
  uint32_t image_mip_tail_first_lod_;
  VkDeviceSize image_mip_tail_size_;
  VkDeviceSize image_mip_tail_offset_;
  VkDeviceSize image_mip_tail_stride_;
};

struct FenceGetWin32HandleInfoKHR {

  using native_type = VkFenceGetWin32HandleInfoKHR;

  FenceGetWin32HandleInfoKHR(const void *next, VkFence fence, ExternalFenceHandleTypeMaskBit handle_type)
    : next_(next), fence_(fence), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFence fence_;
  ExternalFenceHandleTypeMaskBit handle_type_;
};

struct SparseImageMemoryRequirements2 {

  using native_type = VkSparseImageMemoryRequirements2;

  SparseImageMemoryRequirements2(void *next, VkSparseImageMemoryRequirements memory_requirements)
    : next_(next), memory_requirements_(memory_requirements) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSparseImageMemoryRequirements memory_requirements_;
};

struct PipelineMultisampleStateCreateInfo {

  using native_type = VkPipelineMultisampleStateCreateInfo;

  PipelineMultisampleStateCreateInfo(const void *next, VkPipelineMultisampleStateCreateFlags flags,
                                     SampleCountMaskBit rasterization_samples, VkBool32 sample_shading_enable, float min_sample_shading,
                                     const VkSampleMask *sample_mask, VkBool32 alpha_to_coverage_enable, VkBool32 alpha_to_one_enable)
    : next_(next), flags_(flags), rasterization_samples_(rasterization_samples), sample_shading_enable_(sample_shading_enable),
      min_sample_shading_(min_sample_shading), sample_mask_(sample_mask), alpha_to_coverage_enable_(alpha_to_coverage_enable),
      alpha_to_one_enable_(alpha_to_one_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineMultisampleStateCreateFlags flags_;
  SampleCountMaskBit rasterization_samples_;
  VkBool32 sample_shading_enable_;
  float min_sample_shading_;
  const VkSampleMask *sample_mask_;
  VkBool32 alpha_to_coverage_enable_;
  VkBool32 alpha_to_one_enable_;
};

struct PhysicalDeviceMeshShaderFeaturesEXT {

  using native_type = VkPhysicalDeviceMeshShaderFeaturesEXT;

  PhysicalDeviceMeshShaderFeaturesEXT(void *next, VkBool32 task_shader, VkBool32 mesh_shader, VkBool32 multiview_mesh_shader,
                                      VkBool32 primitive_fragment_shading_rate_mesh_shader, VkBool32 mesh_shader_queries)
    : next_(next), task_shader_(task_shader), mesh_shader_(mesh_shader), multiview_mesh_shader_(multiview_mesh_shader),
      primitive_fragment_shading_rate_mesh_shader_(primitive_fragment_shading_rate_mesh_shader), mesh_shader_queries_(mesh_shader_queries) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 task_shader_;
  VkBool32 mesh_shader_;
  VkBool32 multiview_mesh_shader_;
  VkBool32 primitive_fragment_shading_rate_mesh_shader_;
  VkBool32 mesh_shader_queries_;
};

struct PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT {

  using native_type = VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;

  PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(void *next, VkBool32 attachment_feedback_loop_layout)
    : next_(next), attachment_feedback_loop_layout_(attachment_feedback_loop_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 attachment_feedback_loop_layout_;
};

struct PhysicalDeviceCustomBorderColorPropertiesEXT {

  using native_type = VkPhysicalDeviceCustomBorderColorPropertiesEXT;

  PhysicalDeviceCustomBorderColorPropertiesEXT(void *next, uint32_t max_custom_border_color_samplers)
    : next_(next), max_custom_border_color_samplers_(max_custom_border_color_samplers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_custom_border_color_samplers_;
};

struct PresentTimeGOOGLE {

  using native_type = VkPresentTimeGOOGLE;

  PresentTimeGOOGLE(uint32_t present_id, uint64_t desired_present_time)
    : present_id_(present_id), desired_present_time_(desired_present_time) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t present_id_;
  uint64_t desired_present_time_;
};

struct NativeBufferANDROID {

  using native_type = VkNativeBufferANDROID;

  NativeBufferANDROID(const void *next, const void *handle, int stride, int format, int usage, VkNativeBufferUsage2ANDROID usage2)
    : next_(next), handle_(handle), stride_(stride), format_(format), usage_(usage), usage2_(usage2) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const void *handle_;
  int stride_;
  int format_;
  int usage_;
  VkNativeBufferUsage2ANDROID usage2_;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesKHR {

  using native_type = VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR;

  PhysicalDeviceVertexAttributeDivisorPropertiesKHR(void *next, uint32_t max_vertex_attrib_divisor,
                                                    VkBool32 supports_non_zero_first_instance)
    : next_(next), max_vertex_attrib_divisor_(max_vertex_attrib_divisor),
      supports_non_zero_first_instance_(supports_non_zero_first_instance) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_vertex_attrib_divisor_;
  VkBool32 supports_non_zero_first_instance_;
};

struct MemoryType {

  using native_type = VkMemoryType;

  MemoryType(VkMemoryPropertyFlags property_flags, uint32_t heap_index) : property_flags_(property_flags), heap_index_(heap_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkMemoryPropertyFlags property_flags_;
  uint32_t heap_index_;
};

struct PipelineShaderStageModuleIdentifierCreateInfoEXT {

  using native_type = VkPipelineShaderStageModuleIdentifierCreateInfoEXT;

  PipelineShaderStageModuleIdentifierCreateInfoEXT(const void *next, uint32_t identifier_size, const uint8_t *identifier)
    : next_(next), identifier_size_(identifier_size), identifier_(identifier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t identifier_size_;
  const uint8_t *identifier_;
};

struct Win32KeyedMutexAcquireReleaseInfoNV {

  using native_type = VkWin32KeyedMutexAcquireReleaseInfoNV;

  Win32KeyedMutexAcquireReleaseInfoNV(const void *next, uint32_t acquire_count, const VkDeviceMemory *acquire_syncs,
                                      const uint64_t *acquire_keys, const uint32_t *acquire_timeout_milliseconds, uint32_t release_count,
                                      const VkDeviceMemory *release_syncs, const uint64_t *release_keys)
    : next_(next), acquire_count_(acquire_count), acquire_syncs_(acquire_syncs), acquire_keys_(acquire_keys),
      acquire_timeout_milliseconds_(acquire_timeout_milliseconds), release_count_(release_count), release_syncs_(release_syncs),
      release_keys_(release_keys) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t acquire_count_;
  const VkDeviceMemory *acquire_syncs_;
  const uint64_t *acquire_keys_;
  const uint32_t *acquire_timeout_milliseconds_;
  uint32_t release_count_;
  const VkDeviceMemory *release_syncs_;
  const uint64_t *release_keys_;
};

struct DescriptorSetLayoutBinding {

  using native_type = VkDescriptorSetLayoutBinding;

  DescriptorSetLayoutBinding(uint32_t binding, DescriptorType descriptor_type, uint32_t descriptor_count, VkShaderStageFlags stage_flags,
                             const VkSampler *immutable_samplers)
    : binding_(binding), descriptor_type_(descriptor_type), descriptor_count_(descriptor_count), stage_flags_(stage_flags),
      immutable_samplers_(immutable_samplers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t binding_;
  DescriptorType descriptor_type_;
  uint32_t descriptor_count_;
  VkShaderStageFlags stage_flags_;
  const VkSampler *immutable_samplers_;
};

struct PhysicalDeviceNonSeamlessCubeMapFeaturesEXT {

  using native_type = VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;

  PhysicalDeviceNonSeamlessCubeMapFeaturesEXT(void *next, VkBool32 non_seamless_cube_map)
    : next_(next), non_seamless_cube_map_(non_seamless_cube_map) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 non_seamless_cube_map_;
};

struct PipelineCoverageModulationStateCreateInfoNV {

  using native_type = VkPipelineCoverageModulationStateCreateInfoNV;

  PipelineCoverageModulationStateCreateInfoNV(const void *next, VkPipelineCoverageModulationStateCreateFlagsNV flags,
                                              CoverageModulationMode coverage_modulation_mode, VkBool32 coverage_modulation_table_enable,
                                              uint32_t coverage_modulation_table_count, const float *coverage_modulation_table)
    : next_(next), flags_(flags), coverage_modulation_mode_(coverage_modulation_mode),
      coverage_modulation_table_enable_(coverage_modulation_table_enable),
      coverage_modulation_table_count_(coverage_modulation_table_count), coverage_modulation_table_(coverage_modulation_table) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCoverageModulationStateCreateFlagsNV flags_;
  CoverageModulationMode coverage_modulation_mode_;
  VkBool32 coverage_modulation_table_enable_;
  uint32_t coverage_modulation_table_count_;
  const float *coverage_modulation_table_;
};

struct ExportSemaphoreCreateInfo {

  using native_type = VkExportSemaphoreCreateInfo;

  ExportSemaphoreCreateInfo(const void *next, VkExternalSemaphoreHandleTypeFlags handle_types) : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalSemaphoreHandleTypeFlags handle_types_;
};

struct PipelineRasterizationProvokingVertexStateCreateInfoEXT {

  using native_type = VkPipelineRasterizationProvokingVertexStateCreateInfoEXT;

  PipelineRasterizationProvokingVertexStateCreateInfoEXT(const void *next, ProvokingVertexMode provoking_vertex_mode)
    : next_(next), provoking_vertex_mode_(provoking_vertex_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ProvokingVertexMode provoking_vertex_mode_;
};

struct SwapchainCreateInfoKHR {

  using native_type = VkSwapchainCreateInfoKHR;

  SwapchainCreateInfoKHR(const void *next, VkSwapchainCreateFlagsKHR flags, VkSurfaceKHR surface, uint32_t min_image_count,
                         Format image_format, ColorSpace image_color_space, VkExtent2D image_extent, uint32_t image_array_layers,
                         VkImageUsageFlags image_usage, SharingMode image_sharing_mode, uint32_t queue_family_index_count,
                         const uint32_t *queue_family_indices, SurfaceTransformMaskBit pre_transform, CompositeAlphaMaskBit composite_alpha,
                         PresentMode present_mode, VkBool32 clipped, VkSwapchainKHR old_swapchain, VkSwapchainKHR old_swapchain)
    : next_(next), flags_(flags), surface_(surface), min_image_count_(min_image_count), image_format_(image_format),
      image_color_space_(image_color_space), image_extent_(image_extent), image_array_layers_(image_array_layers),
      image_usage_(image_usage), image_sharing_mode_(image_sharing_mode), queue_family_index_count_(queue_family_index_count),
      queue_family_indices_(queue_family_indices), pre_transform_(pre_transform), composite_alpha_(composite_alpha),
      present_mode_(present_mode), clipped_(clipped), old_swapchain_(old_swapchain), old_swapchain_(old_swapchain) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSwapchainCreateFlagsKHR flags_;
  VkSurfaceKHR surface_;
  uint32_t min_image_count_;
  Format image_format_;
  ColorSpace image_color_space_;
  VkExtent2D image_extent_;
  uint32_t image_array_layers_;
  VkImageUsageFlags image_usage_;
  SharingMode image_sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *queue_family_indices_;
  SurfaceTransformMaskBit pre_transform_;
  CompositeAlphaMaskBit composite_alpha_;
  PresentMode present_mode_;
  VkBool32 clipped_;
  VkSwapchainKHR old_swapchain_;
  VkSwapchainKHR old_swapchain_;
};

struct SemaphoreTypeCreateInfo {

  using native_type = VkSemaphoreTypeCreateInfo;

  SemaphoreTypeCreateInfo(const void *next, SemaphoreType semaphore_type, uint64_t initial_value)
    : next_(next), semaphore_type_(semaphore_type), initial_value_(initial_value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  SemaphoreType semaphore_type_;
  uint64_t initial_value_;
};

struct PipelineDynamicStateCreateInfo {

  using native_type = VkPipelineDynamicStateCreateInfo;

  PipelineDynamicStateCreateInfo(const void *next, VkPipelineDynamicStateCreateFlags flags, uint32_t dynamic_state_count,
                                 const DynamicState *dynamic_states)
    : next_(next), flags_(flags), dynamic_state_count_(dynamic_state_count), dynamic_states_(dynamic_states) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineDynamicStateCreateFlags flags_;
  uint32_t dynamic_state_count_;
  const DynamicState *dynamic_states_;
};

struct CudaLaunchInfoNV {

  using native_type = VkCudaLaunchInfoNV;

  CudaLaunchInfoNV(const void *next, VkCudaFunctionNV function, uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                   uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z, uint32_t shared_mem_bytes, size_t param_count,
                   const void *const *params, size_t extra_count, const void *const *extras)
    : next_(next), function_(function), grid_dim_x_(grid_dim_x), grid_dim_y_(grid_dim_y), grid_dim_z_(grid_dim_z),
      block_dim_x_(block_dim_x), block_dim_y_(block_dim_y), block_dim_z_(block_dim_z), shared_mem_bytes_(shared_mem_bytes),
      param_count_(param_count), params_(params), extra_count_(extra_count), extras_(extras) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCudaFunctionNV function_;
  uint32_t grid_dim_x_;
  uint32_t grid_dim_y_;
  uint32_t grid_dim_z_;
  uint32_t block_dim_x_;
  uint32_t block_dim_y_;
  uint32_t block_dim_z_;
  uint32_t shared_mem_bytes_;
  size_t param_count_;
  const void *const *params_;
  size_t extra_count_;
  const void *const *extras_;
};

struct PipelineShaderStageCreateInfo {

  using native_type = VkPipelineShaderStageCreateInfo;

  PipelineShaderStageCreateInfo(const void *next, VkPipelineShaderStageCreateFlags flags, ShaderStageMaskBit stage, VkShaderModule module,
                                const char *name, const char *name, const VkSpecializationInfo *specialization_info)
    : next_(next), flags_(flags), stage_(stage), module_(module), name_(name), name_(name), specialization_info_(specialization_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineShaderStageCreateFlags flags_;
  ShaderStageMaskBit stage_;
  VkShaderModule module_;
  const char *name_;
  const char *name_;
  const VkSpecializationInfo *specialization_info_;
};

struct CommandPoolCreateInfo {

  using native_type = VkCommandPoolCreateInfo;

  CommandPoolCreateInfo(const void *next, VkCommandPoolCreateFlags flags, uint32_t queue_family_index)
    : next_(next), flags_(flags), queue_family_index_(queue_family_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCommandPoolCreateFlags flags_;
  uint32_t queue_family_index_;
};

struct ViSurfaceCreateInfoNN {

  using native_type = VkViSurfaceCreateInfoNN;

  ViSurfaceCreateInfoNN(const void *next, VkViSurfaceCreateFlagsNN flags, void *window) : next_(next), flags_(flags), window_(window) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkViSurfaceCreateFlagsNN flags_;
  void *window_;
};

struct DispatchIndirectCommand {

  using native_type = VkDispatchIndirectCommand;

  DispatchIndirectCommand(uint32_t x, uint32_t y, uint32_t z) : x_(x), y_(y), z_(z) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t x_;
  uint32_t y_;
  uint32_t z_;
};

struct PhysicalDeviceDescriptorIndexingFeatures {

  using native_type = VkPhysicalDeviceDescriptorIndexingFeatures;

  PhysicalDeviceDescriptorIndexingFeatures(
    void *next, VkBool32 shader_input_attachment_array_dynamic_indexing, VkBool32 shader_uniform_texel_buffer_array_dynamic_indexing,
    VkBool32 shader_storage_texel_buffer_array_dynamic_indexing, VkBool32 shader_uniform_buffer_array_non_uniform_indexing,
    VkBool32 shader_sampled_image_array_non_uniform_indexing, VkBool32 shader_storage_buffer_array_non_uniform_indexing,
    VkBool32 shader_storage_image_array_non_uniform_indexing, VkBool32 shader_input_attachment_array_non_uniform_indexing,
    VkBool32 shader_uniform_texel_buffer_array_non_uniform_indexing, VkBool32 shader_storage_texel_buffer_array_non_uniform_indexing,
    VkBool32 descriptor_binding_uniform_buffer_update_after_bind, VkBool32 descriptor_binding_sampled_image_update_after_bind,
    VkBool32 descriptor_binding_storage_image_update_after_bind, VkBool32 descriptor_binding_storage_buffer_update_after_bind,
    VkBool32 descriptor_binding_uniform_texel_buffer_update_after_bind, VkBool32 descriptor_binding_storage_texel_buffer_update_after_bind,
    VkBool32 descriptor_binding_update_unused_while_pending, VkBool32 descriptor_binding_partially_bound,
    VkBool32 descriptor_binding_variable_descriptor_count, VkBool32 runtime_descriptor_array)
    : next_(next), shader_input_attachment_array_dynamic_indexing_(shader_input_attachment_array_dynamic_indexing),
      shader_uniform_texel_buffer_array_dynamic_indexing_(shader_uniform_texel_buffer_array_dynamic_indexing),
      shader_storage_texel_buffer_array_dynamic_indexing_(shader_storage_texel_buffer_array_dynamic_indexing),
      shader_uniform_buffer_array_non_uniform_indexing_(shader_uniform_buffer_array_non_uniform_indexing),
      shader_sampled_image_array_non_uniform_indexing_(shader_sampled_image_array_non_uniform_indexing),
      shader_storage_buffer_array_non_uniform_indexing_(shader_storage_buffer_array_non_uniform_indexing),
      shader_storage_image_array_non_uniform_indexing_(shader_storage_image_array_non_uniform_indexing),
      shader_input_attachment_array_non_uniform_indexing_(shader_input_attachment_array_non_uniform_indexing),
      shader_uniform_texel_buffer_array_non_uniform_indexing_(shader_uniform_texel_buffer_array_non_uniform_indexing),
      shader_storage_texel_buffer_array_non_uniform_indexing_(shader_storage_texel_buffer_array_non_uniform_indexing),
      descriptor_binding_uniform_buffer_update_after_bind_(descriptor_binding_uniform_buffer_update_after_bind),
      descriptor_binding_sampled_image_update_after_bind_(descriptor_binding_sampled_image_update_after_bind),
      descriptor_binding_storage_image_update_after_bind_(descriptor_binding_storage_image_update_after_bind),
      descriptor_binding_storage_buffer_update_after_bind_(descriptor_binding_storage_buffer_update_after_bind),
      descriptor_binding_uniform_texel_buffer_update_after_bind_(descriptor_binding_uniform_texel_buffer_update_after_bind),
      descriptor_binding_storage_texel_buffer_update_after_bind_(descriptor_binding_storage_texel_buffer_update_after_bind),
      descriptor_binding_update_unused_while_pending_(descriptor_binding_update_unused_while_pending),
      descriptor_binding_partially_bound_(descriptor_binding_partially_bound),
      descriptor_binding_variable_descriptor_count_(descriptor_binding_variable_descriptor_count),
      runtime_descriptor_array_(runtime_descriptor_array) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_input_attachment_array_dynamic_indexing_;
  VkBool32 shader_uniform_texel_buffer_array_dynamic_indexing_;
  VkBool32 shader_storage_texel_buffer_array_dynamic_indexing_;
  VkBool32 shader_uniform_buffer_array_non_uniform_indexing_;
  VkBool32 shader_sampled_image_array_non_uniform_indexing_;
  VkBool32 shader_storage_buffer_array_non_uniform_indexing_;
  VkBool32 shader_storage_image_array_non_uniform_indexing_;
  VkBool32 shader_input_attachment_array_non_uniform_indexing_;
  VkBool32 shader_uniform_texel_buffer_array_non_uniform_indexing_;
  VkBool32 shader_storage_texel_buffer_array_non_uniform_indexing_;
  VkBool32 descriptor_binding_uniform_buffer_update_after_bind_;
  VkBool32 descriptor_binding_sampled_image_update_after_bind_;
  VkBool32 descriptor_binding_storage_image_update_after_bind_;
  VkBool32 descriptor_binding_storage_buffer_update_after_bind_;
  VkBool32 descriptor_binding_uniform_texel_buffer_update_after_bind_;
  VkBool32 descriptor_binding_storage_texel_buffer_update_after_bind_;
  VkBool32 descriptor_binding_update_unused_while_pending_;
  VkBool32 descriptor_binding_partially_bound_;
  VkBool32 descriptor_binding_variable_descriptor_count_;
  VkBool32 runtime_descriptor_array_;
};

struct RenderPassCreationFeedbackInfoEXT {

  using native_type = VkRenderPassCreationFeedbackInfoEXT;

  RenderPassCreationFeedbackInfoEXT(uint32_t post_merge_subpass_count) : post_merge_subpass_count_(post_merge_subpass_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t post_merge_subpass_count_;
};

struct PhysicalDeviceRayTracingPipelinePropertiesKHR {

  using native_type = VkPhysicalDeviceRayTracingPipelinePropertiesKHR;

  PhysicalDeviceRayTracingPipelinePropertiesKHR(void *next, uint32_t shader_group_handle_size, uint32_t max_ray_recursion_depth,
                                                uint32_t max_shader_group_stride, uint32_t shader_group_base_alignment,
                                                uint32_t shader_group_handle_capture_replay_size,
                                                uint32_t max_ray_dispatch_invocation_count, uint32_t shader_group_handle_alignment,
                                                uint32_t max_ray_hit_attribute_size)
    : next_(next), shader_group_handle_size_(shader_group_handle_size), max_ray_recursion_depth_(max_ray_recursion_depth),
      max_shader_group_stride_(max_shader_group_stride), shader_group_base_alignment_(shader_group_base_alignment),
      shader_group_handle_capture_replay_size_(shader_group_handle_capture_replay_size),
      max_ray_dispatch_invocation_count_(max_ray_dispatch_invocation_count), shader_group_handle_alignment_(shader_group_handle_alignment),
      max_ray_hit_attribute_size_(max_ray_hit_attribute_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t shader_group_handle_size_;
  uint32_t max_ray_recursion_depth_;
  uint32_t max_shader_group_stride_;
  uint32_t shader_group_base_alignment_;
  uint32_t shader_group_handle_capture_replay_size_;
  uint32_t max_ray_dispatch_invocation_count_;
  uint32_t shader_group_handle_alignment_;
  uint32_t max_ray_hit_attribute_size_;
};

struct ImportMemorySciBufInfoNV {

  using native_type = VkImportMemorySciBufInfoNV;

  ImportMemorySciBufInfoNV(const void *next, ExternalMemoryHandleTypeMaskBit handle_type, NvSciBufObj handle)
    : next_(next), handle_type_(handle_type), handle_(handle) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  NvSciBufObj handle_;
};

struct DeviceCreateInfo {

  using native_type = VkDeviceCreateInfo;

  DeviceCreateInfo(const void *next, VkDeviceCreateFlags flags, uint32_t queue_create_info_count,
                   const VkDeviceQueueCreateInfo *queue_create_infos, uint32_t enabled_layer_count, const char *const *enabled_layer_names,
                   uint32_t enabled_extension_count, const char *const *enabled_extension_names,
                   const VkPhysicalDeviceFeatures *enabled_features)
    : next_(next), flags_(flags), queue_create_info_count_(queue_create_info_count), queue_create_infos_(queue_create_infos),
      enabled_layer_count_(enabled_layer_count), enabled_layer_names_(enabled_layer_names),
      enabled_extension_count_(enabled_extension_count), enabled_extension_names_(enabled_extension_names),
      enabled_features_(enabled_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceCreateFlags flags_;
  uint32_t queue_create_info_count_;
  const VkDeviceQueueCreateInfo *queue_create_infos_;
  uint32_t enabled_layer_count_;
  const char *const *enabled_layer_names_;
  uint32_t enabled_extension_count_;
  const char *const *enabled_extension_names_;
  const VkPhysicalDeviceFeatures *enabled_features_;
};

struct ImageViewSampleWeightCreateInfoQCOM {

  using native_type = VkImageViewSampleWeightCreateInfoQCOM;

  ImageViewSampleWeightCreateInfoQCOM(const void *next, VkOffset2D filter_center, VkExtent2D filter_size, uint32_t num_phases)
    : next_(next), filter_center_(filter_center), filter_size_(filter_size), num_phases_(num_phases) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkOffset2D filter_center_;
  VkExtent2D filter_size_;
  uint32_t num_phases_;
};

struct PipelineVertexInputStateCreateInfo {

  using native_type = VkPipelineVertexInputStateCreateInfo;

  PipelineVertexInputStateCreateInfo(const void *next, VkPipelineVertexInputStateCreateFlags flags,
                                     uint32_t vertex_binding_description_count,
                                     const VkVertexInputBindingDescription *vertex_binding_descriptions,
                                     uint32_t vertex_attribute_description_count,
                                     const VkVertexInputAttributeDescription *vertex_attribute_descriptions)
    : next_(next), flags_(flags), vertex_binding_description_count_(vertex_binding_description_count),
      vertex_binding_descriptions_(vertex_binding_descriptions), vertex_attribute_description_count_(vertex_attribute_description_count),
      vertex_attribute_descriptions_(vertex_attribute_descriptions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineVertexInputStateCreateFlags flags_;
  uint32_t vertex_binding_description_count_;
  const VkVertexInputBindingDescription *vertex_binding_descriptions_;
  uint32_t vertex_attribute_description_count_;
  const VkVertexInputAttributeDescription *vertex_attribute_descriptions_;
};

struct VideoEncodeUsageInfoKHR {

  using native_type = VkVideoEncodeUsageInfoKHR;

  VideoEncodeUsageInfoKHR(const void *next, VkVideoEncodeUsageFlagsKHR video_usage_hints, VkVideoEncodeContentFlagsKHR video_content_hints,
                          VideoEncodeTuningMode tuning_mode)
    : next_(next), video_usage_hints_(video_usage_hints), video_content_hints_(video_content_hints), tuning_mode_(tuning_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoEncodeUsageFlagsKHR video_usage_hints_;
  VkVideoEncodeContentFlagsKHR video_content_hints_;
  VideoEncodeTuningMode tuning_mode_;
};

struct PerformanceQueryReservationInfoKHR {

  using native_type = VkPerformanceQueryReservationInfoKHR;

  PerformanceQueryReservationInfoKHR(const void *next, uint32_t max_performance_queries_per_pool)
    : next_(next), max_performance_queries_per_pool_(max_performance_queries_per_pool) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_performance_queries_per_pool_;
};

struct DisplayNativeHdrSurfaceCapabilitiesAMD {

  using native_type = VkDisplayNativeHdrSurfaceCapabilitiesAMD;

  DisplayNativeHdrSurfaceCapabilitiesAMD(void *next, VkBool32 local_dimming_support)
    : next_(next), local_dimming_support_(local_dimming_support) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 local_dimming_support_;
};

struct CopyMicromapToMemoryInfoEXT {

  using native_type = VkCopyMicromapToMemoryInfoEXT;

  CopyMicromapToMemoryInfoEXT(const void *next, VkMicromapEXT src, VkDeviceOrHostAddressKHR dst, CopyMicromapMode mode)
    : next_(next), src_(src), dst_(dst), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMicromapEXT src_;
  VkDeviceOrHostAddressKHR dst_;
  CopyMicromapMode mode_;
};

struct PhysicalDeviceVulkan11Properties {

  using native_type = VkPhysicalDeviceVulkan11Properties;

  PhysicalDeviceVulkan11Properties(void *next, uint8_t device_uuid[VK_UUID_SIZE], uint8_t driver_uuid[VK_UUID_SIZE],
                                   uint8_t device_luid[VK_LUID_SIZE], uint32_t device_node_mask, VkBool32 device_luidvalid,
                                   uint32_t subgroup_size, VkShaderStageFlags subgroup_supported_stages,
                                   VkSubgroupFeatureFlags subgroup_supported_operations, VkBool32 subgroup_quad_operations_in_all_stages,
                                   PointClippingBehavior point_clipping_behavior, uint32_t max_multiview_view_count,
                                   uint32_t max_multiview_instance_index, VkBool32 protected_no_fault, uint32_t max_per_set_descriptors,
                                   VkDeviceSize max_memory_allocation_size)
    : next_(next), device_uuid_(device_uuid), driver_uuid_(driver_uuid), device_luid_(device_luid), device_node_mask_(device_node_mask),
      device_luidvalid_(device_luidvalid), subgroup_size_(subgroup_size), subgroup_supported_stages_(subgroup_supported_stages),
      subgroup_supported_operations_(subgroup_supported_operations),
      subgroup_quad_operations_in_all_stages_(subgroup_quad_operations_in_all_stages), point_clipping_behavior_(point_clipping_behavior),
      max_multiview_view_count_(max_multiview_view_count), max_multiview_instance_index_(max_multiview_instance_index),
      protected_no_fault_(protected_no_fault), max_per_set_descriptors_(max_per_set_descriptors),
      max_memory_allocation_size_(max_memory_allocation_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint8_t device_uuid[VK_UUID_SIZE] _;
  uint8_t driver_uuid[VK_UUID_SIZE] _;
  uint8_t device_luid[VK_LUID_SIZE] _;
  uint32_t device_node_mask_;
  VkBool32 device_luidvalid_;
  uint32_t subgroup_size_;
  VkShaderStageFlags subgroup_supported_stages_;
  VkSubgroupFeatureFlags subgroup_supported_operations_;
  VkBool32 subgroup_quad_operations_in_all_stages_;
  PointClippingBehavior point_clipping_behavior_;
  uint32_t max_multiview_view_count_;
  uint32_t max_multiview_instance_index_;
  VkBool32 protected_no_fault_;
  uint32_t max_per_set_descriptors_;
  VkDeviceSize max_memory_allocation_size_;
};

struct DisplayPlanePropertiesKHR {

  using native_type = VkDisplayPlanePropertiesKHR;

  DisplayPlanePropertiesKHR(VkDisplayKHR current_display, uint32_t current_stack_index)
    : current_display_(current_display), current_stack_index_(current_stack_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDisplayKHR current_display_;
  uint32_t current_stack_index_;
};

struct PhysicalDeviceDescriptorIndexingProperties {

  using native_type = VkPhysicalDeviceDescriptorIndexingProperties;

  PhysicalDeviceDescriptorIndexingProperties(
    void *next, uint32_t max_update_after_bind_descriptors_in_all_pools, VkBool32 shader_uniform_buffer_array_non_uniform_indexing_native,
    VkBool32 shader_sampled_image_array_non_uniform_indexing_native, VkBool32 shader_storage_buffer_array_non_uniform_indexing_native,
    VkBool32 shader_storage_image_array_non_uniform_indexing_native, VkBool32 shader_input_attachment_array_non_uniform_indexing_native,
    VkBool32 robust_buffer_access_update_after_bind, VkBool32 quad_divergent_implicit_lod,
    uint32_t max_per_stage_descriptor_update_after_bind_samplers, uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers,
    uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers, uint32_t max_per_stage_descriptor_update_after_bind_sampled_images,
    uint32_t max_per_stage_descriptor_update_after_bind_storage_images,
    uint32_t max_per_stage_descriptor_update_after_bind_input_attachments, uint32_t max_per_stage_update_after_bind_resources,
    uint32_t max_descriptor_set_update_after_bind_samplers, uint32_t max_descriptor_set_update_after_bind_uniform_buffers,
    uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic, uint32_t max_descriptor_set_update_after_bind_storage_buffers,
    uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic, uint32_t max_descriptor_set_update_after_bind_sampled_images,
    uint32_t max_descriptor_set_update_after_bind_storage_images, uint32_t max_descriptor_set_update_after_bind_input_attachments)
    : next_(next), max_update_after_bind_descriptors_in_all_pools_(max_update_after_bind_descriptors_in_all_pools),
      shader_uniform_buffer_array_non_uniform_indexing_native_(shader_uniform_buffer_array_non_uniform_indexing_native),
      shader_sampled_image_array_non_uniform_indexing_native_(shader_sampled_image_array_non_uniform_indexing_native),
      shader_storage_buffer_array_non_uniform_indexing_native_(shader_storage_buffer_array_non_uniform_indexing_native),
      shader_storage_image_array_non_uniform_indexing_native_(shader_storage_image_array_non_uniform_indexing_native),
      shader_input_attachment_array_non_uniform_indexing_native_(shader_input_attachment_array_non_uniform_indexing_native),
      robust_buffer_access_update_after_bind_(robust_buffer_access_update_after_bind),
      quad_divergent_implicit_lod_(quad_divergent_implicit_lod),
      max_per_stage_descriptor_update_after_bind_samplers_(max_per_stage_descriptor_update_after_bind_samplers),
      max_per_stage_descriptor_update_after_bind_uniform_buffers_(max_per_stage_descriptor_update_after_bind_uniform_buffers),
      max_per_stage_descriptor_update_after_bind_storage_buffers_(max_per_stage_descriptor_update_after_bind_storage_buffers),
      max_per_stage_descriptor_update_after_bind_sampled_images_(max_per_stage_descriptor_update_after_bind_sampled_images),
      max_per_stage_descriptor_update_after_bind_storage_images_(max_per_stage_descriptor_update_after_bind_storage_images),
      max_per_stage_descriptor_update_after_bind_input_attachments_(max_per_stage_descriptor_update_after_bind_input_attachments),
      max_per_stage_update_after_bind_resources_(max_per_stage_update_after_bind_resources),
      max_descriptor_set_update_after_bind_samplers_(max_descriptor_set_update_after_bind_samplers),
      max_descriptor_set_update_after_bind_uniform_buffers_(max_descriptor_set_update_after_bind_uniform_buffers),
      max_descriptor_set_update_after_bind_uniform_buffers_dynamic_(max_descriptor_set_update_after_bind_uniform_buffers_dynamic),
      max_descriptor_set_update_after_bind_storage_buffers_(max_descriptor_set_update_after_bind_storage_buffers),
      max_descriptor_set_update_after_bind_storage_buffers_dynamic_(max_descriptor_set_update_after_bind_storage_buffers_dynamic),
      max_descriptor_set_update_after_bind_sampled_images_(max_descriptor_set_update_after_bind_sampled_images),
      max_descriptor_set_update_after_bind_storage_images_(max_descriptor_set_update_after_bind_storage_images),
      max_descriptor_set_update_after_bind_input_attachments_(max_descriptor_set_update_after_bind_input_attachments) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_update_after_bind_descriptors_in_all_pools_;
  VkBool32 shader_uniform_buffer_array_non_uniform_indexing_native_;
  VkBool32 shader_sampled_image_array_non_uniform_indexing_native_;
  VkBool32 shader_storage_buffer_array_non_uniform_indexing_native_;
  VkBool32 shader_storage_image_array_non_uniform_indexing_native_;
  VkBool32 shader_input_attachment_array_non_uniform_indexing_native_;
  VkBool32 robust_buffer_access_update_after_bind_;
  VkBool32 quad_divergent_implicit_lod_;
  uint32_t max_per_stage_descriptor_update_after_bind_samplers_;
  uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_sampled_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_input_attachments_;
  uint32_t max_per_stage_update_after_bind_resources_;
  uint32_t max_descriptor_set_update_after_bind_samplers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_sampled_images_;
  uint32_t max_descriptor_set_update_after_bind_storage_images_;
  uint32_t max_descriptor_set_update_after_bind_input_attachments_;
};

struct PipelineTessellationStateCreateInfo {

  using native_type = VkPipelineTessellationStateCreateInfo;

  PipelineTessellationStateCreateInfo(const void *next, VkPipelineTessellationStateCreateFlags flags, uint32_t patch_control_points)
    : next_(next), flags_(flags), patch_control_points_(patch_control_points) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineTessellationStateCreateFlags flags_;
  uint32_t patch_control_points_;
};

struct ExportMetalCommandQueueInfoEXT {

  using native_type = VkExportMetalCommandQueueInfoEXT;

  ExportMetalCommandQueueInfoEXT(const void *next, VkQueue queue, MTLCommandQueue_id mtl_command_queue)
    : next_(next), queue_(queue), mtl_command_queue_(mtl_command_queue) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkQueue queue_;
  MTLCommandQueue_id mtl_command_queue_;
};

struct MultisampledRenderToSingleSampledInfoEXT {

  using native_type = VkMultisampledRenderToSingleSampledInfoEXT;

  MultisampledRenderToSingleSampledInfoEXT(const void *next, VkBool32 multisampled_render_to_single_sampled_enable,
                                           SampleCountMaskBit rasterization_samples)
    : next_(next), multisampled_render_to_single_sampled_enable_(multisampled_render_to_single_sampled_enable),
      rasterization_samples_(rasterization_samples) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 multisampled_render_to_single_sampled_enable_;
  SampleCountMaskBit rasterization_samples_;
};

struct ImageBlit {

  using native_type = VkImageBlit;

  ImageBlit(VkImageSubresourceLayers src_subresource, VkOffset3D src_offsets[2], VkImageSubresourceLayers dst_subresource,
            VkOffset3D dst_offsets[2])
    : src_subresource_(src_subresource), src_offsets_(src_offsets), dst_subresource_(dst_subresource), dst_offsets_(dst_offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageSubresourceLayers src_subresource_;
  VkOffset3D src_offsets[2] _;
  VkImageSubresourceLayers dst_subresource_;
  VkOffset3D dst_offsets[2] _;
};

struct PipelineColorBlendAttachmentState {

  using native_type = VkPipelineColorBlendAttachmentState;

  PipelineColorBlendAttachmentState(VkBool32 blend_enable, BlendFactor src_color_blend_factor, BlendFactor dst_color_blend_factor,
                                    BlendOp color_blend_op, BlendFactor src_alpha_blend_factor, BlendFactor dst_alpha_blend_factor,
                                    BlendOp alpha_blend_op, VkColorComponentFlags color_write_mask)
    : blend_enable_(blend_enable), src_color_blend_factor_(src_color_blend_factor), dst_color_blend_factor_(dst_color_blend_factor),
      color_blend_op_(color_blend_op), src_alpha_blend_factor_(src_alpha_blend_factor), dst_alpha_blend_factor_(dst_alpha_blend_factor),
      alpha_blend_op_(alpha_blend_op), color_write_mask_(color_write_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkBool32 blend_enable_;
  BlendFactor src_color_blend_factor_;
  BlendFactor dst_color_blend_factor_;
  BlendOp color_blend_op_;
  BlendFactor src_alpha_blend_factor_;
  BlendFactor dst_alpha_blend_factor_;
  BlendOp alpha_blend_op_;
  VkColorComponentFlags color_write_mask_;
};

struct PhysicalDeviceMaintenance5FeaturesKHR {

  using native_type = VkPhysicalDeviceMaintenance5FeaturesKHR;

  PhysicalDeviceMaintenance5FeaturesKHR(void *next, VkBool32 maintenance5) : next_(next), maintenance5_(maintenance5) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 maintenance5_;
};

struct PhysicalDeviceShaderClockFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderClockFeaturesKHR;

  PhysicalDeviceShaderClockFeaturesKHR(void *next, VkBool32 shader_subgroup_clock, VkBool32 shader_device_clock)
    : next_(next), shader_subgroup_clock_(shader_subgroup_clock), shader_device_clock_(shader_device_clock) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_subgroup_clock_;
  VkBool32 shader_device_clock_;
};

struct BindVertexBufferIndirectCommandNV {

  using native_type = VkBindVertexBufferIndirectCommandNV;

  BindVertexBufferIndirectCommandNV(VkDeviceAddress buffer_address, uint32_t size, uint32_t stride)
    : buffer_address_(buffer_address), size_(size), stride_(stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress buffer_address_;
  uint32_t size_;
  uint32_t stride_;
};

struct DescriptorSetLayoutCreateInfo {

  using native_type = VkDescriptorSetLayoutCreateInfo;

  DescriptorSetLayoutCreateInfo(const void *next, VkDescriptorSetLayoutCreateFlags flags, uint32_t binding_count,
                                const VkDescriptorSetLayoutBinding *bindings)
    : next_(next), flags_(flags), binding_count_(binding_count), bindings_(bindings) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorSetLayoutCreateFlags flags_;
  uint32_t binding_count_;
  const VkDescriptorSetLayoutBinding *bindings_;
};

struct ImageStencilUsageCreateInfo {

  using native_type = VkImageStencilUsageCreateInfo;

  ImageStencilUsageCreateInfo(const void *next, VkImageUsageFlags stencil_usage) : next_(next), stencil_usage_(stencil_usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageUsageFlags stencil_usage_;
};

struct PipelineRobustnessCreateInfoEXT {

  using native_type = VkPipelineRobustnessCreateInfoEXT;

  PipelineRobustnessCreateInfoEXT(const void *next, PipelineRobustnessBufferBehavior storage_buffers,
                                  PipelineRobustnessBufferBehavior uniform_buffers, PipelineRobustnessBufferBehavior vertex_inputs,
                                  PipelineRobustnessImageBehavior images)
    : next_(next), storage_buffers_(storage_buffers), uniform_buffers_(uniform_buffers), vertex_inputs_(vertex_inputs), images_(images) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  PipelineRobustnessBufferBehavior storage_buffers_;
  PipelineRobustnessBufferBehavior uniform_buffers_;
  PipelineRobustnessBufferBehavior vertex_inputs_;
  PipelineRobustnessImageBehavior images_;
};

struct FormatProperties3 {

  using native_type = VkFormatProperties3;

  FormatProperties3(void *next, VkFormatFeatureFlags2 linear_tiling_features, VkFormatFeatureFlags2 optimal_tiling_features,
                    VkFormatFeatureFlags2 buffer_features)
    : next_(next), linear_tiling_features_(linear_tiling_features), optimal_tiling_features_(optimal_tiling_features),
      buffer_features_(buffer_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkFormatFeatureFlags2 linear_tiling_features_;
  VkFormatFeatureFlags2 optimal_tiling_features_;
  VkFormatFeatureFlags2 buffer_features_;
};

struct SemaphoreGetZirconHandleInfoFUCHSIA {

  using native_type = VkSemaphoreGetZirconHandleInfoFUCHSIA;

  SemaphoreGetZirconHandleInfoFUCHSIA(const void *next, VkSemaphore semaphore, ExternalSemaphoreHandleTypeMaskBit handle_type)
    : next_(next), semaphore_(semaphore), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct PhysicalDeviceCudaKernelLaunchFeaturesNV {

  using native_type = VkPhysicalDeviceCudaKernelLaunchFeaturesNV;

  PhysicalDeviceCudaKernelLaunchFeaturesNV(void *next, VkBool32 cuda_kernel_launch_features)
    : next_(next), cuda_kernel_launch_features_(cuda_kernel_launch_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 cuda_kernel_launch_features_;
};

struct SemaphoreSignalInfo {

  using native_type = VkSemaphoreSignalInfo;

  SemaphoreSignalInfo(const void *next, VkSemaphore semaphore, uint64_t value) : next_(next), semaphore_(semaphore), value_(value) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphore semaphore_;
  uint64_t value_;
};

struct ImageSubresourceRange {

  using native_type = VkImageSubresourceRange;

  ImageSubresourceRange(VkImageAspectFlags aspect_mask, uint32_t base_mip_level, uint32_t level_count, uint32_t base_array_layer,
                        uint32_t layer_count)
    : aspect_mask_(aspect_mask), base_mip_level_(base_mip_level), level_count_(level_count), base_array_layer_(base_array_layer),
      layer_count_(layer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageAspectFlags aspect_mask_;
  uint32_t base_mip_level_;
  uint32_t level_count_;
  uint32_t base_array_layer_;
  uint32_t layer_count_;
};

struct Offset2D {

  using native_type = VkOffset2D;

  Offset2D(int32_t x, int32_t y) : x_(x), y_(y) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  int32_t x_;
  int32_t y_;
};

struct CudaFunctionCreateInfoNV {

  using native_type = VkCudaFunctionCreateInfoNV;

  CudaFunctionCreateInfoNV(const void *next, VkCudaModuleNV module, const char *name) : next_(next), module_(module), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCudaModuleNV module_;
  const char *name_;
};

struct PhysicalDeviceExtendedDynamicState3PropertiesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicState3PropertiesEXT;

  PhysicalDeviceExtendedDynamicState3PropertiesEXT(void *next, VkBool32 dynamic_primitive_topology_unrestricted)
    : next_(next), dynamic_primitive_topology_unrestricted_(dynamic_primitive_topology_unrestricted) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 dynamic_primitive_topology_unrestricted_;
};

struct ImageViewUsageCreateInfo {

  using native_type = VkImageViewUsageCreateInfo;

  ImageViewUsageCreateInfo(const void *next, VkImageUsageFlags usage) : next_(next), usage_(usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageUsageFlags usage_;
};

struct VideoEncodeH265NaluSliceSegmentInfoKHR {

  using native_type = VkVideoEncodeH265NaluSliceSegmentInfoKHR;

  VideoEncodeH265NaluSliceSegmentInfoKHR(const void *next, int32_t constant_qp,
                                         const StdVideoEncodeH265SliceSegmentHeader *std_slice_segment_header)
    : next_(next), constant_qp_(constant_qp), std_slice_segment_header_(std_slice_segment_header) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  int32_t constant_qp_;
  const StdVideoEncodeH265SliceSegmentHeader *std_slice_segment_header_;
};

struct DebugMarkerObjectTagInfoEXT {

  using native_type = VkDebugMarkerObjectTagInfoEXT;

  DebugMarkerObjectTagInfoEXT(const void *next, DebugReportObjectType object_type, uint64_t object, uint64_t tag_name, size_t tag_size,
                              const void *tag)
    : next_(next), object_type_(object_type), object_(object), tag_name_(tag_name), tag_size_(tag_size), tag_(tag) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DebugReportObjectType object_type_;
  uint64_t object_;
  uint64_t tag_name_;
  size_t tag_size_;
  const void *tag_;
};

struct ImportMemoryFdInfoKHR {

  using native_type = VkImportMemoryFdInfoKHR;

  ImportMemoryFdInfoKHR(const void *next, ExternalMemoryHandleTypeMaskBit handle_type, int fd)
    : next_(next), handle_type_(handle_type), fd_(fd) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  int fd_;
};

struct CommandBufferInheritanceInfo {

  using native_type = VkCommandBufferInheritanceInfo;

  CommandBufferInheritanceInfo(const void *next, VkRenderPass render_pass, uint32_t subpass, VkFramebuffer framebuffer,
                               VkBool32 occlusion_query_enable, VkQueryControlFlags query_flags,
                               VkQueryPipelineStatisticFlags pipeline_statistics)
    : next_(next), render_pass_(render_pass), subpass_(subpass), framebuffer_(framebuffer), occlusion_query_enable_(occlusion_query_enable),
      query_flags_(query_flags), pipeline_statistics_(pipeline_statistics) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderPass render_pass_;
  uint32_t subpass_;
  VkFramebuffer framebuffer_;
  VkBool32 occlusion_query_enable_;
  VkQueryControlFlags query_flags_;
  VkQueryPipelineStatisticFlags pipeline_statistics_;
};

struct EventCreateInfo {

  using native_type = VkEventCreateInfo;

  EventCreateInfo(const void *next, VkEventCreateFlags flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkEventCreateFlags flags_;
};

struct DeviceGroupPresentInfoKHR {

  using native_type = VkDeviceGroupPresentInfoKHR;

  DeviceGroupPresentInfoKHR(const void *next, uint32_t swapchain_count, const uint32_t *device_masks, DeviceGroupPresentModeMaskBit mode)
    : next_(next), swapchain_count_(swapchain_count), device_masks_(device_masks), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t swapchain_count_;
  const uint32_t *device_masks_;
  DeviceGroupPresentModeMaskBit mode_;
};

struct RenderPassMultiviewCreateInfo {

  using native_type = VkRenderPassMultiviewCreateInfo;

  RenderPassMultiviewCreateInfo(const void *next, uint32_t subpass_count, const uint32_t *view_masks, uint32_t dependency_count,
                                const int32_t *view_offsets, uint32_t correlation_mask_count, const uint32_t *correlation_masks)
    : next_(next), subpass_count_(subpass_count), view_masks_(view_masks), dependency_count_(dependency_count), view_offsets_(view_offsets),
      correlation_mask_count_(correlation_mask_count), correlation_masks_(correlation_masks) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t subpass_count_;
  const uint32_t *view_masks_;
  uint32_t dependency_count_;
  const int32_t *view_offsets_;
  uint32_t correlation_mask_count_;
  const uint32_t *correlation_masks_;
};

struct PipelineCacheSafetyCriticalIndexEntry {

  using native_type = VkPipelineCacheSafetyCriticalIndexEntry;

  PipelineCacheSafetyCriticalIndexEntry(uint8_t pipeline_identifier[VK_UUID_SIZE], uint64_t pipeline_memory_size, uint64_t json_size,
                                        uint64_t json_offset, uint32_t stage_index_count, uint32_t stage_index_stride,
                                        uint64_t stage_index_offset)
    : pipeline_identifier_(pipeline_identifier), pipeline_memory_size_(pipeline_memory_size), json_size_(json_size),
      json_offset_(json_offset), stage_index_count_(stage_index_count), stage_index_stride_(stage_index_stride),
      stage_index_offset_(stage_index_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint8_t pipeline_identifier[VK_UUID_SIZE] _;
  uint64_t pipeline_memory_size_;
  uint64_t json_size_;
  uint64_t json_offset_;
  uint32_t stage_index_count_;
  uint32_t stage_index_stride_;
  uint64_t stage_index_offset_;
};

struct PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV {

  using native_type = VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;

  PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(void *next, VkBool32 device_generated_compute,
                                                         VkBool32 device_generated_compute_pipelines,
                                                         VkBool32 device_generated_compute_capture_replay)
    : next_(next), device_generated_compute_(device_generated_compute),
      device_generated_compute_pipelines_(device_generated_compute_pipelines),
      device_generated_compute_capture_replay_(device_generated_compute_capture_replay) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 device_generated_compute_;
  VkBool32 device_generated_compute_pipelines_;
  VkBool32 device_generated_compute_capture_replay_;
};

struct PushConstantRange {

  using native_type = VkPushConstantRange;

  PushConstantRange(VkShaderStageFlags stage_flags, uint32_t offset, uint32_t size)
    : stage_flags_(stage_flags), offset_(offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkShaderStageFlags stage_flags_;
  uint32_t offset_;
  uint32_t size_;
};

struct PhysicalDeviceLegacyDitheringFeaturesEXT {

  using native_type = VkPhysicalDeviceLegacyDitheringFeaturesEXT;

  PhysicalDeviceLegacyDitheringFeaturesEXT(void *next, VkBool32 legacy_dithering) : next_(next), legacy_dithering_(legacy_dithering) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 legacy_dithering_;
};

struct MemoryFdPropertiesKHR {

  using native_type = VkMemoryFdPropertiesKHR;

  MemoryFdPropertiesKHR(void *next, uint32_t memory_type_bits) : next_(next), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t memory_type_bits_;
};

struct ExecutionGraphPipelineScratchSizeAMDX {

  using native_type = VkExecutionGraphPipelineScratchSizeAMDX;

  ExecutionGraphPipelineScratchSizeAMDX(void *next, VkDeviceSize size) : next_(next), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize size_;
};

struct CopyAccelerationStructureToMemoryInfoKHR {

  using native_type = VkCopyAccelerationStructureToMemoryInfoKHR;

  CopyAccelerationStructureToMemoryInfoKHR(const void *next, VkAccelerationStructureKHR src, VkDeviceOrHostAddressKHR dst,
                                           CopyAccelerationStructureMode mode)
    : next_(next), src_(src), dst_(dst), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureKHR src_;
  VkDeviceOrHostAddressKHR dst_;
  CopyAccelerationStructureMode mode_;
};

struct IndirectCommandsLayoutTokenNV {

  using native_type = VkIndirectCommandsLayoutTokenNV;

  IndirectCommandsLayoutTokenNV(const void *next, IndirectCommandsTokenType token_type, uint32_t stream, uint32_t offset,
                                uint32_t vertex_binding_unit, VkBool32 vertex_dynamic_stride, VkPipelineLayout pushconstant_pipeline_layout,
                                VkShaderStageFlags pushconstant_shader_stage_flags, uint32_t pushconstant_offset,
                                uint32_t pushconstant_size, VkIndirectStateFlagsNV indirect_state_flags, uint32_t index_type_count,
                                const IndexType *index_types, const uint32_t *index_type_values)
    : next_(next), token_type_(token_type), stream_(stream), offset_(offset), vertex_binding_unit_(vertex_binding_unit),
      vertex_dynamic_stride_(vertex_dynamic_stride), pushconstant_pipeline_layout_(pushconstant_pipeline_layout),
      pushconstant_shader_stage_flags_(pushconstant_shader_stage_flags), pushconstant_offset_(pushconstant_offset),
      pushconstant_size_(pushconstant_size), indirect_state_flags_(indirect_state_flags), index_type_count_(index_type_count),
      index_types_(index_types), index_type_values_(index_type_values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  IndirectCommandsTokenType token_type_;
  uint32_t stream_;
  uint32_t offset_;
  uint32_t vertex_binding_unit_;
  VkBool32 vertex_dynamic_stride_;
  VkPipelineLayout pushconstant_pipeline_layout_;
  VkShaderStageFlags pushconstant_shader_stage_flags_;
  uint32_t pushconstant_offset_;
  uint32_t pushconstant_size_;
  VkIndirectStateFlagsNV indirect_state_flags_;
  uint32_t index_type_count_;
  const IndexType *index_types_;
  const uint32_t *index_type_values_;
};

struct PhysicalDeviceCoherentMemoryFeaturesAMD {

  using native_type = VkPhysicalDeviceCoherentMemoryFeaturesAMD;

  PhysicalDeviceCoherentMemoryFeaturesAMD(void *next, VkBool32 device_coherent_memory)
    : next_(next), device_coherent_memory_(device_coherent_memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 device_coherent_memory_;
};

struct FormatProperties {

  using native_type = VkFormatProperties;

  FormatProperties(VkFormatFeatureFlags linear_tiling_features, VkFormatFeatureFlags optimal_tiling_features,
                   VkFormatFeatureFlags buffer_features)
    : linear_tiling_features_(linear_tiling_features), optimal_tiling_features_(optimal_tiling_features),
      buffer_features_(buffer_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkFormatFeatureFlags linear_tiling_features_;
  VkFormatFeatureFlags optimal_tiling_features_;
  VkFormatFeatureFlags buffer_features_;
};

struct PhysicalDevicePushDescriptorPropertiesKHR {

  using native_type = VkPhysicalDevicePushDescriptorPropertiesKHR;

  PhysicalDevicePushDescriptorPropertiesKHR(void *next, uint32_t max_push_descriptors)
    : next_(next), max_push_descriptors_(max_push_descriptors) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_push_descriptors_;
};

struct RenderPassCreateInfo2 {

  using native_type = VkRenderPassCreateInfo2;

  RenderPassCreateInfo2(const void *next, VkRenderPassCreateFlags flags, uint32_t attachment_count,
                        const VkAttachmentDescription2 *attachments, uint32_t subpass_count, const VkSubpassDescription2 *subpasses,
                        uint32_t dependency_count, const VkSubpassDependency2 *dependencies, uint32_t correlated_view_mask_count,
                        const uint32_t *correlated_view_masks)
    : next_(next), flags_(flags), attachment_count_(attachment_count), attachments_(attachments), subpass_count_(subpass_count),
      subpasses_(subpasses), dependency_count_(dependency_count), dependencies_(dependencies),
      correlated_view_mask_count_(correlated_view_mask_count), correlated_view_masks_(correlated_view_masks) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderPassCreateFlags flags_;
  uint32_t attachment_count_;
  const VkAttachmentDescription2 *attachments_;
  uint32_t subpass_count_;
  const VkSubpassDescription2 *subpasses_;
  uint32_t dependency_count_;
  const VkSubpassDependency2 *dependencies_;
  uint32_t correlated_view_mask_count_;
  const uint32_t *correlated_view_masks_;
};

struct DescriptorSetLayoutSupport {

  using native_type = VkDescriptorSetLayoutSupport;

  DescriptorSetLayoutSupport(void *next, VkBool32 supported) : next_(next), supported_(supported) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 supported_;
};

struct DrmFormatModifierPropertiesEXT {

  using native_type = VkDrmFormatModifierPropertiesEXT;

  DrmFormatModifierPropertiesEXT(uint64_t drm_format_modifier, uint32_t drm_format_modifier_plane_count,
                                 VkFormatFeatureFlags drm_format_modifier_tiling_features)
    : drm_format_modifier_(drm_format_modifier), drm_format_modifier_plane_count_(drm_format_modifier_plane_count),
      drm_format_modifier_tiling_features_(drm_format_modifier_tiling_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint64_t drm_format_modifier_;
  uint32_t drm_format_modifier_plane_count_;
  VkFormatFeatureFlags drm_format_modifier_tiling_features_;
};

struct BindBufferMemoryDeviceGroupInfo {

  using native_type = VkBindBufferMemoryDeviceGroupInfo;

  BindBufferMemoryDeviceGroupInfo(const void *next, uint32_t device_index_count, const uint32_t *device_indices)
    : next_(next), device_index_count_(device_index_count), device_indices_(device_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t device_index_count_;
  const uint32_t *device_indices_;
};

struct DeviceMemoryOverallocationCreateInfoAMD {

  using native_type = VkDeviceMemoryOverallocationCreateInfoAMD;

  DeviceMemoryOverallocationCreateInfoAMD(const void *next, MemoryOverallocationBehavior overallocation_behavior)
    : next_(next), overallocation_behavior_(overallocation_behavior) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  MemoryOverallocationBehavior overallocation_behavior_;
};

struct SparseImageFormatProperties {

  using native_type = VkSparseImageFormatProperties;

  SparseImageFormatProperties(VkImageAspectFlags aspect_mask, VkExtent3D image_granularity, VkSparseImageFormatFlags flags)
    : aspect_mask_(aspect_mask), image_granularity_(image_granularity), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageAspectFlags aspect_mask_;
  VkExtent3D image_granularity_;
  VkSparseImageFormatFlags flags_;
};

struct MultiDrawIndexedInfoEXT {

  using native_type = VkMultiDrawIndexedInfoEXT;

  MultiDrawIndexedInfoEXT(uint32_t first_index, uint32_t index_count, int32_t vertex_offset)
    : first_index_(first_index), index_count_(index_count), vertex_offset_(vertex_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t first_index_;
  uint32_t index_count_;
  int32_t vertex_offset_;
};

struct PhysicalDeviceNestedCommandBufferFeaturesEXT {

  using native_type = VkPhysicalDeviceNestedCommandBufferFeaturesEXT;

  PhysicalDeviceNestedCommandBufferFeaturesEXT(void *next, VkBool32 nested_command_buffer, VkBool32 nested_command_buffer_rendering,
                                               VkBool32 nested_command_buffer_simultaneous_use)
    : next_(next), nested_command_buffer_(nested_command_buffer), nested_command_buffer_rendering_(nested_command_buffer_rendering),
      nested_command_buffer_simultaneous_use_(nested_command_buffer_simultaneous_use) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 nested_command_buffer_;
  VkBool32 nested_command_buffer_rendering_;
  VkBool32 nested_command_buffer_simultaneous_use_;
};

struct BindAccelerationStructureMemoryInfoNV {

  using native_type = VkBindAccelerationStructureMemoryInfoNV;

  BindAccelerationStructureMemoryInfoNV(const void *next, VkAccelerationStructureNV acceleration_structure, VkDeviceMemory memory,
                                        VkDeviceSize memory_offset, uint32_t device_index_count, const uint32_t *device_indices)
    : next_(next), acceleration_structure_(acceleration_structure), memory_(memory), memory_offset_(memory_offset),
      device_index_count_(device_index_count), device_indices_(device_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureNV acceleration_structure_;
  VkDeviceMemory memory_;
  VkDeviceSize memory_offset_;
  uint32_t device_index_count_;
  const uint32_t *device_indices_;
};

struct CommandBufferAllocateInfo {

  using native_type = VkCommandBufferAllocateInfo;

  CommandBufferAllocateInfo(const void *next, VkCommandPool command_pool, CommandBufferLevel level, uint32_t command_buffer_count)
    : next_(next), command_pool_(command_pool), level_(level), command_buffer_count_(command_buffer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCommandPool command_pool_;
  CommandBufferLevel level_;
  uint32_t command_buffer_count_;
};

struct PipelineRasterizationConservativeStateCreateInfoEXT {

  using native_type = VkPipelineRasterizationConservativeStateCreateInfoEXT;

  PipelineRasterizationConservativeStateCreateInfoEXT(const void *next, VkPipelineRasterizationConservativeStateCreateFlagsEXT flags,
                                                      ConservativeRasterizationMode conservative_rasterization_mode,
                                                      float extra_primitive_overestimation_size)
    : next_(next), flags_(flags), conservative_rasterization_mode_(conservative_rasterization_mode),
      extra_primitive_overestimation_size_(extra_primitive_overestimation_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineRasterizationConservativeStateCreateFlagsEXT flags_;
  ConservativeRasterizationMode conservative_rasterization_mode_;
  float extra_primitive_overestimation_size_;
};

struct PhysicalDeviceBufferDeviceAddressFeatures {

  using native_type = VkPhysicalDeviceBufferDeviceAddressFeatures;

  PhysicalDeviceBufferDeviceAddressFeatures(void *next, VkBool32 buffer_device_address, VkBool32 buffer_device_address_capture_replay,
                                            VkBool32 buffer_device_address_multi_device)
    : next_(next), buffer_device_address_(buffer_device_address),
      buffer_device_address_capture_replay_(buffer_device_address_capture_replay),
      buffer_device_address_multi_device_(buffer_device_address_multi_device) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 buffer_device_address_;
  VkBool32 buffer_device_address_capture_replay_;
  VkBool32 buffer_device_address_multi_device_;
};

struct PhysicalDeviceFeatures {

  using native_type = VkPhysicalDeviceFeatures;

  PhysicalDeviceFeatures(VkBool32 robust_buffer_access, VkBool32 full_draw_index_uint32, VkBool32 image_cube_array,
                         VkBool32 independent_blend, VkBool32 geometry_shader, VkBool32 tessellation_shader, VkBool32 sample_rate_shading,
                         VkBool32 dual_src_blend, VkBool32 logic_op, VkBool32 multi_draw_indirect, VkBool32 draw_indirect_first_instance,
                         VkBool32 depth_clamp, VkBool32 depth_bias_clamp, VkBool32 fill_mode_non_solid, VkBool32 depth_bounds,
                         VkBool32 wide_lines, VkBool32 large_points, VkBool32 alpha_to_one, VkBool32 multi_viewport,
                         VkBool32 sampler_anisotropy, VkBool32 texture_compression_etc2, VkBool32 texture_compression_astc_ldr,
                         VkBool32 texture_compression_bc, VkBool32 occlusion_query_precise, VkBool32 pipeline_statistics_query,
                         VkBool32 vertex_pipeline_stores_and_atomics, VkBool32 fragment_stores_and_atomics,
                         VkBool32 shader_tessellation_and_geometry_point_size, VkBool32 shader_image_gather_extended,
                         VkBool32 shader_storage_image_extended_formats, VkBool32 shader_storage_image_multisample,
                         VkBool32 shader_storage_image_read_without_format, VkBool32 shader_storage_image_write_without_format,
                         VkBool32 shader_uniform_buffer_array_dynamic_indexing, VkBool32 shader_sampled_image_array_dynamic_indexing,
                         VkBool32 shader_storage_buffer_array_dynamic_indexing, VkBool32 shader_storage_image_array_dynamic_indexing,
                         VkBool32 shader_clip_distance, VkBool32 shader_cull_distance, VkBool32 shader_float64, VkBool32 shader_int64,
                         VkBool32 shader_int16, VkBool32 shader_resource_residency, VkBool32 shader_resource_min_lod,
                         VkBool32 sparse_binding, VkBool32 sparse_residency_buffer, VkBool32 sparse_residency_image2d,
                         VkBool32 sparse_residency_image3d, VkBool32 sparse_residency2samples, VkBool32 sparse_residency4samples,
                         VkBool32 sparse_residency8samples, VkBool32 sparse_residency16samples, VkBool32 sparse_residency_aliased,
                         VkBool32 variable_multisample_rate, VkBool32 inherited_queries)
    : robust_buffer_access_(robust_buffer_access), full_draw_index_uint32_(full_draw_index_uint32), image_cube_array_(image_cube_array),
      independent_blend_(independent_blend), geometry_shader_(geometry_shader), tessellation_shader_(tessellation_shader),
      sample_rate_shading_(sample_rate_shading), dual_src_blend_(dual_src_blend), logic_op_(logic_op),
      multi_draw_indirect_(multi_draw_indirect), draw_indirect_first_instance_(draw_indirect_first_instance), depth_clamp_(depth_clamp),
      depth_bias_clamp_(depth_bias_clamp), fill_mode_non_solid_(fill_mode_non_solid), depth_bounds_(depth_bounds), wide_lines_(wide_lines),
      large_points_(large_points), alpha_to_one_(alpha_to_one), multi_viewport_(multi_viewport), sampler_anisotropy_(sampler_anisotropy),
      texture_compression_etc2_(texture_compression_etc2), texture_compression_astc_ldr_(texture_compression_astc_ldr),
      texture_compression_bc_(texture_compression_bc), occlusion_query_precise_(occlusion_query_precise),
      pipeline_statistics_query_(pipeline_statistics_query), vertex_pipeline_stores_and_atomics_(vertex_pipeline_stores_and_atomics),
      fragment_stores_and_atomics_(fragment_stores_and_atomics),
      shader_tessellation_and_geometry_point_size_(shader_tessellation_and_geometry_point_size),
      shader_image_gather_extended_(shader_image_gather_extended),
      shader_storage_image_extended_formats_(shader_storage_image_extended_formats),
      shader_storage_image_multisample_(shader_storage_image_multisample),
      shader_storage_image_read_without_format_(shader_storage_image_read_without_format),
      shader_storage_image_write_without_format_(shader_storage_image_write_without_format),
      shader_uniform_buffer_array_dynamic_indexing_(shader_uniform_buffer_array_dynamic_indexing),
      shader_sampled_image_array_dynamic_indexing_(shader_sampled_image_array_dynamic_indexing),
      shader_storage_buffer_array_dynamic_indexing_(shader_storage_buffer_array_dynamic_indexing),
      shader_storage_image_array_dynamic_indexing_(shader_storage_image_array_dynamic_indexing),
      shader_clip_distance_(shader_clip_distance), shader_cull_distance_(shader_cull_distance), shader_float64_(shader_float64),
      shader_int64_(shader_int64), shader_int16_(shader_int16), shader_resource_residency_(shader_resource_residency),
      shader_resource_min_lod_(shader_resource_min_lod), sparse_binding_(sparse_binding), sparse_residency_buffer_(sparse_residency_buffer),
      sparse_residency_image2d_(sparse_residency_image2d), sparse_residency_image3d_(sparse_residency_image3d),
      sparse_residency2samples_(sparse_residency2samples), sparse_residency4samples_(sparse_residency4samples),
      sparse_residency8samples_(sparse_residency8samples), sparse_residency16samples_(sparse_residency16samples),
      sparse_residency_aliased_(sparse_residency_aliased), variable_multisample_rate_(variable_multisample_rate),
      inherited_queries_(inherited_queries) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkBool32 robust_buffer_access_;
  VkBool32 full_draw_index_uint32_;
  VkBool32 image_cube_array_;
  VkBool32 independent_blend_;
  VkBool32 geometry_shader_;
  VkBool32 tessellation_shader_;
  VkBool32 sample_rate_shading_;
  VkBool32 dual_src_blend_;
  VkBool32 logic_op_;
  VkBool32 multi_draw_indirect_;
  VkBool32 draw_indirect_first_instance_;
  VkBool32 depth_clamp_;
  VkBool32 depth_bias_clamp_;
  VkBool32 fill_mode_non_solid_;
  VkBool32 depth_bounds_;
  VkBool32 wide_lines_;
  VkBool32 large_points_;
  VkBool32 alpha_to_one_;
  VkBool32 multi_viewport_;
  VkBool32 sampler_anisotropy_;
  VkBool32 texture_compression_etc2_;
  VkBool32 texture_compression_astc_ldr_;
  VkBool32 texture_compression_bc_;
  VkBool32 occlusion_query_precise_;
  VkBool32 pipeline_statistics_query_;
  VkBool32 vertex_pipeline_stores_and_atomics_;
  VkBool32 fragment_stores_and_atomics_;
  VkBool32 shader_tessellation_and_geometry_point_size_;
  VkBool32 shader_image_gather_extended_;
  VkBool32 shader_storage_image_extended_formats_;
  VkBool32 shader_storage_image_multisample_;
  VkBool32 shader_storage_image_read_without_format_;
  VkBool32 shader_storage_image_write_without_format_;
  VkBool32 shader_uniform_buffer_array_dynamic_indexing_;
  VkBool32 shader_sampled_image_array_dynamic_indexing_;
  VkBool32 shader_storage_buffer_array_dynamic_indexing_;
  VkBool32 shader_storage_image_array_dynamic_indexing_;
  VkBool32 shader_clip_distance_;
  VkBool32 shader_cull_distance_;
  VkBool32 shader_float64_;
  VkBool32 shader_int64_;
  VkBool32 shader_int16_;
  VkBool32 shader_resource_residency_;
  VkBool32 shader_resource_min_lod_;
  VkBool32 sparse_binding_;
  VkBool32 sparse_residency_buffer_;
  VkBool32 sparse_residency_image2d_;
  VkBool32 sparse_residency_image3d_;
  VkBool32 sparse_residency2samples_;
  VkBool32 sparse_residency4samples_;
  VkBool32 sparse_residency8samples_;
  VkBool32 sparse_residency16samples_;
  VkBool32 sparse_residency_aliased_;
  VkBool32 variable_multisample_rate_;
  VkBool32 inherited_queries_;
};

struct CommandBufferBeginInfo {

  using native_type = VkCommandBufferBeginInfo;

  CommandBufferBeginInfo(const void *next, VkCommandBufferUsageFlags flags, const VkCommandBufferInheritanceInfo *inheritance_info)
    : next_(next), flags_(flags), inheritance_info_(inheritance_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCommandBufferUsageFlags flags_;
  const VkCommandBufferInheritanceInfo *inheritance_info_;
};

struct AndroidSurfaceCreateInfoKHR {

  using native_type = VkAndroidSurfaceCreateInfoKHR;

  AndroidSurfaceCreateInfoKHR(const void *next, VkAndroidSurfaceCreateFlagsKHR flags, struct ANativeWindow *window)
    : next_(next), flags_(flags), window_(window) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAndroidSurfaceCreateFlagsKHR flags_;
  struct ANativeWindow *window_;
};

struct PhysicalDeviceExternalMemorySciBufFeaturesNV {

  using native_type = VkPhysicalDeviceExternalMemorySciBufFeaturesNV;

  PhysicalDeviceExternalMemorySciBufFeaturesNV(void *next, VkBool32 sci_buf_import, VkBool32 sci_buf_export)
    : next_(next), sci_buf_import_(sci_buf_import), sci_buf_export_(sci_buf_export) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 sci_buf_import_;
  VkBool32 sci_buf_export_;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT {

  using native_type = VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;

  PhysicalDeviceVertexAttributeDivisorPropertiesEXT(void *next, uint32_t max_vertex_attrib_divisor)
    : next_(next), max_vertex_attrib_divisor_(max_vertex_attrib_divisor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_vertex_attrib_divisor_;
};

struct PhysicalDeviceImageViewImageFormatInfoEXT {

  using native_type = VkPhysicalDeviceImageViewImageFormatInfoEXT;

  PhysicalDeviceImageViewImageFormatInfoEXT(void *next, ImageViewType image_view_type) : next_(next), image_view_type_(image_view_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  ImageViewType image_view_type_;
};

struct PhysicalDeviceShaderQuadControlFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderQuadControlFeaturesKHR;

  PhysicalDeviceShaderQuadControlFeaturesKHR(void *next, VkBool32 shader_quad_control)
    : next_(next), shader_quad_control_(shader_quad_control) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_quad_control_;
};

struct PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX {

  using native_type = VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX;

  PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(void *next, VkBool32 screen_buffer_import)
    : next_(next), screen_buffer_import_(screen_buffer_import) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 screen_buffer_import_;
};

struct RenderPassBeginInfo {

  using native_type = VkRenderPassBeginInfo;

  RenderPassBeginInfo(const void *next, VkRenderPass render_pass, VkFramebuffer framebuffer, VkRect2D render_area,
                      uint32_t clear_value_count, const VkClearValue *clear_values)
    : next_(next), render_pass_(render_pass), framebuffer_(framebuffer), render_area_(render_area), clear_value_count_(clear_value_count),
      clear_values_(clear_values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRenderPass render_pass_;
  VkFramebuffer framebuffer_;
  VkRect2D render_area_;
  uint32_t clear_value_count_;
  const VkClearValue *clear_values_;
};

struct ComputePipelineIndirectBufferInfoNV {

  using native_type = VkComputePipelineIndirectBufferInfoNV;

  ComputePipelineIndirectBufferInfoNV(const void *next, VkDeviceAddress device_address, VkDeviceSize size,
                                      VkDeviceAddress pipeline_device_address_capture_replay)
    : next_(next), device_address_(device_address), size_(size),
      pipeline_device_address_capture_replay_(pipeline_device_address_capture_replay) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceAddress device_address_;
  VkDeviceSize size_;
  VkDeviceAddress pipeline_device_address_capture_replay_;
};

struct AccelerationStructureMotionInfoNV {

  using native_type = VkAccelerationStructureMotionInfoNV;

  AccelerationStructureMotionInfoNV(const void *next, uint32_t max_instances, VkAccelerationStructureMotionInfoFlagsNV flags)
    : next_(next), max_instances_(max_instances), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_instances_;
  VkAccelerationStructureMotionInfoFlagsNV flags_;
};

struct AttachmentReference {

  using native_type = VkAttachmentReference;

  AttachmentReference(uint32_t attachment, ImageLayout layout) : attachment_(attachment), layout_(layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t attachment_;
  ImageLayout layout_;
};

struct PhysicalDeviceMultiDrawFeaturesEXT {

  using native_type = VkPhysicalDeviceMultiDrawFeaturesEXT;

  PhysicalDeviceMultiDrawFeaturesEXT(void *next, VkBool32 multi_draw) : next_(next), multi_draw_(multi_draw) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 multi_draw_;
};

struct PipelineInputAssemblyStateCreateInfo {

  using native_type = VkPipelineInputAssemblyStateCreateInfo;

  PipelineInputAssemblyStateCreateInfo(const void *next, VkPipelineInputAssemblyStateCreateFlags flags, PrimitiveTopology topology,
                                       VkBool32 primitive_restart_enable)
    : next_(next), flags_(flags), topology_(topology), primitive_restart_enable_(primitive_restart_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineInputAssemblyStateCreateFlags flags_;
  PrimitiveTopology topology_;
  VkBool32 primitive_restart_enable_;
};

struct PhysicalDeviceExternalBufferInfo {

  using native_type = VkPhysicalDeviceExternalBufferInfo;

  PhysicalDeviceExternalBufferInfo(const void *next, VkBufferCreateFlags flags, VkBufferUsageFlags usage,
                                   ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), flags_(flags), usage_(usage), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferCreateFlags flags_;
  VkBufferUsageFlags usage_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct AccelerationStructureInfoNV {

  using native_type = VkAccelerationStructureInfoNV;

  AccelerationStructureInfoNV(const void *next, VkAccelerationStructureTypeNV type, VkBuildAccelerationStructureFlagsNV flags,
                              uint32_t instance_count, uint32_t geometry_count, const VkGeometryNV *geometries)
    : next_(next), type_(type), flags_(flags), instance_count_(instance_count), geometry_count_(geometry_count), geometries_(geometries) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureTypeNV type_;
  VkBuildAccelerationStructureFlagsNV flags_;
  uint32_t instance_count_;
  uint32_t geometry_count_;
  const VkGeometryNV *geometries_;
};

struct VideoDecodeH265CapabilitiesKHR {

  using native_type = VkVideoDecodeH265CapabilitiesKHR;

  VideoDecodeH265CapabilitiesKHR(void *next, StdVideoH265LevelIdc max_level_idc) : next_(next), max_level_idc_(max_level_idc) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  StdVideoH265LevelIdc max_level_idc_;
};

struct FramebufferAttachmentsCreateInfo {

  using native_type = VkFramebufferAttachmentsCreateInfo;

  FramebufferAttachmentsCreateInfo(const void *next, uint32_t attachment_image_info_count,
                                   const VkFramebufferAttachmentImageInfo *attachment_image_infos)
    : next_(next), attachment_image_info_count_(attachment_image_info_count), attachment_image_infos_(attachment_image_infos) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t attachment_image_info_count_;
  const VkFramebufferAttachmentImageInfo *attachment_image_infos_;
};

struct ImageCaptureDescriptorDataInfoEXT {

  using native_type = VkImageCaptureDescriptorDataInfoEXT;

  ImageCaptureDescriptorDataInfoEXT(const void *next, VkImage image) : next_(next), image_(image) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
};

struct PipelinePoolSize {

  using native_type = VkPipelinePoolSize;

  PipelinePoolSize(const void *next, VkDeviceSize pool_entry_size, uint32_t pool_entry_count)
    : next_(next), pool_entry_size_(pool_entry_size), pool_entry_count_(pool_entry_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceSize pool_entry_size_;
  uint32_t pool_entry_count_;
};

struct ImageResolve2 {

  using native_type = VkImageResolve2;

  ImageResolve2(const void *next, VkImageSubresourceLayers src_subresource, VkOffset3D src_offset, VkImageSubresourceLayers dst_subresource,
                VkOffset3D dst_offset, VkExtent3D extent)
    : next_(next), src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageSubresourceLayers src_subresource_;
  VkOffset3D src_offset_;
  VkImageSubresourceLayers dst_subresource_;
  VkOffset3D dst_offset_;
  VkExtent3D extent_;
};

struct DescriptorPoolSize {

  using native_type = VkDescriptorPoolSize;

  DescriptorPoolSize(DescriptorType type, uint32_t descriptor_count) : type_(type), descriptor_count_(descriptor_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  DescriptorType type_;
  uint32_t descriptor_count_;
};

struct SysmemColorSpaceFUCHSIA {

  using native_type = VkSysmemColorSpaceFUCHSIA;

  SysmemColorSpaceFUCHSIA(const void *next, uint32_t color_space) : next_(next), color_space_(color_space) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t color_space_;
};

struct PipelineCoverageReductionStateCreateInfoNV {

  using native_type = VkPipelineCoverageReductionStateCreateInfoNV;

  PipelineCoverageReductionStateCreateInfoNV(const void *next, VkPipelineCoverageReductionStateCreateFlagsNV flags,
                                             CoverageReductionMode coverage_reduction_mode)
    : next_(next), flags_(flags), coverage_reduction_mode_(coverage_reduction_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCoverageReductionStateCreateFlagsNV flags_;
  CoverageReductionMode coverage_reduction_mode_;
};

struct DebugReportCallbackCreateInfoEXT {

  using native_type = VkDebugReportCallbackCreateInfoEXT;

  DebugReportCallbackCreateInfoEXT(const void *next, VkDebugReportFlagsEXT flags, PFN_vkDebugReportCallbackEXT pfn_callback,
                                   void *user_data)
    : next_(next), flags_(flags), pfn_callback_(pfn_callback), user_data_(user_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDebugReportFlagsEXT flags_;
  PFN_vkDebugReportCallbackEXT pfn_callback_;
  void *user_data_;
};

struct PhysicalDeviceScalarBlockLayoutFeatures {

  using native_type = VkPhysicalDeviceScalarBlockLayoutFeatures;

  PhysicalDeviceScalarBlockLayoutFeatures(void *next, VkBool32 scalar_block_layout)
    : next_(next), scalar_block_layout_(scalar_block_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 scalar_block_layout_;
};

struct SubpassDependency {

  using native_type = VkSubpassDependency;

  SubpassDependency(uint32_t src_subpass, uint32_t dst_subpass, VkPipelineStageFlags src_stage_mask, VkPipelineStageFlags dst_stage_mask,
                    VkAccessFlags src_access_mask, VkAccessFlags dst_access_mask, VkDependencyFlags dependency_flags)
    : src_subpass_(src_subpass), dst_subpass_(dst_subpass), src_stage_mask_(src_stage_mask), dst_stage_mask_(dst_stage_mask),
      src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), dependency_flags_(dependency_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t src_subpass_;
  uint32_t dst_subpass_;
  VkPipelineStageFlags src_stage_mask_;
  VkPipelineStageFlags dst_stage_mask_;
  VkAccessFlags src_access_mask_;
  VkAccessFlags dst_access_mask_;
  VkDependencyFlags dependency_flags_;
};

struct CopyMemoryToAccelerationStructureInfoKHR {

  using native_type = VkCopyMemoryToAccelerationStructureInfoKHR;

  CopyMemoryToAccelerationStructureInfoKHR(const void *next, VkDeviceOrHostAddressConstKHR src, VkAccelerationStructureKHR dst,
                                           CopyAccelerationStructureMode mode)
    : next_(next), src_(src), dst_(dst), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceOrHostAddressConstKHR src_;
  VkAccelerationStructureKHR dst_;
  CopyAccelerationStructureMode mode_;
};

struct FenceCreateInfo {

  using native_type = VkFenceCreateInfo;

  FenceCreateInfo(const void *next, VkFenceCreateFlags flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFenceCreateFlags flags_;
};

struct BlitImageInfo2 {

  using native_type = VkBlitImageInfo2;

  BlitImageInfo2(const void *next, VkImage src_image, ImageLayout src_image_layout, VkImage dst_image, ImageLayout dst_image_layout,
                 uint32_t region_count, const VkImageBlit2 *regions, Filter filter)
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image), dst_image_layout_(dst_image_layout),
      region_count_(region_count), regions_(regions), filter_(filter) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const VkImageBlit2 *regions_;
  Filter filter_;
};

struct TraceRaysIndirectCommand2KHR {

  using native_type = VkTraceRaysIndirectCommand2KHR;

  TraceRaysIndirectCommand2KHR(VkDeviceAddress raygen_shader_record_address, VkDeviceSize raygen_shader_record_size,
                               VkDeviceAddress miss_shader_binding_table_address, VkDeviceSize miss_shader_binding_table_size,
                               VkDeviceSize miss_shader_binding_table_stride, VkDeviceAddress hit_shader_binding_table_address,
                               VkDeviceSize hit_shader_binding_table_size, VkDeviceSize hit_shader_binding_table_stride,
                               VkDeviceAddress callable_shader_binding_table_address, VkDeviceSize callable_shader_binding_table_size,
                               VkDeviceSize callable_shader_binding_table_stride, uint32_t width, uint32_t height, uint32_t depth)
    : raygen_shader_record_address_(raygen_shader_record_address), raygen_shader_record_size_(raygen_shader_record_size),
      miss_shader_binding_table_address_(miss_shader_binding_table_address),
      miss_shader_binding_table_size_(miss_shader_binding_table_size), miss_shader_binding_table_stride_(miss_shader_binding_table_stride),
      hit_shader_binding_table_address_(hit_shader_binding_table_address), hit_shader_binding_table_size_(hit_shader_binding_table_size),
      hit_shader_binding_table_stride_(hit_shader_binding_table_stride),
      callable_shader_binding_table_address_(callable_shader_binding_table_address),
      callable_shader_binding_table_size_(callable_shader_binding_table_size),
      callable_shader_binding_table_stride_(callable_shader_binding_table_stride), width_(width), height_(height), depth_(depth) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress raygen_shader_record_address_;
  VkDeviceSize raygen_shader_record_size_;
  VkDeviceAddress miss_shader_binding_table_address_;
  VkDeviceSize miss_shader_binding_table_size_;
  VkDeviceSize miss_shader_binding_table_stride_;
  VkDeviceAddress hit_shader_binding_table_address_;
  VkDeviceSize hit_shader_binding_table_size_;
  VkDeviceSize hit_shader_binding_table_stride_;
  VkDeviceAddress callable_shader_binding_table_address_;
  VkDeviceSize callable_shader_binding_table_size_;
  VkDeviceSize callable_shader_binding_table_stride_;
  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct QueueFamilyQueryResultStatusPropertiesKHR {

  using native_type = VkQueueFamilyQueryResultStatusPropertiesKHR;

  QueueFamilyQueryResultStatusPropertiesKHR(void *next, VkBool32 query_result_status_support)
    : next_(next), query_result_status_support_(query_result_status_support) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 query_result_status_support_;
};

struct ConditionalRenderingBeginInfoEXT {

  using native_type = VkConditionalRenderingBeginInfoEXT;

  ConditionalRenderingBeginInfoEXT(const void *next, VkBuffer buffer, VkDeviceSize offset, VkConditionalRenderingFlagsEXT flags)
    : next_(next), buffer_(buffer), offset_(offset), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer buffer_;
  VkDeviceSize offset_;
  VkConditionalRenderingFlagsEXT flags_;
};

struct PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM {

  using native_type = VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;

  PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(void *next, VkBool32 fragment_density_map_offset)
    : next_(next), fragment_density_map_offset_(fragment_density_map_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 fragment_density_map_offset_;
};

struct VideoCapabilitiesKHR {

  using native_type = VkVideoCapabilitiesKHR;

  VideoCapabilitiesKHR(void *next, VkVideoCapabilityFlagsKHR flags, VkDeviceSize min_bitstream_buffer_offset_alignment,
                       VkDeviceSize min_bitstream_buffer_size_alignment, VkExtent2D picture_access_granularity, VkExtent2D min_coded_extent,
                       VkExtent2D max_coded_extent, uint32_t max_dpb_slots, uint32_t max_active_reference_pictures,
                       VkExtensionProperties std_header_version)
    : next_(next), flags_(flags), min_bitstream_buffer_offset_alignment_(min_bitstream_buffer_offset_alignment),
      min_bitstream_buffer_size_alignment_(min_bitstream_buffer_size_alignment), picture_access_granularity_(picture_access_granularity),
      min_coded_extent_(min_coded_extent), max_coded_extent_(max_coded_extent), max_dpb_slots_(max_dpb_slots),
      max_active_reference_pictures_(max_active_reference_pictures), std_header_version_(std_header_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoCapabilityFlagsKHR flags_;
  VkDeviceSize min_bitstream_buffer_offset_alignment_;
  VkDeviceSize min_bitstream_buffer_size_alignment_;
  VkExtent2D picture_access_granularity_;
  VkExtent2D min_coded_extent_;
  VkExtent2D max_coded_extent_;
  uint32_t max_dpb_slots_;
  uint32_t max_active_reference_pictures_;
  VkExtensionProperties std_header_version_;
};

struct PhysicalDeviceLimits {

  using native_type = VkPhysicalDeviceLimits;

  PhysicalDeviceLimits(
    uint32_t max_image_dimension1d, uint32_t max_image_dimension2d, uint32_t max_image_dimension3d, uint32_t max_image_dimension_cube,
    uint32_t max_image_array_layers, uint32_t max_texel_buffer_elements, uint32_t max_uniform_buffer_range,
    uint32_t max_storage_buffer_range, uint32_t max_push_constants_size, uint32_t max_memory_allocation_count,
    uint32_t max_sampler_allocation_count, VkDeviceSize buffer_image_granularity, VkDeviceSize sparse_address_space_size,
    uint32_t max_bound_descriptor_sets, uint32_t max_per_stage_descriptor_samplers, uint32_t max_per_stage_descriptor_uniform_buffers,
    uint32_t max_per_stage_descriptor_storage_buffers, uint32_t max_per_stage_descriptor_sampled_images,
    uint32_t max_per_stage_descriptor_storage_images, uint32_t max_per_stage_descriptor_input_attachments, uint32_t max_per_stage_resources,
    uint32_t max_descriptor_set_samplers, uint32_t max_descriptor_set_uniform_buffers, uint32_t max_descriptor_set_uniform_buffers_dynamic,
    uint32_t max_descriptor_set_storage_buffers, uint32_t max_descriptor_set_storage_buffers_dynamic,
    uint32_t max_descriptor_set_sampled_images, uint32_t max_descriptor_set_storage_images, uint32_t max_descriptor_set_input_attachments,
    uint32_t max_vertex_input_attributes, uint32_t max_vertex_input_bindings, uint32_t max_vertex_input_attribute_offset,
    uint32_t max_vertex_input_binding_stride, uint32_t max_vertex_output_components, uint32_t max_tessellation_generation_level,
    uint32_t max_tessellation_patch_size, uint32_t max_tessellation_control_per_vertex_input_components,
    uint32_t max_tessellation_control_per_vertex_output_components, uint32_t max_tessellation_control_per_patch_output_components,
    uint32_t max_tessellation_control_total_output_components, uint32_t max_tessellation_evaluation_input_components,
    uint32_t max_tessellation_evaluation_output_components, uint32_t max_geometry_shader_invocations,
    uint32_t max_geometry_input_components, uint32_t max_geometry_output_components, uint32_t max_geometry_output_vertices,
    uint32_t max_geometry_total_output_components, uint32_t max_fragment_input_components, uint32_t max_fragment_output_attachments,
    uint32_t max_fragment_dual_src_attachments, uint32_t max_fragment_combined_output_resources, uint32_t max_compute_shared_memory_size,
    uint32_t max_compute_work_group_count[3], uint32_t max_compute_work_group_invocations, uint32_t max_compute_work_group_size[3],
    uint32_t sub_pixel_precision_bits, uint32_t sub_texel_precision_bits, uint32_t mipmap_precision_bits,
    uint32_t max_draw_indexed_index_value, uint32_t max_draw_indirect_count, float max_sampler_lod_bias, float max_sampler_anisotropy,
    uint32_t max_viewports, uint32_t max_viewport_dimensions[2], float viewport_bounds_range[2], uint32_t viewport_sub_pixel_bits,
    size_t min_memory_map_alignment, VkDeviceSize min_texel_buffer_offset_alignment, VkDeviceSize min_uniform_buffer_offset_alignment,
    VkDeviceSize min_storage_buffer_offset_alignment, int32_t min_texel_offset, uint32_t max_texel_offset, int32_t min_texel_gather_offset,
    uint32_t max_texel_gather_offset, float min_interpolation_offset, float max_interpolation_offset,
    uint32_t sub_pixel_interpolation_offset_bits, uint32_t max_framebuffer_width, uint32_t max_framebuffer_height,
    uint32_t max_framebuffer_layers, VkSampleCountFlags framebuffer_color_sample_counts, VkSampleCountFlags framebuffer_depth_sample_counts,
    VkSampleCountFlags framebuffer_stencil_sample_counts, VkSampleCountFlags framebuffer_no_attachments_sample_counts,
    uint32_t max_color_attachments, VkSampleCountFlags sampled_image_color_sample_counts,
    VkSampleCountFlags sampled_image_integer_sample_counts, VkSampleCountFlags sampled_image_depth_sample_counts,
    VkSampleCountFlags sampled_image_stencil_sample_counts, VkSampleCountFlags storage_image_sample_counts, uint32_t max_sample_mask_words,
    VkBool32 timestamp_compute_and_graphics, float timestamp_period, uint32_t max_clip_distances, uint32_t max_cull_distances,
    uint32_t max_combined_clip_and_cull_distances, uint32_t discrete_queue_priorities, float point_size_range[2], float line_width_range[2],
    float point_size_granularity, float line_width_granularity, VkBool32 strict_lines, VkBool32 standard_sample_locations,
    VkDeviceSize optimal_buffer_copy_offset_alignment, VkDeviceSize optimal_buffer_copy_row_pitch_alignment,
    VkDeviceSize non_coherent_atom_size)
    : max_image_dimension1d_(max_image_dimension1d), max_image_dimension2d_(max_image_dimension2d),
      max_image_dimension3d_(max_image_dimension3d), max_image_dimension_cube_(max_image_dimension_cube),
      max_image_array_layers_(max_image_array_layers), max_texel_buffer_elements_(max_texel_buffer_elements),
      max_uniform_buffer_range_(max_uniform_buffer_range), max_storage_buffer_range_(max_storage_buffer_range),
      max_push_constants_size_(max_push_constants_size), max_memory_allocation_count_(max_memory_allocation_count),
      max_sampler_allocation_count_(max_sampler_allocation_count), buffer_image_granularity_(buffer_image_granularity),
      sparse_address_space_size_(sparse_address_space_size), max_bound_descriptor_sets_(max_bound_descriptor_sets),
      max_per_stage_descriptor_samplers_(max_per_stage_descriptor_samplers),
      max_per_stage_descriptor_uniform_buffers_(max_per_stage_descriptor_uniform_buffers),
      max_per_stage_descriptor_storage_buffers_(max_per_stage_descriptor_storage_buffers),
      max_per_stage_descriptor_sampled_images_(max_per_stage_descriptor_sampled_images),
      max_per_stage_descriptor_storage_images_(max_per_stage_descriptor_storage_images),
      max_per_stage_descriptor_input_attachments_(max_per_stage_descriptor_input_attachments),
      max_per_stage_resources_(max_per_stage_resources), max_descriptor_set_samplers_(max_descriptor_set_samplers),
      max_descriptor_set_uniform_buffers_(max_descriptor_set_uniform_buffers),
      max_descriptor_set_uniform_buffers_dynamic_(max_descriptor_set_uniform_buffers_dynamic),
      max_descriptor_set_storage_buffers_(max_descriptor_set_storage_buffers),
      max_descriptor_set_storage_buffers_dynamic_(max_descriptor_set_storage_buffers_dynamic),
      max_descriptor_set_sampled_images_(max_descriptor_set_sampled_images),
      max_descriptor_set_storage_images_(max_descriptor_set_storage_images),
      max_descriptor_set_input_attachments_(max_descriptor_set_input_attachments),
      max_vertex_input_attributes_(max_vertex_input_attributes), max_vertex_input_bindings_(max_vertex_input_bindings),
      max_vertex_input_attribute_offset_(max_vertex_input_attribute_offset),
      max_vertex_input_binding_stride_(max_vertex_input_binding_stride), max_vertex_output_components_(max_vertex_output_components),
      max_tessellation_generation_level_(max_tessellation_generation_level), max_tessellation_patch_size_(max_tessellation_patch_size),
      max_tessellation_control_per_vertex_input_components_(max_tessellation_control_per_vertex_input_components),
      max_tessellation_control_per_vertex_output_components_(max_tessellation_control_per_vertex_output_components),
      max_tessellation_control_per_patch_output_components_(max_tessellation_control_per_patch_output_components),
      max_tessellation_control_total_output_components_(max_tessellation_control_total_output_components),
      max_tessellation_evaluation_input_components_(max_tessellation_evaluation_input_components),
      max_tessellation_evaluation_output_components_(max_tessellation_evaluation_output_components),
      max_geometry_shader_invocations_(max_geometry_shader_invocations), max_geometry_input_components_(max_geometry_input_components),
      max_geometry_output_components_(max_geometry_output_components), max_geometry_output_vertices_(max_geometry_output_vertices),
      max_geometry_total_output_components_(max_geometry_total_output_components),
      max_fragment_input_components_(max_fragment_input_components), max_fragment_output_attachments_(max_fragment_output_attachments),
      max_fragment_dual_src_attachments_(max_fragment_dual_src_attachments),
      max_fragment_combined_output_resources_(max_fragment_combined_output_resources),
      max_compute_shared_memory_size_(max_compute_shared_memory_size), max_compute_work_group_count_(max_compute_work_group_count),
      max_compute_work_group_invocations_(max_compute_work_group_invocations), max_compute_work_group_size_(max_compute_work_group_size),
      sub_pixel_precision_bits_(sub_pixel_precision_bits), sub_texel_precision_bits_(sub_texel_precision_bits),
      mipmap_precision_bits_(mipmap_precision_bits), max_draw_indexed_index_value_(max_draw_indexed_index_value),
      max_draw_indirect_count_(max_draw_indirect_count), max_sampler_lod_bias_(max_sampler_lod_bias),
      max_sampler_anisotropy_(max_sampler_anisotropy), max_viewports_(max_viewports), max_viewport_dimensions_(max_viewport_dimensions),
      viewport_bounds_range_(viewport_bounds_range), viewport_sub_pixel_bits_(viewport_sub_pixel_bits),
      min_memory_map_alignment_(min_memory_map_alignment), min_texel_buffer_offset_alignment_(min_texel_buffer_offset_alignment),
      min_uniform_buffer_offset_alignment_(min_uniform_buffer_offset_alignment),
      min_storage_buffer_offset_alignment_(min_storage_buffer_offset_alignment), min_texel_offset_(min_texel_offset),
      max_texel_offset_(max_texel_offset), min_texel_gather_offset_(min_texel_gather_offset),
      max_texel_gather_offset_(max_texel_gather_offset), min_interpolation_offset_(min_interpolation_offset),
      max_interpolation_offset_(max_interpolation_offset), sub_pixel_interpolation_offset_bits_(sub_pixel_interpolation_offset_bits),
      max_framebuffer_width_(max_framebuffer_width), max_framebuffer_height_(max_framebuffer_height),
      max_framebuffer_layers_(max_framebuffer_layers), framebuffer_color_sample_counts_(framebuffer_color_sample_counts),
      framebuffer_depth_sample_counts_(framebuffer_depth_sample_counts),
      framebuffer_stencil_sample_counts_(framebuffer_stencil_sample_counts),
      framebuffer_no_attachments_sample_counts_(framebuffer_no_attachments_sample_counts), max_color_attachments_(max_color_attachments),
      sampled_image_color_sample_counts_(sampled_image_color_sample_counts),
      sampled_image_integer_sample_counts_(sampled_image_integer_sample_counts),
      sampled_image_depth_sample_counts_(sampled_image_depth_sample_counts),
      sampled_image_stencil_sample_counts_(sampled_image_stencil_sample_counts), storage_image_sample_counts_(storage_image_sample_counts),
      max_sample_mask_words_(max_sample_mask_words), timestamp_compute_and_graphics_(timestamp_compute_and_graphics),
      timestamp_period_(timestamp_period), max_clip_distances_(max_clip_distances), max_cull_distances_(max_cull_distances),
      max_combined_clip_and_cull_distances_(max_combined_clip_and_cull_distances), discrete_queue_priorities_(discrete_queue_priorities),
      point_size_range_(point_size_range), line_width_range_(line_width_range), point_size_granularity_(point_size_granularity),
      line_width_granularity_(line_width_granularity), strict_lines_(strict_lines), standard_sample_locations_(standard_sample_locations),
      optimal_buffer_copy_offset_alignment_(optimal_buffer_copy_offset_alignment),
      optimal_buffer_copy_row_pitch_alignment_(optimal_buffer_copy_row_pitch_alignment), non_coherent_atom_size_(non_coherent_atom_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t max_image_dimension1d_;
  uint32_t max_image_dimension2d_;
  uint32_t max_image_dimension3d_;
  uint32_t max_image_dimension_cube_;
  uint32_t max_image_array_layers_;
  uint32_t max_texel_buffer_elements_;
  uint32_t max_uniform_buffer_range_;
  uint32_t max_storage_buffer_range_;
  uint32_t max_push_constants_size_;
  uint32_t max_memory_allocation_count_;
  uint32_t max_sampler_allocation_count_;
  VkDeviceSize buffer_image_granularity_;
  VkDeviceSize sparse_address_space_size_;
  uint32_t max_bound_descriptor_sets_;
  uint32_t max_per_stage_descriptor_samplers_;
  uint32_t max_per_stage_descriptor_uniform_buffers_;
  uint32_t max_per_stage_descriptor_storage_buffers_;
  uint32_t max_per_stage_descriptor_sampled_images_;
  uint32_t max_per_stage_descriptor_storage_images_;
  uint32_t max_per_stage_descriptor_input_attachments_;
  uint32_t max_per_stage_resources_;
  uint32_t max_descriptor_set_samplers_;
  uint32_t max_descriptor_set_uniform_buffers_;
  uint32_t max_descriptor_set_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_storage_buffers_;
  uint32_t max_descriptor_set_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_sampled_images_;
  uint32_t max_descriptor_set_storage_images_;
  uint32_t max_descriptor_set_input_attachments_;
  uint32_t max_vertex_input_attributes_;
  uint32_t max_vertex_input_bindings_;
  uint32_t max_vertex_input_attribute_offset_;
  uint32_t max_vertex_input_binding_stride_;
  uint32_t max_vertex_output_components_;
  uint32_t max_tessellation_generation_level_;
  uint32_t max_tessellation_patch_size_;
  uint32_t max_tessellation_control_per_vertex_input_components_;
  uint32_t max_tessellation_control_per_vertex_output_components_;
  uint32_t max_tessellation_control_per_patch_output_components_;
  uint32_t max_tessellation_control_total_output_components_;
  uint32_t max_tessellation_evaluation_input_components_;
  uint32_t max_tessellation_evaluation_output_components_;
  uint32_t max_geometry_shader_invocations_;
  uint32_t max_geometry_input_components_;
  uint32_t max_geometry_output_components_;
  uint32_t max_geometry_output_vertices_;
  uint32_t max_geometry_total_output_components_;
  uint32_t max_fragment_input_components_;
  uint32_t max_fragment_output_attachments_;
  uint32_t max_fragment_dual_src_attachments_;
  uint32_t max_fragment_combined_output_resources_;
  uint32_t max_compute_shared_memory_size_;
  uint32_t max_compute_work_group_count[3] _;
  uint32_t max_compute_work_group_invocations_;
  uint32_t max_compute_work_group_size[3] _;
  uint32_t sub_pixel_precision_bits_;
  uint32_t sub_texel_precision_bits_;
  uint32_t mipmap_precision_bits_;
  uint32_t max_draw_indexed_index_value_;
  uint32_t max_draw_indirect_count_;
  float max_sampler_lod_bias_;
  float max_sampler_anisotropy_;
  uint32_t max_viewports_;
  uint32_t max_viewport_dimensions[2] _;
  float viewport_bounds_range[2] _;
  uint32_t viewport_sub_pixel_bits_;
  size_t min_memory_map_alignment_;
  VkDeviceSize min_texel_buffer_offset_alignment_;
  VkDeviceSize min_uniform_buffer_offset_alignment_;
  VkDeviceSize min_storage_buffer_offset_alignment_;
  int32_t min_texel_offset_;
  uint32_t max_texel_offset_;
  int32_t min_texel_gather_offset_;
  uint32_t max_texel_gather_offset_;
  float min_interpolation_offset_;
  float max_interpolation_offset_;
  uint32_t sub_pixel_interpolation_offset_bits_;
  uint32_t max_framebuffer_width_;
  uint32_t max_framebuffer_height_;
  uint32_t max_framebuffer_layers_;
  VkSampleCountFlags framebuffer_color_sample_counts_;
  VkSampleCountFlags framebuffer_depth_sample_counts_;
  VkSampleCountFlags framebuffer_stencil_sample_counts_;
  VkSampleCountFlags framebuffer_no_attachments_sample_counts_;
  uint32_t max_color_attachments_;
  VkSampleCountFlags sampled_image_color_sample_counts_;
  VkSampleCountFlags sampled_image_integer_sample_counts_;
  VkSampleCountFlags sampled_image_depth_sample_counts_;
  VkSampleCountFlags sampled_image_stencil_sample_counts_;
  VkSampleCountFlags storage_image_sample_counts_;
  uint32_t max_sample_mask_words_;
  VkBool32 timestamp_compute_and_graphics_;
  float timestamp_period_;
  uint32_t max_clip_distances_;
  uint32_t max_cull_distances_;
  uint32_t max_combined_clip_and_cull_distances_;
  uint32_t discrete_queue_priorities_;
  float point_size_range[2] _;
  float line_width_range[2] _;
  float point_size_granularity_;
  float line_width_granularity_;
  VkBool32 strict_lines_;
  VkBool32 standard_sample_locations_;
  VkDeviceSize optimal_buffer_copy_offset_alignment_;
  VkDeviceSize optimal_buffer_copy_row_pitch_alignment_;
  VkDeviceSize non_coherent_atom_size_;
};

struct PhysicalDeviceLinearColorAttachmentFeaturesNV {

  using native_type = VkPhysicalDeviceLinearColorAttachmentFeaturesNV;

  PhysicalDeviceLinearColorAttachmentFeaturesNV(void *next, VkBool32 linear_color_attachment)
    : next_(next), linear_color_attachment_(linear_color_attachment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 linear_color_attachment_;
};

struct PastPresentationTimingGOOGLE {

  using native_type = VkPastPresentationTimingGOOGLE;

  PastPresentationTimingGOOGLE(uint32_t present_id, uint64_t desired_present_time, uint64_t actual_present_time,
                               uint64_t earliest_present_time, uint64_t present_margin)
    : present_id_(present_id), desired_present_time_(desired_present_time), actual_present_time_(actual_present_time),
      earliest_present_time_(earliest_present_time), present_margin_(present_margin) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t present_id_;
  uint64_t desired_present_time_;
  uint64_t actual_present_time_;
  uint64_t earliest_present_time_;
  uint64_t present_margin_;
};

struct ImageFormatConstraintsInfoFUCHSIA {

  using native_type = VkImageFormatConstraintsInfoFUCHSIA;

  ImageFormatConstraintsInfoFUCHSIA(const void *next, VkImageCreateInfo image_create_info, VkFormatFeatureFlags required_format_features,
                                    VkImageFormatConstraintsFlagsFUCHSIA flags, uint64_t sysmem_pixel_format, uint32_t color_space_count,
                                    const VkSysmemColorSpaceFUCHSIA *color_spaces)
    : next_(next), image_create_info_(image_create_info), required_format_features_(required_format_features), flags_(flags),
      sysmem_pixel_format_(sysmem_pixel_format), color_space_count_(color_space_count), color_spaces_(color_spaces) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageCreateInfo image_create_info_;
  VkFormatFeatureFlags required_format_features_;
  VkImageFormatConstraintsFlagsFUCHSIA flags_;
  uint64_t sysmem_pixel_format_;
  uint32_t color_space_count_;
  const VkSysmemColorSpaceFUCHSIA *color_spaces_;
};

struct ShaderResourceUsageAMD {

  using native_type = VkShaderResourceUsageAMD;

  ShaderResourceUsageAMD(uint32_t num_used_vgprs, uint32_t num_used_sgprs, uint32_t lds_size_per_local_work_group,
                         size_t lds_usage_size_in_bytes, size_t scratch_mem_usage_in_bytes)
    : num_used_vgprs_(num_used_vgprs), num_used_sgprs_(num_used_sgprs), lds_size_per_local_work_group_(lds_size_per_local_work_group),
      lds_usage_size_in_bytes_(lds_usage_size_in_bytes), scratch_mem_usage_in_bytes_(scratch_mem_usage_in_bytes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t num_used_vgprs_;
  uint32_t num_used_sgprs_;
  uint32_t lds_size_per_local_work_group_;
  size_t lds_usage_size_in_bytes_;
  size_t scratch_mem_usage_in_bytes_;
};

struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV {

  using native_type = VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV;

  PhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
    void *next, uint32_t max_graphics_shader_group_count, uint32_t max_indirect_sequence_count, uint32_t max_indirect_commands_token_count,
    uint32_t max_indirect_commands_stream_count, uint32_t max_indirect_commands_token_offset, uint32_t max_indirect_commands_stream_stride,
    uint32_t min_sequences_count_buffer_offset_alignment, uint32_t min_sequences_index_buffer_offset_alignment,
    uint32_t min_indirect_commands_buffer_offset_alignment)
    : next_(next), max_graphics_shader_group_count_(max_graphics_shader_group_count),
      max_indirect_sequence_count_(max_indirect_sequence_count), max_indirect_commands_token_count_(max_indirect_commands_token_count),
      max_indirect_commands_stream_count_(max_indirect_commands_stream_count),
      max_indirect_commands_token_offset_(max_indirect_commands_token_offset),
      max_indirect_commands_stream_stride_(max_indirect_commands_stream_stride),
      min_sequences_count_buffer_offset_alignment_(min_sequences_count_buffer_offset_alignment),
      min_sequences_index_buffer_offset_alignment_(min_sequences_index_buffer_offset_alignment),
      min_indirect_commands_buffer_offset_alignment_(min_indirect_commands_buffer_offset_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_graphics_shader_group_count_;
  uint32_t max_indirect_sequence_count_;
  uint32_t max_indirect_commands_token_count_;
  uint32_t max_indirect_commands_stream_count_;
  uint32_t max_indirect_commands_token_offset_;
  uint32_t max_indirect_commands_stream_stride_;
  uint32_t min_sequences_count_buffer_offset_alignment_;
  uint32_t min_sequences_index_buffer_offset_alignment_;
  uint32_t min_indirect_commands_buffer_offset_alignment_;
};

struct DrmFormatModifierProperties2EXT {

  using native_type = VkDrmFormatModifierProperties2EXT;

  DrmFormatModifierProperties2EXT(uint64_t drm_format_modifier, uint32_t drm_format_modifier_plane_count,
                                  VkFormatFeatureFlags2 drm_format_modifier_tiling_features)
    : drm_format_modifier_(drm_format_modifier), drm_format_modifier_plane_count_(drm_format_modifier_plane_count),
      drm_format_modifier_tiling_features_(drm_format_modifier_tiling_features) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint64_t drm_format_modifier_;
  uint32_t drm_format_modifier_plane_count_;
  VkFormatFeatureFlags2 drm_format_modifier_tiling_features_;
};

struct RenderPassTransformBeginInfoQCOM {

  using native_type = VkRenderPassTransformBeginInfoQCOM;

  RenderPassTransformBeginInfoQCOM(void *next, SurfaceTransformMaskBit transform) : next_(next), transform_(transform) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  SurfaceTransformMaskBit transform_;
};

struct PipelineColorBlendAdvancedStateCreateInfoEXT {

  using native_type = VkPipelineColorBlendAdvancedStateCreateInfoEXT;

  PipelineColorBlendAdvancedStateCreateInfoEXT(const void *next, VkBool32 src_premultiplied, VkBool32 dst_premultiplied,
                                               BlendOverlap blend_overlap)
    : next_(next), src_premultiplied_(src_premultiplied), dst_premultiplied_(dst_premultiplied), blend_overlap_(blend_overlap) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 src_premultiplied_;
  VkBool32 dst_premultiplied_;
  BlendOverlap blend_overlap_;
};

struct PhysicalDeviceClusterCullingShaderPropertiesHUAWEI {

  using native_type = VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI;

  PhysicalDeviceClusterCullingShaderPropertiesHUAWEI(void *next, uint32_t max_work_group_count[3], uint32_t max_work_group_size[3],
                                                     uint32_t max_output_cluster_count, VkDeviceSize indirect_buffer_offset_alignment)
    : next_(next), max_work_group_count_(max_work_group_count), max_work_group_size_(max_work_group_size),
      max_output_cluster_count_(max_output_cluster_count), indirect_buffer_offset_alignment_(indirect_buffer_offset_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_work_group_count[3] _;
  uint32_t max_work_group_size[3] _;
  uint32_t max_output_cluster_count_;
  VkDeviceSize indirect_buffer_offset_alignment_;
};

struct PipelineDepthStencilStateCreateInfo {

  using native_type = VkPipelineDepthStencilStateCreateInfo;

  PipelineDepthStencilStateCreateInfo(const void *next, VkPipelineDepthStencilStateCreateFlags flags, VkBool32 depth_test_enable,
                                      VkBool32 depth_write_enable, CompareOp depth_compare_op, VkBool32 depth_bounds_test_enable,
                                      VkBool32 stencil_test_enable, VkStencilOpState front, VkStencilOpState back, float min_depth_bounds,
                                      float max_depth_bounds)
    : next_(next), flags_(flags), depth_test_enable_(depth_test_enable), depth_write_enable_(depth_write_enable),
      depth_compare_op_(depth_compare_op), depth_bounds_test_enable_(depth_bounds_test_enable), stencil_test_enable_(stencil_test_enable),
      front_(front), back_(back), min_depth_bounds_(min_depth_bounds), max_depth_bounds_(max_depth_bounds) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineDepthStencilStateCreateFlags flags_;
  VkBool32 depth_test_enable_;
  VkBool32 depth_write_enable_;
  CompareOp depth_compare_op_;
  VkBool32 depth_bounds_test_enable_;
  VkBool32 stencil_test_enable_;
  VkStencilOpState front_;
  VkStencilOpState back_;
  float min_depth_bounds_;
  float max_depth_bounds_;
};

struct DescriptorGetInfoEXT {

  using native_type = VkDescriptorGetInfoEXT;

  DescriptorGetInfoEXT(const void *next, DescriptorType type, VkDescriptorDataEXT data) : next_(next), type_(type), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DescriptorType type_;
  VkDescriptorDataEXT data_;
};

struct FramebufferCreateInfo {

  using native_type = VkFramebufferCreateInfo;

  FramebufferCreateInfo(const void *next, VkFramebufferCreateFlags flags, VkRenderPass render_pass, uint32_t attachment_count,
                        const VkImageView *attachments, uint32_t width, uint32_t height, uint32_t layers)
    : next_(next), flags_(flags), render_pass_(render_pass), attachment_count_(attachment_count), attachments_(attachments), width_(width),
      height_(height), layers_(layers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFramebufferCreateFlags flags_;
  VkRenderPass render_pass_;
  uint32_t attachment_count_;
  const VkImageView *attachments_;
  uint32_t width_;
  uint32_t height_;
  uint32_t layers_;
};

struct DescriptorSetVariableDescriptorCountLayoutSupport {

  using native_type = VkDescriptorSetVariableDescriptorCountLayoutSupport;

  DescriptorSetVariableDescriptorCountLayoutSupport(void *next, uint32_t max_variable_descriptor_count)
    : next_(next), max_variable_descriptor_count_(max_variable_descriptor_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_variable_descriptor_count_;
};

struct MultiDrawInfoEXT {

  using native_type = VkMultiDrawInfoEXT;

  MultiDrawInfoEXT(uint32_t first_vertex, uint32_t vertex_count) : first_vertex_(first_vertex), vertex_count_(vertex_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t first_vertex_;
  uint32_t vertex_count_;
};

struct PhysicalDeviceMemoryBudgetPropertiesEXT {

  using native_type = VkPhysicalDeviceMemoryBudgetPropertiesEXT;

  PhysicalDeviceMemoryBudgetPropertiesEXT(void *next, VkDeviceSize heap_budget[VK_MAX_MEMORY_HEAPS],
                                          VkDeviceSize heap_usage[VK_MAX_MEMORY_HEAPS])
    : next_(next), heap_budget_(heap_budget), heap_usage_(heap_usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize heap_budget[VK_MAX_MEMORY_HEAPS] _;
  VkDeviceSize heap_usage[VK_MAX_MEMORY_HEAPS] _;
};

struct PhysicalDeviceGlobalPriorityQueryFeaturesKHR {

  using native_type = VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR;

  PhysicalDeviceGlobalPriorityQueryFeaturesKHR(void *next, VkBool32 global_priority_query)
    : next_(next), global_priority_query_(global_priority_query) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 global_priority_query_;
};

struct WaylandSurfaceCreateInfoKHR {

  using native_type = VkWaylandSurfaceCreateInfoKHR;

  WaylandSurfaceCreateInfoKHR(const void *next, VkWaylandSurfaceCreateFlagsKHR flags, struct wl_display *display,
                              struct wl_surface *surface)
    : next_(next), flags_(flags), display_(display), surface_(surface) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkWaylandSurfaceCreateFlagsKHR flags_;
  struct wl_display *display_;
  struct wl_surface *surface_;
};

struct DisplayPlaneCapabilitiesKHR {

  using native_type = VkDisplayPlaneCapabilitiesKHR;

  DisplayPlaneCapabilitiesKHR(VkDisplayPlaneAlphaFlagsKHR supported_alpha, VkOffset2D min_src_position, VkOffset2D max_src_position,
                              VkExtent2D min_src_extent, VkExtent2D max_src_extent, VkOffset2D min_dst_position,
                              VkOffset2D max_dst_position, VkExtent2D min_dst_extent, VkExtent2D max_dst_extent)
    : supported_alpha_(supported_alpha), min_src_position_(min_src_position), max_src_position_(max_src_position),
      min_src_extent_(min_src_extent), max_src_extent_(max_src_extent), min_dst_position_(min_dst_position),
      max_dst_position_(max_dst_position), min_dst_extent_(min_dst_extent), max_dst_extent_(max_dst_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDisplayPlaneAlphaFlagsKHR supported_alpha_;
  VkOffset2D min_src_position_;
  VkOffset2D max_src_position_;
  VkExtent2D min_src_extent_;
  VkExtent2D max_src_extent_;
  VkOffset2D min_dst_position_;
  VkOffset2D max_dst_position_;
  VkExtent2D min_dst_extent_;
  VkExtent2D max_dst_extent_;
};

struct PhysicalDeviceProtectedMemoryProperties {

  using native_type = VkPhysicalDeviceProtectedMemoryProperties;

  PhysicalDeviceProtectedMemoryProperties(void *next, VkBool32 protected_no_fault) : next_(next), protected_no_fault_(protected_no_fault) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 protected_no_fault_;
};

struct VideoEncodeCapabilitiesKHR {

  using native_type = VkVideoEncodeCapabilitiesKHR;

  VideoEncodeCapabilitiesKHR(void *next, VkVideoEncodeCapabilityFlagsKHR flags, VkVideoEncodeRateControlModeFlagsKHR rate_control_modes,
                             uint32_t max_rate_control_layers, uint64_t max_bitrate, uint32_t max_quality_levels,
                             VkExtent2D encode_input_picture_granularity, VkVideoEncodeFeedbackFlagsKHR supported_encode_feedback_flags)
    : next_(next), flags_(flags), rate_control_modes_(rate_control_modes), max_rate_control_layers_(max_rate_control_layers),
      max_bitrate_(max_bitrate), max_quality_levels_(max_quality_levels),
      encode_input_picture_granularity_(encode_input_picture_granularity),
      supported_encode_feedback_flags_(supported_encode_feedback_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoEncodeCapabilityFlagsKHR flags_;
  VkVideoEncodeRateControlModeFlagsKHR rate_control_modes_;
  uint32_t max_rate_control_layers_;
  uint64_t max_bitrate_;
  uint32_t max_quality_levels_;
  VkExtent2D encode_input_picture_granularity_;
  VkVideoEncodeFeedbackFlagsKHR supported_encode_feedback_flags_;
};

struct DrawIndirectCommand {

  using native_type = VkDrawIndirectCommand;

  DrawIndirectCommand(uint32_t vertex_count, uint32_t instance_count, uint32_t first_vertex, uint32_t first_instance)
    : vertex_count_(vertex_count), instance_count_(instance_count), first_vertex_(first_vertex), first_instance_(first_instance) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t vertex_count_;
  uint32_t instance_count_;
  uint32_t first_vertex_;
  uint32_t first_instance_;
};

struct PhysicalDeviceProtectedMemoryFeatures {

  using native_type = VkPhysicalDeviceProtectedMemoryFeatures;

  PhysicalDeviceProtectedMemoryFeatures(void *next, VkBool32 protected_memory) : next_(next), protected_memory_(protected_memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 protected_memory_;
};

struct VideoEncodeH265QualityLevelPropertiesKHR {

  using native_type = VkVideoEncodeH265QualityLevelPropertiesKHR;

  VideoEncodeH265QualityLevelPropertiesKHR(void *next, VkVideoEncodeH265RateControlFlagsKHR preferred_rate_control_flags,
                                           uint32_t preferred_gop_frame_count, uint32_t preferred_idr_period,
                                           uint32_t preferred_consecutive_bframe_count, uint32_t preferred_sub_layer_count,
                                           VkVideoEncodeH265QpKHR preferred_constant_qp, uint32_t preferred_max_l0reference_count,
                                           uint32_t preferred_max_l1reference_count)
    : next_(next), preferred_rate_control_flags_(preferred_rate_control_flags), preferred_gop_frame_count_(preferred_gop_frame_count),
      preferred_idr_period_(preferred_idr_period), preferred_consecutive_bframe_count_(preferred_consecutive_bframe_count),
      preferred_sub_layer_count_(preferred_sub_layer_count), preferred_constant_qp_(preferred_constant_qp),
      preferred_max_l0reference_count_(preferred_max_l0reference_count), preferred_max_l1reference_count_(preferred_max_l1reference_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoEncodeH265RateControlFlagsKHR preferred_rate_control_flags_;
  uint32_t preferred_gop_frame_count_;
  uint32_t preferred_idr_period_;
  uint32_t preferred_consecutive_bframe_count_;
  uint32_t preferred_sub_layer_count_;
  VkVideoEncodeH265QpKHR preferred_constant_qp_;
  uint32_t preferred_max_l0reference_count_;
  uint32_t preferred_max_l1reference_count_;
};

struct ExternalBufferProperties {

  using native_type = VkExternalBufferProperties;

  ExternalBufferProperties(void *next, VkExternalMemoryProperties external_memory_properties)
    : next_(next), external_memory_properties_(external_memory_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExternalMemoryProperties external_memory_properties_;
};

struct DrawIndexedIndirectCommand {

  using native_type = VkDrawIndexedIndirectCommand;

  DrawIndexedIndirectCommand(uint32_t index_count, uint32_t instance_count, uint32_t first_index, int32_t vertex_offset,
                             uint32_t first_instance)
    : index_count_(index_count), instance_count_(instance_count), first_index_(first_index), vertex_offset_(vertex_offset),
      first_instance_(first_instance) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t index_count_;
  uint32_t instance_count_;
  uint32_t first_index_;
  int32_t vertex_offset_;
  uint32_t first_instance_;
};

struct PhysicalDeviceExternalFenceInfo {

  using native_type = VkPhysicalDeviceExternalFenceInfo;

  PhysicalDeviceExternalFenceInfo(const void *next, ExternalFenceHandleTypeMaskBit handle_type) : next_(next), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalFenceHandleTypeMaskBit handle_type_;
};

struct DisplayModeParametersKHR {

  using native_type = VkDisplayModeParametersKHR;

  DisplayModeParametersKHR(VkExtent2D visible_region, uint32_t refresh_rate)
    : visible_region_(visible_region), refresh_rate_(refresh_rate) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkExtent2D visible_region_;
  uint32_t refresh_rate_;
};

struct DisplayPresentInfoKHR {

  using native_type = VkDisplayPresentInfoKHR;

  DisplayPresentInfoKHR(const void *next, VkRect2D src_rect, VkRect2D dst_rect, VkBool32 persistent)
    : next_(next), src_rect_(src_rect), dst_rect_(dst_rect), persistent_(persistent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkRect2D src_rect_;
  VkRect2D dst_rect_;
  VkBool32 persistent_;
};

struct DisplayModePropertiesKHR {

  using native_type = VkDisplayModePropertiesKHR;

  DisplayModePropertiesKHR(VkDisplayModeKHR display_mode, VkDisplayModeParametersKHR parameters)
    : display_mode_(display_mode), parameters_(parameters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDisplayModeKHR display_mode_;
  VkDisplayModeParametersKHR parameters_;
};

struct PhysicalDeviceImageProcessing2PropertiesQCOM {

  using native_type = VkPhysicalDeviceImageProcessing2PropertiesQCOM;

  PhysicalDeviceImageProcessing2PropertiesQCOM(void *next, VkExtent2D max_block_match_window)
    : next_(next), max_block_match_window_(max_block_match_window) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D max_block_match_window_;
};

struct PhysicalDeviceExclusiveScissorFeaturesNV {

  using native_type = VkPhysicalDeviceExclusiveScissorFeaturesNV;

  PhysicalDeviceExclusiveScissorFeaturesNV(void *next, VkBool32 exclusive_scissor) : next_(next), exclusive_scissor_(exclusive_scissor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 exclusive_scissor_;
};

struct ShaderModuleCreateInfo {

  using native_type = VkShaderModuleCreateInfo;

  ShaderModuleCreateInfo(const void *next, VkShaderModuleCreateFlags flags, size_t code_size, const uint32_t *code)
    : next_(next), flags_(flags), code_size_(code_size), code_(code) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkShaderModuleCreateFlags flags_;
  size_t code_size_;
  const uint32_t *code_;
};

struct SurfaceCapabilitiesKHR {

  using native_type = VkSurfaceCapabilitiesKHR;

  SurfaceCapabilitiesKHR(uint32_t min_image_count, uint32_t max_image_count, VkExtent2D current_extent, VkExtent2D min_image_extent,
                         VkExtent2D max_image_extent, uint32_t max_image_array_layers, VkSurfaceTransformFlagsKHR supported_transforms,
                         SurfaceTransformMaskBit current_transform, VkCompositeAlphaFlagsKHR supported_composite_alpha,
                         VkImageUsageFlags supported_usage_flags)
    : min_image_count_(min_image_count), max_image_count_(max_image_count), current_extent_(current_extent),
      min_image_extent_(min_image_extent), max_image_extent_(max_image_extent), max_image_array_layers_(max_image_array_layers),
      supported_transforms_(supported_transforms), current_transform_(current_transform),
      supported_composite_alpha_(supported_composite_alpha), supported_usage_flags_(supported_usage_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t min_image_count_;
  uint32_t max_image_count_;
  VkExtent2D current_extent_;
  VkExtent2D min_image_extent_;
  VkExtent2D max_image_extent_;
  uint32_t max_image_array_layers_;
  VkSurfaceTransformFlagsKHR supported_transforms_;
  SurfaceTransformMaskBit current_transform_;
  VkCompositeAlphaFlagsKHR supported_composite_alpha_;
  VkImageUsageFlags supported_usage_flags_;
};

struct LatencySubmissionPresentIdNV {

  using native_type = VkLatencySubmissionPresentIdNV;

  LatencySubmissionPresentIdNV(const void *next, uint64_t present_id) : next_(next), present_id_(present_id) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t present_id_;
};

struct VideoEncodeH265SessionParametersAddInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersAddInfoKHR;

  VideoEncodeH265SessionParametersAddInfoKHR(const void *next, uint32_t std_vpscount, const StdVideoH265VideoParameterSet *std_vpss,
                                             uint32_t std_spscount, const StdVideoH265SequenceParameterSet *std_spss, uint32_t std_ppscount,
                                             const StdVideoH265PictureParameterSet *std_ppss)
    : next_(next), std_vpscount_(std_vpscount), std_vpss_(std_vpss), std_spscount_(std_spscount), std_spss_(std_spss),
      std_ppscount_(std_ppscount), std_ppss_(std_ppss) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t std_vpscount_;
  const StdVideoH265VideoParameterSet *std_vpss_;
  uint32_t std_spscount_;
  const StdVideoH265SequenceParameterSet *std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH265PictureParameterSet *std_ppss_;
};

struct PhysicalDeviceGroupProperties {

  using native_type = VkPhysicalDeviceGroupProperties;

  PhysicalDeviceGroupProperties(void *next, uint32_t physical_device_count, VkPhysicalDevice physical_devices[VK_MAX_DEVICE_GROUP_SIZE],
                                VkBool32 subset_allocation)
    : next_(next), physical_device_count_(physical_device_count), physical_devices_(physical_devices),
      subset_allocation_(subset_allocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t physical_device_count_;
  VkPhysicalDevice physical_devices[VK_MAX_DEVICE_GROUP_SIZE] _;
  VkBool32 subset_allocation_;
};

struct BindImageMemoryDeviceGroupInfo {

  using native_type = VkBindImageMemoryDeviceGroupInfo;

  BindImageMemoryDeviceGroupInfo(const void *next, uint32_t device_index_count, const uint32_t *device_indices,
                                 uint32_t split_instance_bind_region_count, const VkRect2D *split_instance_bind_regions)
    : next_(next), device_index_count_(device_index_count), device_indices_(device_indices),
      split_instance_bind_region_count_(split_instance_bind_region_count), split_instance_bind_regions_(split_instance_bind_regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t device_index_count_;
  const uint32_t *device_indices_;
  uint32_t split_instance_bind_region_count_;
  const VkRect2D *split_instance_bind_regions_;
};

struct PipelineRenderingCreateInfo {

  using native_type = VkPipelineRenderingCreateInfo;

  PipelineRenderingCreateInfo(const void *next, uint32_t view_mask, uint32_t color_attachment_count, const Format *color_attachment_formats,
                              Format depth_attachment_format, Format stencil_attachment_format)
    : next_(next), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      color_attachment_formats_(color_attachment_formats), depth_attachment_format_(depth_attachment_format),
      stencil_attachment_format_(stencil_attachment_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const Format *color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
};

struct SubpassDescription {

  using native_type = VkSubpassDescription;

  SubpassDescription(VkSubpassDescriptionFlags flags, PipelineBindPoint pipeline_bind_point, uint32_t input_attachment_count,
                     const VkAttachmentReference *input_attachments, uint32_t color_attachment_count,
                     const VkAttachmentReference *color_attachments, const VkAttachmentReference *resolve_attachments,
                     const VkAttachmentReference *depth_stencil_attachment, uint32_t preserve_attachment_count,
                     const uint32_t *preserve_attachments)
    : flags_(flags), pipeline_bind_point_(pipeline_bind_point), input_attachment_count_(input_attachment_count),
      input_attachments_(input_attachments), color_attachment_count_(color_attachment_count), color_attachments_(color_attachments),
      resolve_attachments_(resolve_attachments), depth_stencil_attachment_(depth_stencil_attachment),
      preserve_attachment_count_(preserve_attachment_count), preserve_attachments_(preserve_attachments) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkSubpassDescriptionFlags flags_;
  PipelineBindPoint pipeline_bind_point_;
  uint32_t input_attachment_count_;
  const VkAttachmentReference *input_attachments_;
  uint32_t color_attachment_count_;
  const VkAttachmentReference *color_attachments_;
  const VkAttachmentReference *resolve_attachments_;
  const VkAttachmentReference *depth_stencil_attachment_;
  uint32_t preserve_attachment_count_;
  const uint32_t *preserve_attachments_;
};

struct BindBufferMemoryInfo {

  using native_type = VkBindBufferMemoryInfo;

  BindBufferMemoryInfo(const void *next, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memory_offset)
    : next_(next), buffer_(buffer), memory_(memory), memory_offset_(memory_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer buffer_;
  VkDeviceMemory memory_;
  VkDeviceSize memory_offset_;
};

struct SurfaceProtectedCapabilitiesKHR {

  using native_type = VkSurfaceProtectedCapabilitiesKHR;

  SurfaceProtectedCapabilitiesKHR(const void *next, VkBool32 supports_protected) : next_(next), supports_protected_(supports_protected) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 supports_protected_;
};

struct DeviceGroupBindSparseInfo {

  using native_type = VkDeviceGroupBindSparseInfo;

  DeviceGroupBindSparseInfo(const void *next, uint32_t resource_device_index, uint32_t memory_device_index)
    : next_(next), resource_device_index_(resource_device_index), memory_device_index_(memory_device_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t resource_device_index_;
  uint32_t memory_device_index_;
};

struct VideoCodingControlInfoKHR {

  using native_type = VkVideoCodingControlInfoKHR;

  VideoCodingControlInfoKHR(const void *next, VkVideoCodingControlFlagsKHR flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkVideoCodingControlFlagsKHR flags_;
};

struct SwapchainDisplayNativeHdrCreateInfoAMD {

  using native_type = VkSwapchainDisplayNativeHdrCreateInfoAMD;

  SwapchainDisplayNativeHdrCreateInfoAMD(const void *next, VkBool32 local_dimming_enable)
    : next_(next), local_dimming_enable_(local_dimming_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 local_dimming_enable_;
};

struct VideoEncodeH265QpKHR {

  using native_type = VkVideoEncodeH265QpKHR;

  VideoEncodeH265QpKHR(int32_t qp_i, int32_t qp_p, int32_t qp_b) : qp_i_(qp_i), qp_p_(qp_p), qp_b_(qp_b) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  int32_t qp_i_;
  int32_t qp_p_;
  int32_t qp_b_;
};

struct StridedDeviceAddressRegionKHR {

  using native_type = VkStridedDeviceAddressRegionKHR;

  StridedDeviceAddressRegionKHR(VkDeviceAddress device_address, VkDeviceSize stride, VkDeviceSize size)
    : device_address_(device_address), stride_(stride), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkDeviceAddress device_address_;
  VkDeviceSize stride_;
  VkDeviceSize size_;
};

struct BindImageMemorySwapchainInfoKHR {

  using native_type = VkBindImageMemorySwapchainInfoKHR;

  BindImageMemorySwapchainInfoKHR(const void *next, VkSwapchainKHR swapchain, uint32_t image_index)
    : next_(next), swapchain_(swapchain), image_index_(image_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSwapchainKHR swapchain_;
  uint32_t image_index_;
};

struct CuFunctionCreateInfoNVX {

  using native_type = VkCuFunctionCreateInfoNVX;

  CuFunctionCreateInfoNVX(const void *next, VkCuModuleNVX module, const char *name) : next_(next), module_(module), name_(name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkCuModuleNVX module_;
  const char *name_;
};

struct PhysicalDeviceMaintenance7PropertiesKHR {

  using native_type = VkPhysicalDeviceMaintenance7PropertiesKHR;

  PhysicalDeviceMaintenance7PropertiesKHR(void *next, VkBool32 robust_fragment_shading_rate_attachment_access,
                                          VkBool32 separate_depth_stencil_attachment_access,
                                          uint32_t max_descriptor_set_total_uniform_buffers_dynamic,
                                          uint32_t max_descriptor_set_total_storage_buffers_dynamic,
                                          uint32_t max_descriptor_set_total_buffers_dynamic,
                                          uint32_t max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic,
                                          uint32_t max_descriptor_set_update_after_bind_total_storage_buffers_dynamic,
                                          uint32_t max_descriptor_set_update_after_bind_total_buffers_dynamic)
    : next_(next), robust_fragment_shading_rate_attachment_access_(robust_fragment_shading_rate_attachment_access),
      separate_depth_stencil_attachment_access_(separate_depth_stencil_attachment_access),
      max_descriptor_set_total_uniform_buffers_dynamic_(max_descriptor_set_total_uniform_buffers_dynamic),
      max_descriptor_set_total_storage_buffers_dynamic_(max_descriptor_set_total_storage_buffers_dynamic),
      max_descriptor_set_total_buffers_dynamic_(max_descriptor_set_total_buffers_dynamic),
      max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic_(
        max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic),
      max_descriptor_set_update_after_bind_total_storage_buffers_dynamic_(
        max_descriptor_set_update_after_bind_total_storage_buffers_dynamic),
      max_descriptor_set_update_after_bind_total_buffers_dynamic_(max_descriptor_set_update_after_bind_total_buffers_dynamic) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 robust_fragment_shading_rate_attachment_access_;
  VkBool32 separate_depth_stencil_attachment_access_;
  uint32_t max_descriptor_set_total_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_total_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_total_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_total_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_total_buffers_dynamic_;
};

struct ImageCompressionControlEXT {

  using native_type = VkImageCompressionControlEXT;

  ImageCompressionControlEXT(const void *next, VkImageCompressionFlagsEXT flags, uint32_t compression_control_plane_count,
                             VkImageCompressionFixedRateFlagsEXT *fixed_rate_flags)
    : next_(next), flags_(flags), compression_control_plane_count_(compression_control_plane_count), fixed_rate_flags_(fixed_rate_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageCompressionFlagsEXT flags_;
  uint32_t compression_control_plane_count_;
  VkImageCompressionFixedRateFlagsEXT *fixed_rate_flags_;
};

struct PhysicalDeviceExtendedDynamicStateFeaturesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;

  PhysicalDeviceExtendedDynamicStateFeaturesEXT(void *next, VkBool32 extended_dynamic_state)
    : next_(next), extended_dynamic_state_(extended_dynamic_state) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 extended_dynamic_state_;
};

struct SwapchainCounterCreateInfoEXT {

  using native_type = VkSwapchainCounterCreateInfoEXT;

  SwapchainCounterCreateInfoEXT(const void *next, VkSurfaceCounterFlagsEXT surface_counters)
    : next_(next), surface_counters_(surface_counters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSurfaceCounterFlagsEXT surface_counters_;
};

struct PhysicalDeviceCopyMemoryIndirectFeaturesNV {

  using native_type = VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;

  PhysicalDeviceCopyMemoryIndirectFeaturesNV(void *next, VkBool32 indirect_copy) : next_(next), indirect_copy_(indirect_copy) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 indirect_copy_;
};

struct AcquireNextImageInfoKHR {

  using native_type = VkAcquireNextImageInfoKHR;

  AcquireNextImageInfoKHR(const void *next, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence,
                          uint32_t device_mask)
    : next_(next), swapchain_(swapchain), timeout_(timeout), semaphore_(semaphore), fence_(fence), device_mask_(device_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSwapchainKHR swapchain_;
  uint64_t timeout_;
  VkSemaphore semaphore_;
  VkFence fence_;
  uint32_t device_mask_;
};

struct GeometryAABBNV {

  using native_type = VkGeometryAABBNV;

  GeometryAABBNV(const void *next, VkBuffer aabb_data, uint32_t num_aabbs, uint32_t stride, VkDeviceSize offset)
    : next_(next), aabb_data_(aabb_data), num_aabbs_(num_aabbs), stride_(stride), offset_(offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer aabb_data_;
  uint32_t num_aabbs_;
  uint32_t stride_;
  VkDeviceSize offset_;
};

struct DeviceGroupSwapchainCreateInfoKHR {

  using native_type = VkDeviceGroupSwapchainCreateInfoKHR;

  DeviceGroupSwapchainCreateInfoKHR(const void *next, VkDeviceGroupPresentModeFlagsKHR modes) : next_(next), modes_(modes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceGroupPresentModeFlagsKHR modes_;
};

struct LatencySleepModeInfoNV {

  using native_type = VkLatencySleepModeInfoNV;

  LatencySleepModeInfoNV(const void *next, VkBool32 low_latency_mode, VkBool32 low_latency_boost, uint32_t minimum_interval_us)
    : next_(next), low_latency_mode_(low_latency_mode), low_latency_boost_(low_latency_boost), minimum_interval_us_(minimum_interval_us) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 low_latency_mode_;
  VkBool32 low_latency_boost_;
  uint32_t minimum_interval_us_;
};

struct DescriptorUpdateTemplateCreateInfo {

  using native_type = VkDescriptorUpdateTemplateCreateInfo;

  DescriptorUpdateTemplateCreateInfo(const void *next, VkDescriptorUpdateTemplateCreateFlags flags, uint32_t descriptor_update_entry_count,
                                     const VkDescriptorUpdateTemplateEntry *descriptor_update_entries,
                                     DescriptorUpdateTemplateType template_type, VkDescriptorSetLayout descriptor_set_layout,
                                     PipelineBindPoint pipeline_bind_point, VkPipelineLayout pipeline_layout, uint32_t set)
    : next_(next), flags_(flags), descriptor_update_entry_count_(descriptor_update_entry_count),
      descriptor_update_entries_(descriptor_update_entries), template_type_(template_type), descriptor_set_layout_(descriptor_set_layout),
      pipeline_bind_point_(pipeline_bind_point), pipeline_layout_(pipeline_layout), set_(set) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorUpdateTemplateCreateFlags flags_;
  uint32_t descriptor_update_entry_count_;
  const VkDescriptorUpdateTemplateEntry *descriptor_update_entries_;
  DescriptorUpdateTemplateType template_type_;
  VkDescriptorSetLayout descriptor_set_layout_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipelineLayout pipeline_layout_;
  uint32_t set_;
};

struct VideoSessionParametersUpdateInfoKHR {

  using native_type = VkVideoSessionParametersUpdateInfoKHR;

  VideoSessionParametersUpdateInfoKHR(const void *next, uint32_t update_sequence_count)
    : next_(next), update_sequence_count_(update_sequence_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t update_sequence_count_;
};

struct XYColorEXT {

  using native_type = VkXYColorEXT;

  XYColorEXT(float x, float y) : x_(x), y_(y) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float x_;
  float y_;
};

struct VideoDecodeH264DpbSlotInfoKHR {

  using native_type = VkVideoDecodeH264DpbSlotInfoKHR;

  VideoDecodeH264DpbSlotInfoKHR(const void *next, const StdVideoDecodeH264ReferenceInfo *std_reference_info)
    : next_(next), std_reference_info_(std_reference_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const StdVideoDecodeH264ReferenceInfo *std_reference_info_;
};

struct PhysicalDevicePresentIdFeaturesKHR {

  using native_type = VkPhysicalDevicePresentIdFeaturesKHR;

  PhysicalDevicePresentIdFeaturesKHR(void *next, VkBool32 present_id) : next_(next), present_id_(present_id) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 present_id_;
};

struct PhysicalDevicePipelineProtectedAccessFeaturesEXT {

  using native_type = VkPhysicalDevicePipelineProtectedAccessFeaturesEXT;

  PhysicalDevicePipelineProtectedAccessFeaturesEXT(void *next, VkBool32 pipeline_protected_access)
    : next_(next), pipeline_protected_access_(pipeline_protected_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pipeline_protected_access_;
};

struct PhysicalDeviceExternalImageFormatInfo {

  using native_type = VkPhysicalDeviceExternalImageFormatInfo;

  PhysicalDeviceExternalImageFormatInfo(const void *next, ExternalMemoryHandleTypeMaskBit handle_type)
    : next_(next), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct PhysicalDevicePresentWaitFeaturesKHR {

  using native_type = VkPhysicalDevicePresentWaitFeaturesKHR;

  PhysicalDevicePresentWaitFeaturesKHR(void *next, VkBool32 present_wait) : next_(next), present_wait_(present_wait) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 present_wait_;
};

struct RefreshCycleDurationGOOGLE {

  using native_type = VkRefreshCycleDurationGOOGLE;

  RefreshCycleDurationGOOGLE(uint64_t refresh_duration) : refresh_duration_(refresh_duration) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint64_t refresh_duration_;
};

struct PresentTimesInfoGOOGLE {

  using native_type = VkPresentTimesInfoGOOGLE;

  PresentTimesInfoGOOGLE(const void *next, uint32_t swapchain_count, const VkPresentTimeGOOGLE *times)
    : next_(next), swapchain_count_(swapchain_count), times_(times) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t swapchain_count_;
  const VkPresentTimeGOOGLE *times_;
};

struct ExternalMemoryImageCreateInfo {

  using native_type = VkExternalMemoryImageCreateInfo;

  ExternalMemoryImageCreateInfo(const void *next, VkExternalMemoryHandleTypeFlags handle_types) : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalMemoryHandleTypeFlags handle_types_;
};

struct MacOSSurfaceCreateInfoMVK {

  using native_type = VkMacOSSurfaceCreateInfoMVK;

  MacOSSurfaceCreateInfoMVK(const void *next, VkMacOSSurfaceCreateFlagsMVK flags, const void *view)
    : next_(next), flags_(flags), view_(view) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMacOSSurfaceCreateFlagsMVK flags_;
  const void *view_;
};

struct PipelineShaderStageNodeCreateInfoAMDX {

  using native_type = VkPipelineShaderStageNodeCreateInfoAMDX;

  PipelineShaderStageNodeCreateInfoAMDX(const void *next, const char *name, uint32_t index) : next_(next), name_(name), index_(index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const char *name_;
  uint32_t index_;
};

struct LayerSettingEXT {

  using native_type = VkLayerSettingEXT;

  LayerSettingEXT(const char *layer_name, const char *setting_name, LayerSettingType type, uint32_t value_count, const void *values)
    : layer_name_(layer_name), setting_name_(setting_name), type_(type), value_count_(value_count), values_(values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  const char *layer_name_;
  const char *setting_name_;
  LayerSettingType type_;
  uint32_t value_count_;
  const void *values_;
};

struct FenceGetSciSyncInfoNV {

  using native_type = VkFenceGetSciSyncInfoNV;

  FenceGetSciSyncInfoNV(const void *next, VkFence fence, ExternalFenceHandleTypeMaskBit handle_type)
    : next_(next), fence_(fence), handle_type_(handle_type) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFence fence_;
  ExternalFenceHandleTypeMaskBit handle_type_;
};

struct ViewportWScalingNV {

  using native_type = VkViewportWScalingNV;

  ViewportWScalingNV(float xcoeff, float ycoeff) : xcoeff_(xcoeff), ycoeff_(ycoeff) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float xcoeff_;
  float ycoeff_;
};

struct SubpassDependency2 {

  using native_type = VkSubpassDependency2;

  SubpassDependency2(const void *next, uint32_t src_subpass, uint32_t dst_subpass, VkPipelineStageFlags src_stage_mask,
                     VkPipelineStageFlags dst_stage_mask, VkAccessFlags src_access_mask, VkAccessFlags dst_access_mask,
                     VkDependencyFlags dependency_flags, int32_t view_offset)
    : next_(next), src_subpass_(src_subpass), dst_subpass_(dst_subpass), src_stage_mask_(src_stage_mask), dst_stage_mask_(dst_stage_mask),
      src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), dependency_flags_(dependency_flags), view_offset_(view_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t src_subpass_;
  uint32_t dst_subpass_;
  VkPipelineStageFlags src_stage_mask_;
  VkPipelineStageFlags dst_stage_mask_;
  VkAccessFlags src_access_mask_;
  VkAccessFlags dst_access_mask_;
  VkDependencyFlags dependency_flags_;
  int32_t view_offset_;
};

struct PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM {

  using native_type = VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;

  PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(void *next, VkBool32 multiview_per_view_render_areas)
    : next_(next), multiview_per_view_render_areas_(multiview_per_view_render_areas) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 multiview_per_view_render_areas_;
};

struct DeviceFaultAddressInfoEXT {

  using native_type = VkDeviceFaultAddressInfoEXT;

  DeviceFaultAddressInfoEXT(DeviceFaultAddressType address_type, VkDeviceAddress reported_address, VkDeviceSize address_precision)
    : address_type_(address_type), reported_address_(reported_address), address_precision_(address_precision) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  DeviceFaultAddressType address_type_;
  VkDeviceAddress reported_address_;
  VkDeviceSize address_precision_;
};

struct PipelineIndirectDeviceAddressInfoNV {

  using native_type = VkPipelineIndirectDeviceAddressInfoNV;

  PipelineIndirectDeviceAddressInfoNV(const void *next, PipelineBindPoint pipeline_bind_point, VkPipeline pipeline)
    : next_(next), pipeline_bind_point_(pipeline_bind_point), pipeline_(pipeline) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipeline pipeline_;
};

struct PipelineViewportWScalingStateCreateInfoNV {

  using native_type = VkPipelineViewportWScalingStateCreateInfoNV;

  PipelineViewportWScalingStateCreateInfoNV(const void *next, VkBool32 viewport_wscaling_enable, uint32_t viewport_count,
                                            const VkViewportWScalingNV *viewport_wscalings)
    : next_(next), viewport_wscaling_enable_(viewport_wscaling_enable), viewport_count_(viewport_count),
      viewport_wscalings_(viewport_wscalings) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 viewport_wscaling_enable_;
  uint32_t viewport_count_;
  const VkViewportWScalingNV *viewport_wscalings_;
};

struct PipelineViewportSwizzleStateCreateInfoNV {

  using native_type = VkPipelineViewportSwizzleStateCreateInfoNV;

  PipelineViewportSwizzleStateCreateInfoNV(const void *next, VkPipelineViewportSwizzleStateCreateFlagsNV flags, uint32_t viewport_count,
                                           const VkViewportSwizzleNV *viewport_swizzles)
    : next_(next), flags_(flags), viewport_count_(viewport_count), viewport_swizzles_(viewport_swizzles) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineViewportSwizzleStateCreateFlagsNV flags_;
  uint32_t viewport_count_;
  const VkViewportSwizzleNV *viewport_swizzles_;
};

struct VideoEncodeH265GopRemainingFrameInfoKHR {

  using native_type = VkVideoEncodeH265GopRemainingFrameInfoKHR;

  VideoEncodeH265GopRemainingFrameInfoKHR(const void *next, VkBool32 use_gop_remaining_frames, uint32_t gop_remaining_i,
                                          uint32_t gop_remaining_p, uint32_t gop_remaining_b)
    : next_(next), use_gop_remaining_frames_(use_gop_remaining_frames), gop_remaining_i_(gop_remaining_i),
      gop_remaining_p_(gop_remaining_p), gop_remaining_b_(gop_remaining_b) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 use_gop_remaining_frames_;
  uint32_t gop_remaining_i_;
  uint32_t gop_remaining_p_;
  uint32_t gop_remaining_b_;
};

struct PhysicalDeviceDiscardRectanglePropertiesEXT {

  using native_type = VkPhysicalDeviceDiscardRectanglePropertiesEXT;

  PhysicalDeviceDiscardRectanglePropertiesEXT(void *next, uint32_t max_discard_rectangles)
    : next_(next), max_discard_rectangles_(max_discard_rectangles) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_discard_rectangles_;
};

struct PhysicalDevice8BitStorageFeatures {

  using native_type = VkPhysicalDevice8BitStorageFeatures;

  PhysicalDevice8BitStorageFeatures(void *next, VkBool32 storage_buffer8bit_access, VkBool32 uniform_and_storage_buffer8bit_access,
                                    VkBool32 storage_push_constant8)
    : next_(next), storage_buffer8bit_access_(storage_buffer8bit_access),
      uniform_and_storage_buffer8bit_access_(uniform_and_storage_buffer8bit_access), storage_push_constant8_(storage_push_constant8) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 storage_buffer8bit_access_;
  VkBool32 uniform_and_storage_buffer8bit_access_;
  VkBool32 storage_push_constant8_;
};

struct PhysicalDeviceVulkanSC10Properties {

  using native_type = VkPhysicalDeviceVulkanSC10Properties;

  PhysicalDeviceVulkanSC10Properties(void *next, VkBool32 device_no_dynamic_host_allocations, VkBool32 device_destroy_frees_memory,
                                     VkBool32 command_pool_multiple_command_buffers_recording, VkBool32 command_pool_reset_command_buffer,
                                     VkBool32 command_buffer_simultaneous_use,
                                     VkBool32 secondary_command_buffer_null_or_imageless_framebuffer,
                                     VkBool32 recycle_descriptor_set_memory, VkBool32 recycle_pipeline_memory,
                                     uint32_t max_render_pass_subpasses, uint32_t max_render_pass_dependencies,
                                     uint32_t max_subpass_input_attachments, uint32_t max_subpass_preserve_attachments,
                                     uint32_t max_framebuffer_attachments, uint32_t max_descriptor_set_layout_bindings,
                                     uint32_t max_query_fault_count, uint32_t max_callback_fault_count,
                                     uint32_t max_command_pool_command_buffers, VkDeviceSize max_command_buffer_size)
    : next_(next), device_no_dynamic_host_allocations_(device_no_dynamic_host_allocations),
      device_destroy_frees_memory_(device_destroy_frees_memory),
      command_pool_multiple_command_buffers_recording_(command_pool_multiple_command_buffers_recording),
      command_pool_reset_command_buffer_(command_pool_reset_command_buffer),
      command_buffer_simultaneous_use_(command_buffer_simultaneous_use),
      secondary_command_buffer_null_or_imageless_framebuffer_(secondary_command_buffer_null_or_imageless_framebuffer),
      recycle_descriptor_set_memory_(recycle_descriptor_set_memory), recycle_pipeline_memory_(recycle_pipeline_memory),
      max_render_pass_subpasses_(max_render_pass_subpasses), max_render_pass_dependencies_(max_render_pass_dependencies),
      max_subpass_input_attachments_(max_subpass_input_attachments), max_subpass_preserve_attachments_(max_subpass_preserve_attachments),
      max_framebuffer_attachments_(max_framebuffer_attachments), max_descriptor_set_layout_bindings_(max_descriptor_set_layout_bindings),
      max_query_fault_count_(max_query_fault_count), max_callback_fault_count_(max_callback_fault_count),
      max_command_pool_command_buffers_(max_command_pool_command_buffers), max_command_buffer_size_(max_command_buffer_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 device_no_dynamic_host_allocations_;
  VkBool32 device_destroy_frees_memory_;
  VkBool32 command_pool_multiple_command_buffers_recording_;
  VkBool32 command_pool_reset_command_buffer_;
  VkBool32 command_buffer_simultaneous_use_;
  VkBool32 secondary_command_buffer_null_or_imageless_framebuffer_;
  VkBool32 recycle_descriptor_set_memory_;
  VkBool32 recycle_pipeline_memory_;
  uint32_t max_render_pass_subpasses_;
  uint32_t max_render_pass_dependencies_;
  uint32_t max_subpass_input_attachments_;
  uint32_t max_subpass_preserve_attachments_;
  uint32_t max_framebuffer_attachments_;
  uint32_t max_descriptor_set_layout_bindings_;
  uint32_t max_query_fault_count_;
  uint32_t max_callback_fault_count_;
  uint32_t max_command_pool_command_buffers_;
  VkDeviceSize max_command_buffer_size_;
};

struct PipelineDiscardRectangleStateCreateInfoEXT {

  using native_type = VkPipelineDiscardRectangleStateCreateInfoEXT;

  PipelineDiscardRectangleStateCreateInfoEXT(const void *next, VkPipelineDiscardRectangleStateCreateFlagsEXT flags,
                                             DiscardRectangleMode discard_rectangle_mode, uint32_t discard_rectangle_count,
                                             const VkRect2D *discard_rectangles)
    : next_(next), flags_(flags), discard_rectangle_mode_(discard_rectangle_mode), discard_rectangle_count_(discard_rectangle_count),
      discard_rectangles_(discard_rectangles) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineDiscardRectangleStateCreateFlagsEXT flags_;
  DiscardRectangleMode discard_rectangle_mode_;
  uint32_t discard_rectangle_count_;
  const VkRect2D *discard_rectangles_;
};

struct ImagePlaneMemoryRequirementsInfo {

  using native_type = VkImagePlaneMemoryRequirementsInfo;

  ImagePlaneMemoryRequirementsInfo(const void *next, ImageAspectMaskBit plane_aspect) : next_(next), plane_aspect_(plane_aspect) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ImageAspectMaskBit plane_aspect_;
};

struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {

  using native_type = VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;

  PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(void *next, VkBool32 per_view_position_all_components)
    : next_(next), per_view_position_all_components_(per_view_position_all_components) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 per_view_position_all_components_;
};

struct InputAttachmentAspectReference {

  using native_type = VkInputAttachmentAspectReference;

  InputAttachmentAspectReference(uint32_t subpass, uint32_t input_attachment_index, VkImageAspectFlags aspect_mask)
    : subpass_(subpass), input_attachment_index_(input_attachment_index), aspect_mask_(aspect_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t subpass_;
  uint32_t input_attachment_index_;
  VkImageAspectFlags aspect_mask_;
};

struct RenderPassInputAttachmentAspectCreateInfo {

  using native_type = VkRenderPassInputAttachmentAspectCreateInfo;

  RenderPassInputAttachmentAspectCreateInfo(const void *next, uint32_t aspect_reference_count,
                                            const VkInputAttachmentAspectReference *aspect_references)
    : next_(next), aspect_reference_count_(aspect_reference_count), aspect_references_(aspect_references) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t aspect_reference_count_;
  const VkInputAttachmentAspectReference *aspect_references_;
};

struct DisplayProperties2KHR {

  using native_type = VkDisplayProperties2KHR;

  DisplayProperties2KHR(void *next, VkDisplayPropertiesKHR display_properties) : next_(next), display_properties_(display_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDisplayPropertiesKHR display_properties_;
};

struct DisplayPlaneProperties2KHR {

  using native_type = VkDisplayPlaneProperties2KHR;

  DisplayPlaneProperties2KHR(void *next, VkDisplayPlanePropertiesKHR display_plane_properties)
    : next_(next), display_plane_properties_(display_plane_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDisplayPlanePropertiesKHR display_plane_properties_;
};

struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures {

  using native_type = VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;

  PhysicalDeviceShaderDemoteToHelperInvocationFeatures(void *next, VkBool32 shader_demote_to_helper_invocation)
    : next_(next), shader_demote_to_helper_invocation_(shader_demote_to_helper_invocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_demote_to_helper_invocation_;
};

struct PhysicalDeviceShaderDrawParametersFeatures {

  using native_type = VkPhysicalDeviceShaderDrawParametersFeatures;

  PhysicalDeviceShaderDrawParametersFeatures(void *next, VkBool32 shader_draw_parameters)
    : next_(next), shader_draw_parameters_(shader_draw_parameters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_draw_parameters_;
};

struct DisplayPlaneCapabilities2KHR {

  using native_type = VkDisplayPlaneCapabilities2KHR;

  DisplayPlaneCapabilities2KHR(void *next, VkDisplayPlaneCapabilitiesKHR capabilities) : next_(next), capabilities_(capabilities) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDisplayPlaneCapabilitiesKHR capabilities_;
};

struct SharedPresentSurfaceCapabilitiesKHR {

  using native_type = VkSharedPresentSurfaceCapabilitiesKHR;

  SharedPresentSurfaceCapabilitiesKHR(void *next, VkImageUsageFlags shared_present_supported_usage_flags)
    : next_(next), shared_present_supported_usage_flags_(shared_present_supported_usage_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkImageUsageFlags shared_present_supported_usage_flags_;
};

struct PhysicalDevice16BitStorageFeatures {

  using native_type = VkPhysicalDevice16BitStorageFeatures;

  PhysicalDevice16BitStorageFeatures(void *next, VkBool32 storage_buffer16bit_access, VkBool32 uniform_and_storage_buffer16bit_access,
                                     VkBool32 storage_push_constant16, VkBool32 storage_input_output16)
    : next_(next), storage_buffer16bit_access_(storage_buffer16bit_access),
      uniform_and_storage_buffer16bit_access_(uniform_and_storage_buffer16bit_access), storage_push_constant16_(storage_push_constant16),
      storage_input_output16_(storage_input_output16) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 storage_buffer16bit_access_;
  VkBool32 uniform_and_storage_buffer16bit_access_;
  VkBool32 storage_push_constant16_;
  VkBool32 storage_input_output16_;
};

struct PipelineCacheHeaderVersionOne {

  using native_type = VkPipelineCacheHeaderVersionOne;

  PipelineCacheHeaderVersionOne(uint32_t header_size, PipelineCacheHeaderVersion header_version, uint32_t vendor_id, uint32_t device_id,
                                uint8_t pipeline_cache_uuid[VK_UUID_SIZE])
    : header_size_(header_size), header_version_(header_version), vendor_id_(vendor_id), device_id_(device_id),
      pipeline_cache_uuid_(pipeline_cache_uuid) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t header_size_;
  PipelineCacheHeaderVersion header_version_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  uint8_t pipeline_cache_uuid[VK_UUID_SIZE] _;
};

struct WriteDescriptorSetInlineUniformBlock {

  using native_type = VkWriteDescriptorSetInlineUniformBlock;

  WriteDescriptorSetInlineUniformBlock(const void *next, uint32_t data_size, const void *data)
    : next_(next), data_size_(data_size), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t data_size_;
  const void *data_;
};

struct PipelineCacheStageValidationIndexEntry {

  using native_type = VkPipelineCacheStageValidationIndexEntry;

  PipelineCacheStageValidationIndexEntry(uint64_t code_size, uint64_t code_offset) : code_size_(code_size), code_offset_(code_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint64_t code_size_;
  uint64_t code_offset_;
};

struct DeviceGroupPresentCapabilitiesKHR {

  using native_type = VkDeviceGroupPresentCapabilitiesKHR;

  DeviceGroupPresentCapabilitiesKHR(void *next, uint32_t present_mask[VK_MAX_DEVICE_GROUP_SIZE], VkDeviceGroupPresentModeFlagsKHR modes)
    : next_(next), present_mask_(present_mask), modes_(modes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t present_mask[VK_MAX_DEVICE_GROUP_SIZE] _;
  VkDeviceGroupPresentModeFlagsKHR modes_;
};

struct PhysicalDeviceSubgroupProperties {

  using native_type = VkPhysicalDeviceSubgroupProperties;

  PhysicalDeviceSubgroupProperties(void *next, uint32_t subgroup_size, VkShaderStageFlags supported_stages,
                                   VkSubgroupFeatureFlags supported_operations, VkBool32 quad_operations_in_all_stages)
    : next_(next), subgroup_size_(subgroup_size), supported_stages_(supported_stages), supported_operations_(supported_operations),
      quad_operations_in_all_stages_(quad_operations_in_all_stages) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t subgroup_size_;
  VkShaderStageFlags supported_stages_;
  VkSubgroupFeatureFlags supported_operations_;
  VkBool32 quad_operations_in_all_stages_;
};

struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures {

  using native_type = VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;

  PhysicalDeviceShaderSubgroupExtendedTypesFeatures(void *next, VkBool32 shader_subgroup_extended_types)
    : next_(next), shader_subgroup_extended_types_(shader_subgroup_extended_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_subgroup_extended_types_;
};

struct RenderingAreaInfoKHR {

  using native_type = VkRenderingAreaInfoKHR;

  RenderingAreaInfoKHR(const void *next, uint32_t view_mask, uint32_t color_attachment_count, const Format *color_attachment_formats,
                       Format depth_attachment_format, Format stencil_attachment_format)
    : next_(next), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      color_attachment_formats_(color_attachment_formats), depth_attachment_format_(depth_attachment_format),
      stencil_attachment_format_(stencil_attachment_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const Format *color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
};

struct BufferMemoryRequirementsInfo2 {

  using native_type = VkBufferMemoryRequirementsInfo2;

  BufferMemoryRequirementsInfo2(const void *next, VkBuffer buffer) : next_(next), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer buffer_;
};

struct ImageSparseMemoryRequirementsInfo2 {

  using native_type = VkImageSparseMemoryRequirementsInfo2;

  ImageSparseMemoryRequirementsInfo2(const void *next, VkImage image) : next_(next), image_(image) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
};

struct PhysicalDeviceDescriptorPoolOverallocationFeaturesNV {

  using native_type = VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;

  PhysicalDeviceDescriptorPoolOverallocationFeaturesNV(void *next, VkBool32 descriptor_pool_overallocation)
    : next_(next), descriptor_pool_overallocation_(descriptor_pool_overallocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 descriptor_pool_overallocation_;
};

struct MemoryRequirements2 {

  using native_type = VkMemoryRequirements2;

  MemoryRequirements2(void *next, VkMemoryRequirements memory_requirements) : next_(next), memory_requirements_(memory_requirements) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkMemoryRequirements memory_requirements_;
};

struct MemoryDedicatedRequirements {

  using native_type = VkMemoryDedicatedRequirements;

  MemoryDedicatedRequirements(void *next, VkBool32 prefers_dedicated_allocation, VkBool32 requires_dedicated_allocation)
    : next_(next), prefers_dedicated_allocation_(prefers_dedicated_allocation),
      requires_dedicated_allocation_(requires_dedicated_allocation) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 prefers_dedicated_allocation_;
  VkBool32 requires_dedicated_allocation_;
};

struct CopyAccelerationStructureInfoKHR {

  using native_type = VkCopyAccelerationStructureInfoKHR;

  CopyAccelerationStructureInfoKHR(const void *next, VkAccelerationStructureKHR src, VkAccelerationStructureKHR dst,
                                   CopyAccelerationStructureMode mode)
    : next_(next), src_(src), dst_(dst), mode_(mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAccelerationStructureKHR src_;
  VkAccelerationStructureKHR dst_;
  CopyAccelerationStructureMode mode_;
};

struct PipelineCoverageToColorStateCreateInfoNV {

  using native_type = VkPipelineCoverageToColorStateCreateInfoNV;

  PipelineCoverageToColorStateCreateInfoNV(const void *next, VkPipelineCoverageToColorStateCreateFlagsNV flags,
                                           VkBool32 coverage_to_color_enable, uint32_t coverage_to_color_location)
    : next_(next), flags_(flags), coverage_to_color_enable_(coverage_to_color_enable),
      coverage_to_color_location_(coverage_to_color_location) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCoverageToColorStateCreateFlagsNV flags_;
  VkBool32 coverage_to_color_enable_;
  uint32_t coverage_to_color_location_;
};

struct DisplayModeCreateInfoKHR {

  using native_type = VkDisplayModeCreateInfoKHR;

  DisplayModeCreateInfoKHR(const void *next, VkDisplayModeCreateFlagsKHR flags, VkDisplayModeParametersKHR parameters)
    : next_(next), flags_(flags), parameters_(parameters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDisplayModeCreateFlagsKHR flags_;
  VkDisplayModeParametersKHR parameters_;
};

struct MemoryDedicatedAllocateInfo {

  using native_type = VkMemoryDedicatedAllocateInfo;

  MemoryDedicatedAllocateInfo(const void *next, VkImage image, VkBuffer buffer) : next_(next), image_(image), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage image_;
  VkBuffer buffer_;
};

struct DescriptorUpdateTemplateEntry {

  using native_type = VkDescriptorUpdateTemplateEntry;

  DescriptorUpdateTemplateEntry(uint32_t dst_binding, uint32_t dst_array_element, uint32_t descriptor_count, DescriptorType descriptor_type,
                                size_t offset, size_t stride)
    : dst_binding_(dst_binding), dst_array_element_(dst_array_element), descriptor_count_(descriptor_count),
      descriptor_type_(descriptor_type), offset_(offset), stride_(stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t dst_binding_;
  uint32_t dst_array_element_;
  uint32_t descriptor_count_;
  DescriptorType descriptor_type_;
  size_t offset_;
  size_t stride_;
};

struct ImageViewSlicedCreateInfoEXT {

  using native_type = VkImageViewSlicedCreateInfoEXT;

  ImageViewSlicedCreateInfoEXT(const void *next, uint32_t slice_offset, uint32_t slice_count)
    : next_(next), slice_offset_(slice_offset), slice_count_(slice_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t slice_offset_;
  uint32_t slice_count_;
};

struct AccelerationStructureMemoryRequirementsInfoNV {

  using native_type = VkAccelerationStructureMemoryRequirementsInfoNV;

  AccelerationStructureMemoryRequirementsInfoNV(const void *next, AccelerationStructureMemoryRequirementsType type,
                                                VkAccelerationStructureNV acceleration_structure)
    : next_(next), type_(type), acceleration_structure_(acceleration_structure) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  AccelerationStructureMemoryRequirementsType type_;
  VkAccelerationStructureNV acceleration_structure_;
};

struct PhysicalDeviceVulkan11Features {

  using native_type = VkPhysicalDeviceVulkan11Features;

  PhysicalDeviceVulkan11Features(void *next, VkBool32 storage_buffer16bit_access, VkBool32 uniform_and_storage_buffer16bit_access,
                                 VkBool32 storage_push_constant16, VkBool32 storage_input_output16, VkBool32 multiview,
                                 VkBool32 multiview_geometry_shader, VkBool32 multiview_tessellation_shader,
                                 VkBool32 variable_pointers_storage_buffer, VkBool32 variable_pointers, VkBool32 protected_memory,
                                 VkBool32 sampler_ycbcr_conversion, VkBool32 shader_draw_parameters)
    : next_(next), storage_buffer16bit_access_(storage_buffer16bit_access),
      uniform_and_storage_buffer16bit_access_(uniform_and_storage_buffer16bit_access), storage_push_constant16_(storage_push_constant16),
      storage_input_output16_(storage_input_output16), multiview_(multiview), multiview_geometry_shader_(multiview_geometry_shader),
      multiview_tessellation_shader_(multiview_tessellation_shader), variable_pointers_storage_buffer_(variable_pointers_storage_buffer),
      variable_pointers_(variable_pointers), protected_memory_(protected_memory), sampler_ycbcr_conversion_(sampler_ycbcr_conversion),
      shader_draw_parameters_(shader_draw_parameters) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 storage_buffer16bit_access_;
  VkBool32 uniform_and_storage_buffer16bit_access_;
  VkBool32 storage_push_constant16_;
  VkBool32 storage_input_output16_;
  VkBool32 multiview_;
  VkBool32 multiview_geometry_shader_;
  VkBool32 multiview_tessellation_shader_;
  VkBool32 variable_pointers_storage_buffer_;
  VkBool32 variable_pointers_;
  VkBool32 protected_memory_;
  VkBool32 sampler_ycbcr_conversion_;
  VkBool32 shader_draw_parameters_;
};

struct BufferDeviceAddressInfo {

  using native_type = VkBufferDeviceAddressInfo;

  BufferDeviceAddressInfo(const void *next, VkBuffer buffer) : next_(next), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer buffer_;
};

struct PipelineTessellationDomainOriginStateCreateInfo {

  using native_type = VkPipelineTessellationDomainOriginStateCreateInfo;

  PipelineTessellationDomainOriginStateCreateInfo(const void *next, TessellationDomainOrigin domain_origin)
    : next_(next), domain_origin_(domain_origin) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  TessellationDomainOrigin domain_origin_;
};

struct FrameBoundaryEXT {

  using native_type = VkFrameBoundaryEXT;

  FrameBoundaryEXT(const void *next, VkFrameBoundaryFlagsEXT flags, uint64_t frame_id, uint32_t image_count, const VkImage *images,
                   uint32_t buffer_count, const VkBuffer *buffers, uint64_t tag_name, size_t tag_size, const void *tag)
    : next_(next), flags_(flags), frame_id_(frame_id), image_count_(image_count), images_(images), buffer_count_(buffer_count),
      buffers_(buffers), tag_name_(tag_name), tag_size_(tag_size), tag_(tag) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkFrameBoundaryFlagsEXT flags_;
  uint64_t frame_id_;
  uint32_t image_count_;
  const VkImage *images_;
  uint32_t buffer_count_;
  const VkBuffer *buffers_;
  uint64_t tag_name_;
  size_t tag_size_;
  const void *tag_;
};

struct PhysicalDeviceDepthClampZeroOneFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthClampZeroOneFeaturesEXT;

  PhysicalDeviceDepthClampZeroOneFeaturesEXT(void *next, VkBool32 depth_clamp_zero_one)
    : next_(next), depth_clamp_zero_one_(depth_clamp_zero_one) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 depth_clamp_zero_one_;
};

struct SamplerYcbcrConversionCreateInfo {

  using native_type = VkSamplerYcbcrConversionCreateInfo;

  SamplerYcbcrConversionCreateInfo(const void *next, Format format, SamplerYcbcrModelConversion ycbcr_model, SamplerYcbcrRange ycbcr_range,
                                   VkComponentMapping components, ChromaLocation x_chroma_offset, ChromaLocation y_chroma_offset,
                                   Filter chroma_filter, VkBool32 force_explicit_reconstruction)
    : next_(next), format_(format), ycbcr_model_(ycbcr_model), ycbcr_range_(ycbcr_range), components_(components),
      x_chroma_offset_(x_chroma_offset), y_chroma_offset_(y_chroma_offset), chroma_filter_(chroma_filter),
      force_explicit_reconstruction_(force_explicit_reconstruction) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Format format_;
  SamplerYcbcrModelConversion ycbcr_model_;
  SamplerYcbcrRange ycbcr_range_;
  VkComponentMapping components_;
  ChromaLocation x_chroma_offset_;
  ChromaLocation y_chroma_offset_;
  Filter chroma_filter_;
  VkBool32 force_explicit_reconstruction_;
};

struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT {

  using native_type = VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;

  PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(void *next, VkBool32 primitive_topology_list_restart,
                                                        VkBool32 primitive_topology_patch_list_restart)
    : next_(next), primitive_topology_list_restart_(primitive_topology_list_restart),
      primitive_topology_patch_list_restart_(primitive_topology_patch_list_restart) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 primitive_topology_list_restart_;
  VkBool32 primitive_topology_patch_list_restart_;
};

struct BindImagePlaneMemoryInfo {

  using native_type = VkBindImagePlaneMemoryInfo;

  BindImagePlaneMemoryInfo(const void *next, ImageAspectMaskBit plane_aspect) : next_(next), plane_aspect_(plane_aspect) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ImageAspectMaskBit plane_aspect_;
};

struct TextureLODGatherFormatPropertiesAMD {

  using native_type = VkTextureLODGatherFormatPropertiesAMD;

  TextureLODGatherFormatPropertiesAMD(void *next, VkBool32 supports_texture_gather_lodbias_amd)
    : next_(next), supports_texture_gather_lodbias_amd_(supports_texture_gather_lodbias_amd) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 supports_texture_gather_lodbias_amd_;
};

struct ProtectedSubmitInfo {

  using native_type = VkProtectedSubmitInfo;

  ProtectedSubmitInfo(const void *next, VkBool32 protected_submit) : next_(next), protected_submit_(protected_submit) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 protected_submit_;
};

struct TransformMatrixKHR {

  using native_type = VkTransformMatrixKHR;

  TransformMatrixKHR(float matrix[3][4]) : matrix_(matrix) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  float matrix[3][4] _;
};

struct DeviceQueueInfo2 {

  using native_type = VkDeviceQueueInfo2;

  DeviceQueueInfo2(const void *next, VkDeviceQueueCreateFlags flags, uint32_t queue_family_index, uint32_t queue_index)
    : next_(next), flags_(flags), queue_family_index_(queue_family_index), queue_index_(queue_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceQueueCreateFlags flags_;
  uint32_t queue_family_index_;
  uint32_t queue_index_;
};

struct PhysicalDeviceMapMemoryPlacedFeaturesEXT {

  using native_type = VkPhysicalDeviceMapMemoryPlacedFeaturesEXT;

  PhysicalDeviceMapMemoryPlacedFeaturesEXT(void *next, VkBool32 memory_map_placed, VkBool32 memory_map_range_placed,
                                           VkBool32 memory_unmap_reserve)
    : next_(next), memory_map_placed_(memory_map_placed), memory_map_range_placed_(memory_map_range_placed),
      memory_unmap_reserve_(memory_unmap_reserve) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 memory_map_placed_;
  VkBool32 memory_map_range_placed_;
  VkBool32 memory_unmap_reserve_;
};

struct PerformanceCounterDescriptionKHR {

  using native_type = VkPerformanceCounterDescriptionKHR;

  PerformanceCounterDescriptionKHR(void *next, VkPerformanceCounterDescriptionFlagsKHR flags, char name[VK_MAX_DESCRIPTION_SIZE],
                                   char category[VK_MAX_DESCRIPTION_SIZE], char description[VK_MAX_DESCRIPTION_SIZE])
    : next_(next), flags_(flags), name_(name), category_(category), description_(description) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPerformanceCounterDescriptionFlagsKHR flags_;
  char name[VK_MAX_DESCRIPTION_SIZE] _;
  char category[VK_MAX_DESCRIPTION_SIZE] _;
  char description[VK_MAX_DESCRIPTION_SIZE] _;
};

struct ValidationCacheCreateInfoEXT {

  using native_type = VkValidationCacheCreateInfoEXT;

  ValidationCacheCreateInfoEXT(const void *next, VkValidationCacheCreateFlagsEXT flags, size_t initial_data_size, const void *initial_data)
    : next_(next), flags_(flags), initial_data_size_(initial_data_size), initial_data_(initial_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkValidationCacheCreateFlagsEXT flags_;
  size_t initial_data_size_;
  const void *initial_data_;
};

struct RenderPassSampleLocationsBeginInfoEXT {

  using native_type = VkRenderPassSampleLocationsBeginInfoEXT;

  RenderPassSampleLocationsBeginInfoEXT(const void *next, uint32_t attachment_initial_sample_locations_count,
                                        const VkAttachmentSampleLocationsEXT *attachment_initial_sample_locations,
                                        uint32_t post_subpass_sample_locations_count,
                                        const VkSubpassSampleLocationsEXT *post_subpass_sample_locations)
    : next_(next), attachment_initial_sample_locations_count_(attachment_initial_sample_locations_count),
      attachment_initial_sample_locations_(attachment_initial_sample_locations),
      post_subpass_sample_locations_count_(post_subpass_sample_locations_count),
      post_subpass_sample_locations_(post_subpass_sample_locations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t attachment_initial_sample_locations_count_;
  const VkAttachmentSampleLocationsEXT *attachment_initial_sample_locations_;
  uint32_t post_subpass_sample_locations_count_;
  const VkSubpassSampleLocationsEXT *post_subpass_sample_locations_;
};

struct PhysicalDevicePresentBarrierFeaturesNV {

  using native_type = VkPhysicalDevicePresentBarrierFeaturesNV;

  PhysicalDevicePresentBarrierFeaturesNV(void *next, VkBool32 present_barrier) : next_(next), present_barrier_(present_barrier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 present_barrier_;
};

struct PhysicalDeviceSamplerFilterMinmaxProperties {

  using native_type = VkPhysicalDeviceSamplerFilterMinmaxProperties;

  PhysicalDeviceSamplerFilterMinmaxProperties(void *next, VkBool32 filter_minmax_single_component_formats,
                                              VkBool32 filter_minmax_image_component_mapping)
    : next_(next), filter_minmax_single_component_formats_(filter_minmax_single_component_formats),
      filter_minmax_image_component_mapping_(filter_minmax_image_component_mapping) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 filter_minmax_single_component_formats_;
  VkBool32 filter_minmax_image_component_mapping_;
};

struct SampleLocationsInfoEXT {

  using native_type = VkSampleLocationsInfoEXT;

  SampleLocationsInfoEXT(const void *next, SampleCountMaskBit sample_locations_per_pixel, VkExtent2D sample_location_grid_size,
                         uint32_t sample_locations_count, const VkSampleLocationEXT *sample_locations)
    : next_(next), sample_locations_per_pixel_(sample_locations_per_pixel), sample_location_grid_size_(sample_location_grid_size),
      sample_locations_count_(sample_locations_count), sample_locations_(sample_locations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  SampleCountMaskBit sample_locations_per_pixel_;
  VkExtent2D sample_location_grid_size_;
  uint32_t sample_locations_count_;
  const VkSampleLocationEXT *sample_locations_;
};

struct QueueFamilyGlobalPriorityPropertiesKHR {

  using native_type = VkQueueFamilyGlobalPriorityPropertiesKHR;

  QueueFamilyGlobalPriorityPropertiesKHR(void *next, uint32_t priority_count,
                                         QueueGlobalPriority priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_KHR])
    : next_(next), priority_count_(priority_count), priorities_(priorities) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t priority_count_;
  QueueGlobalPriority priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_KHR] _;
};

struct SubpassSampleLocationsEXT {

  using native_type = VkSubpassSampleLocationsEXT;

  SubpassSampleLocationsEXT(uint32_t subpass_index, VkSampleLocationsInfoEXT sample_locations_info)
    : subpass_index_(subpass_index), sample_locations_info_(sample_locations_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t subpass_index_;
  VkSampleLocationsInfoEXT sample_locations_info_;
};

struct RenderPassAttachmentBeginInfo {

  using native_type = VkRenderPassAttachmentBeginInfo;

  RenderPassAttachmentBeginInfo(const void *next, uint32_t attachment_count, const VkImageView *attachments)
    : next_(next), attachment_count_(attachment_count), attachments_(attachments) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t attachment_count_;
  const VkImageView *attachments_;
};

struct VideoEncodeH265RateControlLayerInfoKHR {

  using native_type = VkVideoEncodeH265RateControlLayerInfoKHR;

  VideoEncodeH265RateControlLayerInfoKHR(const void *next, VkBool32 use_min_qp, VkVideoEncodeH265QpKHR min_qp, VkBool32 use_max_qp,
                                         VkVideoEncodeH265QpKHR max_qp, VkBool32 use_max_frame_size,
                                         VkVideoEncodeH265FrameSizeKHR max_frame_size)
    : next_(next), use_min_qp_(use_min_qp), min_qp_(min_qp), use_max_qp_(use_max_qp), max_qp_(max_qp),
      use_max_frame_size_(use_max_frame_size), max_frame_size_(max_frame_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 use_min_qp_;
  VkVideoEncodeH265QpKHR min_qp_;
  VkBool32 use_max_qp_;
  VkVideoEncodeH265QpKHR max_qp_;
  VkBool32 use_max_frame_size_;
  VkVideoEncodeH265FrameSizeKHR max_frame_size_;
};

struct PhysicalDeviceSampleLocationsPropertiesEXT {

  using native_type = VkPhysicalDeviceSampleLocationsPropertiesEXT;

  PhysicalDeviceSampleLocationsPropertiesEXT(void *next, VkSampleCountFlags sample_location_sample_counts,
                                             VkExtent2D max_sample_location_grid_size, float sample_location_coordinate_range[2],
                                             uint32_t sample_location_sub_pixel_bits, VkBool32 variable_sample_locations)
    : next_(next), sample_location_sample_counts_(sample_location_sample_counts),
      max_sample_location_grid_size_(max_sample_location_grid_size), sample_location_coordinate_range_(sample_location_coordinate_range),
      sample_location_sub_pixel_bits_(sample_location_sub_pixel_bits), variable_sample_locations_(variable_sample_locations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkSampleCountFlags sample_location_sample_counts_;
  VkExtent2D max_sample_location_grid_size_;
  float sample_location_coordinate_range[2] _;
  uint32_t sample_location_sub_pixel_bits_;
  VkBool32 variable_sample_locations_;
};

struct ExternalImageFormatPropertiesNV {

  using native_type = VkExternalImageFormatPropertiesNV;

  ExternalImageFormatPropertiesNV(VkImageFormatProperties image_format_properties, VkExternalMemoryFeatureFlagsNV external_memory_features,
                                  VkExternalMemoryHandleTypeFlagsNV export_from_imported_handle_types,
                                  VkExternalMemoryHandleTypeFlagsNV compatible_handle_types)
    : image_format_properties_(image_format_properties), external_memory_features_(external_memory_features),
      export_from_imported_handle_types_(export_from_imported_handle_types), compatible_handle_types_(compatible_handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkImageFormatProperties image_format_properties_;
  VkExternalMemoryFeatureFlagsNV external_memory_features_;
  VkExternalMemoryHandleTypeFlagsNV export_from_imported_handle_types_;
  VkExternalMemoryHandleTypeFlagsNV compatible_handle_types_;
};

struct PhysicalDeviceDepthStencilResolveProperties {

  using native_type = VkPhysicalDeviceDepthStencilResolveProperties;

  PhysicalDeviceDepthStencilResolveProperties(void *next, VkResolveModeFlags supported_depth_resolve_modes,
                                              VkResolveModeFlags supported_stencil_resolve_modes, VkBool32 independent_resolve_none,
                                              VkBool32 independent_resolve)
    : next_(next), supported_depth_resolve_modes_(supported_depth_resolve_modes),
      supported_stencil_resolve_modes_(supported_stencil_resolve_modes), independent_resolve_none_(independent_resolve_none),
      independent_resolve_(independent_resolve) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkResolveModeFlags supported_depth_resolve_modes_;
  VkResolveModeFlags supported_stencil_resolve_modes_;
  VkBool32 independent_resolve_none_;
  VkBool32 independent_resolve_;
};

struct PhysicalDeviceSparseImageFormatInfo2 {

  using native_type = VkPhysicalDeviceSparseImageFormatInfo2;

  PhysicalDeviceSparseImageFormatInfo2(const void *next, Format format, ImageType type, SampleCountMaskBit samples, VkImageUsageFlags usage,
                                       ImageTiling tiling)
    : next_(next), format_(format), type_(type), samples_(samples), usage_(usage), tiling_(tiling) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  Format format_;
  ImageType type_;
  SampleCountMaskBit samples_;
  VkImageUsageFlags usage_;
  ImageTiling tiling_;
};

struct SamplerReductionModeCreateInfo {

  using native_type = VkSamplerReductionModeCreateInfo;

  SamplerReductionModeCreateInfo(const void *next, SamplerReductionMode reduction_mode) : next_(next), reduction_mode_(reduction_mode) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  SamplerReductionMode reduction_mode_;
};

struct SetDescriptorBufferOffsetsInfoEXT {

  using native_type = VkSetDescriptorBufferOffsetsInfoEXT;

  SetDescriptorBufferOffsetsInfoEXT(const void *next, VkShaderStageFlags stage_flags, VkPipelineLayout layout, uint32_t first_set,
                                    uint32_t set_count, const uint32_t *buffer_indices, const VkDeviceSize *offsets)
    : next_(next), stage_flags_(stage_flags), layout_(layout), first_set_(first_set), set_count_(set_count),
      buffer_indices_(buffer_indices), offsets_(offsets) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkShaderStageFlags stage_flags_;
  VkPipelineLayout layout_;
  uint32_t first_set_;
  uint32_t set_count_;
  const uint32_t *buffer_indices_;
  const VkDeviceSize *offsets_;
};

struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT {

  using native_type = VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;

  PhysicalDeviceBlendOperationAdvancedPropertiesEXT(void *next, uint32_t advanced_blend_max_color_attachments,
                                                    VkBool32 advanced_blend_independent_blend,
                                                    VkBool32 advanced_blend_non_premultiplied_src_color,
                                                    VkBool32 advanced_blend_non_premultiplied_dst_color,
                                                    VkBool32 advanced_blend_correlated_overlap, VkBool32 advanced_blend_all_operations)
    : next_(next), advanced_blend_max_color_attachments_(advanced_blend_max_color_attachments),
      advanced_blend_independent_blend_(advanced_blend_independent_blend),
      advanced_blend_non_premultiplied_src_color_(advanced_blend_non_premultiplied_src_color),
      advanced_blend_non_premultiplied_dst_color_(advanced_blend_non_premultiplied_dst_color),
      advanced_blend_correlated_overlap_(advanced_blend_correlated_overlap), advanced_blend_all_operations_(advanced_blend_all_operations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t advanced_blend_max_color_attachments_;
  VkBool32 advanced_blend_independent_blend_;
  VkBool32 advanced_blend_non_premultiplied_src_color_;
  VkBool32 advanced_blend_non_premultiplied_dst_color_;
  VkBool32 advanced_blend_correlated_overlap_;
  VkBool32 advanced_blend_all_operations_;
};

struct ImageFormatListCreateInfo {

  using native_type = VkImageFormatListCreateInfo;

  ImageFormatListCreateInfo(const void *next, uint32_t view_format_count, const Format *view_formats)
    : next_(next), view_format_count_(view_format_count), view_formats_(view_formats) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t view_format_count_;
  const Format *view_formats_;
};

struct ComputePipelineCreateInfo {

  using native_type = VkComputePipelineCreateInfo;

  ComputePipelineCreateInfo(const void *next, VkPipelineCreateFlags flags, VkPipelineShaderStageCreateInfo stage, VkPipelineLayout layout,
                            VkPipeline base_pipeline_handle, int32_t base_pipeline_index)
    : next_(next), flags_(flags), stage_(stage), layout_(layout), base_pipeline_handle_(base_pipeline_handle),
      base_pipeline_index_(base_pipeline_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreateFlags flags_;
  VkPipelineShaderStageCreateInfo stage_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct PhysicalDeviceInlineUniformBlockFeatures {

  using native_type = VkPhysicalDeviceInlineUniformBlockFeatures;

  PhysicalDeviceInlineUniformBlockFeatures(void *next, VkBool32 inline_uniform_block,
                                           VkBool32 descriptor_binding_inline_uniform_block_update_after_bind)
    : next_(next), inline_uniform_block_(inline_uniform_block),
      descriptor_binding_inline_uniform_block_update_after_bind_(descriptor_binding_inline_uniform_block_update_after_bind) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 inline_uniform_block_;
  VkBool32 descriptor_binding_inline_uniform_block_update_after_bind_;
};

struct PipelineSampleLocationsStateCreateInfoEXT {

  using native_type = VkPipelineSampleLocationsStateCreateInfoEXT;

  PipelineSampleLocationsStateCreateInfoEXT(const void *next, VkBool32 sample_locations_enable,
                                            VkSampleLocationsInfoEXT sample_locations_info)
    : next_(next), sample_locations_enable_(sample_locations_enable), sample_locations_info_(sample_locations_info) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 sample_locations_enable_;
  VkSampleLocationsInfoEXT sample_locations_info_;
};

struct PhysicalDeviceInlineUniformBlockProperties {

  using native_type = VkPhysicalDeviceInlineUniformBlockProperties;

  PhysicalDeviceInlineUniformBlockProperties(void *next, uint32_t max_inline_uniform_block_size,
                                             uint32_t max_per_stage_descriptor_inline_uniform_blocks,
                                             uint32_t max_per_stage_descriptor_update_after_bind_inline_uniform_blocks,
                                             uint32_t max_descriptor_set_inline_uniform_blocks,
                                             uint32_t max_descriptor_set_update_after_bind_inline_uniform_blocks)
    : next_(next), max_inline_uniform_block_size_(max_inline_uniform_block_size),
      max_per_stage_descriptor_inline_uniform_blocks_(max_per_stage_descriptor_inline_uniform_blocks),
      max_per_stage_descriptor_update_after_bind_inline_uniform_blocks_(max_per_stage_descriptor_update_after_bind_inline_uniform_blocks),
      max_descriptor_set_inline_uniform_blocks_(max_descriptor_set_inline_uniform_blocks),
      max_descriptor_set_update_after_bind_inline_uniform_blocks_(max_descriptor_set_update_after_bind_inline_uniform_blocks) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_inline_uniform_block_size_;
  uint32_t max_per_stage_descriptor_inline_uniform_blocks_;
  uint32_t max_per_stage_descriptor_update_after_bind_inline_uniform_blocks_;
  uint32_t max_descriptor_set_inline_uniform_blocks_;
  uint32_t max_descriptor_set_update_after_bind_inline_uniform_blocks_;
};

struct DescriptorPoolInlineUniformBlockCreateInfo {

  using native_type = VkDescriptorPoolInlineUniformBlockCreateInfo;

  DescriptorPoolInlineUniformBlockCreateInfo(const void *next, uint32_t max_inline_uniform_block_bindings)
    : next_(next), max_inline_uniform_block_bindings_(max_inline_uniform_block_bindings) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t max_inline_uniform_block_bindings_;
};

struct PhysicalDeviceMaintenance3Properties {

  using native_type = VkPhysicalDeviceMaintenance3Properties;

  PhysicalDeviceMaintenance3Properties(void *next, uint32_t max_per_set_descriptors, VkDeviceSize max_memory_allocation_size)
    : next_(next), max_per_set_descriptors_(max_per_set_descriptors), max_memory_allocation_size_(max_memory_allocation_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_per_set_descriptors_;
  VkDeviceSize max_memory_allocation_size_;
};

struct PhysicalDeviceMaintenance4Features {

  using native_type = VkPhysicalDeviceMaintenance4Features;

  PhysicalDeviceMaintenance4Features(void *next, VkBool32 maintenance4) : next_(next), maintenance4_(maintenance4) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 maintenance4_;
};

struct PhysicalDeviceMaintenance4Properties {

  using native_type = VkPhysicalDeviceMaintenance4Properties;

  PhysicalDeviceMaintenance4Properties(void *next, VkDeviceSize max_buffer_size) : next_(next), max_buffer_size_(max_buffer_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize max_buffer_size_;
};

struct PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;

  PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(void *next, VkBool32 shader_maximal_reconvergence)
    : next_(next), shader_maximal_reconvergence_(shader_maximal_reconvergence) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_maximal_reconvergence_;
};

struct VideoSessionCreateInfoKHR {

  using native_type = VkVideoSessionCreateInfoKHR;

  VideoSessionCreateInfoKHR(const void *next, uint32_t queue_family_index, VkVideoSessionCreateFlagsKHR flags,
                            const VkVideoProfileInfoKHR *video_profile, Format picture_format, VkExtent2D max_coded_extent,
                            Format reference_picture_format, uint32_t max_dpb_slots, uint32_t max_active_reference_pictures,
                            const VkExtensionProperties *std_header_version)
    : next_(next), queue_family_index_(queue_family_index), flags_(flags), video_profile_(video_profile), picture_format_(picture_format),
      max_coded_extent_(max_coded_extent), reference_picture_format_(reference_picture_format), max_dpb_slots_(max_dpb_slots),
      max_active_reference_pictures_(max_active_reference_pictures), std_header_version_(std_header_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t queue_family_index_;
  VkVideoSessionCreateFlagsKHR flags_;
  const VkVideoProfileInfoKHR *video_profile_;
  Format picture_format_;
  VkExtent2D max_coded_extent_;
  Format reference_picture_format_;
  uint32_t max_dpb_slots_;
  uint32_t max_active_reference_pictures_;
  const VkExtensionProperties *std_header_version_;
};

struct PhysicalDeviceMaintenance6PropertiesKHR {

  using native_type = VkPhysicalDeviceMaintenance6PropertiesKHR;

  PhysicalDeviceMaintenance6PropertiesKHR(void *next, VkBool32 block_texel_view_compatible_multiple_layers,
                                          uint32_t max_combined_image_sampler_descriptor_count,
                                          VkBool32 fragment_shading_rate_clamp_combiner_inputs)
    : next_(next), block_texel_view_compatible_multiple_layers_(block_texel_view_compatible_multiple_layers),
      max_combined_image_sampler_descriptor_count_(max_combined_image_sampler_descriptor_count),
      fragment_shading_rate_clamp_combiner_inputs_(fragment_shading_rate_clamp_combiner_inputs) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 block_texel_view_compatible_multiple_layers_;
  uint32_t max_combined_image_sampler_descriptor_count_;
  VkBool32 fragment_shading_rate_clamp_combiner_inputs_;
};

struct PhysicalDeviceMaintenance7FeaturesKHR {

  using native_type = VkPhysicalDeviceMaintenance7FeaturesKHR;

  PhysicalDeviceMaintenance7FeaturesKHR(void *next, VkBool32 maintenance7) : next_(next), maintenance7_(maintenance7) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 maintenance7_;
};

struct PhysicalDeviceLayeredApiPropertiesListKHR {

  using native_type = VkPhysicalDeviceLayeredApiPropertiesListKHR;

  PhysicalDeviceLayeredApiPropertiesListKHR(void *next, uint32_t layered_api_count, VkPhysicalDeviceLayeredApiPropertiesKHR *layered_apis)
    : next_(next), layered_api_count_(layered_api_count), layered_apis_(layered_apis) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t layered_api_count_;
  VkPhysicalDeviceLayeredApiPropertiesKHR *layered_apis_;
};

struct IndirectCommandsLayoutCreateInfoNV {

  using native_type = VkIndirectCommandsLayoutCreateInfoNV;

  IndirectCommandsLayoutCreateInfoNV(const void *next, VkIndirectCommandsLayoutUsageFlagsNV flags, PipelineBindPoint pipeline_bind_point,
                                     uint32_t token_count, const VkIndirectCommandsLayoutTokenNV *tokens, uint32_t stream_count,
                                     const uint32_t *stream_strides)
    : next_(next), flags_(flags), pipeline_bind_point_(pipeline_bind_point), token_count_(token_count), tokens_(tokens),
      stream_count_(stream_count), stream_strides_(stream_strides) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkIndirectCommandsLayoutUsageFlagsNV flags_;
  PipelineBindPoint pipeline_bind_point_;
  uint32_t token_count_;
  const VkIndirectCommandsLayoutTokenNV *tokens_;
  uint32_t stream_count_;
  const uint32_t *stream_strides_;
};

struct PhysicalDeviceLayeredApiPropertiesKHR {

  using native_type = VkPhysicalDeviceLayeredApiPropertiesKHR;

  PhysicalDeviceLayeredApiPropertiesKHR(void *next, uint32_t vendor_id, uint32_t device_id, PhysicalDeviceLayeredApi layered_api,
                                        char device_name[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE])
    : next_(next), vendor_id_(vendor_id), device_id_(device_id), layered_api_(layered_api), device_name_(device_name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  PhysicalDeviceLayeredApi layered_api_;
  char device_name[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE] _;
};

struct AccelerationStructureSRTMotionInstanceNV {

  using native_type = VkAccelerationStructureSRTMotionInstanceNV;

  AccelerationStructureSRTMotionInstanceNV(VkSRTDataNV transform_t0, VkSRTDataNV transform_t1, uint32_t instance_custom_index : 24,
                                           uint32_t mask : 8, uint32_t instance_shader_binding_table_record_offset : 24,
                                           VkGeometryInstanceFlagsKHR flags : 8, uint64_t acceleration_structure_reference)
    : transform_t0_(transform_t0), transform_t1_(transform_t1), instance_custom_index_(instance_custom_index), mask_(mask),
      instance_shader_binding_table_record_offset_(instance_shader_binding_table_record_offset), flags_(flags),
      acceleration_structure_reference_(acceleration_structure_reference) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkSRTDataNV transform_t0_;
  VkSRTDataNV transform_t1_;
  uint32_t instance_custom_index : 24_;
  uint32_t mask : 8_;
  uint32_t instance_shader_binding_table_record_offset : 24_;
  VkGeometryInstanceFlagsKHR flags : 8_;
  uint64_t acceleration_structure_reference_;
};

struct XcbSurfaceCreateInfoKHR {

  using native_type = VkXcbSurfaceCreateInfoKHR;

  XcbSurfaceCreateInfoKHR(const void *next, VkXcbSurfaceCreateFlagsKHR flags, xcb_connection_t *connection, xcb_window_t window)
    : next_(next), flags_(flags), connection_(connection), window_(window) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkXcbSurfaceCreateFlagsKHR flags_;
  xcb_connection_t *connection_;
  xcb_window_t window_;
};

struct PhysicalDeviceLayeredApiVulkanPropertiesKHR {

  using native_type = VkPhysicalDeviceLayeredApiVulkanPropertiesKHR;

  PhysicalDeviceLayeredApiVulkanPropertiesKHR(void *next, VkPhysicalDeviceProperties2 properties) : next_(next), properties_(properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPhysicalDeviceProperties2 properties_;
};

struct PhysicalDeviceImageAlignmentControlFeaturesMESA {

  using native_type = VkPhysicalDeviceImageAlignmentControlFeaturesMESA;

  PhysicalDeviceImageAlignmentControlFeaturesMESA(void *next, VkBool32 image_alignment_control)
    : next_(next), image_alignment_control_(image_alignment_control) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 image_alignment_control_;
};

struct PhysicalDeviceFloatControlsProperties {

  using native_type = VkPhysicalDeviceFloatControlsProperties;

  PhysicalDeviceFloatControlsProperties(
    void *next, ShaderFloatControlsIndependence denorm_behavior_independence, ShaderFloatControlsIndependence rounding_mode_independence,
    VkBool32 shader_signed_zero_inf_nan_preserve_float16, VkBool32 shader_signed_zero_inf_nan_preserve_float32,
    VkBool32 shader_signed_zero_inf_nan_preserve_float64, VkBool32 shader_denorm_preserve_float16, VkBool32 shader_denorm_preserve_float32,
    VkBool32 shader_denorm_preserve_float64, VkBool32 shader_denorm_flush_to_zero_float16, VkBool32 shader_denorm_flush_to_zero_float32,
    VkBool32 shader_denorm_flush_to_zero_float64, VkBool32 shader_rounding_mode_rtefloat16, VkBool32 shader_rounding_mode_rtefloat32,
    VkBool32 shader_rounding_mode_rtefloat64, VkBool32 shader_rounding_mode_rtzfloat16, VkBool32 shader_rounding_mode_rtzfloat32,
    VkBool32 shader_rounding_mode_rtzfloat64)
    : next_(next), denorm_behavior_independence_(denorm_behavior_independence), rounding_mode_independence_(rounding_mode_independence),
      shader_signed_zero_inf_nan_preserve_float16_(shader_signed_zero_inf_nan_preserve_float16),
      shader_signed_zero_inf_nan_preserve_float32_(shader_signed_zero_inf_nan_preserve_float32),
      shader_signed_zero_inf_nan_preserve_float64_(shader_signed_zero_inf_nan_preserve_float64),
      shader_denorm_preserve_float16_(shader_denorm_preserve_float16), shader_denorm_preserve_float32_(shader_denorm_preserve_float32),
      shader_denorm_preserve_float64_(shader_denorm_preserve_float64),
      shader_denorm_flush_to_zero_float16_(shader_denorm_flush_to_zero_float16),
      shader_denorm_flush_to_zero_float32_(shader_denorm_flush_to_zero_float32),
      shader_denorm_flush_to_zero_float64_(shader_denorm_flush_to_zero_float64),
      shader_rounding_mode_rtefloat16_(shader_rounding_mode_rtefloat16), shader_rounding_mode_rtefloat32_(shader_rounding_mode_rtefloat32),
      shader_rounding_mode_rtefloat64_(shader_rounding_mode_rtefloat64), shader_rounding_mode_rtzfloat16_(shader_rounding_mode_rtzfloat16),
      shader_rounding_mode_rtzfloat32_(shader_rounding_mode_rtzfloat32), shader_rounding_mode_rtzfloat64_(shader_rounding_mode_rtzfloat64) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  ShaderFloatControlsIndependence denorm_behavior_independence_;
  ShaderFloatControlsIndependence rounding_mode_independence_;
  VkBool32 shader_signed_zero_inf_nan_preserve_float16_;
  VkBool32 shader_signed_zero_inf_nan_preserve_float32_;
  VkBool32 shader_signed_zero_inf_nan_preserve_float64_;
  VkBool32 shader_denorm_preserve_float16_;
  VkBool32 shader_denorm_preserve_float32_;
  VkBool32 shader_denorm_preserve_float64_;
  VkBool32 shader_denorm_flush_to_zero_float16_;
  VkBool32 shader_denorm_flush_to_zero_float32_;
  VkBool32 shader_denorm_flush_to_zero_float64_;
  VkBool32 shader_rounding_mode_rtefloat16_;
  VkBool32 shader_rounding_mode_rtefloat32_;
  VkBool32 shader_rounding_mode_rtefloat64_;
  VkBool32 shader_rounding_mode_rtzfloat16_;
  VkBool32 shader_rounding_mode_rtzfloat32_;
  VkBool32 shader_rounding_mode_rtzfloat64_;
};

struct GetLatencyMarkerInfoNV {

  using native_type = VkGetLatencyMarkerInfoNV;

  GetLatencyMarkerInfoNV(const void *next, uint32_t timing_count, VkLatencyTimingsFrameReportNV *timings)
    : next_(next), timing_count_(timing_count), timings_(timings) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t timing_count_;
  VkLatencyTimingsFrameReportNV *timings_;
};

struct NativeBufferUsage2ANDROID {

  using native_type = VkNativeBufferUsage2ANDROID;

  NativeBufferUsage2ANDROID(uint64_t consumer, uint64_t producer) : consumer_(consumer), producer_(producer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint64_t consumer_;
  uint64_t producer_;
};

struct PhysicalDevicePresentationPropertiesANDROID {

  using native_type = VkPhysicalDevicePresentationPropertiesANDROID;

  PhysicalDevicePresentationPropertiesANDROID(const void *next, VkBool32 shared_image) : next_(next), shared_image_(shared_image) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 shared_image_;
};

struct DebugUtilsMessengerCreateInfoEXT {

  using native_type = VkDebugUtilsMessengerCreateInfoEXT;

  DebugUtilsMessengerCreateInfoEXT(const void *next, VkDebugUtilsMessengerCreateFlagsEXT flags,
                                   VkDebugUtilsMessageSeverityFlagsEXT message_severity, VkDebugUtilsMessageTypeFlagsEXT message_type,
                                   PFN_vkDebugUtilsMessengerCallbackEXT pfn_user_callback, void *user_data)
    : next_(next), flags_(flags), message_severity_(message_severity), message_type_(message_type), pfn_user_callback_(pfn_user_callback),
      user_data_(user_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDebugUtilsMessengerCreateFlagsEXT flags_;
  VkDebugUtilsMessageSeverityFlagsEXT message_severity_;
  VkDebugUtilsMessageTypeFlagsEXT message_type_;
  PFN_vkDebugUtilsMessengerCallbackEXT pfn_user_callback_;
  void *user_data_;
};

struct DebugUtilsLabelEXT {

  using native_type = VkDebugUtilsLabelEXT;

  DebugUtilsLabelEXT(const void *next, const char *label_name, float color[4]) : next_(next), label_name_(label_name), color_(color) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const char *label_name_;
  float color[4] _;
};

struct GeneratedCommandsMemoryRequirementsInfoNV {

  using native_type = VkGeneratedCommandsMemoryRequirementsInfoNV;

  GeneratedCommandsMemoryRequirementsInfoNV(const void *next, PipelineBindPoint pipeline_bind_point, VkPipeline pipeline,
                                            VkIndirectCommandsLayoutNV indirect_commands_layout, uint32_t max_sequences_count)
    : next_(next), pipeline_bind_point_(pipeline_bind_point), pipeline_(pipeline), indirect_commands_layout_(indirect_commands_layout),
      max_sequences_count_(max_sequences_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipeline pipeline_;
  VkIndirectCommandsLayoutNV indirect_commands_layout_;
  uint32_t max_sequences_count_;
};

struct AndroidHardwareBufferPropertiesANDROID {

  using native_type = VkAndroidHardwareBufferPropertiesANDROID;

  AndroidHardwareBufferPropertiesANDROID(void *next, VkDeviceSize allocation_size, uint32_t memory_type_bits)
    : next_(next), allocation_size_(allocation_size), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize allocation_size_;
  uint32_t memory_type_bits_;
};

struct DeviceDeviceMemoryReportCreateInfoEXT {

  using native_type = VkDeviceDeviceMemoryReportCreateInfoEXT;

  DeviceDeviceMemoryReportCreateInfoEXT(const void *next, VkDeviceMemoryReportFlagsEXT flags,
                                        PFN_vkDeviceMemoryReportCallbackEXT pfn_user_callback, void *user_data)
    : next_(next), flags_(flags), pfn_user_callback_(pfn_user_callback), user_data_(user_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemoryReportFlagsEXT flags_;
  PFN_vkDeviceMemoryReportCallbackEXT pfn_user_callback_;
  void *user_data_;
};

struct BindVideoSessionMemoryInfoKHR {

  using native_type = VkBindVideoSessionMemoryInfoKHR;

  BindVideoSessionMemoryInfoKHR(const void *next, uint32_t memory_bind_index, VkDeviceMemory memory, VkDeviceSize memory_offset,
                                VkDeviceSize memory_size)
    : next_(next), memory_bind_index_(memory_bind_index), memory_(memory), memory_offset_(memory_offset), memory_size_(memory_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t memory_bind_index_;
  VkDeviceMemory memory_;
  VkDeviceSize memory_offset_;
  VkDeviceSize memory_size_;
};

struct PhysicalDeviceMaintenance6FeaturesKHR {

  using native_type = VkPhysicalDeviceMaintenance6FeaturesKHR;

  PhysicalDeviceMaintenance6FeaturesKHR(void *next, VkBool32 maintenance6) : next_(next), maintenance6_(maintenance6) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 maintenance6_;
};

struct CalibratedTimestampInfoKHR {

  using native_type = VkCalibratedTimestampInfoKHR;

  CalibratedTimestampInfoKHR(const void *next, TimeDomain time_domain) : next_(next), time_domain_(time_domain) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  TimeDomain time_domain_;
};

struct ScreenBufferPropertiesQNX {

  using native_type = VkScreenBufferPropertiesQNX;

  ScreenBufferPropertiesQNX(void *next, VkDeviceSize allocation_size, uint32_t memory_type_bits)
    : next_(next), allocation_size_(allocation_size), memory_type_bits_(memory_type_bits) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize allocation_size_;
  uint32_t memory_type_bits_;
};

struct PhysicalDeviceShaderCorePropertiesAMD {

  using native_type = VkPhysicalDeviceShaderCorePropertiesAMD;

  PhysicalDeviceShaderCorePropertiesAMD(void *next, uint32_t shader_engine_count, uint32_t shader_arrays_per_engine_count,
                                        uint32_t compute_units_per_shader_array, uint32_t simd_per_compute_unit,
                                        uint32_t wavefronts_per_simd, uint32_t wavefront_size, uint32_t sgprs_per_simd,
                                        uint32_t min_sgpr_allocation, uint32_t max_sgpr_allocation, uint32_t sgpr_allocation_granularity,
                                        uint32_t vgprs_per_simd, uint32_t min_vgpr_allocation, uint32_t max_vgpr_allocation,
                                        uint32_t vgpr_allocation_granularity)
    : next_(next), shader_engine_count_(shader_engine_count), shader_arrays_per_engine_count_(shader_arrays_per_engine_count),
      compute_units_per_shader_array_(compute_units_per_shader_array), simd_per_compute_unit_(simd_per_compute_unit),
      wavefronts_per_simd_(wavefronts_per_simd), wavefront_size_(wavefront_size), sgprs_per_simd_(sgprs_per_simd),
      min_sgpr_allocation_(min_sgpr_allocation), max_sgpr_allocation_(max_sgpr_allocation),
      sgpr_allocation_granularity_(sgpr_allocation_granularity), vgprs_per_simd_(vgprs_per_simd), min_vgpr_allocation_(min_vgpr_allocation),
      max_vgpr_allocation_(max_vgpr_allocation), vgpr_allocation_granularity_(vgpr_allocation_granularity) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t shader_engine_count_;
  uint32_t shader_arrays_per_engine_count_;
  uint32_t compute_units_per_shader_array_;
  uint32_t simd_per_compute_unit_;
  uint32_t wavefronts_per_simd_;
  uint32_t wavefront_size_;
  uint32_t sgprs_per_simd_;
  uint32_t min_sgpr_allocation_;
  uint32_t max_sgpr_allocation_;
  uint32_t sgpr_allocation_granularity_;
  uint32_t vgprs_per_simd_;
  uint32_t min_vgpr_allocation_;
  uint32_t max_vgpr_allocation_;
  uint32_t vgpr_allocation_granularity_;
};

struct RenderPassStripeSubmitInfoARM {

  using native_type = VkRenderPassStripeSubmitInfoARM;

  RenderPassStripeSubmitInfoARM(const void *next, uint32_t stripe_semaphore_info_count, const VkSemaphoreSubmitInfo *stripe_semaphore_infos)
    : next_(next), stripe_semaphore_info_count_(stripe_semaphore_info_count), stripe_semaphore_infos_(stripe_semaphore_infos) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t stripe_semaphore_info_count_;
  const VkSemaphoreSubmitInfo *stripe_semaphore_infos_;
};

struct PhysicalDeviceShaderCoreProperties2AMD {

  using native_type = VkPhysicalDeviceShaderCoreProperties2AMD;

  PhysicalDeviceShaderCoreProperties2AMD(void *next, VkShaderCorePropertiesFlagsAMD shader_core_features,
                                         uint32_t active_compute_unit_count)
    : next_(next), shader_core_features_(shader_core_features), active_compute_unit_count_(active_compute_unit_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkShaderCorePropertiesFlagsAMD shader_core_features_;
  uint32_t active_compute_unit_count_;
};

struct Rect2D {

  using native_type = VkRect2D;

  Rect2D(VkOffset2D offset, VkExtent2D extent) : offset_(offset), extent_(extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkOffset2D offset_;
  VkExtent2D extent_;
};

struct DescriptorSetLayoutBindingFlagsCreateInfo {

  using native_type = VkDescriptorSetLayoutBindingFlagsCreateInfo;

  DescriptorSetLayoutBindingFlagsCreateInfo(const void *next, uint32_t binding_count, const VkDescriptorBindingFlags *binding_flags)
    : next_(next), binding_count_(binding_count), binding_flags_(binding_flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t binding_count_;
  const VkDescriptorBindingFlags *binding_flags_;
};

struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV {

  using native_type = VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;

  PhysicalDeviceDeviceGeneratedCommandsFeaturesNV(void *next, VkBool32 device_generated_commands)
    : next_(next), device_generated_commands_(device_generated_commands) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 device_generated_commands_;
};

struct DescriptorSetVariableDescriptorCountAllocateInfo {

  using native_type = VkDescriptorSetVariableDescriptorCountAllocateInfo;

  DescriptorSetVariableDescriptorCountAllocateInfo(const void *next, uint32_t descriptor_set_count, const uint32_t *descriptor_counts)
    : next_(next), descriptor_set_count_(descriptor_set_count), descriptor_counts_(descriptor_counts) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t descriptor_set_count_;
  const uint32_t *descriptor_counts_;
};

struct AttachmentDescription2 {

  using native_type = VkAttachmentDescription2;

  AttachmentDescription2(const void *next, VkAttachmentDescriptionFlags flags, Format format, SampleCountMaskBit samples,
                         AttachmentLoadOp load_op, AttachmentStoreOp store_op, AttachmentLoadOp stencil_load_op,
                         AttachmentStoreOp stencil_store_op, ImageLayout initial_layout, ImageLayout final_layout)
    : next_(next), flags_(flags), format_(format), samples_(samples), load_op_(load_op), store_op_(store_op),
      stencil_load_op_(stencil_load_op), stencil_store_op_(stencil_store_op), initial_layout_(initial_layout), final_layout_(final_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAttachmentDescriptionFlags flags_;
  Format format_;
  SampleCountMaskBit samples_;
  AttachmentLoadOp load_op_;
  AttachmentStoreOp store_op_;
  AttachmentLoadOp stencil_load_op_;
  AttachmentStoreOp stencil_store_op_;
  ImageLayout initial_layout_;
  ImageLayout final_layout_;
};

struct DispatchGraphInfoAMDX {

  using native_type = VkDispatchGraphInfoAMDX;

  DispatchGraphInfoAMDX(uint32_t node_index, uint32_t payload_count, VkDeviceOrHostAddressConstAMDX payloads, uint64_t payload_stride)
    : node_index_(node_index), payload_count_(payload_count), payloads_(payloads), payload_stride_(payload_stride) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t node_index_;
  uint32_t payload_count_;
  VkDeviceOrHostAddressConstAMDX payloads_;
  uint64_t payload_stride_;
};

struct SubpassDescription2 {

  using native_type = VkSubpassDescription2;

  SubpassDescription2(const void *next, VkSubpassDescriptionFlags flags, PipelineBindPoint pipeline_bind_point, uint32_t view_mask,
                      uint32_t input_attachment_count, const VkAttachmentReference2 *input_attachments, uint32_t color_attachment_count,
                      const VkAttachmentReference2 *color_attachments, const VkAttachmentReference2 *resolve_attachments,
                      const VkAttachmentReference2 *depth_stencil_attachment, uint32_t preserve_attachment_count,
                      const uint32_t *preserve_attachments)
    : next_(next), flags_(flags), pipeline_bind_point_(pipeline_bind_point), view_mask_(view_mask),
      input_attachment_count_(input_attachment_count), input_attachments_(input_attachments),
      color_attachment_count_(color_attachment_count), color_attachments_(color_attachments), resolve_attachments_(resolve_attachments),
      depth_stencil_attachment_(depth_stencil_attachment), preserve_attachment_count_(preserve_attachment_count),
      preserve_attachments_(preserve_attachments) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSubpassDescriptionFlags flags_;
  PipelineBindPoint pipeline_bind_point_;
  uint32_t view_mask_;
  uint32_t input_attachment_count_;
  const VkAttachmentReference2 *input_attachments_;
  uint32_t color_attachment_count_;
  const VkAttachmentReference2 *color_attachments_;
  const VkAttachmentReference2 *resolve_attachments_;
  const VkAttachmentReference2 *depth_stencil_attachment_;
  uint32_t preserve_attachment_count_;
  const uint32_t *preserve_attachments_;
};

struct AccelerationStructureBuildGeometryInfoKHR {

  using native_type = VkAccelerationStructureBuildGeometryInfoKHR;

  AccelerationStructureBuildGeometryInfoKHR(const void *next, AccelerationStructureType type, VkBuildAccelerationStructureFlagsKHR flags,
                                            BuildAccelerationStructureMode mode, VkAccelerationStructureKHR src_acceleration_structure,
                                            VkAccelerationStructureKHR dst_acceleration_structure, uint32_t geometry_count,
                                            const VkAccelerationStructureGeometryKHR *geometries,
                                            const VkAccelerationStructureGeometryKHR *const *geometries,
                                            VkDeviceOrHostAddressKHR scratch_data)
    : next_(next), type_(type), flags_(flags), mode_(mode), src_acceleration_structure_(src_acceleration_structure),
      dst_acceleration_structure_(dst_acceleration_structure), geometry_count_(geometry_count), geometries_(geometries),
      geometries_(geometries), scratch_data_(scratch_data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  AccelerationStructureType type_;
  VkBuildAccelerationStructureFlagsKHR flags_;
  BuildAccelerationStructureMode mode_;
  VkAccelerationStructureKHR src_acceleration_structure_;
  VkAccelerationStructureKHR dst_acceleration_structure_;
  uint32_t geometry_count_;
  const VkAccelerationStructureGeometryKHR *geometries_;
  const VkAccelerationStructureGeometryKHR *const *geometries_;
  VkDeviceOrHostAddressKHR scratch_data_;
};

struct PhysicalDeviceTimelineSemaphoreFeatures {

  using native_type = VkPhysicalDeviceTimelineSemaphoreFeatures;

  PhysicalDeviceTimelineSemaphoreFeatures(void *next, VkBool32 timeline_semaphore) : next_(next), timeline_semaphore_(timeline_semaphore) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 timeline_semaphore_;
};

struct PhysicalDeviceImageProcessingFeaturesQCOM {

  using native_type = VkPhysicalDeviceImageProcessingFeaturesQCOM;

  PhysicalDeviceImageProcessingFeaturesQCOM(void *next, VkBool32 texture_sample_weighted, VkBool32 texture_box_filter,
                                            VkBool32 texture_block_match)
    : next_(next), texture_sample_weighted_(texture_sample_weighted), texture_box_filter_(texture_box_filter),
      texture_block_match_(texture_block_match) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 texture_sample_weighted_;
  VkBool32 texture_box_filter_;
  VkBool32 texture_block_match_;
};

struct SpecializationMapEntry {

  using native_type = VkSpecializationMapEntry;

  SpecializationMapEntry(uint32_t constant_id, uint32_t offset, size_t size) : constant_id_(constant_id), offset_(offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t constant_id_;
  uint32_t offset_;
  size_t size_;
};

struct SemaphoreWaitInfo {

  using native_type = VkSemaphoreWaitInfo;

  SemaphoreWaitInfo(const void *next, VkSemaphoreWaitFlags flags, uint32_t semaphore_count, const VkSemaphore *semaphores,
                    const uint64_t *values)
    : next_(next), flags_(flags), semaphore_count_(semaphore_count), semaphores_(semaphores), values_(values) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphoreWaitFlags flags_;
  uint32_t semaphore_count_;
  const VkSemaphore *semaphores_;
  const uint64_t *values_;
};

struct SurfacePresentScalingCapabilitiesEXT {

  using native_type = VkSurfacePresentScalingCapabilitiesEXT;

  SurfacePresentScalingCapabilitiesEXT(void *next, VkPresentScalingFlagsEXT supported_present_scaling,
                                       VkPresentGravityFlagsEXT supported_present_gravity_x,
                                       VkPresentGravityFlagsEXT supported_present_gravity_y, VkExtent2D min_scaled_image_extent,
                                       VkExtent2D max_scaled_image_extent)
    : next_(next), supported_present_scaling_(supported_present_scaling), supported_present_gravity_x_(supported_present_gravity_x),
      supported_present_gravity_y_(supported_present_gravity_y), min_scaled_image_extent_(min_scaled_image_extent),
      max_scaled_image_extent_(max_scaled_image_extent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPresentScalingFlagsEXT supported_present_scaling_;
  VkPresentGravityFlagsEXT supported_present_gravity_x_;
  VkPresentGravityFlagsEXT supported_present_gravity_y_;
  VkExtent2D min_scaled_image_extent_;
  VkExtent2D max_scaled_image_extent_;
};

struct DebugUtilsObjectNameInfoEXT {

  using native_type = VkDebugUtilsObjectNameInfoEXT;

  DebugUtilsObjectNameInfoEXT(const void *next, ObjectType object_type, uint64_t object_handle, const char *object_name)
    : next_(next), object_type_(object_type), object_handle_(object_handle), object_name_(object_name) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ObjectType object_type_;
  uint64_t object_handle_;
  const char *object_name_;
};

struct VertexInputBindingDivisorDescriptionKHR {

  using native_type = VkVertexInputBindingDivisorDescriptionKHR;

  VertexInputBindingDivisorDescriptionKHR(uint32_t binding, uint32_t divisor) : binding_(binding), divisor_(divisor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t binding_;
  uint32_t divisor_;
};

struct PipelineVertexInputDivisorStateCreateInfoKHR {

  using native_type = VkPipelineVertexInputDivisorStateCreateInfoKHR;

  PipelineVertexInputDivisorStateCreateInfoKHR(const void *next, uint32_t vertex_binding_divisor_count,
                                               const VkVertexInputBindingDivisorDescriptionKHR *vertex_binding_divisors)
    : next_(next), vertex_binding_divisor_count_(vertex_binding_divisor_count), vertex_binding_divisors_(vertex_binding_divisors) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t vertex_binding_divisor_count_;
  const VkVertexInputBindingDivisorDescriptionKHR *vertex_binding_divisors_;
};

struct PhysicalDevicePCIBusInfoPropertiesEXT {

  using native_type = VkPhysicalDevicePCIBusInfoPropertiesEXT;

  PhysicalDevicePCIBusInfoPropertiesEXT(void *next, uint32_t pci_domain, uint32_t pci_bus, uint32_t pci_device, uint32_t pci_function)
    : next_(next), pci_domain_(pci_domain), pci_bus_(pci_bus), pci_device_(pci_device), pci_function_(pci_function) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t pci_domain_;
  uint32_t pci_bus_;
  uint32_t pci_device_;
  uint32_t pci_function_;
};

struct AndroidHardwareBufferUsageANDROID {

  using native_type = VkAndroidHardwareBufferUsageANDROID;

  AndroidHardwareBufferUsageANDROID(void *next, uint64_t android_hardware_buffer_usage)
    : next_(next), android_hardware_buffer_usage_(android_hardware_buffer_usage) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t android_hardware_buffer_usage_;
};

struct CopyImageToBufferInfo2 {

  using native_type = VkCopyImageToBufferInfo2;

  CopyImageToBufferInfo2(const void *next, VkImage src_image, ImageLayout src_image_layout, VkBuffer dst_buffer, uint32_t region_count,
                         const VkBufferImageCopy2 *regions)
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_buffer_(dst_buffer), region_count_(region_count),
      regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkBuffer dst_buffer_;
  uint32_t region_count_;
  const VkBufferImageCopy2 *regions_;
};

struct PhysicalDeviceTexelBufferAlignmentProperties {

  using native_type = VkPhysicalDeviceTexelBufferAlignmentProperties;

  PhysicalDeviceTexelBufferAlignmentProperties(void *next, VkDeviceSize storage_texel_buffer_offset_alignment_bytes,
                                               VkBool32 storage_texel_buffer_offset_single_texel_alignment,
                                               VkDeviceSize uniform_texel_buffer_offset_alignment_bytes,
                                               VkBool32 uniform_texel_buffer_offset_single_texel_alignment)
    : next_(next), storage_texel_buffer_offset_alignment_bytes_(storage_texel_buffer_offset_alignment_bytes),
      storage_texel_buffer_offset_single_texel_alignment_(storage_texel_buffer_offset_single_texel_alignment),
      uniform_texel_buffer_offset_alignment_bytes_(uniform_texel_buffer_offset_alignment_bytes),
      uniform_texel_buffer_offset_single_texel_alignment_(uniform_texel_buffer_offset_single_texel_alignment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceSize storage_texel_buffer_offset_alignment_bytes_;
  VkBool32 storage_texel_buffer_offset_single_texel_alignment_;
  VkDeviceSize uniform_texel_buffer_offset_alignment_bytes_;
  VkBool32 uniform_texel_buffer_offset_single_texel_alignment_;
};

struct MemoryGetAndroidHardwareBufferInfoANDROID {

  using native_type = VkMemoryGetAndroidHardwareBufferInfoANDROID;

  MemoryGetAndroidHardwareBufferInfoANDROID(const void *next, VkDeviceMemory memory) : next_(next), memory_(memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceMemory memory_;
};

struct ShadingRatePaletteNV {

  using native_type = VkShadingRatePaletteNV;

  ShadingRatePaletteNV(uint32_t shading_rate_palette_entry_count, const ShadingRatePaletteEntry *shading_rate_palette_entries)
    : shading_rate_palette_entry_count_(shading_rate_palette_entry_count), shading_rate_palette_entries_(shading_rate_palette_entries) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t shading_rate_palette_entry_count_;
  const ShadingRatePaletteEntry *shading_rate_palette_entries_;
};

struct SubmitInfo {

  using native_type = VkSubmitInfo;

  SubmitInfo(const void *next, uint32_t wait_semaphore_count, const VkSemaphore *wait_semaphores,
             const VkPipelineStageFlags *wait_dst_stage_mask, uint32_t command_buffer_count, const VkCommandBuffer *command_buffers,
             uint32_t signal_semaphore_count, const VkSemaphore *signal_semaphores)
    : next_(next), wait_semaphore_count_(wait_semaphore_count), wait_semaphores_(wait_semaphores),
      wait_dst_stage_mask_(wait_dst_stage_mask), command_buffer_count_(command_buffer_count), command_buffers_(command_buffers),
      signal_semaphore_count_(signal_semaphore_count), signal_semaphores_(signal_semaphores) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *wait_semaphores_;
  const VkPipelineStageFlags *wait_dst_stage_mask_;
  uint32_t command_buffer_count_;
  const VkCommandBuffer *command_buffers_;
  uint32_t signal_semaphore_count_;
  const VkSemaphore *signal_semaphores_;
};

struct ShaderStatisticsInfoAMD {

  using native_type = VkShaderStatisticsInfoAMD;

  ShaderStatisticsInfoAMD(VkShaderStageFlags shader_stage_mask, VkShaderResourceUsageAMD resource_usage, uint32_t num_physical_vgprs,
                          uint32_t num_physical_sgprs, uint32_t num_available_vgprs, uint32_t num_available_sgprs,
                          uint32_t compute_work_group_size[3])
    : shader_stage_mask_(shader_stage_mask), resource_usage_(resource_usage), num_physical_vgprs_(num_physical_vgprs),
      num_physical_sgprs_(num_physical_sgprs), num_available_vgprs_(num_available_vgprs), num_available_sgprs_(num_available_sgprs),
      compute_work_group_size_(compute_work_group_size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkShaderStageFlags shader_stage_mask_;
  VkShaderResourceUsageAMD resource_usage_;
  uint32_t num_physical_vgprs_;
  uint32_t num_physical_sgprs_;
  uint32_t num_available_vgprs_;
  uint32_t num_available_sgprs_;
  uint32_t compute_work_group_size[3] _;
};

struct PhysicalDeviceShadingRateImagePropertiesNV {

  using native_type = VkPhysicalDeviceShadingRateImagePropertiesNV;

  PhysicalDeviceShadingRateImagePropertiesNV(void *next, VkExtent2D shading_rate_texel_size, uint32_t shading_rate_palette_size,
                                             uint32_t shading_rate_max_coarse_samples)
    : next_(next), shading_rate_texel_size_(shading_rate_texel_size), shading_rate_palette_size_(shading_rate_palette_size),
      shading_rate_max_coarse_samples_(shading_rate_max_coarse_samples) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D shading_rate_texel_size_;
  uint32_t shading_rate_palette_size_;
  uint32_t shading_rate_max_coarse_samples_;
};

struct ClearRect {

  using native_type = VkClearRect;

  ClearRect(VkRect2D rect, uint32_t base_array_layer, uint32_t layer_count)
    : rect_(rect), base_array_layer_(base_array_layer), layer_count_(layer_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  VkRect2D rect_;
  uint32_t base_array_layer_;
  uint32_t layer_count_;
};

struct DeviceGroupRenderPassBeginInfo {

  using native_type = VkDeviceGroupRenderPassBeginInfo;

  DeviceGroupRenderPassBeginInfo(const void *next, uint32_t device_mask, uint32_t device_render_area_count,
                                 const VkRect2D *device_render_areas)
    : next_(next), device_mask_(device_mask), device_render_area_count_(device_render_area_count),
      device_render_areas_(device_render_areas) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t device_mask_;
  uint32_t device_render_area_count_;
  const VkRect2D *device_render_areas_;
};

struct AndroidHardwareBufferFormatPropertiesANDROID {

  using native_type = VkAndroidHardwareBufferFormatPropertiesANDROID;

  AndroidHardwareBufferFormatPropertiesANDROID(void *next, Format format, uint64_t external_format, VkFormatFeatureFlags format_features,
                                               VkComponentMapping sampler_ycbcr_conversion_components,
                                               SamplerYcbcrModelConversion suggested_ycbcr_model, SamplerYcbcrRange suggested_ycbcr_range,
                                               ChromaLocation suggested_xchroma_offset, ChromaLocation suggested_ychroma_offset)
    : next_(next), format_(format), external_format_(external_format), format_features_(format_features),
      sampler_ycbcr_conversion_components_(sampler_ycbcr_conversion_components), suggested_ycbcr_model_(suggested_ycbcr_model),
      suggested_ycbcr_range_(suggested_ycbcr_range), suggested_xchroma_offset_(suggested_xchroma_offset),
      suggested_ychroma_offset_(suggested_ychroma_offset) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  Format format_;
  uint64_t external_format_;
  VkFormatFeatureFlags format_features_;
  VkComponentMapping sampler_ycbcr_conversion_components_;
  SamplerYcbcrModelConversion suggested_ycbcr_model_;
  SamplerYcbcrRange suggested_ycbcr_range_;
  ChromaLocation suggested_xchroma_offset_;
  ChromaLocation suggested_ychroma_offset_;
};

struct DeviceGroupSubmitInfo {

  using native_type = VkDeviceGroupSubmitInfo;

  DeviceGroupSubmitInfo(const void *next, uint32_t wait_semaphore_count, const uint32_t *wait_semaphore_device_indices,
                        uint32_t command_buffer_count, const uint32_t *command_buffer_device_masks, uint32_t signal_semaphore_count,
                        const uint32_t *signal_semaphore_device_indices)
    : next_(next), wait_semaphore_count_(wait_semaphore_count), wait_semaphore_device_indices_(wait_semaphore_device_indices),
      command_buffer_count_(command_buffer_count), command_buffer_device_masks_(command_buffer_device_masks),
      signal_semaphore_count_(signal_semaphore_count), signal_semaphore_device_indices_(signal_semaphore_device_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const uint32_t *wait_semaphore_device_indices_;
  uint32_t command_buffer_count_;
  const uint32_t *command_buffer_device_masks_;
  uint32_t signal_semaphore_count_;
  const uint32_t *signal_semaphore_device_indices_;
};

struct CommandBufferInheritanceConditionalRenderingInfoEXT {

  using native_type = VkCommandBufferInheritanceConditionalRenderingInfoEXT;

  CommandBufferInheritanceConditionalRenderingInfoEXT(const void *next, VkBool32 conditional_rendering_enable)
    : next_(next), conditional_rendering_enable_(conditional_rendering_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 conditional_rendering_enable_;
};

struct ExternalFormatANDROID {

  using native_type = VkExternalFormatANDROID;

  ExternalFormatANDROID(void *next, uint64_t external_format) : next_(next), external_format_(external_format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t external_format_;
};

struct PhysicalDeviceConditionalRenderingFeaturesEXT {

  using native_type = VkPhysicalDeviceConditionalRenderingFeaturesEXT;

  PhysicalDeviceConditionalRenderingFeaturesEXT(void *next, VkBool32 conditional_rendering, VkBool32 inherited_conditional_rendering)
    : next_(next), conditional_rendering_(conditional_rendering), inherited_conditional_rendering_(inherited_conditional_rendering) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 conditional_rendering_;
  VkBool32 inherited_conditional_rendering_;
};

struct DescriptorAddressInfoEXT {

  using native_type = VkDescriptorAddressInfoEXT;

  DescriptorAddressInfoEXT(void *next, VkDeviceAddress address, VkDeviceSize range, Format format)
    : next_(next), address_(address), range_(range), format_(format) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkDeviceAddress address_;
  VkDeviceSize range_;
  Format format_;
};

struct PhysicalDeviceShaderImageFootprintFeaturesNV {

  using native_type = VkPhysicalDeviceShaderImageFootprintFeaturesNV;

  PhysicalDeviceShaderImageFootprintFeaturesNV(void *next, VkBool32 image_footprint) : next_(next), image_footprint_(image_footprint) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 image_footprint_;
};

struct PhysicalDeviceMeshShaderPropertiesNV {

  using native_type = VkPhysicalDeviceMeshShaderPropertiesNV;

  PhysicalDeviceMeshShaderPropertiesNV(void *next, uint32_t max_draw_mesh_tasks_count, uint32_t max_task_work_group_invocations,
                                       uint32_t max_task_work_group_size[3], uint32_t max_task_total_memory_size,
                                       uint32_t max_task_output_count, uint32_t max_mesh_work_group_invocations,
                                       uint32_t max_mesh_work_group_size[3], uint32_t max_mesh_total_memory_size,
                                       uint32_t max_mesh_output_vertices, uint32_t max_mesh_output_primitives,
                                       uint32_t max_mesh_multiview_view_count, uint32_t mesh_output_per_vertex_granularity,
                                       uint32_t mesh_output_per_primitive_granularity)
    : next_(next), max_draw_mesh_tasks_count_(max_draw_mesh_tasks_count), max_task_work_group_invocations_(max_task_work_group_invocations),
      max_task_work_group_size_(max_task_work_group_size), max_task_total_memory_size_(max_task_total_memory_size),
      max_task_output_count_(max_task_output_count), max_mesh_work_group_invocations_(max_mesh_work_group_invocations),
      max_mesh_work_group_size_(max_mesh_work_group_size), max_mesh_total_memory_size_(max_mesh_total_memory_size),
      max_mesh_output_vertices_(max_mesh_output_vertices), max_mesh_output_primitives_(max_mesh_output_primitives),
      max_mesh_multiview_view_count_(max_mesh_multiview_view_count),
      mesh_output_per_vertex_granularity_(mesh_output_per_vertex_granularity),
      mesh_output_per_primitive_granularity_(mesh_output_per_primitive_granularity) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_draw_mesh_tasks_count_;
  uint32_t max_task_work_group_invocations_;
  uint32_t max_task_work_group_size[3] _;
  uint32_t max_task_total_memory_size_;
  uint32_t max_task_output_count_;
  uint32_t max_mesh_work_group_invocations_;
  uint32_t max_mesh_work_group_size[3] _;
  uint32_t max_mesh_total_memory_size_;
  uint32_t max_mesh_output_vertices_;
  uint32_t max_mesh_output_primitives_;
  uint32_t max_mesh_multiview_view_count_;
  uint32_t mesh_output_per_vertex_granularity_;
  uint32_t mesh_output_per_primitive_granularity_;
};

struct BufferCollectionCreateInfoFUCHSIA {

  using native_type = VkBufferCollectionCreateInfoFUCHSIA;

  BufferCollectionCreateInfoFUCHSIA(const void *next, zx_handle_t collection_token) : next_(next), collection_token_(collection_token) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  zx_handle_t collection_token_;
};

struct PhysicalDeviceVulkanMemoryModelFeatures {

  using native_type = VkPhysicalDeviceVulkanMemoryModelFeatures;

  PhysicalDeviceVulkanMemoryModelFeatures(void *next, VkBool32 vulkan_memory_model, VkBool32 vulkan_memory_model_device_scope,
                                          VkBool32 vulkan_memory_model_availability_visibility_chains)
    : next_(next), vulkan_memory_model_(vulkan_memory_model), vulkan_memory_model_device_scope_(vulkan_memory_model_device_scope),
      vulkan_memory_model_availability_visibility_chains_(vulkan_memory_model_availability_visibility_chains) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 vulkan_memory_model_;
  VkBool32 vulkan_memory_model_device_scope_;
  VkBool32 vulkan_memory_model_availability_visibility_chains_;
};

struct PhysicalDeviceShaderAtomicInt64Features {

  using native_type = VkPhysicalDeviceShaderAtomicInt64Features;

  PhysicalDeviceShaderAtomicInt64Features(void *next, VkBool32 shader_buffer_int64atomics, VkBool32 shader_shared_int64atomics)
    : next_(next), shader_buffer_int64atomics_(shader_buffer_int64atomics), shader_shared_int64atomics_(shader_shared_int64atomics) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shader_buffer_int64atomics_;
  VkBool32 shader_shared_int64atomics_;
};

struct PhysicalDeviceVertexAttributeDivisorFeaturesKHR {

  using native_type = VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR;

  PhysicalDeviceVertexAttributeDivisorFeaturesKHR(void *next, VkBool32 vertex_attribute_instance_rate_divisor,
                                                  VkBool32 vertex_attribute_instance_rate_zero_divisor)
    : next_(next), vertex_attribute_instance_rate_divisor_(vertex_attribute_instance_rate_divisor),
      vertex_attribute_instance_rate_zero_divisor_(vertex_attribute_instance_rate_zero_divisor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 vertex_attribute_instance_rate_divisor_;
  VkBool32 vertex_attribute_instance_rate_zero_divisor_;
};

struct PhysicalDeviceVideoEncodeQualityLevelInfoKHR {

  using native_type = VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR;

  PhysicalDeviceVideoEncodeQualityLevelInfoKHR(const void *next, const VkVideoProfileInfoKHR *video_profile, uint32_t quality_level)
    : next_(next), video_profile_(video_profile), quality_level_(quality_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  const VkVideoProfileInfoKHR *video_profile_;
  uint32_t quality_level_;
};

struct QueueFamilyCheckpointPropertiesNV {

  using native_type = VkQueueFamilyCheckpointPropertiesNV;

  QueueFamilyCheckpointPropertiesNV(void *next, VkPipelineStageFlags checkpoint_execution_stage_mask)
    : next_(next), checkpoint_execution_stage_mask_(checkpoint_execution_stage_mask) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkPipelineStageFlags checkpoint_execution_stage_mask_;
};

struct PipelineViewportDepthClipControlCreateInfoEXT {

  using native_type = VkPipelineViewportDepthClipControlCreateInfoEXT;

  PipelineViewportDepthClipControlCreateInfoEXT(const void *next, VkBool32 negative_one_to_one)
    : next_(next), negative_one_to_one_(negative_one_to_one) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 negative_one_to_one_;
};

struct CheckpointDataNV {

  using native_type = VkCheckpointDataNV;

  CheckpointDataNV(void *next, PipelineStageMaskBit stage, void *checkpoint_marker)
    : next_(next), stage_(stage), checkpoint_marker_(checkpoint_marker) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  PipelineStageMaskBit stage_;
  void *checkpoint_marker_;
};

struct SubpassDescriptionDepthStencilResolve {

  using native_type = VkSubpassDescriptionDepthStencilResolve;

  SubpassDescriptionDepthStencilResolve(const void *next, ResolveModeMaskBit depth_resolve_mode, ResolveModeMaskBit stencil_resolve_mode,
                                        const VkAttachmentReference2 *depth_stencil_resolve_attachment)
    : next_(next), depth_resolve_mode_(depth_resolve_mode), stencil_resolve_mode_(stencil_resolve_mode),
      depth_stencil_resolve_attachment_(depth_stencil_resolve_attachment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  ResolveModeMaskBit depth_resolve_mode_;
  ResolveModeMaskBit stencil_resolve_mode_;
  const VkAttachmentReference2 *depth_stencil_resolve_attachment_;
};

struct PhysicalDeviceTransformFeedbackPropertiesEXT {

  using native_type = VkPhysicalDeviceTransformFeedbackPropertiesEXT;

  PhysicalDeviceTransformFeedbackPropertiesEXT(void *next, uint32_t max_transform_feedback_streams, uint32_t max_transform_feedback_buffers,
                                               VkDeviceSize max_transform_feedback_buffer_size,
                                               uint32_t max_transform_feedback_stream_data_size,
                                               uint32_t max_transform_feedback_buffer_data_size,
                                               uint32_t max_transform_feedback_buffer_data_stride, VkBool32 transform_feedback_queries,
                                               VkBool32 transform_feedback_streams_lines_triangles,
                                               VkBool32 transform_feedback_rasterization_stream_select, VkBool32 transform_feedback_draw)
    : next_(next), max_transform_feedback_streams_(max_transform_feedback_streams),
      max_transform_feedback_buffers_(max_transform_feedback_buffers),
      max_transform_feedback_buffer_size_(max_transform_feedback_buffer_size),
      max_transform_feedback_stream_data_size_(max_transform_feedback_stream_data_size),
      max_transform_feedback_buffer_data_size_(max_transform_feedback_buffer_data_size),
      max_transform_feedback_buffer_data_stride_(max_transform_feedback_buffer_data_stride),
      transform_feedback_queries_(transform_feedback_queries),
      transform_feedback_streams_lines_triangles_(transform_feedback_streams_lines_triangles),
      transform_feedback_rasterization_stream_select_(transform_feedback_rasterization_stream_select),
      transform_feedback_draw_(transform_feedback_draw) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_transform_feedback_streams_;
  uint32_t max_transform_feedback_buffers_;
  VkDeviceSize max_transform_feedback_buffer_size_;
  uint32_t max_transform_feedback_stream_data_size_;
  uint32_t max_transform_feedback_buffer_data_size_;
  uint32_t max_transform_feedback_buffer_data_stride_;
  VkBool32 transform_feedback_queries_;
  VkBool32 transform_feedback_streams_lines_triangles_;
  VkBool32 transform_feedback_rasterization_stream_select_;
  VkBool32 transform_feedback_draw_;
};

struct PhysicalDeviceShaderObjectPropertiesEXT {

  using native_type = VkPhysicalDeviceShaderObjectPropertiesEXT;

  PhysicalDeviceShaderObjectPropertiesEXT(void *next, uint8_t shader_binary_uuid[VK_UUID_SIZE], uint32_t shader_binary_version)
    : next_(next), shader_binary_uuid_(shader_binary_uuid), shader_binary_version_(shader_binary_version) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint8_t shader_binary_uuid[VK_UUID_SIZE] _;
  uint32_t shader_binary_version_;
};

struct PhysicalDeviceImagelessFramebufferFeatures {

  using native_type = VkPhysicalDeviceImagelessFramebufferFeatures;

  PhysicalDeviceImagelessFramebufferFeatures(void *next, VkBool32 imageless_framebuffer)
    : next_(next), imageless_framebuffer_(imageless_framebuffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 imageless_framebuffer_;
};

struct PipelineRasterizationStateStreamCreateInfoEXT {

  using native_type = VkPipelineRasterizationStateStreamCreateInfoEXT;

  PipelineRasterizationStateStreamCreateInfoEXT(const void *next, VkPipelineRasterizationStateStreamCreateFlagsEXT flags,
                                                uint32_t rasterization_stream)
    : next_(next), flags_(flags), rasterization_stream_(rasterization_stream) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineRasterizationStateStreamCreateFlagsEXT flags_;
  uint32_t rasterization_stream_;
};

struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV {

  using native_type = VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;

  PhysicalDeviceRepresentativeFragmentTestFeaturesNV(void *next, VkBool32 representative_fragment_test)
    : next_(next), representative_fragment_test_(representative_fragment_test) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 representative_fragment_test_;
};

struct PipelineViewportExclusiveScissorStateCreateInfoNV {

  using native_type = VkPipelineViewportExclusiveScissorStateCreateInfoNV;

  PipelineViewportExclusiveScissorStateCreateInfoNV(const void *next, uint32_t exclusive_scissor_count, const VkRect2D *exclusive_scissors)
    : next_(next), exclusive_scissor_count_(exclusive_scissor_count), exclusive_scissors_(exclusive_scissors) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t exclusive_scissor_count_;
  const VkRect2D *exclusive_scissors_;
};

struct BufferCreateInfo {

  using native_type = VkBufferCreateInfo;

  BufferCreateInfo(const void *next, VkBufferCreateFlags flags, VkDeviceSize size, VkBufferUsageFlags usage, SharingMode sharing_mode,
                   uint32_t queue_family_index_count, const uint32_t *queue_family_indices)
    : next_(next), flags_(flags), size_(size), usage_(usage), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), queue_family_indices_(queue_family_indices) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBufferCreateFlags flags_;
  VkDeviceSize size_;
  VkBufferUsageFlags usage_;
  SharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *queue_family_indices_;
};

struct PhysicalDeviceComputeShaderDerivativesFeaturesNV {

  using native_type = VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;

  PhysicalDeviceComputeShaderDerivativesFeaturesNV(void *next, VkBool32 compute_derivative_group_quads,
                                                   VkBool32 compute_derivative_group_linear)
    : next_(next), compute_derivative_group_quads_(compute_derivative_group_quads),
      compute_derivative_group_linear_(compute_derivative_group_linear) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 compute_derivative_group_quads_;
  VkBool32 compute_derivative_group_linear_;
};

struct VideoEncodeH264ProfileInfoKHR {

  using native_type = VkVideoEncodeH264ProfileInfoKHR;

  VideoEncodeH264ProfileInfoKHR(const void *next, StdVideoH264ProfileIdc std_profile_idc) : next_(next), std_profile_idc_(std_profile_idc) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  StdVideoH264ProfileIdc std_profile_idc_;
};

struct SemaphoreCreateInfo {

  using native_type = VkSemaphoreCreateInfo;

  SemaphoreCreateInfo(const void *next, VkSemaphoreCreateFlags flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkSemaphoreCreateFlags flags_;
};

struct DescriptorSetAllocateInfo {

  using native_type = VkDescriptorSetAllocateInfo;

  DescriptorSetAllocateInfo(const void *next, VkDescriptorPool descriptor_pool, uint32_t descriptor_set_count,
                            const VkDescriptorSetLayout *set_layouts)
    : next_(next), descriptor_pool_(descriptor_pool), descriptor_set_count_(descriptor_set_count), set_layouts_(set_layouts) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDescriptorPool descriptor_pool_;
  uint32_t descriptor_set_count_;
  const VkDescriptorSetLayout *set_layouts_;
};

struct PhysicalDeviceCopyMemoryIndirectPropertiesNV {

  using native_type = VkPhysicalDeviceCopyMemoryIndirectPropertiesNV;

  PhysicalDeviceCopyMemoryIndirectPropertiesNV(void *next, VkQueueFlags supported_queues)
    : next_(next), supported_queues_(supported_queues) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkQueueFlags supported_queues_;
};

struct ImageViewMinLodCreateInfoEXT {

  using native_type = VkImageViewMinLodCreateInfoEXT;

  ImageViewMinLodCreateInfoEXT(const void *next, float min_lod) : next_(next), min_lod_(min_lod) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  float min_lod_;
};

struct PhysicalDeviceShadingRateImageFeaturesNV {

  using native_type = VkPhysicalDeviceShadingRateImageFeaturesNV;

  PhysicalDeviceShadingRateImageFeaturesNV(void *next, VkBool32 shading_rate_image, VkBool32 shading_rate_coarse_sample_order)
    : next_(next), shading_rate_image_(shading_rate_image), shading_rate_coarse_sample_order_(shading_rate_coarse_sample_order) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 shading_rate_image_;
  VkBool32 shading_rate_coarse_sample_order_;
};

struct CoarseSampleOrderCustomNV {

  using native_type = VkCoarseSampleOrderCustomNV;

  CoarseSampleOrderCustomNV(ShadingRatePaletteEntry shading_rate, uint32_t sample_count, uint32_t sample_location_count,
                            const VkCoarseSampleLocationNV *sample_locations)
    : shading_rate_(shading_rate), sample_count_(sample_count), sample_location_count_(sample_location_count),
      sample_locations_(sample_locations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  ShadingRatePaletteEntry shading_rate_;
  uint32_t sample_count_;
  uint32_t sample_location_count_;
  const VkCoarseSampleLocationNV *sample_locations_;
};

struct PipelineRasterizationDepthClipStateCreateInfoEXT {

  using native_type = VkPipelineRasterizationDepthClipStateCreateInfoEXT;

  PipelineRasterizationDepthClipStateCreateInfoEXT(const void *next, VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags,
                                                   VkBool32 depth_clip_enable)
    : next_(next), flags_(flags), depth_clip_enable_(depth_clip_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags_;
  VkBool32 depth_clip_enable_;
};

struct PhysicalDeviceMeshShaderFeaturesNV {

  using native_type = VkPhysicalDeviceMeshShaderFeaturesNV;

  PhysicalDeviceMeshShaderFeaturesNV(void *next, VkBool32 task_shader, VkBool32 mesh_shader)
    : next_(next), task_shader_(task_shader), mesh_shader_(mesh_shader) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 task_shader_;
  VkBool32 mesh_shader_;
};

struct PhysicalDeviceMeshShaderPropertiesEXT {

  using native_type = VkPhysicalDeviceMeshShaderPropertiesEXT;

  PhysicalDeviceMeshShaderPropertiesEXT(
    void *next, uint32_t max_task_work_group_total_count, uint32_t max_task_work_group_count[3], uint32_t max_task_work_group_invocations,
    uint32_t max_task_work_group_size[3], uint32_t max_task_payload_size, uint32_t max_task_shared_memory_size,
    uint32_t max_task_payload_and_shared_memory_size, uint32_t max_mesh_work_group_total_count, uint32_t max_mesh_work_group_count[3],
    uint32_t max_mesh_work_group_invocations, uint32_t max_mesh_work_group_size[3], uint32_t max_mesh_shared_memory_size,
    uint32_t max_mesh_payload_and_shared_memory_size, uint32_t max_mesh_output_memory_size,
    uint32_t max_mesh_payload_and_output_memory_size, uint32_t max_mesh_output_components, uint32_t max_mesh_output_vertices,
    uint32_t max_mesh_output_primitives, uint32_t max_mesh_output_layers, uint32_t max_mesh_multiview_view_count,
    uint32_t mesh_output_per_vertex_granularity, uint32_t mesh_output_per_primitive_granularity,
    uint32_t max_preferred_task_work_group_invocations, uint32_t max_preferred_mesh_work_group_invocations,
    VkBool32 prefers_local_invocation_vertex_output, VkBool32 prefers_local_invocation_primitive_output,
    VkBool32 prefers_compact_vertex_output, VkBool32 prefers_compact_primitive_output)
    : next_(next), max_task_work_group_total_count_(max_task_work_group_total_count), max_task_work_group_count_(max_task_work_group_count),
      max_task_work_group_invocations_(max_task_work_group_invocations), max_task_work_group_size_(max_task_work_group_size),
      max_task_payload_size_(max_task_payload_size), max_task_shared_memory_size_(max_task_shared_memory_size),
      max_task_payload_and_shared_memory_size_(max_task_payload_and_shared_memory_size),
      max_mesh_work_group_total_count_(max_mesh_work_group_total_count), max_mesh_work_group_count_(max_mesh_work_group_count),
      max_mesh_work_group_invocations_(max_mesh_work_group_invocations), max_mesh_work_group_size_(max_mesh_work_group_size),
      max_mesh_shared_memory_size_(max_mesh_shared_memory_size),
      max_mesh_payload_and_shared_memory_size_(max_mesh_payload_and_shared_memory_size),
      max_mesh_output_memory_size_(max_mesh_output_memory_size),
      max_mesh_payload_and_output_memory_size_(max_mesh_payload_and_output_memory_size),
      max_mesh_output_components_(max_mesh_output_components), max_mesh_output_vertices_(max_mesh_output_vertices),
      max_mesh_output_primitives_(max_mesh_output_primitives), max_mesh_output_layers_(max_mesh_output_layers),
      max_mesh_multiview_view_count_(max_mesh_multiview_view_count),
      mesh_output_per_vertex_granularity_(mesh_output_per_vertex_granularity),
      mesh_output_per_primitive_granularity_(mesh_output_per_primitive_granularity),
      max_preferred_task_work_group_invocations_(max_preferred_task_work_group_invocations),
      max_preferred_mesh_work_group_invocations_(max_preferred_mesh_work_group_invocations),
      prefers_local_invocation_vertex_output_(prefers_local_invocation_vertex_output),
      prefers_local_invocation_primitive_output_(prefers_local_invocation_primitive_output),
      prefers_compact_vertex_output_(prefers_compact_vertex_output), prefers_compact_primitive_output_(prefers_compact_primitive_output) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_task_work_group_total_count_;
  uint32_t max_task_work_group_count[3] _;
  uint32_t max_task_work_group_invocations_;
  uint32_t max_task_work_group_size[3] _;
  uint32_t max_task_payload_size_;
  uint32_t max_task_shared_memory_size_;
  uint32_t max_task_payload_and_shared_memory_size_;
  uint32_t max_mesh_work_group_total_count_;
  uint32_t max_mesh_work_group_count[3] _;
  uint32_t max_mesh_work_group_invocations_;
  uint32_t max_mesh_work_group_size[3] _;
  uint32_t max_mesh_shared_memory_size_;
  uint32_t max_mesh_payload_and_shared_memory_size_;
  uint32_t max_mesh_output_memory_size_;
  uint32_t max_mesh_payload_and_output_memory_size_;
  uint32_t max_mesh_output_components_;
  uint32_t max_mesh_output_vertices_;
  uint32_t max_mesh_output_primitives_;
  uint32_t max_mesh_output_layers_;
  uint32_t max_mesh_multiview_view_count_;
  uint32_t mesh_output_per_vertex_granularity_;
  uint32_t mesh_output_per_primitive_granularity_;
  uint32_t max_preferred_task_work_group_invocations_;
  uint32_t max_preferred_mesh_work_group_invocations_;
  VkBool32 prefers_local_invocation_vertex_output_;
  VkBool32 prefers_local_invocation_primitive_output_;
  VkBool32 prefers_compact_vertex_output_;
  VkBool32 prefers_compact_primitive_output_;
};

struct DrawMeshTasksIndirectCommandEXT {

  using native_type = VkDrawMeshTasksIndirectCommandEXT;

  DrawMeshTasksIndirectCommandEXT(uint32_t group_count_x, uint32_t group_count_y, uint32_t group_count_z)
    : group_count_x_(group_count_x), group_count_y_(group_count_y), group_count_z_(group_count_z) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t group_count_x_;
  uint32_t group_count_y_;
  uint32_t group_count_z_;
};

struct PhysicalDeviceImageCompressionControlFeaturesEXT {

  using native_type = VkPhysicalDeviceImageCompressionControlFeaturesEXT;

  PhysicalDeviceImageCompressionControlFeaturesEXT(void *next, VkBool32 image_compression_control)
    : next_(next), image_compression_control_(image_compression_control) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 image_compression_control_;
};

struct RayTracingShaderGroupCreateInfoNV {

  using native_type = VkRayTracingShaderGroupCreateInfoNV;

  RayTracingShaderGroupCreateInfoNV(const void *next, RayTracingShaderGroupType type, uint32_t general_shader, uint32_t closest_hit_shader,
                                    uint32_t any_hit_shader, uint32_t intersection_shader)
    : next_(next), type_(type), general_shader_(general_shader), closest_hit_shader_(closest_hit_shader), any_hit_shader_(any_hit_shader),
      intersection_shader_(intersection_shader) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  RayTracingShaderGroupType type_;
  uint32_t general_shader_;
  uint32_t closest_hit_shader_;
  uint32_t any_hit_shader_;
  uint32_t intersection_shader_;
};

struct PhysicalDeviceTextureCompressionASTCHDRFeatures {

  using native_type = VkPhysicalDeviceTextureCompressionASTCHDRFeatures;

  PhysicalDeviceTextureCompressionASTCHDRFeatures(void *next, VkBool32 texture_compression_astc_hdr)
    : next_(next), texture_compression_astc_hdr_(texture_compression_astc_hdr) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 texture_compression_astc_hdr_;
};

struct VideoDecodeCapabilitiesKHR {

  using native_type = VkVideoDecodeCapabilitiesKHR;

  VideoDecodeCapabilitiesKHR(void *next, VkVideoDecodeCapabilityFlagsKHR flags) : next_(next), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkVideoDecodeCapabilityFlagsKHR flags_;
};

struct DeviceEventInfoEXT {

  using native_type = VkDeviceEventInfoEXT;

  DeviceEventInfoEXT(const void *next, DeviceEventType device_event) : next_(next), device_event_(device_event) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  DeviceEventType device_event_;
};

struct SubpassBeginInfo {

  using native_type = VkSubpassBeginInfo;

  SubpassBeginInfo(const void *next, SubpassContents contents) : next_(next), contents_(contents) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  SubpassContents contents_;
};

struct PipelineRepresentativeFragmentTestStateCreateInfoNV {

  using native_type = VkPipelineRepresentativeFragmentTestStateCreateInfoNV;

  PipelineRepresentativeFragmentTestStateCreateInfoNV(const void *next, VkBool32 representative_fragment_test_enable)
    : next_(next), representative_fragment_test_enable_(representative_fragment_test_enable) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 representative_fragment_test_enable_;
};

struct PhysicalDeviceASTCDecodeFeaturesEXT {

  using native_type = VkPhysicalDeviceASTCDecodeFeaturesEXT;

  PhysicalDeviceASTCDecodeFeaturesEXT(void *next, VkBool32 decode_mode_shared_exponent)
    : next_(next), decode_mode_shared_exponent_(decode_mode_shared_exponent) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 decode_mode_shared_exponent_;
};

struct RayTracingPipelineCreateInfoNV {

  using native_type = VkRayTracingPipelineCreateInfoNV;

  RayTracingPipelineCreateInfoNV(const void *next, VkPipelineCreateFlags flags, uint32_t stage_count,
                                 const VkPipelineShaderStageCreateInfo *stages, uint32_t group_count,
                                 const VkRayTracingShaderGroupCreateInfoNV *groups, uint32_t max_recursion_depth, VkPipelineLayout layout,
                                 VkPipeline base_pipeline_handle, int32_t base_pipeline_index)
    : next_(next), flags_(flags), stage_count_(stage_count), stages_(stages), group_count_(group_count), groups_(groups),
      max_recursion_depth_(max_recursion_depth), layout_(layout), base_pipeline_handle_(base_pipeline_handle),
      base_pipeline_index_(base_pipeline_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkPipelineCreateFlags flags_;
  uint32_t stage_count_;
  const VkPipelineShaderStageCreateInfo *stages_;
  uint32_t group_count_;
  const VkRayTracingShaderGroupCreateInfoNV *groups_;
  uint32_t max_recursion_depth_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct CopyBufferInfo2 {

  using native_type = VkCopyBufferInfo2;

  CopyBufferInfo2(const void *next, VkBuffer src_buffer, VkBuffer dst_buffer, uint32_t region_count, const VkBufferCopy2 *regions)
    : next_(next), src_buffer_(src_buffer), dst_buffer_(dst_buffer), region_count_(region_count), regions_(regions) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBuffer src_buffer_;
  VkBuffer dst_buffer_;
  uint32_t region_count_;
  const VkBufferCopy2 *regions_;
};

struct GeometryNV {

  using native_type = VkGeometryNV;

  GeometryNV(const void *next, GeometryType geometry_type, VkGeometryDataNV geometry, VkGeometryFlagsKHR flags)
    : next_(next), geometry_type_(geometry_type), geometry_(geometry), flags_(flags) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  GeometryType geometry_type_;
  VkGeometryDataNV geometry_;
  VkGeometryFlagsKHR flags_;
};

struct ImportMetalBufferInfoEXT {

  using native_type = VkImportMetalBufferInfoEXT;

  ImportMetalBufferInfoEXT(const void *next, MTLBuffer_id mtl_buffer) : next_(next), mtl_buffer_(mtl_buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  MTLBuffer_id mtl_buffer_;
};

struct HdrMetadataEXT {

  using native_type = VkHdrMetadataEXT;

  HdrMetadataEXT(const void *next, VkXYColorEXT display_primary_red, VkXYColorEXT display_primary_green, VkXYColorEXT display_primary_blue,
                 VkXYColorEXT white_point, float max_luminance, float min_luminance, float max_content_light_level,
                 float max_frame_average_light_level)
    : next_(next), display_primary_red_(display_primary_red), display_primary_green_(display_primary_green),
      display_primary_blue_(display_primary_blue), white_point_(white_point), max_luminance_(max_luminance), min_luminance_(min_luminance),
      max_content_light_level_(max_content_light_level), max_frame_average_light_level_(max_frame_average_light_level) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkXYColorEXT display_primary_red_;
  VkXYColorEXT display_primary_green_;
  VkXYColorEXT display_primary_blue_;
  VkXYColorEXT white_point_;
  float max_luminance_;
  float min_luminance_;
  float max_content_light_level_;
  float max_frame_average_light_level_;
};

struct WriteDescriptorSetAccelerationStructureKHR {

  using native_type = VkWriteDescriptorSetAccelerationStructureKHR;

  WriteDescriptorSetAccelerationStructureKHR(const void *next, uint32_t acceleration_structure_count,
                                             const VkAccelerationStructureKHR *acceleration_structures)
    : next_(next), acceleration_structure_count_(acceleration_structure_count), acceleration_structures_(acceleration_structures) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t acceleration_structure_count_;
  const VkAccelerationStructureKHR *acceleration_structures_;
};

struct WriteDescriptorSetAccelerationStructureNV {

  using native_type = VkWriteDescriptorSetAccelerationStructureNV;

  WriteDescriptorSetAccelerationStructureNV(const void *next, uint32_t acceleration_structure_count,
                                            const VkAccelerationStructureNV *acceleration_structures)
    : next_(next), acceleration_structure_count_(acceleration_structure_count), acceleration_structures_(acceleration_structures) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t acceleration_structure_count_;
  const VkAccelerationStructureNV *acceleration_structures_;
};

struct PhysicalDeviceRayTracingPipelineFeaturesKHR {

  using native_type = VkPhysicalDeviceRayTracingPipelineFeaturesKHR;

  PhysicalDeviceRayTracingPipelineFeaturesKHR(void *next, VkBool32 ray_tracing_pipeline,
                                              VkBool32 ray_tracing_pipeline_shader_group_handle_capture_replay,
                                              VkBool32 ray_tracing_pipeline_shader_group_handle_capture_replay_mixed,
                                              VkBool32 ray_tracing_pipeline_trace_rays_indirect, VkBool32 ray_traversal_primitive_culling)
    : next_(next), ray_tracing_pipeline_(ray_tracing_pipeline),
      ray_tracing_pipeline_shader_group_handle_capture_replay_(ray_tracing_pipeline_shader_group_handle_capture_replay),
      ray_tracing_pipeline_shader_group_handle_capture_replay_mixed_(ray_tracing_pipeline_shader_group_handle_capture_replay_mixed),
      ray_tracing_pipeline_trace_rays_indirect_(ray_tracing_pipeline_trace_rays_indirect),
      ray_traversal_primitive_culling_(ray_traversal_primitive_culling) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_tracing_pipeline_;
  VkBool32 ray_tracing_pipeline_shader_group_handle_capture_replay_;
  VkBool32 ray_tracing_pipeline_shader_group_handle_capture_replay_mixed_;
  VkBool32 ray_tracing_pipeline_trace_rays_indirect_;
  VkBool32 ray_traversal_primitive_culling_;
};

struct PhysicalDeviceRayQueryFeaturesKHR {

  using native_type = VkPhysicalDeviceRayQueryFeaturesKHR;

  PhysicalDeviceRayQueryFeaturesKHR(void *next, VkBool32 ray_query) : next_(next), ray_query_(ray_query) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_query_;
};

struct SurfaceCapabilitiesPresentBarrierNV {

  using native_type = VkSurfaceCapabilitiesPresentBarrierNV;

  SurfaceCapabilitiesPresentBarrierNV(void *next, VkBool32 present_barrier_supported)
    : next_(next), present_barrier_supported_(present_barrier_supported) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 present_barrier_supported_;
};

struct TraceRaysIndirectCommandKHR {

  using native_type = VkTraceRaysIndirectCommandKHR;

  TraceRaysIndirectCommandKHR(uint32_t width, uint32_t height, uint32_t depth) : width_(width), height_(height), depth_(depth) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct PhysicalDeviceRayTracingMaintenance1FeaturesKHR {

  using native_type = VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;

  PhysicalDeviceRayTracingMaintenance1FeaturesKHR(void *next, VkBool32 ray_tracing_maintenance1,
                                                  VkBool32 ray_tracing_pipeline_trace_rays_indirect2)
    : next_(next), ray_tracing_maintenance1_(ray_tracing_maintenance1),
      ray_tracing_pipeline_trace_rays_indirect2_(ray_tracing_pipeline_trace_rays_indirect2) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 ray_tracing_maintenance1_;
  VkBool32 ray_tracing_pipeline_trace_rays_indirect2_;
};

struct PhysicalDeviceShaderCoreBuiltinsPropertiesARM {

  using native_type = VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM;

  PhysicalDeviceShaderCoreBuiltinsPropertiesARM(void *next, uint64_t shader_core_mask, uint32_t shader_core_count,
                                                uint32_t shader_warps_per_core)
    : next_(next), shader_core_mask_(shader_core_mask), shader_core_count_(shader_core_count),
      shader_warps_per_core_(shader_warps_per_core) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t shader_core_mask_;
  uint32_t shader_core_count_;
  uint32_t shader_warps_per_core_;
};

struct PerformanceValueINTEL {

  using native_type = VkPerformanceValueINTEL;

  PerformanceValueINTEL(PerformanceValueType type, VkPerformanceValueDataINTEL data) : type_(type), data_(data) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  PerformanceValueType type_;
  VkPerformanceValueDataINTEL data_;
};

struct SamplerYcbcrConversionImageFormatProperties {

  using native_type = VkSamplerYcbcrConversionImageFormatProperties;

  SamplerYcbcrConversionImageFormatProperties(void *next, uint32_t combined_image_sampler_descriptor_count)
    : next_(next), combined_image_sampler_descriptor_count_(combined_image_sampler_descriptor_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t combined_image_sampler_descriptor_count_;
};

struct DrmFormatModifierPropertiesListEXT {

  using native_type = VkDrmFormatModifierPropertiesListEXT;

  DrmFormatModifierPropertiesListEXT(void *next, uint32_t drm_format_modifier_count,
                                     VkDrmFormatModifierPropertiesEXT *drm_format_modifier_properties)
    : next_(next), drm_format_modifier_count_(drm_format_modifier_count), drm_format_modifier_properties_(drm_format_modifier_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t drm_format_modifier_count_;
  VkDrmFormatModifierPropertiesEXT *drm_format_modifier_properties_;
};

struct ImageDrmFormatModifierListCreateInfoEXT {

  using native_type = VkImageDrmFormatModifierListCreateInfoEXT;

  ImageDrmFormatModifierListCreateInfoEXT(const void *next, uint32_t drm_format_modifier_count, const uint64_t *drm_format_modifiers)
    : next_(next), drm_format_modifier_count_(drm_format_modifier_count), drm_format_modifiers_(drm_format_modifiers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t drm_format_modifier_count_;
  const uint64_t *drm_format_modifiers_;
};

struct ImageDrmFormatModifierExplicitCreateInfoEXT {

  using native_type = VkImageDrmFormatModifierExplicitCreateInfoEXT;

  ImageDrmFormatModifierExplicitCreateInfoEXT(const void *next, uint64_t drm_format_modifier, uint32_t drm_format_modifier_plane_count,
                                              const VkSubresourceLayout *plane_layouts)
    : next_(next), drm_format_modifier_(drm_format_modifier), drm_format_modifier_plane_count_(drm_format_modifier_plane_count),
      plane_layouts_(plane_layouts) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t drm_format_modifier_;
  uint32_t drm_format_modifier_plane_count_;
  const VkSubresourceLayout *plane_layouts_;
};

struct ImageDrmFormatModifierPropertiesEXT {

  using native_type = VkImageDrmFormatModifierPropertiesEXT;

  ImageDrmFormatModifierPropertiesEXT(void *next, uint64_t drm_format_modifier) : next_(next), drm_format_modifier_(drm_format_modifier) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint64_t drm_format_modifier_;
};

struct ImageFormatProperties2 {

  using native_type = VkImageFormatProperties2;

  ImageFormatProperties2(void *next, VkImageFormatProperties image_format_properties)
    : next_(next), image_format_properties_(image_format_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkImageFormatProperties image_format_properties_;
};

struct PhysicalDeviceFragmentDensityMapFeaturesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMapFeaturesEXT;

  PhysicalDeviceFragmentDensityMapFeaturesEXT(void *next, VkBool32 fragment_density_map, VkBool32 fragment_density_map_dynamic,
                                              VkBool32 fragment_density_map_non_subsampled_images)
    : next_(next), fragment_density_map_(fragment_density_map), fragment_density_map_dynamic_(fragment_density_map_dynamic),
      fragment_density_map_non_subsampled_images_(fragment_density_map_non_subsampled_images) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 fragment_density_map_;
  VkBool32 fragment_density_map_dynamic_;
  VkBool32 fragment_density_map_non_subsampled_images_;
};

struct ExportMemoryAllocateInfo {

  using native_type = VkExportMemoryAllocateInfo;

  ExportMemoryAllocateInfo(const void *next, VkExternalMemoryHandleTypeFlags handle_types) : next_(next), handle_types_(handle_types) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkExternalMemoryHandleTypeFlags handle_types_;
};

struct PhysicalDeviceFragmentDensityMap2FeaturesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;

  PhysicalDeviceFragmentDensityMap2FeaturesEXT(void *next, VkBool32 fragment_density_map_deferred)
    : next_(next), fragment_density_map_deferred_(fragment_density_map_deferred) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 fragment_density_map_deferred_;
};

struct ImportScreenBufferInfoQNX {

  using native_type = VkImportScreenBufferInfoQNX;

  ImportScreenBufferInfoQNX(const void *next, struct _screen_buffer *buffer) : next_(next), buffer_(buffer) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  struct _screen_buffer *buffer_;
};

struct PhysicalDeviceShaderSMBuiltinsPropertiesNV {

  using native_type = VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;

  PhysicalDeviceShaderSMBuiltinsPropertiesNV(void *next, uint32_t shader_smcount, uint32_t shader_warps_per_sm)
    : next_(next), shader_smcount_(shader_smcount), shader_warps_per_sm_(shader_warps_per_sm) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t shader_smcount_;
  uint32_t shader_warps_per_sm_;
};

struct PhysicalDeviceFragmentDensityMapPropertiesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMapPropertiesEXT;

  PhysicalDeviceFragmentDensityMapPropertiesEXT(void *next, VkExtent2D min_fragment_density_texel_size,
                                                VkExtent2D max_fragment_density_texel_size, VkBool32 fragment_density_invocations)
    : next_(next), min_fragment_density_texel_size_(min_fragment_density_texel_size),
      max_fragment_density_texel_size_(max_fragment_density_texel_size), fragment_density_invocations_(fragment_density_invocations) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D min_fragment_density_texel_size_;
  VkExtent2D max_fragment_density_texel_size_;
  VkBool32 fragment_density_invocations_;
};

struct PhysicalDeviceTilePropertiesFeaturesQCOM {

  using native_type = VkPhysicalDeviceTilePropertiesFeaturesQCOM;

  PhysicalDeviceTilePropertiesFeaturesQCOM(void *next, VkBool32 tile_properties) : next_(next), tile_properties_(tile_properties) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 tile_properties_;
};

struct MicromapCreateInfoEXT {

  using native_type = VkMicromapCreateInfoEXT;

  MicromapCreateInfoEXT(const void *next, VkMicromapCreateFlagsEXT create_flags, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size,
                        MicromapType type, VkDeviceAddress device_address)
    : next_(next), create_flags_(create_flags), buffer_(buffer), offset_(offset), size_(size), type_(type),
      device_address_(device_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMicromapCreateFlagsEXT create_flags_;
  VkBuffer buffer_;
  VkDeviceSize offset_;
  VkDeviceSize size_;
  MicromapType type_;
  VkDeviceAddress device_address_;
};

struct PhysicalDeviceFragmentDensityMap2PropertiesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMap2PropertiesEXT;

  PhysicalDeviceFragmentDensityMap2PropertiesEXT(void *next, VkBool32 subsampled_loads,
                                                 VkBool32 subsampled_coarse_reconstruction_early_access,
                                                 uint32_t max_subsampled_array_layers, uint32_t max_descriptor_set_subsampled_samplers)
    : next_(next), subsampled_loads_(subsampled_loads),
      subsampled_coarse_reconstruction_early_access_(subsampled_coarse_reconstruction_early_access),
      max_subsampled_array_layers_(max_subsampled_array_layers),
      max_descriptor_set_subsampled_samplers_(max_descriptor_set_subsampled_samplers) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 subsampled_loads_;
  VkBool32 subsampled_coarse_reconstruction_early_access_;
  uint32_t max_subsampled_array_layers_;
  uint32_t max_descriptor_set_subsampled_samplers_;
};

struct PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM {

  using native_type = VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;

  PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(void *next, VkExtent2D fragment_density_offset_granularity)
    : next_(next), fragment_density_offset_granularity_(fragment_density_offset_granularity) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkExtent2D fragment_density_offset_granularity_;
};

struct PhysicalDeviceMultiDrawPropertiesEXT {

  using native_type = VkPhysicalDeviceMultiDrawPropertiesEXT;

  PhysicalDeviceMultiDrawPropertiesEXT(void *next, uint32_t max_multi_draw_count)
    : next_(next), max_multi_draw_count_(max_multi_draw_count) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  uint32_t max_multi_draw_count_;
};

struct RenderPassFragmentDensityMapCreateInfoEXT {

  using native_type = VkRenderPassFragmentDensityMapCreateInfoEXT;

  RenderPassFragmentDensityMapCreateInfoEXT(const void *next, VkAttachmentReference fragment_density_map_attachment)
    : next_(next), fragment_density_map_attachment_(fragment_density_map_attachment) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkAttachmentReference fragment_density_map_attachment_;
};

struct PhysicalDeviceUniformBufferStandardLayoutFeatures {

  using native_type = VkPhysicalDeviceUniformBufferStandardLayoutFeatures;

  PhysicalDeviceUniformBufferStandardLayoutFeatures(void *next, VkBool32 uniform_buffer_standard_layout)
    : next_(next), uniform_buffer_standard_layout_(uniform_buffer_standard_layout) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 uniform_buffer_standard_layout_;
};

struct MemoryMapInfoKHR {

  using native_type = VkMemoryMapInfoKHR;

  MemoryMapInfoKHR(const void *next, VkMemoryMapFlags flags, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size)
    : next_(next), flags_(flags), memory_(memory), offset_(offset), size_(size) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkMemoryMapFlags flags_;
  VkDeviceMemory memory_;
  VkDeviceSize offset_;
  VkDeviceSize size_;
};

struct MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM {

  using native_type = VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM;

  MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(const void *next, uint32_t per_view_render_area_count,
                                                     const VkRect2D *per_view_render_areas)
    : next_(next), per_view_render_area_count_(per_view_render_area_count), per_view_render_areas_(per_view_render_areas) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint32_t per_view_render_area_count_;
  const VkRect2D *per_view_render_areas_;
};

struct BufferOpaqueCaptureAddressCreateInfo {

  using native_type = VkBufferOpaqueCaptureAddressCreateInfo;

  BufferOpaqueCaptureAddressCreateInfo(const void *next, uint64_t opaque_capture_address)
    : next_(next), opaque_capture_address_(opaque_capture_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  uint64_t opaque_capture_address_;
};

struct DrawMeshTasksIndirectCommandNV {

  using native_type = VkDrawMeshTasksIndirectCommandNV;

  DrawMeshTasksIndirectCommandNV(uint32_t task_count, uint32_t first_task) : task_count_(task_count), first_task_(first_task) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t task_count_;
  uint32_t first_task_;
};

struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {

  using native_type = VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

  PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(void *next, VkBool32 pageable_device_local_memory)
    : next_(next), pageable_device_local_memory_(pageable_device_local_memory) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 pageable_device_local_memory_;
};

struct PhysicalDeviceDrmPropertiesEXT {

  using native_type = VkPhysicalDeviceDrmPropertiesEXT;

  PhysicalDeviceDrmPropertiesEXT(void *next, VkBool32 has_primary, VkBool32 has_render, int64_t primary_major, int64_t primary_minor,
                                 int64_t render_major, int64_t render_minor)
    : next_(next), has_primary_(has_primary), has_render_(has_render), primary_major_(primary_major), primary_minor_(primary_minor),
      render_major_(render_major), render_minor_(render_minor) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 has_primary_;
  VkBool32 has_render_;
  int64_t primary_major_;
  int64_t primary_minor_;
  int64_t render_major_;
  int64_t render_minor_;
};

struct PhysicalDeviceBufferDeviceAddressFeaturesEXT {

  using native_type = VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;

  PhysicalDeviceBufferDeviceAddressFeaturesEXT(void *next, VkBool32 buffer_device_address, VkBool32 buffer_device_address_capture_replay,
                                               VkBool32 buffer_device_address_multi_device)
    : next_(next), buffer_device_address_(buffer_device_address),
      buffer_device_address_capture_replay_(buffer_device_address_capture_replay),
      buffer_device_address_multi_device_(buffer_device_address_multi_device) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 buffer_device_address_;
  VkBool32 buffer_device_address_capture_replay_;
  VkBool32 buffer_device_address_multi_device_;
};

struct BufferDeviceAddressCreateInfoEXT {

  using native_type = VkBufferDeviceAddressCreateInfoEXT;

  BufferDeviceAddressCreateInfoEXT(const void *next, VkDeviceAddress device_address) : next_(next), device_address_(device_address) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkDeviceAddress device_address_;
};

struct FilterCubicImageViewImageFormatPropertiesEXT {

  using native_type = VkFilterCubicImageViewImageFormatPropertiesEXT;

  FilterCubicImageViewImageFormatPropertiesEXT(void *next, VkBool32 filter_cubic, VkBool32 filter_cubic_minmax)
    : next_(next), filter_cubic_(filter_cubic), filter_cubic_minmax_(filter_cubic_minmax) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 filter_cubic_;
  VkBool32 filter_cubic_minmax_;
};

struct BindShaderGroupIndirectCommandNV {

  using native_type = VkBindShaderGroupIndirectCommandNV;

  BindShaderGroupIndirectCommandNV(uint32_t group_index) : group_index_(group_index) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  uint32_t group_index_;
};

struct FramebufferAttachmentImageInfo {

  using native_type = VkFramebufferAttachmentImageInfo;

  FramebufferAttachmentImageInfo(const void *next, VkImageCreateFlags flags, VkImageUsageFlags usage, uint32_t width, uint32_t height,
                                 uint32_t layer_count, uint32_t view_format_count, const Format *view_formats)
    : next_(next), flags_(flags), usage_(usage), width_(width), height_(height), layer_count_(layer_count),
      view_format_count_(view_format_count), view_formats_(view_formats) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkImageCreateFlags flags_;
  VkImageUsageFlags usage_;
  uint32_t width_;
  uint32_t height_;
  uint32_t layer_count_;
  uint32_t view_format_count_;
  const Format *view_formats_;
};

struct PipelineViewportShadingRateImageStateCreateInfoNV {

  using native_type = VkPipelineViewportShadingRateImageStateCreateInfoNV;

  PipelineViewportShadingRateImageStateCreateInfoNV(const void *next, VkBool32 shading_rate_image_enable, uint32_t viewport_count,
                                                    const VkShadingRatePaletteNV *shading_rate_palettes)
    : next_(next), shading_rate_image_enable_(shading_rate_image_enable), viewport_count_(viewport_count),
      shading_rate_palettes_(shading_rate_palettes) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  const void *next_;
  VkBool32 shading_rate_image_enable_;
  uint32_t viewport_count_;
  const VkShadingRatePaletteNV *shading_rate_palettes_;
};

struct PhysicalDeviceCooperativeMatrixFeaturesNV {

  using native_type = VkPhysicalDeviceCooperativeMatrixFeaturesNV;

  PhysicalDeviceCooperativeMatrixFeaturesNV(void *next, VkBool32 cooperative_matrix, VkBool32 cooperative_matrix_robust_buffer_access)
    : next_(next), cooperative_matrix_(cooperative_matrix),
      cooperative_matrix_robust_buffer_access_(cooperative_matrix_robust_buffer_access) {
  }

  auto *get() {
    return reinterpret_cast<native_type *>(this);
  }

  StructureType s_type_;
  void *next_;
  VkBool32 cooperative_matrix_;
  VkBool32 cooperative_matrix_robust_buffer_access_;
};

#endif // VULKAN_STRUCTURES_H