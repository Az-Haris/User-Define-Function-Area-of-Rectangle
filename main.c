#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter Height of the Rectangle : ");
    scanf("%d",&a);
    printf("Enter Width of the Rectangle : ");
    scanf("%d",&b);

    printf("Rectangle Area is = %d", area(a, b));


    getch();
    return 0;
}

int area(int a, int b)
{
    return a*b;
}
