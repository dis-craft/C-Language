// income tax calculator, takes input of income calculates income tax based on your slab.


//approach: using if else ladder.
#include <stdio.h>

int main() {
    float income;
    int slab;
    int n;
    printf("Enter your income in lakhs: \n");
    scanf("%f", &income);
    if(income<2.5){
        slab = 1;
        printf("You dont have to pay any taxes, because your entered income is <2.5L\n");
    }
    else if(income>2.5 && income<5.0){
        slab =2;
        printf("You are taxed 5%% of your income which is: \n");
        printf("You have to pay: %f (in lakhs) \n", income*(0.05));
        printf("Your money after reduction is (in lakhs): %f\n", income - income*(0.05));
    }
    else if(income>5.0 && income<10.0){
        slab =3;
        printf("You are taxed 20%% of your income which is: \n");
        printf("You have to pay: %f (in lakhs) in taxes.\n", income*(0.2));
        printf("Your money after reduction is (in lakhs): %f\n", income - income*(0.2));
    }else if(income>10.0){
        slab =4;
        printf("You are taxed 30%% of your income which is: \n");
        printf("You have to pay: %f (in lakhs) \n", income*(0.3));
        printf("Your money after reduction is (in lakhs): %f\n", income - income*(0.3));
    }
    printf("Do you want to calculate again? 1/0\n");
    scanf("%d",  &n);
    if (n==1){
        main();
    }
    else{
        printf("Thanks you for using me!\n");
    }
    
    return 0;
}