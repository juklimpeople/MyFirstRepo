#include <stdio.h>

int main(void){
	printf("Hello World!\n");
	printf("%d * %d = %d\n", 1, 2, 1*2);
	

	for( int i=8 ; i<=9 ; i++ )
	    for( int j=8 ; j<=9 ; j++ )
		printf("%d * %d = %d\n", i, j, i*j);


	return 0;
}
