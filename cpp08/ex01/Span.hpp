#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

private:
	unsigned int _N;
	std::vector<int> _vector;

public:
	Span();
	Span(unsigned int N);
	Span(const Span&);
	~Span();

	Span& operator=(const Span& f);

	void	addNumber(int n);
	void	addNumber(std::vector<int>::iterator it,int n, int number);
	void	addNumber(std::vector<int>::iterator it,std::vector<int> vct);
	int		shortestSpan();
	int		longestSpan();
};

#endif