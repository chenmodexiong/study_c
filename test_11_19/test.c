#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	printf("dayday up!\n");
//
//	return 0;
//}
//
//


//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//
//
//#include<stdio.h>
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//


//
//
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//
//
//#include<stdio.h>
//
//void Print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(pa + i) = i;
//	}
//	Print(arr,sz);
//
//	return 0;
//}
//

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int len=(int)strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* p)
//{
//	int count = 0;
//	while ((*p) != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(p + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//#include<stdio.h>
//
//void Print(char* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",*(p+sz-1-i));
//	}
//
//}
//
//int main()
//{
//	char arr[] = "I am a student";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//
//	return 0;
//}




//
//#include<stdio.h>
//#include<string.h>
//int main() 
//{
//    char str[] = { '\0' };
//    while (gets(str))
//    {  
//        int len = (int)strlen(str);
//        for (int i = len - 1; i >= 0; i--) 
//        {
//            printf("%c", str[i]);
//        }
//        printf("\n");
//    }
//}


//
//#include<stdio.h>
//
//void Print(char* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",*(p+sz-1-i));
//	}
//
//}
//
//int main()
//{
//	char arr[100] = "\0";
//	int i = 0;
//	char tmp = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		while (scanf("%c", &tmp) != EOF)
//		{
//			arr[i] = tmp;
//		}
//	}
//	Print(arr,sz);
//
//	return 0;
//}



//
//#include<stdio.h>
//
//void Print(char* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz ; i++)
//	{
//		printf("%c", *(p + sz -1 - i));
//	}
//
//}
//
//int main()
//{
//	char arr[100] = "\0";
//	char ch = 0;
//	int i = 0;
//	scanf("%s", &arr);
//	//while ((ch=getchar()) != '\0')
//	//{
//	//	arr[i] = ch;
//	//	i++;
//	//}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "";
//	scanf("%s", &arr);
//	int len=(int)strlen(arr);
//	int left = 0;
//	int right = len - 1 - left;
//	for (left = 0; left < len; left++)
//	{
//		while (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		int ret=(int)pow(n, i);
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int first = 1;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		first *= 10;
//	}
//	for (i = first; i < first*10; i++)
//	{
//		int sum = 0;
//		while (i>0)
//		{
//			int a = i % 10;
//			i /= 10;//����
//			sum+=(int)pow(a, n);
//		}
//		if (sum == i)
//		{
//			printf("%dλ��ˮ�ɻ����У�%d ",n,sum);
//		}
//	}
//	return 0;
//}
//




//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%dλ����ˮ�ɻ�����:\n",n);
//	int first = 1;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		first *= 10;
//	}
//	for (i = first; i < first * 10; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		while (tmp > 0)
//		{
//			int a = tmp % 10;
//			tmp /= 10;
//			sum += (int)pow(a, n);
//		}
//		if (sum == i)
//		{
//			printf("%d ",sum);
//		}
//	}
//	return 0;
//}
// 
// 
// 
// 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { ************* };
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len-1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", *(arr+i));
//	}
//
//	return 0;
//}
//
