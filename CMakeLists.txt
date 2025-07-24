cmake_minimum_required(VERSION 3.10)
project(AdvancedScanner)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

add_subdirectory(libs/Archive)

add_executable(AdvancedScanner src/main.cpp)

find_package(OpenCV REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

target_link_libraries(AdvancedScanner Archive ${OpenCV_LIBS} nlohmann_json::nlohmann_json)
