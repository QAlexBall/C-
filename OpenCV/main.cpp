//#include "opencv2/imgproc.hpp"
//#include "opencv2/highgui.hpp"
//using namespace cv;
//int main(int, char**)
//{
//    VideoCapture cap(0);
//    if(!cap.isOpened()) return -1;
//    Mat frame, edges;
//    namedWindow("edges",1);
//    for(;;)
//    {
//        cap >> frame;
//        cvtColor(frame, edges, COLOR_BGR2GRAY);
//        GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
//        Canny(edges, edges, 0, 30, 3);
//        imshow("edges", edges);
//        if(waitKey(30) >= 0) break;
//    }
//    return 0;
//}

#include <opencv2/opencv.hpp>
#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/ximgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
int main() {
    cv::Mat image;

    image = cv::imread("../2.jpg", 1);
    std::cout << image << std::endl;
    if(!image.data){
        printf("No image data\n");
        return -1;
    }
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display Image", image);
    cv::waitKey();

    return 0;
}
//#include<iostream>
//
//
//#include<boost/lambda/lambda.hpp>
//
//using namespace boost::lambda;
//using namespace std;
//int main()
//{
//    //endl用'\n'来代替。
//    //此时的_1代表了hello。
//    (cout<<_1<<" "<<_2<<'\n')("hello","end");
//    return 0;
//}
