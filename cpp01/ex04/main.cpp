#include <iostream>
#include <fstream>
#include <string>

int	errorMessage(std::string str){
	std::cout << "\e[1;91m";
	std::cout << str << "\033[0;0m" << std::endl;
	return 1;
}

int main(int argc, char **argv){
	if (argc != 4)
		return errorMessage("program must have 3 arguments");

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	temp;
	std::string	str;

	if (s1.empty() || s2.empty())
		return errorMessage("s1 & s2 shall not be empty");

	for (std::string::size_type i = 0; i < filename.length(); ++i)
		filename[i] = std::toupper(filename[i]);
	filename += ".replace";

	std::ifstream	ifs(argv[1]);
	std::ofstream	ofs(filename);

	size_t i = 0;
	while (std::getline(ifs, temp)){
		while ((i = temp.find(s1, i)) != (size_t) -1){
			temp.erase(i, s1.length());
			temp.insert(i, s2);
			i += s1.length();
		}
		i = 0;
		ofs << temp;
		ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}
