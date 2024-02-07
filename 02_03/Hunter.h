#pragma once
#include<stdio.h>

class Hunter
{
public:
	Hunter();

	virtual ~Hunter();

	virtual void Purr();
protected:

	const char* name_;
};

