#include <stdio.h>
void balance(float *b)
{
    printf("Balance = %.2f\n", *b);
}
void deposit(float *b)
{
    float x;
    printf("Enter amount: ");
    scanf("%f", &x);
    if (x > 0)
        *b += x;
    else
        printf("Invalid amount\n");
}
void withdraw(float *b)
{
    float x;
    printf("Enter amount: ");
    scanf("%f", &x);
    if (x <= 0)
        printf("Invalid amount\n");
    else if (x > *b)
        printf("Insufficient balance\n");
    else
        *b -= x;
}
void transfer(float *b)
{
    float x;
    printf("Enter amount: ");
    scanf("%f", &x);
    if (x <= 0)
        printf("Invalid amount\n");
    else if (x > *b)
        printf("Insufficient balance\n");
    else
        *b -= x;
}
int main()
{
    char name[30];
    int acc, ch;
    float b;
    printf("Enter name: ");
    scanf(" %[^\n]", name);
    printf("Enter account number: ");
    scanf("%d", &acc);
    printf("Enter balance: ");
    scanf("%f", &b);
    do
    {
        printf("\n1.Balance\n2.Deposit\n3.Withdraw\n4.Transfer\n5.Account Details\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: balance(&b); break;
            case 2: deposit(&b); break;
            case 3: withdraw(&b); break;
            case 4: transfer(&b); break;
            case 5:
                printf("Name: %s\nAccount: %d\nBalance: %.2f\n", name, acc, b);
                break;
            case 6: printf("Thank you\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(ch != 6);
    return 0;
}