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
	void FindBegin();			//������
	bool FindNextPeople();		//������
	void ImageProcessing();		//������
	string GetPicture();		//������
};
