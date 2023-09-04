#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	std::vector<int> _lst;
	size_t _n;
public:
	typedef std::vector<int>::iterator iterator;
	Span(int n);
	~Span();
	Span(const Span &c);
	Span &operator=(const Span &c);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	void addRange(iterator begin, iterator end);
	void printSpan();
};
#endif