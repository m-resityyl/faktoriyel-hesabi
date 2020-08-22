#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int f=1,i,s;
	printf("******FAKTORIYEL HESAPLAMA******\n\n");

    printf("faktoriyelini istediginiz sayyi giriniz: ");
	scanf("%d",&s);

	for(i=1;i<=s;i++)
	{	
		f=f*i;
	}
	printf("\ncevap: %d\n\n",f);
	printf("********************************");
		
	return 0;
} 

