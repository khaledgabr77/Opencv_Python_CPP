#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/videoio.hpp>

using namespace cv;
int main(){
    VideoCapture camera(0);
    if (!camera.isOpened()) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    namedWindow("webcam", CV_WINDOW_AUTOSIZE);
    Mat frame;
    camera >> frame;
    while (1) {
        imshow("webcam", frame);
        if (waitKey(10)>=0) {
            break;
        }
    }
    return 0;



}