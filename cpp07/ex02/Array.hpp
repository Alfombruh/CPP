#ifndef ARRAY_HPP
#define ARRAY_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

#include <stdexcept>
#include <iostream>

template<typename T>
class Array{
	private:
		T *ptr;
		unsigned int pSize;
	public:
				//CONSTRUCTORS
		Array<T>(): ptr(0), pSize(0){
		};
		Array<T>(unsigned const int i){
			pSize = i;
			if (i < 0)
				throw ExceptionOutOfLimits();
			ptr = new T[i];
		};
		Array<T>(Array const &r): pSize(0){
			*this = r;
		};
		~Array<T>(){
			delete [] (ptr);
		};

				//OPERATORS
		Array<T> &operator=(Array const &r){
			if (pSize > 0)
				delete[] ptr;
			pSize = r.pSize;
			ptr = new T[r.pSize];
			for (unsigned int i = -1; i < pSize; ++i){
				ptr[i] = r.ptr[i];
			}
			return *this;
		};

		T &operator[](unsigned int i)const{
			if (i >= (unsigned int)pSize){
				throw ExceptionOutOfLimits();
			}
			return ptr[i];
		};

				//METHODS
		unsigned int size()const{
			return pSize;			
		};

				//EXCEPTIONS
		class	ExceptionOutOfLimits: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "Array Out of Limits";
				}
		};
};
#endif
