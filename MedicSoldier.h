#ifndef __MEDICSOLDIER_H__
#define __MEDICSOLDIER_H__

#include "Soldier.h"

class MedicSoldier : public Soldier
{
public:
	MedicSoldier(double x, double y, long position, SoldierIsInArmyOf soldierArmy);
	virtual ~MedicSoldier();

	double ChanceToHit(double distance) const;
	void Activate(GameLogic& api);
	virtual void Heal();
	const std::string ToString() const;
private:
	void ToString(std::ostream& out) const;
};

#endif // !__MEDICSOLDIER_H__
