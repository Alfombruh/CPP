#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#define ERROR_FILE		"Error: could not open file."
#define ERROR_NEGATIVE	"Error: not a positive number."
#define ERROR_LARGEINT	"Error: too large a number."
#define ERROR_INPUT		"Error: bad input"

#define MAX_INT 		2147483647

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <time.h>

using std::string;
using std::cout;

typedef	std::map<string, float> CSVMap;
typedef	std::map<string, float>::iterator CSVIterator;
typedef	struct tm	Date;


class BitcoinExchange{
	private:
		CSVMap	values;

		void	getData(void);
		void	readFile(string inputPath);
		BitcoinExchange();
		
	public:
		BitcoinExchange(string inputPath);
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange &r);

		BitcoinExchange &operator=(BitcoinExchange &r);
};

#endif