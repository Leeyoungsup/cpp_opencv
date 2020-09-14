#include<opencv2/core.hpp>//opencv 기본적인 자료구조 코딩프로그램
#include<opencv2/imgcodecs.hpp> 
#include<opencv2/highgui.hpp>
#include<iostream>
#include<opencv2/imgproc.hpp>
//#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main() {
	Mat image;
	//image = imread("Lena.png",IMREAD_COLOR);
	//RGB영상
	image = imread("Lena.png", IMREAD_GRAYSCALE);
	//GRAY영상
	if (image.empty()) {
		cout << "Could not open or find the image" << endl;
		return -1;
	}
	//namedWindow("Original", WINDOW_AUTOSIZE); 
	//사이즈 조정불가
	//namedWindow("Original", WINDOW_NORMAL);
	//사이즈 조정가능
	//namedWindow("Original", WND_PROP_FULLSCREEN);
	//setWindowProperty("Original", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
	//전체화면
	//namedWindow생략가능
	Canny(image, image, 50, 150);
	imshow("Original", image);
	waitKey(0);
	return 0;
}