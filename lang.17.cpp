#include<stdio.h>
#include<stdbool.h>

int main(){
	
	bool lov = true;
	char Bck = '\0';
	
	while(lov){
		printf("Y = yes\n");
		printf("N = no\n");
		printf("Do you love me?: ");
		scanf(" %c", &Bck);
		
		if(Bck != 'y' && Bck != 'Y'){
			lov = false;
		}
	
		
	}
	
	printf("Why you don't love babee<<3?");
	
	return 0;
}
