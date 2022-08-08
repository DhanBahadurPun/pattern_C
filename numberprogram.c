#include <stdio.h>

void Digits(int n)
{
    int m = n;

    while (m != 0)
    {
        int d = m % 10;
        printf("%d \n", d);
        m /= 10;
    }
}

void Palindrome(int n)
{
    int m, sum;
    m = n;
    sum = 0;

    while (m != 0)
    {
        int d = m % 10;
        sum = sum * 10 + d;
        m /= 10;
    }

    if (sum == n)
        printf("palindrome Number: %d ", sum);
    else
        printf("Not a Palindrome Number: %d ", sum);
}

// Spy number is 123, 1+2+3=1*2*3
void SpyNumber(int n)
{
    int m, sum, prod;

    m = n;
    sum = 0;
    prod = 1;

    while (m != 0)
    {
        int d = m % 10;
        sum = sum + d;
        prod = prod * d;

        m /= 10;
    }

    if (sum == prod)
        printf("Yes");
    else
        printf("No");
}

int main()
{
    Digits(2290);
    Palindrome(212);
    SpyNumber(123);
    return 0;
}