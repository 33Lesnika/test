#include <string>
#include "message.h"

Message::Message(std::string& message)
:message(message)
{
}

std::string Message::getMessage()
{
	return message;
}

