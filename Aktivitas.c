#include <stdio.h>
void aktivitas(int akv[], int stt[], int minus[], int minusLength)
{
	if(validasi(akv, stt,minus,minusLength)==1){
		int i;
		for (i = 0; i <= 4; i ++)
		{
			stt[i] = stt[i] + akv[i];
			
		}	
	}
}

int validasi(int akv[], int stt[], int minus[],int minusLength){
	int i;
	int result=1;
	for(i=0;i<minusLength; i++){
		if((stt[minus[i]]+ akv[minus[i]])<0){
			printf("\nAktivitas tidak dapat dilakukan\n");
			result = 0;
			break;
		}
	}
	return result;
}

