#include <iostream>
#include <opencv2/opencv.hpp>
#include "libs/Scanner/Scanner.h"

int main()
{
    cv::Mat testImage = cv::imread("sample_qr.png");

    if (testImage.empty())
    {
        std::cerr << "Error: Could not load image!" << std::endl;
        return -1;
    }

    Scanner scanner;
    std::vector<std::string> results = scanner.scan(testImage);

    if (results.empty())
    {
        std::cout << "No codes found in the image." << std::endl;
    }
    else
    {
        std::cout << "Found " << results.size() << " code(s):" << std::endl;
        for (const auto &result : results)
        {
            std::cout << "- Data: " << result << std::endl;
        }
    }

    return 0;
}