#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "abcde";
	//������������ǵ�ַ���������ַ�����һ���ַ��ĵ�ַ��
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}

//#include<stdio.h>
//
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//
//void Print(unsigned int n)
//{
//	if(n>9)
//	{
//		Print(n/10);
//	}
//	printf("%d ",n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u",&num);
//	Print(num);
//	return 0;
//}




//����ջ�������򵥵ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

////ȫ�ֱ�������ʼ��Ĭ����0��
//int val;
//int main()
//{
//	printf("%d\n",val);
//	return 0;
//}


//int amd;//������������
//int main()
//{
//	printf("%d\n",amd);
//	return 0;
//}
//int amd = 2022;//�����Ķ��壻

//���뾲̬��
//#pragma comment(lib,"add_11_1.lib")
//
//#include<stdio.h>
//#include"add.h"
////����ģ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int ret=Add(a,b);
//	printf("sum=%d\n",ret);
//	return 0;
//}

//#include<stdio.h>
////����������
//int Add(int x,int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret=Add(a,b);
//	printf("%d\n",ret);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//��ʽ���ʾ���
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//�����ǲ���Ƕ�׶���ģ�
//	//����ֻ����Ƕ�׷��ʣ�
//	void Add(int x, int y)
//	{
//		return x + y;
//	}
//
//	return 0;
//}


//#include<stdio.h>
//void Add(int* num)
//{
//	*num += 1;
//	//(*num++);
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//
//	printf("%d\n",num);
//	return 0;
//}
//#include<stdio.h>
//int count(int sum)
//{
//	sum += 1;
//	return sum;
//}
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	sum=count(sum); 
//	sum = count(sum);
//	sum = count(sum);
//	sum = count(sum);
//
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	scanf("%d",&k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=search(arr,k,sz);
//	if (ret != -1)
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d",ret);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}