#pragma once
#include "ImageProcessor.h"

class Camera
{
	ImageProessor *img_processor;

public:
	Camera(ImageProessor *_imag_processor);
	string TakeAPicture(string subject);
	void UpgradeFirmWare(ImageProessor *_img_processor);

};
