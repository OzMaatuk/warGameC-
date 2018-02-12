#ifndef __ARMOR_H__
#define __ARMOR_H__

#include "UnSolid.h"

class Armor : public UnSolid
{
public:
	Armor(double x, double y, double intensityLevel);
	virtual ~Armor() = 0;
protected:
};




#endif // !__ARMOR_H__
