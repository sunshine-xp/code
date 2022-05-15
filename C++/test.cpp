#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{
    Mat src = imread("13.jpeg");
    imshow("tu", src);
    waitKey(6000);
}