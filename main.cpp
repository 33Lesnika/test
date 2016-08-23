#include <iostream>
#include <string>
#include "message.h"

int main(void)
{
	std::string msg = "Test Message";
	Message m(msg);
	std::cout << m.getMessage() << std::endl;
    return 0;
}
