#pragma once
#include "common.h"

class ImageProessor
{
public:
	virtual void SetSubject(string _subject) = 0;
	virtual void FindBegin() = 0;
	virtual bool FindNextPeople() = 0;
	virtual void ImageProcessing() = 0;
	virtual string GetPicture() = 0;
};