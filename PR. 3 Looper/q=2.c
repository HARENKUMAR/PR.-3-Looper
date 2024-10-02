#include <stdio.h>

main() 
{
    int n,number = 0;

    printf("Enter a number = ");
    scanf("%d", &n);


    if(n== 0)
	{
        number= 1;
    } 
	 
	else 
	{
        while(n!= 0) 
		{
            n/= 10;  
            number++;    
        }
    }

    printf("The total number of digits in a number is :~ %d\n",number);
}
