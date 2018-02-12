#ifndef __M16_H__
#define __M16_H__

#include "NormalWeapon.h"

class M16 : public NormalWeapon
{
public:
	M16(double x, double y);
	virtual~M16();
	virtual const std::string ToString() const;
private:
	virtual void ToString(std::ostream& out) const;
};

#endif // !__M16_H__
