#include <stdio.h>
#include <string.h>

int main(){
	
	int a,n,e; 
	int ar[1001], ar2[1001]; 
	
	scanf("%d", &a); 
	for(int i = 0; i < a; i++){//scan array ar with size a 
		scanf("%d", &ar[i]); 
	}
	scanf("%d", &e);
	for(int i = 0; i < e; i++){//scan array ar2 with size e 
		scanf("%d", &ar2[i]);
	}
	
	for(int i = 0; i < a; i++){ //remove all numbers that correspond to the ones put in ar2 
		for(int j = 0; j < e; j++){
		if(ar[i] == ar2[j] ){
			ar[i] = 0; 
		}
		}
	}

	int similarity = 0; 
	int number; 
	for(int i = 0; i < a; i++){ //remove all numbers that are not similar, and count the mode 
		for(int j = 0; j < a; j++){
			if(ar[i] == 0){
				break; 
			}
			else if(ar[i] == ar[j]){
				similarity += 1;
				number = ar[i]; 
				number *= similarity;
			}
			else{
				break; 
			}	
		}
	}
	printf("Bird %d", number/similarity);
	
	
	return 0; 
}
