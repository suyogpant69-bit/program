#include <stdio.h>

void sum();
void sub();
int mul();
float division();

int main()
{
    sum();
    sub();
    printf("the multiplication is %d\n", mul());
    printf("the division is %f\n", division());
    return 0;
}

void sum()
{
    int a, b, sum;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("sum is %d\n", sum);
}

void sub()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("the difference of %d and %d is %d\n", a, b, a - b);
}

int mul()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    return a * b;
}

float division()
{
    float a, b;
    printf("enter two numbers: ");
    scanf("%f%f", &a, &b);
    return a / b;
}
