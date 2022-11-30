#include<stdio.h>
#include "NumClass.h"




int main () {
    
    int x;

    printf("enter number: ");
    scanf("%d", &x)
    
    
    x=isStrong();

    if(x==1)
    {
        printf("%d\n", x);
    }
    

    isArmstrong(153);

    printf("\n");

    isPalindrome(11);

    printf("\n");

    isPrime(21);
  
   return 0;
}


