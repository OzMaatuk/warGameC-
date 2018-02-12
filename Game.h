#ifndef __GAME_H__
#define __GAME_H__

#include<iostream>
#include<string>
#include<vector>

#include "DataBase.h"
#include "InData.h"
#include "OutData.h"


class Game 
{
public:
	Game(const std::vector<std::string>& paths);
	~Game();
	void MainLoop();

private:
	std::string _initPath;
	std::vector<std::string> _playersPaths;
	std::string _outPath;

	DataBase _entities;
	InData _inputData;
	OutData _outputData;

	void PrintIteration();
	void PrintFinal(int playerNumber);
};
#endif // !__GAME_H__

