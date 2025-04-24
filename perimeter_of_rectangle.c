#include <stdio.h>

int main() {
    float length, breadth, perimeter;
//perimeter of rectangle

    // Input length and breadth of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the perimeter
    perimeter = 2 * (length + breadth);

    // Output the result
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}