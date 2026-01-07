#include<stdio.h>
int main()
{   
 int choice;
char repeat;

    printf(" ********************************\n");
    printf("Welcome to deerwalk canteen\n");
    printf("********************************\n");
do{
    printf("*** menu for today\n");
    printf("--------------------------------\n");

    printf(" momo\n");
    printf(" chowmein\n");
    printf(" fried rice\n");
    printf(" burger\n");
    printf(" pizza\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("you have ordered momo\n");
            break;
        case 2:
            printf("you have ordered chowmein\n");
            break;
        case 3:
            printf("you have ordered fried rice\n");
            break;
        case 4:
            printf("you have ordered burger\n");
            break;
        case 5:
            printf("you have ordered pizza\n");
            break;
        default:
            printf("invalid choice\n");
    }

    printf("do you want to order again? (y for yes/ n for no)\n");
    scanf(" %c",&repeat);
}while(repeat == 'y' || repeat == 'Y');
    {
        printf("THANK YOU FOR VISITING DEERWALK CANTEEN\n");
    }
    return 0;
}