#include <stdio.h>

void main()
{
   int num;
   printf("enter an integer");
   scanf("%d",&num);
   if(num>=0)
   {
   if (num%2==0)
   printf("%d is even number",num);
   else
   printf("%d is odd number",num);
   }
   else
   printf("%d is invalid input",num);
   
}
