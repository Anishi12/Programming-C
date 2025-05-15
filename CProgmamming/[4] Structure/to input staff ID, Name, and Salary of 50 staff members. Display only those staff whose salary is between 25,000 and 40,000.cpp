#include <stdio.h>
struct Staff {
int id;
char name[50];
float salary;
};
int main() 
{
struct Staff staff[50];
for (int i = 0; i < 50; i++) {
printf("Enter details of staff %d:\n", i + 1);
printf("ID: "); 
scanf("%d", &staff[i].id);
printf("Name: "); 
scanf(" %[^\n]", staff[i].name);
printf("Salary: "); 
scanf("%f", &staff[i].salary);
}
printf("\nStaff with Salary between 25,000 and 40,000:\n");
for (int i = 0; i < 50; i++) {
if (staff[i].salary >= 25000 && staff[i].salary <= 40000) {
printf("ID: %d, Name: %s, Salary: %.2f\n", staff[i].id, staff[i].name, staff[i].salary);
}
}
return 0;
}

