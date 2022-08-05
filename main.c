#include <stdio.h>

void square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void increaseTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void decreaseTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void decreaseTriangle1(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void rightSidedTriangle(int n)
{
    // decreasing pattern triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        // increasing pattern triangle
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void rightSidedTriangle1(int n)
{
    for (int i = 1; i <= n; i++)
    {

        // increaseing Space
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        // decreasing star
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void hill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // decreasing Space
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }

        // increasing star
        for (int j = 1; j < i; j++)
        {
            printf("* ");
        }
        // increasing star
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void reverseHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // increasing space
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        // decreasing start
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }

        // decreasing start
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void diamond(int n)
{
    // Hill
    for (int i = 1; i < n; i++)
    {
        // decreasing Space
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }

        // increasing star
        for (int j = 1; j < i; j++)
        {
            printf("* ");
        }
        // increasing star
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // reverse Hill
    for (int i = 1; i <= n; i++)
    {
        // increasing space
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        // decreasing start
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }

        // decreasing start
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void doubleHill(int n)
{
}

void butterfly(int n)
{
}

void sandglass(int n)
{
}

leftPascalTriangle(int n)
{
}

rightPascalTriangle(int n)
{
    for (int i = 1; i < n; i++)
    {
        // decreasing space
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }

        // increasing start
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        // increasing space
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        // decreasing start
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    square(5);
    increaseTriangle(5);
    decreaseTriangle1(5);
    rightSidedTriangle(5);
    rightSidedTriangle1(10);

    return 0;
}