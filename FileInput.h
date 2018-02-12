#ifndef __FILEINPUT_H__
#define __FILEINPUT_H__

#include<vector>
#include<string>
#include"GameInput.h"

class FileInput : public GameInput 
{
public:
	FileInput(const std::string& path, std::vector<std::string> playerPaths);
	virtual ~FileInput();
	virtual std::vector<std::string> ParseFile() const;

private:
	std::string _path;

	void ReadFile(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void CheckGameHeadLine(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void CheckMap(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void CheckPlayers(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	int HowManyPlayers(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	int HowManySoldiers(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void isPlayersValid(std::ifstream & inputFile, std::vector<std::string> & allObjects, int numberOfPlayers, int numberOfSoldiers) const;

	void CheckPlayerLine(std::ifstream & inputFile, std::vector<std::string> & allObjects, std::size_t index) const;

	void CheckSoldierLine(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void CheckLocation(std::string & subLine, std::vector<std::string> & allObjects) const;

	void CheckWeapon(std::string & subLine, std::vector<std::string> & allObjects) const;

	void CheckObjects(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void CheckObjectsHeadLine(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	void CheckObjectLine(std::ifstream & inputFile, std::vector<std::string> & allObjects) const;

	bool CheckZeroDouble(std::string & subLine) const;

	std::string CheckString(std::string& subLine) const;


};

#endif // !__FILEINPUT_H__