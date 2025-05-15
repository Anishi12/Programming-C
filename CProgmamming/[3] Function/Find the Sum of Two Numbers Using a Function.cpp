#include <stdio.h>
int add(int,int);
int main() 
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

printf("Sum: %d\n", add(num1, num2));
return 0;
}
int add(int a, int b) {
return a + b;
}

