#include<opencv2/core.hpp>//opencv �⺻���� �ڷᱸ�� �ڵ����α׷�
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
	//RGB����
	image = imread("Lena.png", IMREAD_GRAYSCALE);
	//GRAY����
	if (image.empty()) {
		cout << "Could not open or find the image" << endl;
		return -1;
	}
	//namedWindow("Original", WINDOW_AUTOSIZE); 
	//������ �����Ұ�
	//namedWindow("Original", WINDOW_NORMAL);
	//������ ��������
	//namedWindow("Original", WND_PROP_FULLSCREEN);
	//setWindowProperty("Original", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
	//��üȭ��
	//namedWindow��������
	Canny(image, image, 50, 150);
	imshow("Original", image);
	waitKey(0);
	return 0;
}