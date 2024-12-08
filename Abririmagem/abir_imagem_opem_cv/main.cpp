#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main(int argc, char** argv) {
    std::string caminho = "Pes_AI.png";
    cv::Mat imagem = cv::imread(caminho);
    cv::imshow("Imagem", imagem);
    cv::waitKey(0);
    return 0;
}