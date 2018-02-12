#ifndef __COLLECTOBJECT_H__
#define __COLLECTOBJECT_H__

#include "GameLogic.h"
#include "Object.h"
#include <vector>

class MapItem;

class CollectObject : public GameLogic
{
public:
	CollectObject(std::vector<std::vector<MapItem*>>& map, Object* targetObject);
	virtual ~CollectObject();
	virtual void visitNormal(NormalSoldier* normalSoldier);
	virtual void visitSniper(SniperSoldier* sniperSoldier);
	virtual void visitMedic(MedicSoldier* medicSoldier);

private:
	Object* _targetObject;
	void Collect(Soldier* currentSoldier);
};

#endif // !__COLLECTOBJECT_H__