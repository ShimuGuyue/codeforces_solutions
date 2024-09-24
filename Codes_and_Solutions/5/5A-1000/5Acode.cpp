#include <iostream>
#include <string>
#include <map>

void Chat_Server_s_Outgoing_Traffic();

int main(void)
{
	Chat_Server_s_Outgoing_Traffic();
	return 0;
}

void Chat_Server_s_Outgoing_Traffic()
{
	std::map<std::string, int> names;
	int sum(0);
	std::string command;
	while (getline(std::cin, command))
	{
		if(command.front() == '+')
		{
			std::string name(command.begin() + 1, command.end());
			++names[name];
		}
		else if (command.front() == '-')
		{
			std::string name(command.begin() + 1, command.end());
			names.erase(name);
		}
		else
		{
			int count(0);
			for (int i(command.size() - 1); command[i] != ':'; --i)
			{
				++count;
			}
			sum += count * names.size();
		}
	}
	std::cout << sum << std::endl;
}