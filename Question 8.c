#include <stdio.h>

int main(){
	
	// Question 8
	
	
	char str[100];
	int i=0;
	printf("Enter any string => ");
	scanf("%[^A-Za-z]", str);
	
	printf("The string without alphabets is = ");
		printf("%s", str);
	

	return 0;
}
