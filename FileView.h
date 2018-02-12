#ifndef __FILEVIEW_H__
#define __FILEVIEW_H__

#include "GameView.h"

#include<fstream>

class FileView : public GameView
{
public:
	FileView(const std::string& path);
	virtual ~FileView();
	virtual void CurrentStatus(DataBase* entities) const;
	virtual void FinalStatus(DataBase* entities, int playerNumber = -1)  const;
private:
	std::string _outPath;

	void WriteToFile(DataBase* entities, bool isEnd, int playerNumber = -1) const;

};





#endif // !__FILEVIEW_H__
