#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template<typename T>
class Array{
	private:
		T value;
		Array<T> *next;
		Array<T>();
		Array<T>(T const &);
		Array(unsigned const int i);
		~Array<T>();
	public:
		void *operator new[](std::size_t i){
			if (i == 0)
				return NULL;
			value = NULL;
			for (std::size_t j = 0; j < i;j++){
				value = 0;
				this = next;
			}
			next = NULL
		};
		T &operator[](unsigned int i)const;

		class	ExceptionOutOfLimits: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "Array Out of Limits";
				}
		};

		static unsigned int size(){
			
		};
};

#endif
