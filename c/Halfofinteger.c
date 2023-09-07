#include<stdio.h>
#include<conio.h>
int main()
{
    float X;
    int Y=X;
    printf("Enter the X Value in Point :");
    scanf("%f",&X);
    printf("Enter the Y Value in integer :");
    scanf("%d",&Y);
    float Z=X-Y;
    printf("The value is %f:",Z);
    return 0;
    getch();
}