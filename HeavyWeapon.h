#ifndef __HEAVYWEAPON_H__
#define __HEAVYWEAPON_H__

#include "Weapon.h"

class HeavyWeapon : public Weapon
{
public:
	HeavyWeapon(double x, double y, int numberOfShoots, double intensityLevel);
	virtual ~HeavyWeapon() = 0;
};

#endif // !__HEAVYWEAPON_H__
