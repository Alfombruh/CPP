#include "BitcoinExchange.hpp"


void BitcoinExchange::getData(void)
{
	std::ifstream	dataFile("csv/data.csv");
	string			line;
	string			key;
	float			value;
	int 			i = 0;
	while(getline(dataFile, line))
	{
		if (i++ == 0)
			continue;
		key = line.substr(0, line.find(','));
		value = strtof(line.substr(line.find(',') + 1, line.find('\n')).c_str(), NULL);
		values.insert(make_pair(key, value));
	}
}

bool	closestDate(CSVIterator upperIt, string targetDate)
{
	CSVIterator lowerIt = --upperIt;
	Date	upperDate = {}, lowerDate = {}, closestDate = {};
	time_t	upperTimeDiff, lowerTimeDiff, closestTimeDiff;

	strptime(lowerIt->first.c_str(), "%Y-%m-%d", &lowerDate);
	strptime(upperIt->first.c_str(), "%Y-%m-%d", &upperDate);
	strptime(targetDate.c_str(), "%Y-%m-%d", &closestDate);
	lowerTimeDiff = mktime(&lowerDate);
	upperTimeDiff = mktime(&upperDate);
	closestTimeDiff = mktime(&closestDate);
	return (difftime(upperTimeDiff, closestTimeDiff) > difftime(closestTimeDiff, lowerTimeDiff));
}

void BitcoinExchange::readFile(string inputPath)
{
	string				line, key;
	std::ifstream		inFile(inputPath);
	double				value;
	CSVMap::iterator	btc_value;
	CSVIterator 		csvIt;
	int					i = 0;
	Date				date = {};
	while (getline(inFile, line))
	{
		if (i++ == 0)
			continue;
		key = line.substr(0, line.find('|') - 1);
		value = strtod(line.substr(line.find('|') + 1, line.find('\n')).c_str(), NULL);
		csvIt = values.lower_bound(key);
		if (strptime(key.c_str(), "%Y-%m-%d", &date) == NULL)
		{
			cout << "Error: bad input => " << key << "\n";
			continue;
		}
		if (closestDate(csvIt, key) && csvIt->first != key)
			--csvIt;
		if (value < 0)
			cout << "Error: not a positive number.\n";
		else if (value >= 2147483647)
			cout << "Error: too large a number.\n";
		else
			cout << key << " => " << value << " = " << csvIt->second * value << "\n";
	}
	return ;
}

BitcoinExchange::BitcoinExchange(string inputPath)
{
	getData(); //TODO, error management
	readFile(inputPath);
	return ;
}
BitcoinExchange::~BitcoinExchange()
{
	return ;
}
BitcoinExchange::BitcoinExchange(BitcoinExchange &r){
	*this = r;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &r){
	values = r.values;
	return *this;
}