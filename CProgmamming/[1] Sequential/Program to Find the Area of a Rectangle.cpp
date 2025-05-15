#include <stdio.h>
int main() 
{
    float length, width, area;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width); 
    area = length * width; 
    printf("Area of the rectangle: %f\n", area); 
    return 0;
}

