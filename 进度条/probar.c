#define  _CRT_SECURE_NO_WARNINGS 1


#include "probar.h"

//ԭʼ�汾

void ProBar()
{
	char bar[NUM+1];
	memset(bar, '\0', sizeof(bar));
	int i = 0;
	const char* flag= "|\\-/";
	//while (i <= NUM)
	//{
	//	printf("[%s][%d%%][%c]\r", bar,i,flag[i%4]);
	//	fflush(stdout);
	//	bar[i++] = '#';
	//	Sleep(50);
	//}
	for (i = 0; i <= NUM; i++)
	{
		printf("[%s][%d%%][%c]\r", bar,i,flag[i%4]);
		fflush(stdout);
		bar[i] = '#';
		Sleep(50);
	}
	printf("\n");
}

//
////��������İ汾
//
//void ProBar()
//{
//	char bar[NUM + 1];
//	memset(bar, '\0', sizeof(bar));
//	int i = 0;
//	const char* flag = "|\\-/";
//	while (i <= NUM)
//	{
//		printf("[%s][%d%%][%c]\r", bar, (int)(i * 2.5), flag[i % 4]);
//		fflush(stdout);
//		bar[i++] = '#';
//		Sleep(50);
//	}
//	printf("\n");
//}




