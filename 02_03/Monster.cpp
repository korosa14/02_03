#include "Monster.h"

Monster::Monster()
{
	name_ = "リオレウス";
	printf("%sが飛んでくる\n", name_);
}

Monster::~Monster()
{
	printf("%sは飛び去った\n", name_);
}

void Monster::Purr()
{
	printf("%sの咆哮が鳴っている\n", name_);
}
