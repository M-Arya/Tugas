#include <stdio.h>
#include "Aktivitas.h"
int main()
{
    int stt[6] = {25,25,25,25,25};
    int *pstt;
    pstt = stt;
	printf("happines 	= %d\n", pstt[0]);
	printf("hygiene		= %d\n", pstt[1]);
	printf("social		= %d\n", pstt[2]);
	printf("health 		= %d\n", pstt[3]);
	printf("money		= %d\n", pstt[4]);
	while (stt[4] >= 0)
	{
		int pil;
		printf("Pilih aktivitas :\n 1. Makan.\t 6. Nongkrong.\n 2. Lari Pagi.\t 7. Laundry \n 3. Main Game.\t 8. Nonton \n 4. Tidur.\t 9. Gelud. \n 5. Mandi.\t 10. Kerja.\n");
		scanf("%d", &pil);

		if (pil == 1)
        /* makan */
		{
			int akv[6] = {+4,+1,0,+5,-4};
			aktivitas(akv, pstt);
		}

		else if (pil == 2)
		/* lari pagi */
		{
			int akv[6] = {+5,-3,+3,-4,-1};
			aktivitas(akv, pstt);
		}

		else if (pil == 3)
		/* main game */
		{
			int akv[6] = {+6,-1,0,-3,-5};
			aktivitas(akv, pstt);
		}

		else if (pil == 4)
		/* tidur */
		{
			int akv[6] = {+3,0,0,+5,0};
			aktivitas(akv, pstt);
		}

		else if (pil == 5)
		/* mandi */
		{
			int akv[6] = {+3,+6,0,+5,-2};
			aktivitas(akv, pstt);
		}

		else if (pil == 6)
		/* nongkrong */
		{
			int akv[6] = {+5,0,+5,0,-5};
			aktivitas(akv, pstt);
		}

        else if (pil == 7)
		/* laundry */
		{
			int akv[6] = {+2,+4,0,+2,-3};
			aktivitas(akv, pstt);
		}

		else if (pil == 8)
		/* nonton */
		{
			int akv[6] = {+5,0,+2,0,-5};
			aktivitas(akv, pstt);
		}

		else if (pil == 9)
		/* gelud */
		{
			int *akv[6] = {+4,-3,-5,-7,-3};
			aktivitas(akv, pstt);
		}

		else if (pil == 10)
		/* kerja */
		{
			int akv[6] = {-5,0,+2,-2,+7};
			aktivitas(akv, pstt);
		}
		printf("happines 	= %d\n", pstt[0]);
		printf("hygiene		= %d\n", pstt[1]);
		printf("social		= %d\n", pstt[2]);
		printf("health 		= %d\n", pstt[3]);
		printf("money		= %d\n", pstt[4]);
        if (pstt[3] <= 0 || pstt[4] <= 0)
        {
            printf("Anda Kalah!");
            break;
        }
        if (pstt[0] >= 100)
        {
            printf("Selamat Anda Menang!");
            break;
        }
	}

}
