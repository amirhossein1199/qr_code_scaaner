#include "Archive.h"
#include <fstream>
#include <ctime>
#include <filesystem>

namespace fs = std::filesystem;

void Archive::save(const cv::Mat& frame, const std::vector<std::string>& data) {
    std::string dir = "output";
    fs::create_directories(dir);

    std::time_t t = std::time(nullptr);
    char timeBuf[100];
    std::strftime(timeBuf, sizeof(timeBuf), "%Y%m%d_%H%M%S", std::localtime(&t));

    std::string imagePath = dir + "/frame_" + std::string(timeBuf) + ".jpg";
    cv::imwrite(imagePath, frame);

    std::string logPath = dir + "/log.json";
    nlohmann::json log;

    if (fs::exists(logPath)) {
        std::ifstream inFile(logPath);
        inFile >> log;
    }

    log.push_back({
        {"time", timeBuf},
        {"image", imagePath},
        {"data", data}
    });

    std::ofstream outFile(logPath);
    outFile << log.dump(4);
}
