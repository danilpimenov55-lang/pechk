#include <stdio.h>

int f1(int dlina, int visota){
	int i;
	int g;
	for (i=0;i<visota;i=i+1){
		for(g=0;g<dlina;g=g+1){
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}

int main(){
	int dlina,visota;
	scanf("%d",&visota);
	scanf("%d",&dlina);
	printf("%d",f1(dlina,visota));
	
}

