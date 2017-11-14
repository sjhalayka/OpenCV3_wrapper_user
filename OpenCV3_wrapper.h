#pragma once

//#define DLL_EXPORT

#if defined DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif


#include <vector>
using namespace std;

#pragma comment(lib, "OpenCV3_wrapper.lib")


DECLDIR void get_gray_image(int rows, int cols, vector<float> &img_data);