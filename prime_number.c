




/* Source:                                             */
/* Sieve of EratosthenesSieve Algorithm                */
/* https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes */




#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(int argc , char *argv[] )
{

uint32_t *array,*ptr;
uint32_t i,j,k,sqt,n;


	printf(" Input the series of N primes to be retrieved \n");
	

	if( argc > 2 )	{
		printf("please supply proper arguments \n");
		return 0;
	}

	n = atoi(argv[1]);
	printf("Prime to be calculated is :%d\n",n);

#if 1
	ptr = (uint32_t *)(malloc(sizeof(sizeof(uint32_t) * (n+1))));
	array = ptr;

	if ( array == NULL){
		printf("OOps memory alloca failed ! \n");
		return 0;
	}

	for(i = 0 ; i < n; i++){
		array[i] = 1;       /* init all the array elements to true */
	}

	sqt = sqrt(n);

	for( i = 2; i <= sqt; i++){
		if(array[i]){
		k = 0;
		j = i*i;
		while(j <= n){
			array[j] = 0;
			j = (i*i + k* i);
			k++;
		}
		}
	}
	

	printf("N prime numbers \n");	
	for( i = 1; i <= n; i++){
	
	     if( array[i] == 1 )
		printf("  %d ",i);

	     if(i%10 == 0)
		printf("\n");
	 }

	free(ptr);

#endif

}

	



	



	





