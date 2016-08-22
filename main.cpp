#include <string>
#include <iostream>
#include "message.h"

int main()
{
	std::string msg = "Test Message";
	Message m(msg);
	std::cout << m.getMessage() << std::endl;
	return 0;
};
