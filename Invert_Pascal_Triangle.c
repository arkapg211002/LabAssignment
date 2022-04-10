#include<stdio.h>
void pattern(int);
int factorial(int);
int combination(int,int);
void main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    pattern(n);
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comination(int n,int r)
{
    int com;
    com=factorial(n)/(factorial(n-r)*factorial(r));
    return com;
}
void pattern(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%4d",comination(i-1,j-1));
        }
        printf("\n");
    }
}
