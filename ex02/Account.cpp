/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:24:10 by jbarette          #+#    #+#             */
/*   Updated: 2021/11/14 15:05:28 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

static int  getNbAccounts(void)
{
    return _nbAccounts;
}

static int  getTotalAmount(void)
{
    return _totalAmount;
}

static int  getNbDeposits(void)
{
    return _totalNbDeposits;
}

static int  getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}