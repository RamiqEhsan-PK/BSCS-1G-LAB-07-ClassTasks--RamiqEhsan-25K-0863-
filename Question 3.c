#include <stdio.h>

int main(){
	//Question 3
	int arr[10], pass[10], fail[10], Num, passNum=0, failNum=0, NetPassScore = 0, NetFailScore = 0, AvgPass=0, AvgFail=0;
	
	for(int i = 0; i<10; i++){
		
		printf("Please enter score of student %d: ", i+1);
		scanf(" %d", &Num);
		
		arr[i] = Num;
		
		if(Num == -1){
			i = 10;
		}
		else if(Num > -1 && Num <5){
			failNum++;
			NetFailScore = NetFailScore + Num;
			fail[i] = Num;
			
		}
		else if(Num >=5 && Num < 11){
			passNum++;
			NetPassScore = NetPassScore + Num;
			pass[i] = Num;
	
		}	
	}
	if(failNum == 0){
		failNum ++;
	}
	if(passNum == 0){
		passNum++;
	}
			
			AvgPass = NetPassScore / passNum;
			AvgFail = NetFailScore / failNum;
			printf("\nAverage score of passing students = %d" , AvgPass);
			printf("\nAverage score of failing students = %d" , AvgFail);
			
	return 0;
}