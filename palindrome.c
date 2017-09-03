
#include <stdio.h>

void main()

{
    int n, r = 0, rem, original;

   
 printf("Enter an integer: ");

    scanf("%d", &n);


    original = n;

    
   
 while( n!=0 )

    {
        rem= n%10;
  
      r= r*10 + rem;
        
n /= 10;
    }

     
 if (original == r)
       
 printf("%d is a palindrome.", original);
 
   else

        printf("%d is not a palindrome.", original);
 
   
    }
