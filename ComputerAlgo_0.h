#ifndef __COMPUTERALGO_0_H__
#define __COMPUTERALGO_0_H__

#include"PlayerStrategy.h"

class ComputerAlgo_0 : public PlayerStrategy
{
public:
	ComputerAlgo_0(std::size_t amountOfSoldiers, std::size_t row, std::size_t col);
	virtual ~ComputerAlgo_0();
	virtual void ActivateAlgorithm();
	virtual Object*  GetFreeObjects(std::vector<std::vector<MapItem*>>& map, Soldier* currentSoldier) const;
	virtual Soldier* GetSoldierForAttack(std::vector<std::vector<MapItem*>>& map, Soldier* currentSoldier) const;
	virtual Soldier* GetSoldierForHeal(std::vector<std::vector<MapItem*>>& map, Soldier* currentSoldier) const;
private:
	virtual Object* SelectObject(std::vector<Object*>& surroundingObjects, Soldier* currentSoldier) const;
	virtual void GenerateVector();
};

#endif // !__COMPUTERALGO_!_H__