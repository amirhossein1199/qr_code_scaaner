#include "../libs/FrameHandler/FrameHandler.h"
#include "../libs/Scanner/Scanner.h"
#include "../libs/UI/UI.h"
#include "../libs/Archive/Archive.h"

int main() {
    FrameHandler camera;
    Scanner scanner;
    UI ui;
    Archive archive;

    while (true) {
        auto frame = camera.getFrame();
        auto results = scanner.scan(frame);
        ui.displayFrame(frame, results);
        if (!results.empty()) {
            archive.save(frame, results);
        }
        if (cv::waitKey(1) == 27) break; // ESC برای خروج
    }
    return 0;
}
