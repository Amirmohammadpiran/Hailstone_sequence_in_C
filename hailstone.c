#include <stdio.h>

void hailstone(int num){
	
	if (num%2==0){
		//If number is even, then we divide it by 2:
		printf("%d\n",num);
		hailstone(num/2);
	}
	else{
		if (num==1){
			//If number is 1, then we end the sequence:
			printf("%d\n",num);
			return;
		}
		//If number is odd, then we multiply it by 3 and add 1:
		printf("%d\n",num);
		hailstone(num*3+1);
	}
	return;
}


int main(){
	int input;
	printf("Enter starting number of Hailstone sequence:");
	scanf("%d",&input);
	hailstone(input); //This function calculates the haillstone sequence!
	return 0;
}