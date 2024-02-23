/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:00:15 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/01/10 20:00:16 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << endl;
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_totalAmount = initial_deposit;

	_displayTimestamp();
	cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";created" << endl;
}

Account::~Account()
{
	_nbAccounts--;
	_totalAmount -= _amount;

	_displayTimestamp();
	cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";closed" << endl;
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;

	_displayTimestamp();
	cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount - deposit
	<< ";deposit:" << deposit
	<< ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal >= _amount)
	{
		_displayTimestamp();
		cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:refused" << endl;
		return false;
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;

		_displayTimestamp();
		cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount + withdrawal
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << endl;
		return true;
	}

}

int Account::checkAmount(void) const
{
	return _amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t present = std::time(NULL);
	std::tm *localTime = std::localtime(&present);
	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localTime);
	std::cout << buffer;
}