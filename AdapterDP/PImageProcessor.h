#pragma once
#include "ImageProcessor.h"
#include "common.h"

class PImageProcessor : public ImageProessor
{
	string subject;
	string picture;
	int index;
	int oindex;

public:
	PImageProcessor(void);
	void SetSubject(string _subject);
	void FindBegin();			//재정의
	bool FindNextPeople();		//재정의
	void ImageProcessing();		//재정의
	string GetPicture();		//재정의
};
