#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;//����һ��������һ���Ὺ��һ��ռ䣻
//	int* pa = &a;//��a�ĵ�ַȡ�����ŵ�pa����ȥ��pa����һ��ָ�������
//
//	printf("%p\n", &a);//��a�ĵ�ַ��pa��ӡ������һ�£�
//	printf("%p\n", pa);
//
//	*pa = 20;//*�����ò�������*pa�õ�����ʵ����a��
//	         //�������ֱ��ͨ��ָ���ҵ���a���Ӷ�ֱ�Ӷ�a���в���
//	printf("a=%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//
//	//int* pa = &a;
//	//*pa = 0;
//
//	return 0;
//}



//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//
//	char* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	int* pb = &a;
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= sz; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p=test();
//	printf("%d\n", *p);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int p = &arr[9] - &arr[0];
//	printf("%d\n", p);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int my_strlen(char* start)
//{
//	char* str = start;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	//����������ʼ��Ϊ1~10��
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	char arr[] = "";
//	char ch = 0;
//	while ((ch = getchar()) != '\0')
//	{
//		char arr[] = ch;
//	}
//	return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//	char str[101];
//	while (fgets(str, 101, stdin) != NULL) 
//	{
//		int l = 0;
//		while (str[l] != '\n' && str[l] != '\0')l++;
//		for (int i = l - 1; i >= 0; i--)printf("%c", str[i]);
//		printf("\n");
//	}
//}
//


//
//#include<stdio.h>
//
//int main()
//{
//	char arr[13] = { 0 };
//	int left = 0;
//	int right = 12;
//	while (left<right)
//	{
//		int mid = (left + right) / 2;
//		printf("* ");
//		left++;
//		right--;
//	}
//	return 0;
//}
//













