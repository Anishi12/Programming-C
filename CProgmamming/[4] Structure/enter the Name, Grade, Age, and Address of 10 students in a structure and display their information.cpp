#include <stdio.h>
struct Student {
char name[50];
char grade[5];
int age;
char address[100];
};
int main() {
struct Student students[10];
for (int i = 0; i < 10; i++) {
printf("Enter details of student %d:\n", i + 1);
printf("Name: "); 
scanf(" %[^\n]", students[i].name);
printf("Grade: "); 
scanf(" %[^\n]", students[i].grade);
printf("Age: "); 
scanf("%d", &students[i].age);
printf("Address: "); 
scanf(" %[^\n]", students[i].address);
}
printf("\nStudent Details:\n");
for (int i = 0; i < 10; i++) {
printf("Name: %s, Grade: %s, Age: %d, Address: %s\n", students[i].name, students[i].grade, students[i].age, students[i].address);
}
return 0;
}

