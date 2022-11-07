#include <stdio.h>
#include <string.h>

int main(){
	
	int t; 
	char str[226]; 
	char str2[226];  
	int ar[256], ar2[256];
	int sum = 0, sum2 = 0; 
	
	scanf("%d", &t); 
	
	for(int i = 0; i < t; i++){
		scanf("%s", &str); 
		scanf("%s", &str2);
		
		for(int j = 0; j < strlen(str); j++){
			sum += str[j]; 
			ar[j] += str[j]; 
		}
		for(int k = 0; k < strlen(str2); k++){
			sum2 += str2[k];
			ar2[k] += str2[k]; 
		}
		
		int diff = 0, sim = 0, bigdiff = 0, bigsim = 0;  
		
		for(int g = 0; g < strlen(str); g++){
			if(str[g] == str[g+1]){
				sim -= 1; 
			}
			else if(str[g] == str[g+2]){
				sim -= 1; 
			}
		}
		for(int r = 0; r < strlen(str2); r++){
			if(str2[r] == str2[r+1]){
				sim -= 1; 
			}
			else if(str2[r] == str2[r+2]){
				sim -= 1; 
			}
		}
	 
		if(sum == sum2){
			printf("Test %d: 0\n", i+1);
		}
		else{
			for(int x = 0; x < strlen(str); x++){ // 0 1 2 3 4 
				for(int y = 0; y < strlen(str2); y++){ //0 1, 0 2, 0 3
					if(str[x] == str2[y]){
						sim += 1;
					}
				}
			}
			int tl; 
			tl = strlen(str)+strlen(str2)-2*sim; //strlen(str)+strlen(str2)-2*sim
			if(tl >= strlen(str)+strlen(str2)){
				printf("Test %d: Anagram not found!\n", i+1); 
			}
			else{
			printf("Test %d: %d\n",i+1, strlen(str)+strlen(str2)-2*sim); 
			}
		}	
	}
	return 0; 		
}
