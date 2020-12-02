#include <stdio.h>
#include "myBank.h"

double BankAccounts[accounts][2] = {0};

void OpenAccount()
{
double amount =0;
printf("Please enter amount for deposit:");
if(scanf("\n%lf",&amount) == 1){
if(amount < 0){
printf(" Invalid Amount\n");
}
else{
if(amount > 0){
 for(int i = 0; i < 50 ; i++){
 if(BankAccounts[i][0] == 0) {
 BankAccounts[i][0] = 1;
 int temp = (int)(amount*100);
 BankAccounts[i][1] = (double )temp/100;
 printf(" New account number is: %d\n", (i+901));
 break;
}
}
}}
}
else {printf(" Failed to read the amount\n");}
}

void BalanceInquiry()
{
int AccountNumber = 0;
printf("Please enter account number:");
if(scanf("\n%d",&AccountNumber) ==1){
AccountNumber = AccountNumber-901;
if(AccountNumber <0 || AccountNumber >=50){
printf(" Invalid account number\n");
}
else{
if(BankAccounts[AccountNumber][0]==0){
printf(" This account is closed\n");
}
else{
    if(BankAccounts[AccountNumber][0]==1){
printf(" The balance of account number %d is: %0.2lf\n", (AccountNumber+901), BankAccounts[AccountNumber][1]); 
}}
}
}
else{
printf(" Failed to read the account number\n");
}
}

void Deposit()
{
int AccountNumber = 0;
printf("Please enter account number:");
if(scanf("\n%d",&AccountNumber) ==1){
if(AccountNumber < 0){
printf(" Invalid account number\n");
}
else{
AccountNumber = AccountNumber-901;
if ((AccountNumber < 0 || AccountNumber >= 50))
{
    printf(" Invalid account number\n");
}
else
{
    if (BankAccounts[AccountNumber][0] == 0)
    {
        printf(" This account is closed\n");
    }
    else
    {
        if (BankAccounts[AccountNumber][0] == 1){
        {
            double amount = 0;
            printf(" Please enter the amount to deposit:");
            
            if (scanf("\n%lf", &amount) == 1)
            {
                if (amount > 0)
                {
                    int temp = (int)(amount * 100);
                    BankAccounts[AccountNumber][1] = BankAccounts[AccountNumber][1] + temp / 100;
                    printf(" The new balance is : %0.2lf\n", BankAccounts[AccountNumber][1]);
                }
                else
                {
                    if (amount < 0)
                    {
                        printf(" Cannot deposit a negative amount\n");
                    }
                }
            }
            else
            {
                printf(" Failed to read the amount\n");
            }
        }
    }}
}
}
}
else
{
    printf(" Failed to read the account number\n");
}
}

void Withdrawal()
{
int AccountNumber = 0;
printf("Please enter account number:");
if(scanf("\n%d",&AccountNumber) ==1){
if(AccountNumber < 0){
printf(" Invalid account number\n");
}
else{
AccountNumber = AccountNumber-901;
if((AccountNumber < 0 || AccountNumber >= 50)){
printf(" Invalid account number\n");
}
else{
if(BankAccounts[AccountNumber][0]==0){
printf(" This account is closed\n");
}
else{
double amount= 0;
 printf(" Please enter the amount to withdraw:");
 scanf("\n%lf",&amount);
int temp = (int)(amount*100);
if((temp/100)> BankAccounts[AccountNumber][1]) printf(" Cannot withdraw more than the balance\n");
else { 
BankAccounts[AccountNumber][1]=BankAccounts[AccountNumber][1]-(temp/100);
printf(" The new balance is: %0.2lf\n", BankAccounts[AccountNumber][1]);
}
}
}
}
}
else{
printf(" Failed to read the account number\n");
}
}

void CloseAccount()
{
int AccountNumber = 0;
printf("Please enter account number:");
if(scanf("\n%d",&AccountNumber) == 1){
AccountNumber = AccountNumber-901;
if((AccountNumber < 0 || AccountNumber >= 50)){
printf(" Invalid account number\n");
}
else{
if(BankAccounts[AccountNumber][0]==0){
printf(" This account is already closed\n");
}
else{
BankAccounts[AccountNumber][0]=0;
BankAccounts[AccountNumber][1]=0;
printf(" Closed account number %d\n", AccountNumber+901 );
}
}
}
else{
printf(" Failed to read the account number\n");
}
}

void Interest()
{
double rate = 0;
printf("Please enter interest rate:");
if(scanf("\n%lf",&rate) ==1){
if(rate < 0){
printf(" Invalid interest rate\n");
}
else{
for(int i = 0; i <50; i++){

if(BankAccounts[i][0] ==1)
{
int NewRate= rate+100;
BankAccounts[i][1] = ((BankAccounts[i][1]*NewRate)/100);
}
}
}
}
else{
printf(" Failed to read the interest rate\n");
}
}

 void PrintAccounts()
{
for(int i=0; i<50;i++){
if(BankAccounts[i][0]==1){
printf("\nThe balance of account number %d is: %0.2lf\n",(i+901), BankAccounts[i][1]);
}
}
}

int Exit()
{
for(int i=0; i<50;i++){
BankAccounts[i][0]=0;
BankAccounts[i][1]=0;
}
return 0;
}
