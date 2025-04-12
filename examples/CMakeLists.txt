project(Example LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(Vulkan REQUIRED)

add_executable(${PROJECT_NAME} 
  example.cpp
)

message("${Vulkan_INCLUDE_DIR}")

target_include_directories(${PROJECT_NAME}
  PUBLIC ${Vulkan_INCLUDE_DIR}
)
