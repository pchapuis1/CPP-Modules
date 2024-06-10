#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template< typename T >
class Array {
	private:
		T	*_array;
		unsigned int	_n;

	public:
		Array(): _n(0){
			_array = new T[0];
		}

		Array(unsigned int n): _n(n){
			_array = new T[n];
		}

		Array(const Array& rhs){
			_n = rhs._n;
			_array = new T[_n];
			for (unsigned int i = 0; i < _n; i ++){
				_array[i] = rhs._array[i];
			}	
		}

		~Array(){
			delete[] _array;
		}

		Array& operator=(const Array& rhs){
			if (this != &rhs){
				_n = rhs->_n;
				delete[] _array;
				_array = new T[_n];
				for (unsigned int i = 0; i < _n; i ++){
					_array[i] = rhs->_array[i];
				}
			}
			return *this;
		}

		T& operator[](unsigned int idx){
			if (idx >= _n)
				throw outOfBoundsException();
			return (_array[idx]);
		}

		unsigned int	size(){
			return (_n);
		}

		class outOfBoundsException : public std::exception {
			public : 
				virtual const char*	what() const throw() {return "The index is out of Bounds";}
		};
};


#endif