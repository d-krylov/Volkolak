cmake_minimum_required(VERSION 3.25)

project(Volkolak LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

include(cmake/libraries.cmake)
include(cmake/clang_format.cmake)

FetchContent_MakeAvailable(pugixml)

add_clang_format_target(format "build")

set(CMAKE_BUILD_TYPE Debug)

set(VOLKOLAK_SOURCES 
  ${PROJECT_SOURCE_DIR}/volkolak/volkolak.cpp
  ${PROJECT_SOURCE_DIR}/volkolak/tools.cpp
  ${PROJECT_SOURCE_DIR}/volkolak/parser.cpp
)

add_executable(${PROJECT_NAME} 
  ${VOLKOLAK_SOURCES}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
  pugixml
)

add_subdirectory(examples)