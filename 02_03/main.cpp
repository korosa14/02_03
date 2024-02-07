#include <stdio.h>
#include "Monster.h"
#include"Subspecies.h"

int main()
{
	printf("oŒ»\n");
	Hunter* Cars[2];

	Cars[0] = new Monster;
	Cars[1] = new Subspecies;

	printf("\n™ôšK\n");

	Cars[0]->Purr();
	Cars[1]->Purr();

	printf("\n“¦‘–\n");
	for (int i = 0; i < 2; i++)
	{
		delete Cars[i];
	}

	return 0;
}