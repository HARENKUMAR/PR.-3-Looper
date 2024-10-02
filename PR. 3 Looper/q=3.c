#include <stdio.h>

main() 
{
    
	int n,num1,num2,total;

    printf("Enter a number = ");
    scanf("%d",&n);

    num2=n%10;
    num1=n;
    
    while(num1>= 10)
	{
        num1/=10;  
    }

    total=num1+num2;

    printf("The sum of a number's first and last digits is :-  %d\n",total);
}
