#include <iostream>

typedef struct s_data{
	std::string str;
} Data;

static int errorMessage(std::string str){
	std::cout << "\t\tERROR" << std::endl;
	std::cout << str << std::endl;
	return 1;
}

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}


Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int main(int argc, char **argv){
	if (argc != 2 || !argv[1])
		return errorMessage("Cannot pass more than 1 argument");
	Data *data = new Data;
	data->str = argv[1];
	uintptr_t uip = serialize(data);
	std::cout << uip << std::endl;
	data = deserialize(uip);
	std::cout << data->str << std::endl;
	return 0;
}
