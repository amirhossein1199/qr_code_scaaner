#include "FrameHandler.h"
#include <iostream>

/**
 * @brief گرفتن یک فریم از وب‌کم با استفاده از OpenCV
 */
cv::Mat FrameHandler::getFrame() {
    cv::VideoCapture cap(0); // باز کردن دوربین
    cv::Mat frame;
    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot open camera." << std::endl;
        return frame;
    }
    cap >> frame; // گرفتن یک فریم
    return frame;
}
