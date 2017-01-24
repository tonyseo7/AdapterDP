#pragma once

#include "common.h"

class AImageProcessor
{
	string image;
	string picture;
	int index;
	int oindex;

public:
	AImageProcessor(void);
	void SetOrigin(string _image);
	void FindStart();
	bool FindNextAnimal();
	void Processing();
	string GetPicture();

};
