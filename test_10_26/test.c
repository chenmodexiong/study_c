#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int k = 0;
	int num = rand() % 100 + 1;                 //rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
                                                //srand�����ڳ�����ֻҪ����һ�ξͿ����ˣ�����ҪƵ������
	while(1)
	{
		printf("�������:\n");
		scanf("%d", &k);
		if (k == num)
		{
			printf("��ϲ��,�¶���!!!\n");
			break;
		}
		if (k < num)
		{
			printf("��С��\n");
		}
		if (k > num)
		{
			printf("�´���\n");
		}
	}
}
int main()
{
	printf("menu:\n\n");
	printf("**************************\n");
	printf("*******   1.play    ******\n");
	printf("*******   0.exit    ******\n");
	printf("**************************\n");
	int i = 0;
	//srand((unsigned int)time(NULL));             //NULL - ��ָ��
	                                               //ʱ���
                                                   //C�����У�time�����᷵��ʱ���
	srand(time(NULL));
	printf("������:>\n");
	scanf("%d",&i);
	while (i==1)
	{
		game();
		break;
	}
	if (i == 0)
		printf("�˳�����\n");
	else if(i!=0 && i!=1)
		printf("�������\n");
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[20] = {""};
//	int i = 0;
//	while (i < 3)
//	{
//		printf("����������\n");
//		scanf("%s",arr);
//		if (strcmp(arr, "12345678") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//		i++;
//	}
//	printf("���ξ��������\n");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = {"welcome to bit!!!!"};
//	char arr2[] = {"******************"};
//	int left = 0;
//	int right = strlen(arr2)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//Sleep����������˯��,��λ�Ǻ���,1000�������1��;
//		system("cls");//system��ִ��ϵͳ����,cls�������Ļ;
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!\n");
//	return 0;
//}
//int main()
//{
//	int flag = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = 9;
//	int mid = 0;
//	int k = 0;
//	scanf("%d",&k);
//	while (left <= right)
//	{
//		mid=(left + right) / 2; //���м�ֵ
//		//�жϺ͵�����Ѱ��k
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	//if (left>right)
//	if(flag==0)
//		printf("�Ҳ���\n");
//	return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % 2 == 0)
//				break;
//		}
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i =0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j < i - 1; j++)
//		{
//			if (i % 2 == 0)
//				break;
//		}
//		if(i%2!=0)
//		printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);
//	printf("%4d %02d %02d",year,month,day);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d",&i);
//	while (i)
//	{
//		ret=i % 10;
//		printf("%d", ret);
//		i /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	printf("\n%d\n", printf("hello world"));
//	return 0;
//}
//int main()
//{
//	int i = printf("hello world");
//	printf("\n");
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	printf("%15d",0XABCDEF);
//	return 0;
//}
//int main()
//{
//	printf("%#o\n",1234);
//	printf("%#X\n",1234);
//	return 0;
//}