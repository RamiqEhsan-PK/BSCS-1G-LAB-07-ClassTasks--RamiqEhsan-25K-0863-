#include <stdio.h>

int main(){
	
	// QUESTION 4
	
	int i=0, Length=0;
	char str[100];	
	
	
	printf("Please enter your sentence : ");
	scanf("%[^\n]", str);
	
	
	for(i;i<100;i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i] = str[i] -32;
		}
		else if(str[i]>='A' && str[i]<= 'Z'){
			str[i]= str[i]+	32;
		}
	}
	
	
	printf("\n%s",str);
	
	return 0;
}
