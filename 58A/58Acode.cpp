#include <iostream>

bool Chat_room(std::string s);

int main(void)
{
	std::string word;
	std::cin >> word;
	if (Chat_room(word))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}

bool Chat_room(std::string s)
{
	bool h1 = false;
	bool e2 = false;
	bool l3 = false;
	bool l4 = false;
	bool o5 = false;
	for (std::string::iterator it(s.begin()); it != s.end(); ++it)
	{
		if (h1){
			if (e2){
				if (l3){
					if (l4){
						if (o5){
							break;}
						else{
							if (*it == 'o')
								o5 = true;}}
					else{
						if (*it == 'l')
							l4 = true;}}
				else{
					if (*it == 'l')
						l3 = true;}}
			else{
				if (*it == 'e')
					e2 = true;}}
		else{
			if (*it == 'h')
				h1 = true;}
	}
	return h1 && e2 && l3 && l4 && o5;
}