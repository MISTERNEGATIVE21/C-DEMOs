#include <stdio.h>

int arrayMax(int digits[], int n);
int arrayMin(int digits[], int n);

int main(){
	int n,q,i, choice, answer;
	printf("Enter no. of elements in array ");
	scanf("%d", &n);
	int num[n];
	for(i = 1; i <= n; i++){
		printf("Enter %d element: ", i);
		scanf("%d", &num[i]);
	} do{
	printf("Do you want to find Maximum or Minimum number in array? \n 1 for Maximum \n 2 for Minimum\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1: answer = arrayMax(num, n);
		printf("The maximum number in the array is %d", answer);
		break;
		
		case 2: answer = arrayMin(num, n);
		printf("The minimumn number in the array is %d", answer);
		break;
		
		default: printf("Wrong Choice");
		break;
	}
	printf("Enter 1 for continue and 0 to exit");
         scanf("%d",&q);
         }while(q==1);
		
	return 0;
	
	
}

int arrayMax(int digits[], int s){
	
	int i, max;
	
	max = digits[1];
	for(i = 1; i <= s; i++){
		if(digits[i] > max){
			max = digits[i];
		}
	}
	return max;
}

int arrayMin(int digits[], int s){
	int i, min;
	min = digits[1];
	
	for(i = 1; i <= s; i++){
		if(digits[i] < min){
			min = digits[i];
		}
	}
	return min;
}
