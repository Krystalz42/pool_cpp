#include <Account.class.hpp>
#include <ctime>
#include <iostream>
#include <iomanip>

/** Static **/

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

/** Constructor **/

Account::Account(void) {
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = 0;
	_displayTimestamp();
	std::cout 
		<< "index:" <<_accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created"
		<< std::endl;
	_nbAccounts++;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout 
		<< "index:" <<_accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created"
		<< std::endl;
	_nbAccounts++;
}

/** Private **/

void Account::_displayTimestamp(void) {
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

	std::cout << "["
		<< (1900 + now->tm_year) 
		<< std::setw(2) << std::setfill('0') << now->tm_mday
		<< std::setw(2) << std::setfill('0') << now->tm_mon
		<< "_"
		<< std::setw(2) << std::setfill('0') << now->tm_hour
		<< std::setw(2) << std::setfill('0') << now->tm_min
		<< std::setw(2) << std::setfill('0') << now->tm_sec
		<< "] ";
}

/** Public **/

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	//[20150406_153629] accounts:8;total:20049;deposits:0;withdrawals:0

	_displayTimestamp();
	std::cout
		<< "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposit:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void Account::makeDeposit(int deposit) {
	//[20150406_153629] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << _amount + deposit << ";"
		<< "nb_deposits:" << _nbDeposits + 1
		<< std::endl;

	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
	//[20150406_153629] index:0;p_amount:47;

	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "p_amount" << _amount << ";";

	if (withdrawal < _amount) {
		// withdrawal:34;amount:785;nb_withdrawals:1
		std::cout
			<< "withdrawal:" << withdrawal << ";"
			<< "amount:" << _amount - withdrawal << ";"
			<< "nb_withdrawals:" << (_nbWithdrawals + 1)
			<< std::endl;
			_nbWithdrawals++;
			_totalNbWithdrawals++;
			_amount -= withdrawal;
			_totalAmount -= withdrawal;
		return true;
	} else {
		// withdrawal:refused
		std::cout
			<< "withdrawal:refused"
			<< std::endl;
		return false;
	}
}

int Account::checkAmount(void) const {
	static int count_call;
	return ++count_call;
}

void Account::displayStatus(void) const {
	//[20150406_153629] index:0;amount:42;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposit:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals
		<< std::endl;
}


/** Destructor **/

Account::~Account(void) {
	//[20150406_153629] index:7;amount:8942;closed
	_displayTimestamp();
	std::cout
		<< "index:" <<_accountIndex << ";"
		<< "amount:" <<_amount << ";"
		<< "closed" << std::endl;
}


