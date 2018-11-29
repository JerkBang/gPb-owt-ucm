#include "cv.h"
#include <vector>

IplImage* G(IplImage *input, int x, int y, int angle = 0, int range = 5)
{
	IplImage* signal = cvCreateImage(input->nSize, input->depth, input->nChannels);

	//生成一张图片某个通道的信号量
	(input->imageData + x * input->widthStep)[y];

	
	return signal;
}