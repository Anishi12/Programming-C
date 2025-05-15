#include <stdio.h>
struct BankAccount {
int accountNumber;
char name[50];
float balance;
};
int main() 
{
struct BankAccount accounts[10];
for (int i = 0; i < 10; i++) {
printf("Enter details of account holder %d:\n", i + 1);
printf("Account Number: "); 
scanf("%d", &accounts[i].accountNumber);
printf("Name: "); 
scanf(" %[^\n]", accounts[i].name);
printf("Balance: "); 
scanf("%f", &accounts[i].balance);
}
printf("\nBank Account Details:\n");
for (int i = 0; i < 10; i++) {
printf("Account Number: %d, Name: %s, Balance: %.2f\n", accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
}
return 0;
}
