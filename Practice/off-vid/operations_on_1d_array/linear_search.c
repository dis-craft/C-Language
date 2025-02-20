// Linear Search  - Find element sequentially.
// what i think:
/*

Search element : 5
Array = 1 2 3 4 5 6
Required:
1.Position of element in the array if it exists.
else doesnt exists.

*/

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    int pos;
    int ele;
    printf("Enter the number of elements in the array: (<10)");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search for \n");
    scanf("%d", &ele);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            pos = i;
            printf("\nThe element is at the position %d in the array.\n", pos);
            // break;

            for (int i = 0; i < n; i++){
                printf("%d \t", arr[i]);
            }

            printf("\n");
            for (int j = 0; j < n; j++){
                if (j == pos)
                    printf("^\t");
                else
                    printf("-\t");
            }
        }
        // else{

        // }
    }

    return 0;
}