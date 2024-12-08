#include <opencv2/core.hpp>
#include<opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main(int argc, char** argv) {
    // Cria uma imagem em branco (400x400 pixels, 3 canais (RGB), valores de cor inicializados para 255)
    cv::Mat imagem = cv::Mat::zeros(400, 400, CV_8UC3);
    imagem = cv::Scalar(255, 255, 255); // Preenche a imagem com a cor branca
    /*
    Sobre o CV_8UC3 esta disponivel em: https://docs.opencv.org/3.4/d1/d1b/group__core__hal__interface.html#ga81df635441b21f532fdace401e04f588
    mas confesso que não acho muito boa a explicação. mas tambem deixo esse site explicnado a diferença ente CV_8UC1 ao CV_8UC6:
    https://www.youtube.com/watch?v=9sCYObX1-aY 
    https://homepages.dcc.ufmg.br/~william/teaching/2013_02/OP/slides/aula03%20-%20OpenCV.pdf
    https://thecodinginterface.com/blog/opencv-Mat-from-array-and-vector/
    */



    // Desenhar um círculo (centro, raio, cor, espessura)
    cv::circle(imagem, cv::Point(200, 200), 50, cv::Scalar(0, 0, 255), 3); // Círculo vermelho

    // Desenhar um retângulo (ponto superior esquerdo, ponto inferior direito, cor, espessura)
    cv::rectangle(imagem, cv::Point(100, 100), cv::Point(300, 300), cv::Scalar(0, 255, 0), 3); // Retângulo verde

    // Desenhar uma linha (ponto inicial, ponto final, cor, espessura)
    cv::line(imagem, cv::Point(50, 50), cv::Point(350, 350), cv::Scalar(255, 0, 0), 2); // Linha azul

    // Desenhar um texto (texto, posição inicial, fonte, escala da fonte, cor, espessura)
    cv::putText(imagem, "Aula de OpenCV", cv::Point(50, 50), cv::QT_FONT_NORMAL,1, cv::Scalar(0, 0, 0), 2); // Texto preto

    cv::putText(imagem, "Pablo", cv::Point(40, 380), cv::QT_FONT_NORMAL, 1, cv::Scalar(0, 0, 0), 2);

    // Exibir a imagem
    cv::imshow("Imagem com Formas", imagem);
    cv::waitKey(0); // Espera indefinidamente até que uma tecla seja pressionada
    
    
    return 0;
}