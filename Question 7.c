#include <stdio.h>

int main() {
	
	int Num[10], i=0;
	
	for(i;i<10;i++){
		printf("Enter Num %d : ",i+1);
		scanf(" %d", &Num[i]);
}
	i=0;
	
	
	
	for(i;i<10;i++){
		
		if(i!=0 && Num[i] == Num[0]){
			Num[0]=-1;
		}
		if(i!=1 && Num[i] == Num[1]){
			Num[1]=-1;
		}
		if(i!=2 && Num[i] == Num[2]){
			Num[2]=-1;
		}
		if(i!=3 && Num[i] == Num[3]){
			Num[3]=-1;
		}
		if(i!=4 && Num[i] == Num[4]){
			Num[4]=-1;
		}
		if(i!=5 && Num[i] == Num[5]){
			Num[5]=-1;
		}
		if(i!=6 && Num[i] == Num[6]){
			Num[6]=-1;
		}
		if(i!=7 && Num[i] == Num[7]){
			Num[7]=-1;
		}
		if(i!=8 && Num[i] == Num[8]){
			Num[8]=-1;
		}
		if(i!=9 && Num[i] == Num[9]){
			Num[9]=-1;
		}
		
	}
	
i=0;
	for(i;i<10;i++){
		printf("\n%d", Num[i]);
	}
	
	
	
	return 0;
}
