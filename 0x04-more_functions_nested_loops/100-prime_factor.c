#include<stdio.h>  

/**
 * prime_factors - program to print;
 *
 * @num: number to check
 *
 * Return: Always 0
 */

void prime_factors(int num)  
{  
	int count;  
  
	for(count = 2; num > 1; count++)  
	{  
		while(num % count == 0)  
		{  
			printf("%d ", count);  
			num = num / count;  
		}  
	}  
	printf("\n");  
}  
  
int main()  
{  
	int num;  
  
 	num = 612852475143; 
	primefactors(num);  
  
	return 0;  
}
