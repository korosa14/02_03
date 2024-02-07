#pragma once
#include"Hunter.h"
class Monster:public Hunter
{
public:

	Monster();
	~Monster();

	void Purr() override;
};

