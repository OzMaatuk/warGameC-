#ifndef __GAMEINPUT_H__
#define __GAMEINPUT_H__

#include<vector>
#include<string>

class GameInput 
{
public:
	GameInput(std::vector<std::string>& playerPaths);
	virtual ~GameInput() = 0;
	virtual std::vector<std::string> ParseFile() const = 0 ;
	std::string& GetPlayerPath(std::size_t playerNumber);
	
private:
	std::vector<std::string> _playerPaths;
};


#endif // !__GAMEINPUT_H__
