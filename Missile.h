#ifndef __MISSILE_H__
#define __MISSILE_H__

#include "HeavyWeapon.h"

class Missile : public HeavyWeapon
{
public:
	Missile(double x, double y);
	virtual ~Missile();
	virtual const std::string ToString() const;
private:
	virtual void ToString(std::ostream& out) const;
};

#endif // !__MISSILE_H__
