#include <stdio.h>
int main() 
{
int num = 10;
int *ptr = &num;
printf("Value of num: %d\n", num);
printf("Address of num: %p\n", &num);
printf("Value of num using pointer: %d\n", *ptr);
printf("Address stored in pointer: %p\n", ptr);
return 0;
}
