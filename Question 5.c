#include <stdio.h>

int main(){
	//Question 5
	
	int arr[10], max=0, min, difference;
	
	for (int i =0; i <10 ; i++){
		printf("Enter num %d : ", i+1);
		scanf(" %d", &arr[i]);
		
		if(arr[i]> max){
			max = arr[i];
		}
		
	}
	
	min = max;
	
	for(int i = 0; i <10 ; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	difference = max-min;
	printf("The difference is %d", difference);
	return 0;
}