#include <stdio.h>
struct Library {
int bookID;
char title[50];
char author[50];
int available;
};
int main() 
{
struct Library bo[10];
for (int i = 0; i < 10; i++) 
{
printf("Enter details of book %d:\n", i + 1);
printf("Book ID: "); 
scanf("%d", &bo[i].bookID);
printf("Title: ");  
scanf(" %s", bo[i].title);
printf("Author: "); 
scanf(" %s", bo[i].author);
printf("Availability (1 for Available, 0 for Not Available): "); scanf("%d", &bo[i].available);
}
printf("\nAvailable bo:\n");
for (int i = 0; i < 10; i++) 
{
if (bo[i].available == 1) {
printf("Book ID: %d, Title: %s, Author: %s\n", bo[i].bookID, bo[i].title, bo[i].author);
}
}
return 0;
}
