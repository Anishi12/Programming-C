#include <stdio.h>
struct Car {
char model[50];
char manufacturer[50];
int year;
float price;
};
int main() 
{
struct Car cars[5];
for (int i = 0; i < 5; i++) {
printf("Ente r details of car %d:\n", i + 1);
printf("Model: "); 
scanf(" %[^\n]", cars[i].model);
printf("Manufacturer: "); 
scanf(" %[^\n]", cars[i].manufacturer);
printf("Year: "); 
scanf("%d", &cars[i].year);
printf("Price: "); 
scanf("%f", &cars[i].price);
}
printf("\nCar Details:\n");
for (int i = 0; i < 5; i++) {
printf("Model: %s, Manufacturer: %s, Year: %d, Price: %.2f\n", cars[i].model, cars[i].manufacturer, cars[i].year, cars[i].price);
}
return 0;
}

