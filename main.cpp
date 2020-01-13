#include<iostream>
#include<string>
#include"Action.h"
#include"Parser.h"

int main()
{
	std::string action;
	std::cout << "Your move-";
	std::cin >> action;
	std::cout <<std::endl;
	Action a(action);
	std::cout<<a.getStr();
	Parser::parse(a.getStr());

}