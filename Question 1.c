#include <stdio.h>

int main() {
	
	char str[] = {"Hello"};
	

	for(int i = 0; i <5; i++){
	
	printf("char at index %d: %c \n", i, str[i]);
}

printf("\n");


str[0]='J';

for(int i = 0; i <5; i++){
	
	printf("char at index %d: %c \n", i, str[i]);
}

	return 0;
}