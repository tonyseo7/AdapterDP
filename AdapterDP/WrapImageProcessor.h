#pragma once
#include "ImageProcessor.h"
#include "AImageProcessor.h"

class WrapAImageProcessor : public ImageProessor
{
	AImageProcessor *ai_processor;

public:

	WrapAImageProcessor();
	~WrapAImageProcessor();

	void SetSubject(string _subject);		//������
	void FindBegin();		//������
	bool FindNextPeople();		//������
	void ImageProcessing();		//������
	string GetPicture();		//������
};