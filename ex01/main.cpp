#include "Span.hpp"


int main()
{
	try
	{
		std::vector<int> range;
		for (int i = 0; i < 13; ++i) {
			range.push_back(rand() % 100 + 1);
		}
		Span s(13);
		s.addRange(range.begin(), range.end());

		s.printSpan();
		std::cout << "shortest = "<<s.shortestSpan() << "\n";
		std::cout << "longest = "<<s.longestSpan() << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << "error\n" << e.what();
	}
}
//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return 0;
//}