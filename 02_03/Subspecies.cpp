#include "Subspecies.h"

Subspecies::Subspecies()
{
	name_ = "リオレウス亜種";
	printf("%sが飛んでくる\n", name_);
}

Subspecies::~Subspecies()
{
	printf("%sは飛び去った\n", name_);
}

void Subspecies::Purr()
{
	printf("%sの咆哮が鳴っている\n", name_);
}
