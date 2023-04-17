/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:22:12 by hojsong           #+#    #+#             */
/*   Updated: 2023/04/17 15:55:06 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
    _amount	= initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout<< "index:" << _accountIndex <<";";
    std::cout<< "amount:" << _amount <<";";
    std::cout<<"created" << std::endl;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	 std::cout<< "index:" << _accountIndex <<";";
	 std::cout<< "p_amount:" << _amount <<";";
	 std::cout<< "deposit:" << deposit <<";";
	 _amount += deposit;
	 _nbDeposits = 1;
	 std::cout<< "amount:" << _amount <<";";
	 std::cout<< "nb_deposits:" << _nbDeposits << std::endl;
	 _totalNbDeposits++;
	 _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex <<";";
	std::cout<< "p_amount:" << _amount <<";";
	if (_amount >= withdrawal)
	{
		std::cout<< "withdrawal:" << withdrawal <<";";
	 	_amount -= withdrawal;
	 	 std::cout<< "amount:" << _amount <<";";
	 	_nbWithdrawals = 1;
	 	std::cout<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	 	_totalNbWithdrawals++;
	 	_totalAmount -= withdrawal;
	 	return (true);
	 }
	 else
	 {
	 	std::cout<< "withdrawal:refused"<<std::endl;
	 	return (false);
	 }
}

void	Account::displayAccountsInfos()
{
	int dest;

	_displayTimestamp();
	dest = getNbAccounts();
	std::cout<< "accounts:" << dest <<";";
	dest = getTotalAmount();
 	std::cout<< "total:" << dest <<";";
 	dest = getNbDeposits();
 	std::cout<< "deposits:"<< dest<<";";
 	dest = getNbWithdrawals();
 	std::cout<< "withdrawals:"<< dest <<std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
    std::cout<< "index:" << _accountIndex <<";";
    std::cout<< "amount:" << _amount <<";";
    std::cout<< "deposits:"<< _nbDeposits<<";";
    std::cout<< "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex <<";";
    std::cout<< "amount:" << _amount <<";";
	std::cout<< "closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	temp;
	struct tm* timeinfo;

	time(&temp);
	timeinfo = localtime(&temp);

	std::cout << "[" << 1900 + timeinfo->tm_year;
	if (1 + timeinfo->tm_mon < 10)
		std::cout << "0";
	std::cout <<1 + timeinfo->tm_mon;
	if (timeinfo->tm_mday < 10)
    		std::cout << "0";
	std::cout << timeinfo->tm_mday << "_";
	if (timeinfo->tm_hour < 10)
    		std::cout << "0";
	std::cout << timeinfo->tm_hour;
	if (timeinfo->tm_min < 10)
    		std::cout << "0";
	std::cout << timeinfo->tm_min;
	if (timeinfo->tm_sec < 10)
    		std::cout << "0";
	std::cout << timeinfo->tm_sec << "] ";
}
