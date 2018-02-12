#ifndef __GAMEVIEW_H__
#define __GAMEVIEW_H__

#include<fstream>
#include<sstream>
class DataBase;

class GameView
{
public:
	GameView();
	virtual ~GameView() = 0;
	virtual void CurrentStatus(DataBase* entities) const = 0;
	virtual void FinalStatus(DataBase* entities, int playerNumber) const = 0;

protected:
};



#endif // !__GAMEVIEW_H__
