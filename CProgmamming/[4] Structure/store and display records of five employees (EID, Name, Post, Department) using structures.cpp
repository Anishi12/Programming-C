#include <stdio.h>
struct Employee {
int eid;
char name[50];
char post[50];
char department[50];
};
int main() 
{
struct Employee employees[5];
for (int i = 0; i < 5; i++) {
printf("Enter details of employee %d:\n", i + 1);
printf("EID: "); 
scanf("%d", &employees[i].eid);
printf("Name: "); 
scanf(" %[^\n]", employees[i].name);
printf("Post: "); 
scanf(" %[^\n]", employees[i].post);
printf("Department: "); 
scanf(" %[^\n]", employees[i].department);
}

printf("\nEmployee Details:\n");
for (int i = 0; i < 5; i++) {
printf("EID: %d, Name: %s, Post: %s, Department: %s\n", employees[i].eid, employees[i].name, employees[i].post, employees[i].department);
}
return 0;
}

