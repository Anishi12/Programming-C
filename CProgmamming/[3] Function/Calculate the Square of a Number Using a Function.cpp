#include <stdio.h>
int square(int num);
int main() 
{
int num;
printf("Enter a number: ");
scanf("%d", &num);

printf("Square of %d is %d\n", num, square(num));
return 0;
}
int square(int num) {
return num * num;
}

