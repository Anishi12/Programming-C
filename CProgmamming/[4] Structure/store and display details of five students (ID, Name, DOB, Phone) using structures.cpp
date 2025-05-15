#include <stdio.h>
struct Student {
int id;
char name[50];
char dob[15];
char phone[15];
};
int main() 
{
struct Student students[5];
for (int i = 0; i < 5; i++) {
printf("Enter details of student %d:\n", i + 1);
printf("ID: "); 
scanf("%d", &students[i].id);
printf("Name: "); 
scanf(" %[^\n]", students[i].name);
printf("DOB: "); 
scanf(" %[^\n]", students[i].dob);
printf("Phone: "); 
scanf(" %[^\n]", students[i].phone);
}
printf("\nStudent Details:\n");
for (int i = 0; i < 5; i++) {
printf("ID: %d, Name: %s, DOB: %s, Phone: %s\n", students[i].id, students[i].name, students[i].dob, students[i].phone);
}
return 0;
}

