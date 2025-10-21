#include <stdio.h>

int main(){
	
	// QUESTION 6
	
	
	char str[100];
	int vowels=0, consonents=0, i=0;
	
	printf("Enter any word : ");
	scanf(" %s", str);
	
	
	for(i; str[i] != '\0';i++){
		
		
		if (str[i] >= 'A' && str[i] <= 'Z' ){
			if(str[i]== 'A' || str[i]== 'E' || str[i]== 'I' || str[i]== 'O' || str[i]== 'U'){
				vowels++;
			}
			else {
				consonents++;
			}
		}
		
		
	 if (str[i] >= 'a' && str[i] <= 'z' )
	 {
			if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
				vowels++;
			}else{
				consonents++;
			}
	}
}
	
	printf("\nConsonsents = %d", consonents);
	printf("\nVowels = %d", vowels);
	
return 0;
}
