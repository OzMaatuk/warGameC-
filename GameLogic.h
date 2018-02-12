#ifndef __GAMELOGIC_H__
#define __GAMELOGIC_H__

#include<vector>

class Soldier;
class Object;
class NormalSoldier;
class SniperSoldier;
class MedicSoldier;
class DataBase;
class MapItem;

class GameLogic
{
public:
	GameLogic(std::vector<std::vector<MapItem*>>& map);
	virtual ~GameLogic() = 0;
	virtual void visitNormal(NormalSoldier* normalSoldier) = 0;
	virtual void visitSniper(SniperSoldier* sniperSoldier) = 0;
	virtual void visitMedic(MedicSoldier* medicSoldier) = 0;
protected:
	std::vector<std::vector<MapItem*>> _map;
};

#endif // !__GAMELOGIC_H__