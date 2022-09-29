#include<stdio.h>

int main(void)
{
    system("cls");

    int input;
    do
    {
        printf("Menu: \n");
        printf("_______________ \n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");
        printf("_______________ \n");

        printf("Enter a Number: \n");
        scanf("%d",&input);

        system("cls");
        printf("______ Result _____\n");
        printf("You have selected menu no: %d\n",input);
        printf("______ Result End _____\n\n");


    }
    while(input!=0);

    system("cls");

    return 0;
}

