#pragma once

//#define DLL_EXPORT

#if defined DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif


#pragma comment(lib, "OpenCV3_wrapper.lib")


#include <opencv2/opencv.hpp>
using namespace cv;



DECLDIR void get_gray_mat(int rows, int cols, cv::Mat &mat);