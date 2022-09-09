#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit): _accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	Account::_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	//std::cout << "index;" << _accountIndex << ";" << _amount << ";" << std::endl;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex<< ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account(void){
	//std::cout << "Account Desctructor Called" << std::endl;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex<< ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
	if (deposit >= 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex<< ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		Account::_amount += deposit;
		Account::_nbDeposits += 1;
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits += 1;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex<< ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "withdrawal:" << withdrawal << ";";
	if (Account::_amount >= withdrawal && withdrawal >= 0)
	{
		Account::_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int		Account::checkAmount(void) const{
	return Account::_amount;
}

void	Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex<< ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
	std::time_t tt = std::chrono::system_clock::to_time_t (std::chrono::system_clock::now());
	struct std::tm * ptm = std::localtime(&tt);
	std::cout << "[" << std::put_time(ptm, "%Y%m");
	std::cout << std::put_time(ptm, "%d") << "_";
	std::cout <<  std::put_time(ptm, "%H%M%S") << "]" << " ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
