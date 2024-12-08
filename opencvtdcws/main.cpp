#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

int main(int argc, char** argv) {
    cv::VideoCapture cap(0);
    cv::Mat imagem;

    cv::CascadeClassifier n;
    n.load("haarcascade_frontalface_default.xml");

    if (n.empty()) {
        std::cerr << "Arquivo nao valido";
        return 1;
    }

    while (true) {
        cap >> imagem;
        if (imagem.empty()) {
            break;
        }

        std::vector<cv::Rect> conret;
        n.detectMultiScale(imagem, conret);

        for (int i = 0; i < conret.size(); i++)
        {
            cv::rectangle(imagem, conret[i].tl(), conret[i].br(), cv::Scalar(0, 255, 0), 5);
        }


        cv::imshow("final", imagem);

        if (cv::waitKey(1) == 'q')
        {
            break;
        }

    }

    

   

   
    return 0;
}