#include "stdafx.h"
#include "PImageProcessor.h"

PImageProcessor::PImageProcessor(void)
{
	subject = picture = "";
	index = oindex = -1;
}

void PImageProcessor::SetSubject(string _subject)
{
	subject = _subject;
}

void PImageProcessor::FindBegin()
{
	picture = subject;
	index = -1;
	oindex = -1;
}

bool PImageProcessor::FindNextPeople()
{
	oindex = index;
	index = subject.find("people", oindex + 1);

	return index != -1;
}

void PImageProcessor::ImageProcessing()
{
	picture.replace(index, strlen("people"), "PEOPLE");
}

string PImageProcessor::GetPicture()
{
	return picture;
}