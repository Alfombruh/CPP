#include "mutantstack.hpp"

//CONSTRUCTORS//
template<typename T>
MutantStack<T>::MutantStack(void): std::stack<T>(){}
template<typename T>
MutantStack<T>::~MutantStack(void){}
template<typename T>
MutantStack<T>::MutantStack(MutantStack const &r): std::stack<T>(r){}
//OPERATOR//
template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &r){
	this->c = r.c;
	return *this;
}
//METHODS//
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void){
	return (this->c.begin());
}
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void){
	return (this->c.end());
}
