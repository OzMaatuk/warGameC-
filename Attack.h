#ifndef __ATTACK_H__
#define __ATTACK_H__

#include "GameLogic.h"

class Soldier;
class DataBase;
class MapItem;

class Attack : public GameLogic
{
public:
	Attack(std::vector<std::vector<MapItem*>>& map, Soldier* target, Soldier* toHeal);
	virtual ~Attack();
	virtual void visitNormal(NormalSoldier* normalSoldier);
	virtual void visitSniper(SniperSoldier* sniperSoldier);
	virtual void visitMedic(MedicSoldier* medicSoldier);
private:
	Soldier * _target;
	Soldier * _toHeal;
	void GenericAttack(Soldier* mySoldier);
};


#endif // !__ATTACK_H__