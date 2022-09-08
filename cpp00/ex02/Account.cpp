#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit): _accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	//std::cout << "Account Constructor Called" << std::endl;
	Account::_accountIndex = Account::_nbAccounts;

	Account::_nbAccounts += 1;
	return ;
}

Account::~Account(void){
	//std::cout << "Account Desctructor Called" << std::endl;
	return ;
}

int		Account::getNbAccounts(void){
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void){
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void){
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void){
	std::cout << "index:" << &Account::getNbAccounts << ";";
	std::cout << "amount:" << &Account::getTotalAmount << ";";
}

void	Account::makeDeposit(int deposit){
	Account::_amount += deposit;
	Account::_nbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (Account::_amount >= withdrawal)
	{
		Account::_amount -= withdrawal;
		Account::_nbWithdrawals += 1;
		return (true);
	}
	std::cout << "Not enough money in this account" << std::endl;
	return (false);
}

int		Account::checkAmount(void) const{
	return Account::_amount;
}

void	Account::displayStatus(void) const{
	std::cout << "created" << std::endl;
}

void	Account::_displayTimestamp(void){
	struct std::tm * ptm;
	std::cout << "[" << std::put_time(ptm, "%c") << "]" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
