#include <iostream>
#include <vector>

int Anton_and_Polyhedrons(std::vector<std::string> vs);

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::string> polyhedron;
	while (n--)
	{
		std::string tempPolyhedron;
		std::cin >> tempPolyhedron;
		polyhedron.push_back(tempPolyhedron);
	}
	std::cout << Anton_and_Polyhedrons(polyhedron) << std::endl;
	return 0;
}

int Anton_and_Polyhedrons(std::vector<std::string> vs)
{
	int count(0);
	for (std::vector<std::string>::iterator it(vs.begin()); it != vs.end(); ++it)
	{
		if (*it == "Tetrahedron")
			count += 4;
		else if (*it == "Cube")
			count += 6;
		else if (*it == "Octahedron")
			count += 8;
		else if (*it == "Dodecahedron")
			count += 12;
		else if (*it == "Icosahedron")
			count += 20;
	}
	return count;
}