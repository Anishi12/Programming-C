#include <stdio.h>
int main() 
{
    FILE *fp;
    int product_id;
    char name[25];
    float price;
    fp = fopen("products.txt", "r");
    printf("\nProduct Records:\n");
    while (fscanf(fp, "%d %s %f", &product_id, name, &price) != EOF) {
        printf("Product ID: %d \t Name: %s \t Price: %.2f\n", product_id, name, price);
    }
    fclose(fp);
    return 0;
}
