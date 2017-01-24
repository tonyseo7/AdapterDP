#include "stdafx.h"
#include "Camera.h"
#include "WrapImageProcessor.h"
#include "PImageProcessor.h"


void main()
{
	ImageProessor *ips[2];
	ips[0] = new PImageProcessor();
	ips[1] = new WrapAImageProcessor();

	Camera *ca = new Camera(ips[0]);

	string picture = ca->TakeAPicture("people animal people plant");
	cout << picture << endl;
	ca->UpgradeFirmWare(ips[1]);
	picture = ca->TakeAPicture("people animal people plant");
	cout << picture << endl;

	delete ca;
	delete ips[0];
	delete ips[1];

}