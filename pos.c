#include<stdio.h>
#include<conio.h>
main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num>0)
printf("%d is positive number \n",num);
else if(num<0)
printf("%d is negative number \n",num);
else if(num==0)
printf("%d is Zero \n",num);
return 0;
}
