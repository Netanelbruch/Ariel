#include<stdio.h>
#include "NumClass.h"




int main () {
    
   int x;
    

    printf("enter number: ");
    scanf("%d", &x);
    
    
    

    if(isStrong(x) == 1)
    {
        printf("%d\n", x);
    }
    

    isArmstrong(x);

    printf("\n");

    isPalindrome(x);

    printf("\n");

    isPrime(x);
  
   return 0;
}


