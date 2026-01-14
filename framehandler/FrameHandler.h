#ifndef FRAMEHANDLER_H
#define FRAMEHANDLER_H

#include <opencv2/opencv.hpp>

class FrameHandler {
public:
    /**
     * @brief گرفتن یک فریم از وب‌کم
     * @return تصویر (cv::Mat) گرفته شده از دوربین
     */
    cv::Mat getFrame();
};

#endif // FRAMEHANDLER_H
