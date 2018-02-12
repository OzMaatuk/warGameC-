#ifndef __INDATA_H__
#define __INDATA_H__

#include<vector>
#include "Player.h"

class DataBase ;
class GameInput;

class InData 
{
public:
	InData(DataBase& entities);
	virtual ~InData();
	void SetInputDataType(GameInput* chosenInput);
	void Init();

private:
	DataBase  * _entities;
	GameInput * _dataFormat;

	void CreateMap(const std::vector<std::string> & data) const;

	std::size_t CreatePlayersAndSoldiers(const std::vector<std::string> & data) const;
	
	Player* CreatePlayer(const std::vector<std::string> & data, std::size_t numberOfSoldiers, std::size_t& fieldsCount, std::size_t currentIndex, std::size_t playerNumber, std::size_t amountOfSoldiers) const;

	PlayerStrategy * ChooseStrategy(int strategy, std::size_t playerNumber, std::size_t amountOfSoldiers, std::size_t row, std::size_t col) const;
	
	Player::PlayerArmy ChooseArmy(std::size_t playerNumber) const;

	std::size_t CreateSoldier(const std::vector<std::string> & data, Player::PlayerArmy playerArmy, std::size_t position, std::size_t currentIndex) const;
	
	Soldier::SoldierIsInArmyOf SetSoldierArmy(Player::PlayerArmy playerArmy) const;

	void CreateFreeObjects(const std::vector<std::string> & data, std::size_t currentIndex) const;

	std::size_t CreateObject(const std::vector<std::string> & data, std::size_t currentIndex) const;

	void CreateWeaponObject(const std::vector<std::string> & data, std::size_t currentIndex) const;

	void CreateArmorObject(const std::vector<std::string> & data, std::size_t currentIndex) const;

	void CreateSolidObject(const std::vector<std::string> & data, std::size_t currentIndex) const;
};
#endif // !__INDATA_H__