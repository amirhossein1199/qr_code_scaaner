#include "Scanner.h"
#include "ZXing/ReadBarcode.h"
#include "ZXing/ImageView.h"
#include "ZXing/DecodeHints.h"
#include "ZXing/TextUtfEncoding.h"

std::vector<std::string> Scanner::scan(const cv::Mat &frame)
{
    // تبدیل تصویر OpenCV (BGR) به فرمت مورد نیاز ZXing (ImageView)
    ZXing::ImageView imageView{frame.data, frame.cols, frame.rows, ZXing::ImageFormat::BGR};

    // تنظیمات اسکنر برای دقت بیشتر
    ZXing::DecodeHints hints;
    hints.setTryHarder(true);
    hints.setEanAddOnSymbol(ZXing::EanAddOnSymbol::Read);
    hints.setFormats(ZXing::BarcodeFormat::Any);

    // اجرای عملیات اسکن روی تصویر
    auto results = ZXing::ReadBarcodes(imageView, hints);

    std::vector<std::string> found_data;
    if (!results.empty())
    {
        for (const auto &result : results)
        {
            if (result.isValid())
            {
                // تبدیل نتیجه که از نوع wstring است به string با فرمت UTF-8
                found_data.push_back(ZXing::TextUtfEncoding::ToUtf8(result.text()));
            }
        }
    }

    return found_data;
}