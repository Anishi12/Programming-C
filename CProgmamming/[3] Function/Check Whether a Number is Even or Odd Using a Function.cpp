#include <stdio.h>
void checkEvenOdd(int num);
int main() 
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
checkEvenOdd(num);
return 0;
}
void checkEvenOdd(int num) {
if (num % 2 == 0)
printf("%d is Even.\n", num);
else
printf("%d is Odd.\n", num);
}

