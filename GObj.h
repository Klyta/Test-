#pragma once
#include <stack>
#include <string>
#include <iostream>
#include "Action.h"
class GObj
{
	public:
		virtual std::string toString();
		virtual Action* doAction(std::string);
};

