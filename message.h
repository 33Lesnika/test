#include <iostream>
#include <string>


class Message
{
	std::string message;
	public:
		Message(std::string& message);
		std::string getMessage();
		~Message();
};
