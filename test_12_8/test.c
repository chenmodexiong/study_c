#define  _CRT_SECURE_NO_WARNINGS 1


//���ֲ��ҷ�
//�۰���ҷ�

//�ҳ�����7���Ҵ�ӡ�±�
#include<stdio.h>

int main()
{
	int flag = 0;
	printf("������Ҫ���ҵ�����:>\n");
	scanf("%d", &flag);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < flag)
		{
			left = mid + 1;
		}
		else if (arr[mid] > flag)
		{
			right = mid-1;
		}
		else if(arr[mid]==flag)
		{
			printf("�ҵ��ˣ�����%d���±���:%d\n",flag, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}

//дһ������ʵ�ֶ��ֲ���

#include<stdio.h>

int half_find(int* arr, int left, int right,int key)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] == key)
		{
			return mid;
		}
	}
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 0;
	printf("������Ҫ���ҵ�Ԫ��:>\n");
	scanf("%d", &key);
	int flag=half_find(arr, 0, sz - 1,key);
	if (flag == 0)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±���:%d\n", flag);
	}
	return 0;
}




