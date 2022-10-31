#include <stdio.h>

int main(){
	
	long long int n1, n2; 
	long long int ar1[100000], ar2[100000]; 
	
	
	scanf("%lld %lld", &n1, &n2);
	
	for(int i = 0; i < n1; i++){
		scanf("%lld", &ar1[i]); 
	}	
	
	for(int i = 0; i < n2; i++){
		scanf("%lld", &ar2[i]);
	}	
	
	// THIS 
	if(n1 > n2){
		for(int i = 0; i < n1; i++){
			if(ar1[i] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0; 
			}
			else if(ar1[i+1] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;	
			}
			else if(ar1[i+2] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;
			}
			else{
				printf("UNIQUE\n");
				return 0; 
			}
		}
	}
	
	//THIS DOESN'T WORK 
	else if (n1 < n2){
		for(int i = 0; i < n2; i++){
			if(ar1[i] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0; 
			}
			else if(ar1[i+1] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;	
			}
			else if(ar1[i+2] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;
			}
			else{
				printf("UNIQUE\n"); 
				return 0; 
			}
		}
	}
	
	// THIS WORKS ! 
	else if (n1 == n2){
		for(int i = 0; i < n1; i++){
			if(ar1[i] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;
			}
			else if(ar1[i+1] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;	
			}
			else if(ar1[i+2] == ar2[i]){
				printf("NOT UNIQUE\n");
				return 0;
			}
			else{
				printf("UNIQUE\n");
				return 0; 
			}
		}
	}
	else{
		printf("UNIQUE 4\n");
		return 0;
	}
	
	
	return 0; 
}


