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

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

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

// *
// * *
// * * *
// * * * *
// * * * * *

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

// * * * * *
// * * * *
// * * *
// * *
// *

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

// * * * * *
// * * * *
// * * *
// * *
// *

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

//           *
//         * *
//       * * *
//     * * * *
//   * * * * *

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

// * * * * *
//   * * * *
//     * * *
//       * *
//         *

void Triangle1(int n)
{
    // decreasing pattern triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }
        // increasing pattern triangle
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

void rightSidedTriangle1(int n)
{
    for (int i = 1; i <= n; i++)
    {

        // increaseing Space
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        // decreasing star
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

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

//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *

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

//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

void dimond1(int n)
{
    // decreasing pattern triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }
        // increasing pattern triangle
        for (int j = 1; j < i; j++)
        {
            printf(" *");
        }

        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {

        // increaseing Space
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        // decreasing star
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

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

//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

void doubleHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }

        for (int j = 1; j < i; j++)
        {
            printf("* ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        for (int j = i; j < n; j++)
        {
            printf("  ");
        }

        for (int j = i; j < n; j++)
        {
            printf("  ");
        }

        for (int j = 1; j < i; j++)
        {
            printf("* ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//           *                 *
//         * * *             * * *
//       * * * * *         * * * * *
//     * * * * * * *     * * * * * * *
//   * * * * * * * * * * * * * * * * * *

void doubleHill1(int n)
{
    // decreasing pattern triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }
        // increasing pattern triangle
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // decreasing star
        for (int j = i; j < n; j++)
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

//      *         *
//     * *       * *
//    * * *     * * *
//   * * * *   * * * *
//  * * * * * * * * * *

void butterfly(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }

        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }

        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *

void sandglass(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }

        for (int j = 1; j < i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *
//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *

void leftPascalTriangle(int n)
{
}

void rightPascalTriangle(int n)
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

//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
//     * * * *
//       * * *
//         * *
//           *

int main()
{
    // square(5);
    // printf("\n");
    // increaseTriangle(5);
    // printf("\n");
    // decreaseTriangle1(5);
    // printf("\n");
    // rightSidedTriangle(5);
    // printf("\n");
    // rightSidedTriangle1(5);
    hill(5);

    printf("\n");
    reverseHill(5);
    printf("\n");
    diamond(5);
    printf("\n");
    doubleHill(5);
    printf("\n");
    butterfly(5);
    printf("\n");
    sandglass(5);
    printf("\n");
    rightPascalTriangle(5);
    printf("\n");
    return 0;
}