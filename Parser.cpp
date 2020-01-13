#include "Parser.h"
#include <iostream>
int FromStrToNumber(char str[], int size)// char
{
	int number = 0;
	for (int i = 0; i < size; i++)
	{
		int digit = 0;
		digit = (int)str[i] - (int) '0';
		number = number * 10 + digit;
	}
	return number;
}
int FromStrToNumber(std::string str)// string
{
	int number = 0;
	for (int i = 0; i < str.size(); i++)
	{
		int digit = 0;
		digit = (int)str[i] - (int) '0';
		number = number * 10 + digit;
	}
	return number;
}
void Parser::parse(std::string str)
{
	if (str[0] == 'M')//
	{
		int i = 0;
		while (str[i] != '.')
		{
			std::string strx;
			i++;
			int PlayerNum = 0;
			int x = 0;
			int y = 0;
			int GameObjNum = 0;
			if (str[i] == 'P')
			{
				PlayerNum=str[i + 1]- (int) '0';
				std::cout << "PlayrNum=" << PlayerNum << std::endl;
			}
			if (str[i] == 'N')
			{
				i++;
					while (str[i] != ',')
					{
						strx += std::to_string(FromStrToNumber(&str[i], 1));
						i++;
					}
					GameObjNum = FromStrToNumber(strx);;
					std::cout << "GameObjNum=" << GameObjNum << std::endl;
			}
			if (str[i] == 'X')
			{
				i++;
				strx.clear();;
				while (str[i] != ',')
				{
					strx+= std::to_string(FromStrToNumber(&str[i], 1));
					i++;
				}
				x = FromStrToNumber(strx);;
				std::cout << "X=" << x << std::endl;
			}
			
		    if (str[i] == 'Y')
			{
				i++;
				strx.clear();;
				while (str[i] != ',')
				{
					strx += std::to_string(FromStrToNumber(&str[i], 1));
					i++;
				}
				y = FromStrToNumber(strx);;
				std::cout << "Y=" << y << std::endl;
			}

		}
	}
	if (str[0] == 'A')//
	{
		int i = 0;
		while (str[i] != '.')
		{
			i++;
			std::string strx;
			int PlayerNum = 0;
			int GameObjNum = 0;
			if (str[i] == 'P'&& str[i+1]=='A')
			{
				PlayerNum = str[i + 2] - (int) '0';
				std::cout << "PlayrANum=" << PlayerNum<<std::endl;
			}
			if (str[i] == 'N' && str[i + 1] == 'A')
			{
				i+=2;
				while (str[i] != ',')
				{
					strx += std::to_string(FromStrToNumber(&str[i], 1));
					i++;
				}
				GameObjNum = FromStrToNumber(strx);;
				std::cout << "GameObjANum=" << GameObjNum <<std::endl;
			}
			if (str[i] == 'P' && str[i + 1] == 'D')
			{
				PlayerNum = str[i + 2] - (int) '0';
				std::cout << "PlayrDNum=" << PlayerNum <<std::endl;
			}
			if (str[i] == 'N' && str[i + 1] == 'D')
			{
			   i+=2;
			   while (str[i] != ',')
			   {
				  strx += std::to_string(FromStrToNumber(&str[i], 1));
				  i++;
			   }
			GameObjNum = FromStrToNumber(strx);;
			std::cout << "GameObjDNum=" << GameObjNum <<std::endl;
			}
			
		}
	}
	if (str[0] == 'B')//
	{
		int i = 0;
		while (str[i] != '.')
		{
			i++;
			std::string strx;
			int PlayerNum = 0;
			int GameObjNum = 0;
			if (str[i] == 'P')
			{
				PlayerNum = str[i + 1] - (int) '0';
				std::cout << "PlayrNum=" << PlayerNum << std::endl;
			}
			if (str[i] == 'N')
			{
				i++;
				while (str[i] != ',')
				{
					strx += std::to_string(FromStrToNumber(&str[i], 1));
					i++;
				}
				GameObjNum = FromStrToNumber(strx);;
				std::cout << "GameObjNum=" << GameObjNum << std::endl;
			}
		}
	}
	else
	{
		std::cout << "Immposible move!" << std::endl;
	}

}