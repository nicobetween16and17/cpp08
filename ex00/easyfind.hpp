#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T &list, int value)
{
	typename T::iterator res = std::find(list.begin(), list.end(), value);
	if (res == list.end())
		throw std::exception();
	return *res;
}

#endif