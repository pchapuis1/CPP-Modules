#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts ++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t tmm = time(0);
	tm *ltm = localtime(&tmm);
   	std::cout << "[" << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon <= 9)
		std::cout << "0";
	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday <= 9)
		std::cout << "0";
	std::cout << ltm->tm_mday;
	std::cout << "_";
	if (ltm->tm_hour <= 9)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min <= 9)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec <= 9)
		std::cout << "0";
   	std::cout << ltm->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "acounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits ++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits ++;
	std::cout << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";p_amount:";
	this->_amount -= withdrawal;
	if (this->_amount < 0)
	{
		this->_amount += withdrawal;
		std::cout << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals ++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals ++;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount  << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}