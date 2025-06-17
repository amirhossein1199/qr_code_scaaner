#ifndef SCANNER_H
#define SCANNER_H

#include <vector>
#include <string>
#include <opencv2/core/mat.hpp> // برای استفاده از cv::Mat

class Scanner
{
public:
    /**
     *  این تابع یک فریم از تصویر را دریافت کرده و اطلاعات کدهای QR و بارکد موجود در آن را استخراج می‌کند.
     * پارامتر فریم ورودی از نوع cv::Mat که توسط دوربین گرفته شده است.
     * خروجی یک وکتور از رشته‌ها که هر رشته اطلاعات استخراج شده از یک کد است.
     */
    std::vector<std::string> scan(const cv::Mat &frame);
};

#endif // SCANNER_H