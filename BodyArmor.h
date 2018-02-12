#ifndef __BODYARMOR_H__
#define __BODYARMOR_H__

#include "Armor.h"

class BodyArmor : public Armor
{
public:
	BodyArmor(double x, double y, double intensityLevel);
	virtual ~BodyArmor();

	virtual const std::string ToString() const;

private:
	virtual void ToString(std::ostream& out) const;
};

#endif // !__BODYARMOR_H__
