#include <stdio.h>

void incrementTriangle(int n)
{
    for (int i = 1, p = 'A'; i <= n; i++, p++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", p);
        }
        printf("\n");
    }
}

void incrementTriangle1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, p = 'A'; j <= i; j++, p++)
        {
            printf("%c ", p);
        }
        printf("\n");
    }
}

void incrementTriangle2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, p = 'E'; j <= i; j++, p--)
        {
            printf("%c ", p);
        }
        printf("\n");
    }
}

void incrementTriangle3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("B ");
            }
            else
            {
                printf("A ");
            }
        }
        printf("\n");
    }
}

void incrementTriangle4(int n)
{
    for (int i = 1, p = 1; i <= n; i++, p++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", p);
        }
        printf("\n");
    }
}

void incrementTriangle5(char A[], int size)
{

    for (int i = 1, p = 0; i <= size; i++, p++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", A[p]);
        }
        printf("\n");
    }
}

void decrementTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }

        for (int j = i, p = 'A'; j <= n; j++, p++)
        {
            printf("%c ", p);
        }
        printf("\n");
    }
}

void decrementTriangle2(int n)
{
    for (int i = 1, k = 'E'; i <= n; i++, k--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        for (int j = i, p = k; j <= n; j++, p--)
        {
            printf("%c ", p);
        }
        printf("\n");
    }
}

int main()
{

    incrementTriangle(5);
    printf("\n");
    incrementTriangle1(5);
    printf("\n");
    incrementTriangle2(5);
    printf("\n");
    incrementTriangle3(5);
    printf("\n");
    incrementTriangle4(5);
    printf("\n");
    decrementTriangle(5);
    printf("\n");
    decrementTriangle2(5);
    printf("\n");

    // Array
    char A[5] = {'C', 'O', 'D', 'E', 'R'};
    int size = sizeof A / sizeof A[0];

    incrementTriangle5(A, size);

    return 0;
}