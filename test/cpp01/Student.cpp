#include <iostream>
#include <string>

class newStudent{
	private:

		std::string	_login;

	public:

		newStudent() :_login("ldefault"){
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~newStudent(){
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

class Student{
	private:

		std::string	_login;

	public:

		Student(std::string login) :_login(login){
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student(){
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student		bob = Student("bfubar");
	Student		*jim = new Student("jfubar");
	newStudent		*students = new newStudent[42];

	delete [] students;
	delete jim;

	return 0;
}
