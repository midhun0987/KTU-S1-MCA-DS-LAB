/*Write a program for finding the sum of two numbers using different types of 
functions. 
a) Function with argument and return type 
b) Function with argument and no return type 
c) Function without argument and return type 
d) Function without argument and no return type 
This program should have menu driven options.*/


#include <stdio.h>

int sum1(int a, int b) {
    return a + b; // Returns the sum of a and b
}

void sum2(int a, int b) {
    printf("Sum: %d\n", a + b); // Prints the sum of a and b
}

int sum3() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b; // Returns the sum of user-input numbers
}

void sum4() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b); // Prints the sum of user-input numbers
}

int main() {
    int ch, num1, num2;
    do {
        printf("Menu:\n");
        printf("1. Function with argument and return type\n");
        printf("2. Function with argument and no return type\n");
        printf("3. Function without argument and return type\n");
        printf("4. Function without argument and no return type\n");
        printf("Enter your choice (0 to exit): ");
        scanf("%d", &ch); 

        switch(ch) {
            case 1: {
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                int result = sum1(num1, num2);
                printf("Sum: %d\n", result);
                break;
            }
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                sum2(num1, num2);
                break;
            case 3: {
                int result = sum3();
                printf("Sum: %d\n", result);
                break;
            }
            case 4:
                sum4();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(ch != 0);
    
    return 0;
}