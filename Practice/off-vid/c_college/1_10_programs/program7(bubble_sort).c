/*Sort the given set of N numbers using Bubble-sort*/


#include <stdio.h>

int main()
{
    int array[100], n, c, d, swap, order;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Sorting order (1 for Ascending, 2 for Descending): ");
    scanf("%d", &order);

    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    if (order == 1)
    {
        for (c = 0; c < (n - 1); c++)
        {
            for (d = 0; d < (n - c - 1); d++)
            {
                if (array[d] > array[d + 1])
                {
                    swap = array[d];
                    array[d] = array[d + 1];
                    array[d + 1] = swap;
                }
            }
        }

            printf("Sorted list in ascending order:\n");
            for (c = 0; c < n; c++)
                printf("%d\n", array[c]);
    }
    else if (order == 2)
    {
        for (c = 0; c < (n - 1); c++)
        {
            for (d = 0; d < (n - c - 1) ; d++)
            {
                if (array[d] < array[d + 1])
                {
                    swap = array[d];
                    array[d] = array[d + 1];
                    array[d + 1] = swap;
                }
            }
        }

        printf("Sorted list in descending order:\n");
        for (c = 0; c < n; c++)
            printf("%d\n", array[c]);
    }
    else
        printf("Invalid selection of order");

    return 0;
}

/*
Enter number of elements
5
Sorting order (1 for Ascending, 2 for Descending): 
1
Enter 5 integers
5
2
9
1
5
Sorted list in ascending order:
1
2
5
5
9
*/