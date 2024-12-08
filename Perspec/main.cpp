#include <opencv2/core.hpp>
#include<opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>



/*
CORDENADAS PIXEL

 v1 = 7, 176
 v2 = 426, 45
 v3 = 127, 396
 v4 = 587, 234


*/


int main(int argc, char** argv) {

	float larg = 900, autura = 500;

	std::string path = "sandisk.png";
	cv::Mat base = cv::imread(path), visaofrontal;


	cv::Point2f origem[4] = { {7, 176},{426, 45},{127, 396},{587, 234} };
	cv::Point2f frontalnovo[4] = { {0,0},{larg,0},{0,autura},{larg,autura} };

	cv::warpPerspective(base, visaofrontal, cv::getPerspectiveTransform(origem, frontalnovo), cv::Size(larg, autura));



	cv::imshow("imagem natural", base);
	cv::imshow("imagem frontal", visaofrontal);



	cv::waitKey(0);
	return 0;
}