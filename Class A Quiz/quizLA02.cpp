#include <stdio.h>
#include <string.h>

int main(){
	
	int t, length, truth = 0, lie = 0; 
	char str[101]; 

	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%s", &str); 
		if(strlen(str) % 2 != 0){
			printf("NO\n");
		}
		else{
			for(int j = 0; j < strlen(str)/2; j++){
				if(str[j] == str[strlen(str)/2 + j]){
					truth += 1; 
				}
				else{
					lie+= 1; 
				}
			}
		if(truth > lie && lie == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	
		}
	}
return 0; 
}

