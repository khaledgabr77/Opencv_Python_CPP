#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;

int main(){
    std::string path = "/home/khaled/openCvPYCPP/cpp/original (10).jpg";
   // Mat img = imread(path, IMREAD_COLOR);
    //Mat khaled = imread(path, IMREAD_GRAYSCALE);
    Mat kkk = imread(path, IMREAD_UNCHANGED);
    if (kkk.empty())
    {
        std::cout << "could not read the image" << std::endl;
        return 1;

    }
  //  imshow("real", img);
   // imshow("gray", khaled);
    imshow("unch", kkk);
    int k = waitKey(0);
    if(k == 's') {
        imwrite("unch.jpg", kkk);
    }

return 0;
}
