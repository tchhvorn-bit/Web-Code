#include<stdio.h>

int main(){
	
	// use break and continue 
	
	for(int i = 1; i <= 10; i++){
		
		if(i == 2){
			continue; // break is stop continue is skip
			
		}
		
		printf("%d\n", i);
		
	}
	
	
	
	return 0;
}
