#include <opencv2/core.hpp>
#include<opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

/*
CORDENADAS PIXEL

Palco1
 v1 = 180, 255
 v2 = 501, 205
 v3 = 173, 478
 v4 = 490, 486

 palco2
 v1 = 710, 168
 v2 = 1229, 130
 v3 = 704, 496
 v4 = 1225, 515

 tdc logo
 v1 = 503, 271
 v2 = 656, 271
 v3 = 496, 461
 v4 = 651, 461

*/

int main(int argc, char** argv) {

	float larg = 900, autura = 500;

	std::string path = "PalestrasTDC.jpeg";
	cv::Mat imagem = cv::imread(path), palco1, palco2;
	cv::Mat TDClogo;


	cv::Point2f origemp1[4] = { {180, 255},{501, 205},{173, 478},{490, 486} };
	cv::Point2f frontalnovop1[4] = { {0,0},{larg,0},{0,autura},{larg,autura} };

	cv::Point2f origemp2[4] = { {710, 168},{1229, 130},{704, 496},{1225, 515} };
	cv::Point2f frontalnovop2[4] = { {0,0},{larg,0},{0,autura},{larg,autura} };

	cv::Point2f origemtdc[4] = { {503, 271},{656, 271},{496, 461},{651, 461} };
	cv::Point2f frontalnovoTDC[4] = { {0,0},{300,0},{0,300},{300,300} };

	cv::warpPerspective(imagem, palco1, cv::getPerspectiveTransform(origemp1, frontalnovop1), cv::Size(larg, autura));
	cv::warpPerspective(imagem, palco2, cv::getPerspectiveTransform(origemp2, frontalnovop2), cv::Size(larg, autura));
	cv::warpPerspective(imagem, TDClogo, cv::getPerspectiveTransform(origemtdc, frontalnovoTDC), cv::Size(300, 300));



	cv::imshow("imagem original", imagem);
	cv::imshow("imagem frontal do palco1 do tdc", palco1);
	cv::imshow("imagem frontal do palco2 do tdc", palco2);
	cv::imshow("imagem frontal do logo tdc", TDClogo);


	cv::waitKey(0);
	return 0;
}