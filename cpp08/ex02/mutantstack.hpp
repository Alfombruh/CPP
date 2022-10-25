#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

class MutantStack{
	private:
		std::stack stack;

	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &);

		MutantStack &operator=(MutantStack const &);
};

#endif
