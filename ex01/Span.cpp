#include "Span.hpp"

Span::Span(int n): _n((size_t)n){
	std::cout << "created a span of " << _n << " integers\n";
}

Span::~Span() {

}

Span &Span::operator=(const Span &c) {
	if (this == &c)
		return *this;
	_n = c._n;
	_lst = c._lst;
	return *this;
}

Span::Span(const Span &c) {
	*this = c;
}

void Span::addNumber(int n) {
	_lst.size() == _n ? throw std::exception() : _lst.push_back(n);
}

void Span::addRange(iterator begin, iterator end) {
	if (begin == end)
		return ;
	do
	{
		addNumber(*begin);
	}
	while (++begin != end);

}

int Span::shortestSpan() {
	std::vector<int> cpy(_lst);
	if (cpy.size() < 2)
		throw std::exception();
	std::sort(cpy.begin(), cpy.end());
	int shortest_span;
	shortest_span = cpy[1] - cpy[0];
	if (!shortest_span)
		return shortest_span;
	for (unsigned int i = 0; i < cpy.size() - 1; ++i) {
		if (shortest_span > cpy[i + 1] - cpy[i])
			shortest_span = cpy[i + 1] - cpy[i];
	}
	return shortest_span;
}

int Span::longestSpan() {
	std::vector<int> cpy = _lst;
	if (cpy.size() < 2)
		throw std::exception();
	std::sort(cpy.begin(), cpy.end());

	return cpy[cpy.size() - 1] - cpy[0];
}

void Span::printSpan() {
	if (!_lst.size())
		return ;
	std::cout << "[";

	for (size_t i = 0; i < _lst.size(); ++i) {
		i == _lst.size() - 1 || _lst.size() == 1 ?  std::cout << _lst[i]  : std::cout << _lst[i] << " ";
	}
	std::cout << "]\n";
}