#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }
    getch();
}