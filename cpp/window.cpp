#include<iostream>
#include <opencv2/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/imgcodecs.hpp>


using namespace cv;
int main(){
    std::string img_path = "/home/khaled/openCvPYCPP/cpp/original (10).jpg" ;
    Mat img = imread(img_path, IMREAD_COLOR);
    
    if (img.empty())
    {
        std::cout << "could not read the image" << std::endl;
        return 1;

    }
    namedWindow("Normal", CV_WINDOW_NORMAL);


    imshow("Normal", img);

    

    int k = waitKey(0);
    if(k == 's') {
        imwrite("sss.jpg", img);
    }
    destroyAllWindows();

return 0;
}