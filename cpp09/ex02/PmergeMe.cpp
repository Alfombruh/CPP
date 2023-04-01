#include "PmergeMe.hpp"
#include <limits>
#include <algorithm>
#include <sys/time.h>

bool PmergeMe::parseArgs(char **argv)
{
	char *endPtr;
	for (int i = 1; argv[i] != NULL; i++)
	{
		long number = strtol(argv[i], &endPtr, 10);
		if (number < 0 || number > INT_MAX || endPtr[0] + 0 != 0)
			return false;
		lstVec.push_back(number);
		lstDeq.push_back(number);
	}
	return true;
};

void PmergeMe::printLists(string msg = NULL, string color = NULL)
{
	cout << color;
	cout << msg;
	cout << "\tVector list: ";
	for (intVecIt itV = lstVec.begin(); itV != lstVec.end(); itV++)
		cout << *itV << " ";
	cout << "\n";
	cout << "\tDeque list: ";
	for (intDequeIt itD = lstDeq.begin(); itD != lstDeq.end(); itD++)
		cout << *itD << " ";
	cout << "\n";
	cout << CLOSE;
};

double timediff(struct timeval endTime, struct timeval startTime) { return ((endTime.tv_sec * 1000.0 + endTime.tv_usec / 1000.0) - (startTime.tv_sec * 1000.0 + startTime.tv_usec / 1000.0)); };

template <class containerIte>
void insetStor(containerIT first, containerIT last)
{
	
};

template <class container, class containerIT>
void mergeInsertShort(container &list, containerIT first, containerIT last)
{
	if (last - first == 1)
	{
		if (*first > *last)
			std::iter_swap(first, last);
		insertSort(first, last + 1);
	}
	else
	{
		containerIT middle = first + ((last - first) / 2);
		mergeInsertShort(list, middle, last);
		mergeInsertShort(list, first, middle);
		std::inplace_merge(first, middle + 1, last + 1);
	}
	return;
};

void PmergeMe::shortLists(void)
{
	struct timeval vecStartTime, vecEndTime, deqStartTime, deqEndTime;
	printLists("Before:\n", BHYEL);
	gettimeofday(&vecStartTime, NULL);
	mergeInsertShort<intVec, intVecIt>(lstVec, lstVec.begin(), lstVec.end() - 1);
	gettimeofday(&vecEndTime, NULL);
	gettimeofday(&deqStartTime, NULL);
	mergeInsertShort<intDeque, intDequeIt>(lstDeq, lstDeq.begin(), lstDeq.end() - 1);
	gettimeofday(&deqEndTime, NULL);
	printLists("After:\n", BHGRN);
	cout << "\n" << BHWHT;
	cout << "Time to process a range of " << lstVec.size() << " with std::vector: " << timediff(vecEndTime, vecStartTime) << "ms \n";
	cout << "Time to process a range of " << lstDeq.size() << " with std::deque: " << timediff(deqEndTime, deqStartTime) << "ms \n";
	cout << CLOSE;
};

PmergeMe::PmergeMe(void) { return; }
PmergeMe::~PmergeMe(void) { return; };
PmergeMe::PmergeMe(const PmergeMe &r) { *this = r; };
PmergeMe::PmergeMe(int argc, char **argv)
{
	if (argc == 1)
		throw classException(("Pls provide a list of natural numbers"));
	if (!parseArgs(argv))
		throw classException("Error at parsing");
	return;
};

PmergeMe &PmergeMe::operator=(const PmergeMe &r)
{
	lstVec = r.lstVec;
	lstDeq = r.lstDeq;
	return *this;
};

PmergeMe::classException::classException(const char *msg) : msg((char *)msg){};
const char *PmergeMe::classException::what() const throw() { return (msg); };