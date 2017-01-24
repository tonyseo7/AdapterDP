#pragma once
#include "ImageProcessor.h"
#include "AImageProcessor.h"

class WrapAImageProcessor : public ImageProessor
{
	AImageProcessor *ai_processor;

public:

	WrapAImageProcessor();
	~WrapAImageProcessor();

	void SetSubject(string _subject);		//재정의
	void FindBegin();		//재정의
	bool FindNextPeople();		//재정의
	void ImageProcessing();		//재정의
	string GetPicture();		//재정의
};