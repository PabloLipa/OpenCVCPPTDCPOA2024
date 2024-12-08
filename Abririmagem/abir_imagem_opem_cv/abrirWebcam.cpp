#include <opencv2/core.hpp>
#include<opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main(int argc, char** argv) {
    cv::VideoCapture webcam(0);
    cv::Mat imag;

    while (true) {
        webcam.read(imag);
        cv::imshow("Imagem", imag);
        cv::waitKey(1);
    }

    return 0;
}