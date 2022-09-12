#include <iostream>
#include <fstream>
//program that takes as argv a filename and 2 strings (not empty)
//then it opens. filename.replace and replaces every occurrence of s1 with s2
//std::string member fuctions are allowed except for replace
//argv[1] == filename
//argv[2] == s1
//argv[3] == s2
//bucle while en el que 
int main(int argc, char **argv){
	if (argc != 4)
		return 1;
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	temp;
	if (s1.empty() || s2.empty())
		return 1;
	filename += ".replace";
	std::ifstream	ifs(argv[1]);
	std::ofstream	ofs(filename);
	while(1){
		ifs >> temp;
		ofs << temp;
		//if  (!temp.compare(s1))
		//	ofs << s2;
		//else
		//	ofs << temp;
		std::cout << temp << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}
