#include "Monster.h"

Monster::Monster()
{
	name_ = "���I���E�X";
	printf("%s�����ł���\n", name_);
}

Monster::~Monster()
{
	printf("%s�͔�ы�����\n", name_);
}

void Monster::Purr()
{
	printf("%s�̙��K�����Ă���\n", name_);
}
