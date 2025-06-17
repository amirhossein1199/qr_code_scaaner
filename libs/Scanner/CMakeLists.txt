# تعریف کردن یک کتابخانه به نام Scanner
add_library(Scanner Scanner.h Scanner.cpp)

# مشخص کردن پوشه هدرها برای دسترسی سایر ماژول‌ها
target_include_directories(Scanner PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#  لینک کردن کتابخانه‌های مورد نیاز
# این تارگت‌ها توسط vcpkg و فایل CMake اصلی پروژه تعریف می‌شوند
target_link_libraries(Scanner PUBLIC
    ZXing::ZXing
    OpenCV::opencv_core
    OpenCV::opencv_imgproc
)