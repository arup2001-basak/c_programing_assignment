//Write a C program to find the sum of digit of a number.


#include<stdio.h>

int main()
{
    int n , sum =0, rem;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    while (n>0)
    {
        /* code */
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("Sum is : %d",sum);
    
}
