//Creation:18-03-21
//Tanisha Gandhi 
//A C Program to calculate Factorial of a number.
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number); //It will sacn the number entered by the user.   
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
} 
 