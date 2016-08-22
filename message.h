#include <string>

class Message
{
	public:
		Message(std::string& message);
		std::string getMessage() const;
		~Message();
	private:
		std::string message;
};
