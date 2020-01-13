#pragma once
#include <string>
class Action
{
private:
	const std::string str;
public:
	Action(std::string);
	std::string getStr();
};

