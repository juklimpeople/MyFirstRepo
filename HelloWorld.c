#include <stdio.h>

int main(void){
	printf("Hello World!\n");
	printf("Argos");
	printf("%d * %d = %d\n", 1, 2, 1*2);
	

	for( int i=1 ; i<=9 ; i++ )
	    for( int j=1 ; j<=9 ; j++ )
		printf("%d * %d = %d\n", i, j, i*j);


	return 0;
}
