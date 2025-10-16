#include <stdio.h>

int main(){
	// QUESTION 2
	int arr[10], SearchNum, count = 0;

	for(int i=0; i<10;i++){
		printf("Enter num %d : ", i+1);
		scanf(" %d", &arr[i]);
	}
	
	// Searching algorithm
	printf("Please enter Number to search : ");
	scanf(" %d",&SearchNum);
	
	
	for(int i =0; i<10;i++){
		if(SearchNum == arr[i]){
			count++;
		}
	}
	
	if(count > 0){
		printf("\nThe number was entered %d times" , count);
	}
	else{
		printf("\nnumber not found");
	}
	return 0;
}