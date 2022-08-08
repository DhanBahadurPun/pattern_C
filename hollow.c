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

void TwoLine(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Plus(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == (n / 2 + 1) || j == (n / 2 + 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void cross(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || (i + j) == (n + 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void HollowSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void HollowIncreaseTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void HollowDecreaseTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i == 1 || j == i || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void HollowHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < i; j++)
        {
            if (i == n || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == n || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}

void HollowDiamond(int n)
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
            if (j == 1)
                printf("* ");
            else
                printf("  ");
        }
        // increasing star
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
                printf("* ");
            else
                printf("  ");
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
            if (j == i)
                printf("* ");
            else
                printf("  ");
        }

        // decreasing start
        for (int j = i; j <= n; j++)
        {
            if (j == n)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{

    square(5);
    printf("\n");
    TwoLine(5);
    printf("\n");
    Plus(5);
    printf("\n");
    cross(5);
    printf("\n");
    HollowSquare(5);
    printf("\n");
    HollowIncreaseTriangle(5);
    printf("\n");
    HollowDecreaseTriangle(5);
    printf("\n");
    HollowHill(5);
    printf("\n");
    HollowDiamond(5);
    return 0;
}