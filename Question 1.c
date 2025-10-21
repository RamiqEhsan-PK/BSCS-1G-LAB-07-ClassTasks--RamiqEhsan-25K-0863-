#include <stdio.h>

int main(){
	
	
	//Question 1
	
	
	int Num[5], temp, i=0;
	
	for(i; i<5;i++){
		
		printf("Enter Num %d : ", i+1);
		scanf(" %d", &Num[i]);
	}
	
	temp = Num[4];
	i=4;
	
	for(i;i>0;i--){
		Num[i]=Num[i-1];
	}
	Num[0] = temp;
	
	i=0;
	for(i;i<5;i++){
	
	printf("%d ", Num[i]);
	}

	return 0;
}

