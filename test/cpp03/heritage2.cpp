class Quadruped{
	private:
		std::string	name; //Only accessible from a quadruped object
	protected:
		Leg		legs[4]; //Only accesible from a Quadruped or derived object
	public:
		void	run();//Accesible from wherever
};

class Dog: public Quadruped{ // Can access run() and legs
	
};

int main(){ // can only acces run()
	
}

//things to lookfor:
//cpp inheritance->				https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
//cpp multiple inheritance->	https://www.javatpoint.com/multiple-inheritance-in-cpp
//cpp diamond inheritance->		https://www.makeuseof.com/what-is-diamond-problem-in-cpp/
