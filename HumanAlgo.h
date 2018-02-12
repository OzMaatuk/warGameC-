#ifndef __HUMANALGO_H__
#define __HUMANALGO_H__

#include<string>
#include"PlayerStrategy.h"

class HumanAlgo : public PlayerStrategy
{
public:
	HumanAlgo(std::size_t amountOfSoldiers, std::size_t row, std::size_t col, std::string path);
	virtual ~HumanAlgo();
	virtual void ActivateAlgorithm();
	virtual Object* GetFreeObjects(std::vector<std::vector<MapItem*>>& map, Soldier* currentSoldier) const;
	virtual Soldier* GetSoldierForAttack(std::vector<std::vector<MapItem*>>& map, Soldier* currentSoldier) const;
	virtual Soldier* GetSoldierForHeal(std::vector<std::vector<MapItem*>>& map, Soldier* currentSoldier) const;
private:
	std::string _path;
	virtual Object* SelectObject(std::vector<Object*>& surroundingObjects, Soldier* currentSoldier) const;
	virtual void GenerateVector();
	void ReadFile(std::ifstream & inputFile);
	void ReadPlayerHeadLine(std::ifstream & inputFile) const;
	void ReadSoldier(std::ifstream & inputFile, std::size_t soldierPosition);
	void CheckAndSetLocation(const std::string & subLine, std::size_t soldierPosition);
	bool CheckZeroDouble(const std::string & subLine) const;
	std::string CheckString(std::string & subLine) const;
};

#endif // !__HUMANALGO_H__