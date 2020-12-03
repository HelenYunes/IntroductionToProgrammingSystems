#include <stdio.h>
#include "myBank.h"

int main()
{
        char OptionFromMenu;
        do
        {
                printf("\nPlease choose a transaction type:\n"
                       " O-Open Account\n"
                       " B-Balance Inquiry\n"
                       " D-Deposit\n"
                       " W-Withdrawal\n"
                       " C-Close Account\n"
                       " I-Interest\n"
                       " P-Print\n"
                       " E-Exit\n");
                scanf("\n %c", &OptionFromMenu);

                switch (OptionFromMenu)
                {
                case 'O':
                        OpenAccount();
                        break;
                case 'B':
                        BalanceInquiry();
                        break;
                case 'D':
                        Deposit();
                        break;
                case 'W':
                        Withdrawal();
                        break;
                case 'C':
                        CloseAccount();
                        break;
                case 'I':
                        Interest();
                        break;
                case 'P':
                        PrintAccounts();
                        break;
                case 'E':
                        Exit();
                        break;
                default:
                        printf("Invalid transaction type\n");
                        break;
                }
        } while (OptionFromMenu != 'E');
        {
                return 0;
        }
}
