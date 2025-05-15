#include <stdio.h>
int main() 
{
    FILE *fp;
    int product_id;
    char name[25];
    float price;
    int i;
    fp = fopen("products.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    for (i = 1; i <= 5; i++) 
    {
        printf("Enter Product ID: ");
        scanf("%d", &product_id);
        printf("Enter Product Name: ");
        scanf("%s", name);
        printf("Enter Product Price: ");
        scanf("%f", &price);
        fprintf(fp, "%d %s %.2f\n", product_id, name, price);
    }
    fclose(fp);
    printf("Product data written successfully.\n");
    return 0;
}
