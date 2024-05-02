/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:13:45 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/30 14:05:27 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
}

Account::~Account( void ) {
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t now = std::time(NULL);

	std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&now)->tm_year
				<< std::setw(2) << 1 + std::localtime(&now)->tm_mon
				<<  std::setw(2) << std::localtime(&now)->tm_mday
				<<  "_"
				<<  std::setw(2) << std::localtime(&now)->tm_hour
				<<  std::setw(2) << std::localtime(&now)->tm_min
				<<  std::setw(2) << std::localtime(&now)->tm_sec 
				<< "] " << std::flush;
}

// Accessing class private infos
int Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

// Accessing account detail private info
void    Account::makeDeposit( int deposit ) {
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount // Previous amount before deposit
              << ";deposit:" << deposit // Amount deposited
              << ";amount:" << (_amount + deposit) // Current amount after deposit
              << ";nb_deposits:" << ++_nbDeposits // Incrementing and displaying number of deposits
              << std::endl;
	// Update the total amount for all accounts
	_totalNbDeposits++;
	_totalAmount += deposit;
	// Update the account balance
	_amount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal ) {
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:" << std::flush;
	if (withdrawal > checkAmount()) {
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int     Account::checkAmount( void ) const {
	return _amount;
}

void    Account::displayStatus( void ) const {
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}