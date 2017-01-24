#include "stdafx.h"
#include "Camera.h"

Camera::Camera(ImageProessor *_img_processor) :img_processor(_img_processor) {}

string Camera::TakeAPicture(string subject)
{
	img_processor->SetSubject(subject);
	img_processor->FindBegin();

	while(img_processor->FindNextPeople()) 
	{ 
		img_processor->ImageProcessing(); 
	}
	
	return img_processor->GetPicture();
}


void Camera::UpgradeFirmWare(ImageProessor *_img_processor)
{
	_img_processor = _img_processor;
}