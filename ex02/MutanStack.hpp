#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <deque>
template <typename T> class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const & src) : std::stack<T>(src) {}
	virtual ~MutantStack() {}
	iterator begin(){return this->c.begin();}
	iterator end(){return this->c.end();}
	void sort()
	{
		std::sort(this->begin(), this->end());
	}
};
#endif