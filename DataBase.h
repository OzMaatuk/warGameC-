#ifndef __DATABASE_H__
#define __DATABASE_H__

#include<iostream>
#include<string>
#include<vector>
#include "Player.h"

class Soldier;
class Object;
class MapItem;

class DataBase 
{
public:
	DataBase();
	~DataBase();
	void InitMap(std::size_t row, std::size_t col);
	void FillMap();
	void AddPlayerToDB(Player* other);
	void AddSoldierToDB(Soldier* other, Player::PlayerArmy playerArmy);
	void AddObjectsToDB(Object* other);

	void InitStrategy();
	std::size_t GetAmountOfPlayers() const;
	Player* GetPlayerAt(std::size_t i);
	std::vector<std::vector<MapItem*>>& getMap();
	void UpdateMap(Soldier* currentSoldier, Point2D* ActualLocation);
	void UpdateMap(Object* newObject, Point2D* point);
	void UpdateMap(Soldier* deadSoldier);
	int GetWinner() const;
	bool isSolidValid(double x, double y, std::size_t width, std::size_t length);
	bool AllPlayersDoneMove() const;

	virtual const std::string ToString() const;
	friend std::ostream& operator<<(std::ostream& out, const DataBase& data) ;
private:
	std::vector<Player*> _players;
	std::vector<Object*> _gameObjects;
	std::vector<std::vector<MapItem*>> _map; 
	int _matrixHight;
	int _matrixWidth;

	virtual void ToString(std::ostream & out) const;
};

#endif // !__DATABASE_H__
