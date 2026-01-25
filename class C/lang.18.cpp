#include<stdio.h>
#include<windows.h>
#include<unistd.h>

int main(){
	
	for(int i = 10; i >= 0; i--){
		Sleep(1500);
		printf("%d\n", i);
	}
	
	printf("YOU LOOK THIS YOU LOVE ME!!");
	
	return 0;
	
}
