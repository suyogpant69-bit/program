#include <stdio.h>

int main()
{
    int a, b;
    int choice;
    char cont;

do{
    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Addition = %d\n", a + b);
            break;

        case 2:
            printf("Subtraction = %d\n", a - b);
            break;

        case 3:
            printf("Multiplication = %d\n", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f\n", (float)a / b);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid choice!");
    }

    printf("DO YOU WANT TO CONTINUE? (y/n): ");
    scanf(" %c",&cont);}

    while(cont=='y'|| cont =='Y');
    return 0;
}
