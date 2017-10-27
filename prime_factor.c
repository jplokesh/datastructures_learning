

#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<stdlib.h>



uint32_t trial_division(uint32_t n)
{
  //uint32_t factors[20];	
  uint32_t sqt,p,q; 	 
	
  	if( n < 2 ){
	  return 0;
	}

	sqt = sqrt(n);
  	for( p = 2 ; p <= sqt; p++)
	{
		if( p * p > n)
		   break;

		if( n % p == 0)
		{
			q = n/p;
			printf( "Factors of n are : p:%d  q:%d \n",p,q);
		}

	}


}



int main(int argc , char *argv[] )
{

uint32_t array[10000];
uint32_t n =0;


        printf(" Input the series of N primes to be retrieved \n");


        if( argc > 2 )  {
                printf("please supply proper arguments \n");
                return 0;
        }

        n = atoi(argv[1]);
        printf("Prime to be calculated is :%d\n",n);

	trial_division(n);


}
