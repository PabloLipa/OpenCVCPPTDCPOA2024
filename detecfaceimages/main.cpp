#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

int main(int argc, char** argv) {
    std::string caminhoimagem = "Pes_AI.png";
    std::string caminhoimagem2 = "familia.jpg";
    std::string caminhoimagem3 = "family2.jpg";
    
    cv::Mat imagem = cv::imread(caminhoimagem);

    cv::CascadeClassifier n;
    n.load("haarcascade_frontalface_default.xml");

    if (n.empty()) {
        std::cerr << "Arquivo nao valido";
        return 1;
    }


    std::vector<cv::Rect> conret;
    n.detectMultiScale(imagem, conret);

    for (int i = 0; i < conret.size(); i++)
    {
        cv::rectangle(imagem, conret[i].tl(), conret[i].br(), cv::Scalar(0, 255, 0), 5);
    }


    cv::imshow("final", imagem);

    cv::waitKey(0);

    

    return 0;
}