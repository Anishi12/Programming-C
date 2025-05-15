#include <stdio.h>
struct Book {
char title[50];
char author[50];
char publisher[50];
float price;
};
int main() 
{
struct Book books[5];
for (int i = 0; i < 5; i++) {
printf("Enter details of book %d:\n", i + 1);
printf("Title: "); 
scanf(" %[^\n]", books[i].title);
printf("Author: "); 
scanf(" %[^\n]", books[i].author);
printf("Publisher: "); 
scanf(" %[^\n]", books[i].publisher);
printf("Price: "); 
scanf("%f", &books[i].price);
}

printf("\nBook Details:\n");
for (int i = 0; i < 5; i++) {
printf("Book %d: %s by %s (Publisher: %s, Price: %.2f)\n", i + 1, books[i].title, books[i].author, books[i].publisher, books[i].price);
}

return 0;
}

