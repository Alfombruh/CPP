#include <iostream>
#include <fstream>

void	writeOutstream(std::string s1, std::string s2, std::ifstream ifs, std::ofstream  ofs){
	return ;
}
//program that takes as argv a filename and 2 strings (not empty)
//then it opens. filename.replace and replaces every occurrence of s1 with s2
//std::string member fuctions are allowed except for replace
//argv[1] == filename
//argv[2] == s1
//argv[3] == s2
int main(int argc, char **argv){
	if (argc != 4)
		return 1;

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	temp;
	std::string	str;

	if (s1.empty() || s2.empty())
		return 1;

	for (std::string::size_type i = 0; i < filename.length(); ++i)
		filename[i] = std::toupper(filename[i]);
	filename += ".replace";

	std::ifstream	ifs(argv[1]);
	std::ofstream	ofs(filename);

	writeOutstream(s1, s2, ifs, ofs);
	/*char c;
	size_t i = 0;
	std::string aux;
	while(ifs.get(c)){
		if (c == s1[i] && i < s1.length()){
			aux += c;
			i++;
		}
		else if (i == s1.length()){
			ofs << s2;
			ofs << c;
			i = 0;
		}
		else{
			ofs << c;
			i = 0;
		}
	}*/
	ofs.close();
	ifs.close();
	return 0;
}
