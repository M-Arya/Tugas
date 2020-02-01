#include <stdio.h>
#include "Aktivitas.h"
#include "syarat.h"

int main()
{
	int stt[5]= {25,25,25,25,25};
	printf("Status\n");
	printf("happines 	= %d\n", stt[0]);
	printf("hygiene		= %d\n", stt[1]);
	printf("social		= %d\n", stt[2]);
	printf("health 		= %d\n", stt[3]);
	printf("money		= %d\n", stt[4]);
	while (stt[3] != 0)
	{
		int pil; 
		printf("\n1. Sarapan.\n2. Lari Pagi.\n3. Main Game.\nPilih aktivitas : ");
		scanf("%d", &pil);
		
		if (pil == 1)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
			
		}
		
		else if (pil == 2)
		{
			int akv[5] = {0,20,0,-15,-5};
			int minus[2] = {3,4};
			aktivitas(akv, stt, minus, 2);
		}
		
		else if (pil == 3)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
		else if (pil == 4)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
		else if (pil == 5)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
		else if (pil == 6)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
		else if (pil == 8)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
		else if (pil == 9)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
		else if (pil == 10)
		{
			int akv[5] = {0,0,0,15,-20};
			int minus[1] = {4};
			aktivitas(akv, stt, minus, 1);
		}
		
			printf("\nStatus\n");
			printf("happines 	= %d\n", stt[0]);
			printf("hygiene		= %d\n", stt[1]);
			printf("social		= %d\n", stt[2]);
			printf("health 		= %d\n", stt[3]);
			printf("money		= %d\n", stt[4]);
	}

}
