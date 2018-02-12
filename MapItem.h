#ifndef __MAPITEM_H__
#define __MAPITEM_H__

#include "Point2D.h"
#include "Soldier.h"
#include<vector>

class MapItem
{
public:
	MapItem();
	~MapItem();
	void AddSoldierToMapItem(Soldier* other);
	void RemoveSoldierFromMapItem(Soldier* other);
	void AddObjectToMapItem(Object* other);
	void RemoveObjectFromMapItem(Object* other);

	std::vector<Soldier*>& getInPlaceSoldiers();
	std::vector<Object*>& getInPlaceObject();
	bool GetIsSolid() const;
	void SetIsSolid(bool isSolid);

private:
	std::vector<Soldier*> _inPlaceSoldier;
	std::vector<Object*> _inPlaceObjects;
	int findSoldier(Soldier* soldier);
	int findObject(Object* object);
	bool _isSolid;
};
#endif // !__MAPITEM_H__