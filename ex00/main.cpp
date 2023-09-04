#include "easyfind.hpp"

int main(int ac, char **av)
{
	int to_find;
	if (ac != 2)
		to_find = 2;
	else
		to_find = atoi(av[1]);
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);

	try
	{
		std::cout << easyfind(v, to_find) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "not in the list\n";
	}
	return 0;
}