#include "stdafx.h"
#include "AImageProcessor.h"

AImageProcessor::AImageProcessor(void)
{
	image = picture = "";
	index = oindex = -1;
}

void AImageProcessor::SetOrigin(string _image)
{
	image = _image;
}

void AImageProcessor::FindStart()
{
	picture = image;
	index = -1;
	oindex = -1;
}

bool AImageProcessor::FindNextAnimal()
{
	oindex = index;
	index = image.find("animal", oindex + 1);
	return index != -1;
}

void AImageProcessor::Processing()
{
	picture.replace(index, strlen("animal"), "ANIMAL");
}

string AImageProcessor::GetPicture()
{
	return picture;
}