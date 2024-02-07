#pragma once
#include"Hunter.h"

class Subspecies:public Hunter
{
public:

	Subspecies();
	~Subspecies() override;

	void Purr() override;
};

