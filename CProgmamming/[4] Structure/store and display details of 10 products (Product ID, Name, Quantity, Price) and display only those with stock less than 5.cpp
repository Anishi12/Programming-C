#include <stdio.h>
struct Product {
int productID;
char name[50];
int quantity;
float price;
};
int main() 
{
struct Product products[10];
for (int i = 0; i < 10; i++) {
printf("Enter details of product %d:\n", i + 1);
printf("Product ID: "); 
scanf("%d", &products[i].productID);
printf("Name: "); 
scanf(" %[^\n]", products[i].name);
printf("Quantity: "); 
scanf("%d", &products[i].quantity);
printf("Price: "); 
scanf("%f", &products[i].price);
}
printf("\nProducts with Stock Less Than 5:\n");
for (int i = 0; i < 10; i++) {
if (products[i].quantity < 5) {
printf("Product ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", products[i].productID, products[i].name, products[i].quantity, products[i].price);
}
}
return 0;
}
