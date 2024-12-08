#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

int main(int agrc, char** argv) {
	std::string caminhodaimagem = "Pes_AI.png";
	cv::Mat imagem = cv::imread(caminhodaimagem), imagemcomoutracor, imagempretobranco;
	//cv::Mat imagemcomoutracor; 
	//cv::Mat imagempretobranco;


	cv::cvtColor(imagem, imagemcomoutracor, cv::COLORMAP_RAINBOW);
	// no lugar de "cv::COLORMAP_RAINBOW" pode colocar apenas o 6 que é o codigo que reprentar o  RAINBOW no enum
	cv::cvtColor(imagem, imagempretobranco, cv::COLOR_BGR2GRAY);
	
	// consulta enum das cores: https://docs.opencv.org/4.x/d8/d01/group__imgproc__color__conversions.html
	// color map: https://docs.opencv.org/4.x/d3/d50/group__imgproc__colormap.html

	cv::imshow("Imagem original", imagem);
	cv::imshow("Imagem Preto e Branco", imagempretobranco);
	cv::imshow("Imagem Rainbow", imagemcomoutracor);

	cv::waitKey(0);

	return 0;

}