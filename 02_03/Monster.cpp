#include "Monster.h"

Monster::Monster()
{
	name_ = "ƒŠƒIƒŒƒEƒX";
	printf("%s‚ª”ò‚ñ‚Å‚­‚é\n", name_);
}

Monster::~Monster()
{
	printf("%s‚Í”ò‚Ñ‹‚Á‚½\n", name_);
}

void Monster::Purr()
{
	printf("%s‚Ì™ôšK‚ª–Â‚Á‚Ä‚¢‚é\n", name_);
}
