#include <stdio.h>
                                        // void means that the function does not have a return value.
void myFunction() {                     //myFunction() is the name of the function.
  printf("I just got executed!\n ");
}

void mynewfunction(){
    printf("Even my function works!");
}
int main() {
  myFunction(); // call the function
  mynewfunction();
  myFunction();
  mynewfunction();
  myFunction();
  mynewfunction();
  myFunction();
  mynewfunction(); // A function can be called multiple times!
  return 0;
}

