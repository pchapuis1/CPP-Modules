#include "Span.hpp"

Span::Span(): _N(0){

}

Span::Span(unsigned int N): _N(N){

}

Span::Span(const Span& rhs){
	_N = rhs._N;
}

Span::~Span(){
}

Span& Span::operator=(const Span& rhs){
	if (this != &rhs){
		_N = rhs._N;
	}
	return *this;
}

void	Span::addNumber(int n){
	if (_vector.size() >= _N)
		throw std::exception();
	_vector.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator it, int n, int number){
	if (_vector.size() + n > _N)
		throw std::exception();
	std::vector<int> vct(n, number);
	_vector.insert(it, vct.begin(), vct.end());
}

void	Span::addNumber(std::vector<int>::iterator it,std::vector<int> vct){
	if (_vector.size() + vct.size() > _N)
		throw std::exception();
	_vector.insert(it, vct.begin(), vct.end());
}

int		Span::shortestSpan(){
	if (_vector.size() <= 1)
		throw std::exception();
	std::vector<int> tmp_vector = _vector;
	std::sort(tmp_vector.begin(), tmp_vector.end());
	int	min = tmp_vector[1] - tmp_vector[0];
	for (unsigned int i = 1; i < _vector.size() - 1; i ++){
		if (tmp_vector[i + 1] - tmp_vector[i] < min)
			min = tmp_vector[i + 1] - tmp_vector[i];
	}
	return (min);
}

int		Span::longestSpan(){
	if (_vector.size() <= 1)
		throw std::exception();
	std::vector<int> tmp_vector = _vector;
	std::sort(tmp_vector.begin(), tmp_vector.end());
	return (tmp_vector[tmp_vector.size() - 1] - tmp_vector[0]);
}
