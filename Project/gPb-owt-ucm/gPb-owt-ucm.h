#pragma once
#include "cv.h"

//生成特征信号
//*center是模板的中心点
//*angle是偏置角度，默认为0
void G(CvPoint center, int angle = 0);

void Pb_detector();