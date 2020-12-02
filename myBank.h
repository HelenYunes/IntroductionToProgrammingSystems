#ifndef _MYBANK_H_
#define _MYBANK_H_
#include <stdio.h>
#define accounts 50

extern double BankAccounts[accounts][2];

void OpenAccount();

void BalanceInquiry();

void Deposit();

void Withdrawal();

void CloseAccount();

void Interest();

void PrintAccounts();

int Exit();

#endif