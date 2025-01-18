#include <stdio.h>

int main() {
    int target, arr[5], sum;
    printf("Enter the target!\n");
    scanf("%d", &target);
    printf("Enter the elements\n");
    for(int i=0; i<5 ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<4; i++){
        for (int j = 4; j >= 0; j--){
                sum = arr[i] + arr[j];
                if(sum == target){
                    printf("[%d, %d]", i, j);
                }
                // else
                //     printf("error!");
        }
        
    }
    return 0;
}