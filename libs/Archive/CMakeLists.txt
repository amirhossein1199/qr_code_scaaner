add_library(Archive Archive.cpp)
find_package(OpenCV REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(Archive ${OpenCV_LIBS} nlohmann_json::nlohmann_json)
