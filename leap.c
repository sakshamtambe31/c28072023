#include<stdio.h>
int main(){
	int y;
	scanf("%d",&y);
	if(y%400 == 0){
		printf("%d it is a leap year\n",y);
	}
		else if(y%100 == 0){
			printf("%d it is not a leap year\n",y);
		}
		else if(y%4 == 0){
			printf("%d it is a leap year\n",y);
		}
		else{
			printf("%d it is not a leap year",y);
		}
	

}
