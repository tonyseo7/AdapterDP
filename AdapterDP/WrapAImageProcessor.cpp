#include "stdafx.h"
#include "WrapImageProcessor.h"

WrapAImageProcessor::WrapAImageProcessor()
{
	ai_processor = new AImageProcessor();
}

WrapAImageProcessor::~WrapAImageProcessor()
{
	delete ai_processor;
}

void WrapAImageProcessor::SetSubject(string _subject)
{
	ai_processor->FindStart();
}

void WrapAImageProcessor::FindBegin()
{
	ai_processor->FindNextAnimal();
}

bool WrapAImageProcessor::FindNextPeople()
{
	return ai_processor->FindNextAnimal();
}

void WrapAImageProcessor::ImageProcessing()
{
	ai_processor->Processing();
}

string WrapAImageProcessor::GetPicture()
{
	return ai_processor->GetPicture();
}