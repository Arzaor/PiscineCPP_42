/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:24:10 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/14 18:50:50 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_totalAmount = initial_deposit;
}

Account::~Account()
{
	std::cout << "account:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl; 
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	unsigned long int sec = time(NULL);
	std::cout << sec << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return true;
}

int		Account::checkAmount(void) const
{
	return (1);
}

void	Account::displayStatus(void) const
{
	
}