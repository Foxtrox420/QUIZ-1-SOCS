#include <stdio.h>
#include <string.h>

int main(){
	
	char T[101];
	int length, cl = 0, num = 0, sc = 0; 
	
	scanf("%s", &T);
	
	if(strlen(T)< 8 || strlen(T)>33){
		printf("invalid password\n");
	}
	else{
		for(int i = 0; i < strlen(T); i++){
			if(T[i] <= 90 && T[i] >= 65){
				cl += 1; 
			}
			else if(T[i] <= 57 && T[i] >= 48){
				num += 1;
			}
			else if(T[i] <= 45 && T[i] >=33 || T[i] == 66 || T[i] == 64){
				sc += 1; 
			}
		}
		if(cl > 0 && num > 0 && sc > 0){
			printf("strong password\n");
		}
		else if(cl == 0 && num > 0 && sc > 0){
			printf("medium password\n");
		}
		else if(cl > 0 && num == 0 && sc > 0){
			printf("medium password\n");
		}
		else if(cl > 0 && num > 0 && sc == 0){
			printf("medium password\n");
		}
		else if(cl > 0 && num == 0 && sc == 0){
			printf("weak password\n");
		}
		else if(cl == 0 && num > 0 && sc == 0){
			printf("weak password\n");
		}
		else if(cl == 0 && num == 0 && sc > 0){
			printf("weak password\n");
		}
	}
	
	
	
	// A password is weak if  only one of the criteria is fullfilled
	// A password is medium if two of the criteria is fullfilled
	// A password is strong if all of the cirteria is fullfilled 

	return 0; 
}
