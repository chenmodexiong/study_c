#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//#include <string.h>

//strlen����ֵΪsize_t������
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}

//ģ��ʵ��strlen
//#include <stdio.h>
//#include <string.h>

//��һ�ַ�������������
// 
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str!=NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}

//�ڶ��ַ��������ݹ�
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str!='\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//�����ַ�������ָ�����
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;//��¼��ʼ��ַ
//	while (*str)
//	{
//		str++;
//	}
//	return (int)(str - start);//ָ������õ������м�Ԫ�ظ���
//}
//
//
//int main()
//{
//	char* arr = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//
////ģ��ʵ��strcpy
//#include <assert.h>
//char* my_strcpy(char* des, const char* source)
//{
//	assert(des && source);//�ж�ָ��Ϸ���
//	char* ret = des;//��¼Ŀ���ַ�����ʼ��ַ
//	while (*des++ = *source++)//����
//	{
//		;
//	}
//	return ret;//����Ŀ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char* arr2 = "abcdef";//�����ַ������ܱ��޸�
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strcat����׷���ַ���
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = "hello ";//ע��Ҫ��֤Ŀ��ռ��㹻��
//	char arr2[] = "world!!";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////ģ��ʵ��strcat
//#include <assert.h>
//char* my_strcat(char* des, const char* source)
//{
//	assert(des && source);//�ж�ָ��Ϸ���
//	char* ret = des;//��¼��ʼ��ַ
//	//1.�ҵ�Ŀ���ַ���\0
//	while (*des)
//	{
//		des++;
//	}
//	//2.׷��
//	while (*des++ = *source++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";//ע��Ҫ��֤Ŀ��ռ��㹻��
//	char arr2[] = "world!!";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp�����ַ����Ƚ�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "abq";
//	printf("%d\n",strcmp(arr1, arr2));
//	return 0;
//}


////ģ��strcmp
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* arr1,const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1==*arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	/*if (*arr1 < *arr2)
//		return -1;
//	else
//		return 1;*/
//	return *arr1 - *arr2;
//}
//
//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "abq";
//	printf("%d\n",my_strcmp(arr1, arr2));
//
//	return 0;
//}

//strncpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "xxxxxxxxxx";
//	char arr2[] = "abcdef";
//
//	//strncpy(arr1, arr2,3);
//	strncpy(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = "hello\0xxxxx";
//	char arr2[] = "world!!";
//	strncat(arr1, arr2, 3);
//	//strncat(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}


/*strncmp  example*/
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdq";
//	printf("%d\n", strncmp(arr1, arr2, 5));
//	printf("%d\n", strncmp(arr1, arr2, 4));
//
//	return 0;
//}



/*strstr  example*/

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* arr1 = "abbcdef";
//	char* arr2 = "bbc";
//	char* arr3 = "bbcq";
//	printf("%s\n", strstr(arr1, arr2));
//	printf("%s\n", strstr(arr1, arr3));
//	return 0;
//}


//ģ��strstr

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);//�ж�ָ��Ϸ���
//	if (*str2 == '\0')
//	{
//		return (char*)str1;//str2Ϊ���ַ��������κδ���ֱ�ӷ���str1
//	}
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;//��¼��ʼ�жϵĵ�ַ
//	//�ص����������˼·
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 !='\0' && *s2 !='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret=my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

/*strtok  example*/
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "lzuobing@handsome.net";
//	char* p = "@.";
//	char buf[50] = { 0 };
//	strcpy(buf, arr1);
//	printf("%s\n", strtok(buf, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "lzuobing@handsome.net";
	char* p = "@.";
	char buf[50] = { 0 };
	strcpy(buf, arr1);
	for (char* ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}


//C���ԵĿ⺯�������е�ʱ������������󣬾ͻὫ���������һ�������У���������ǣ�errno
//��������һЩ���֣�1 2 3 4 5 
//������Ҫ�������뷭��ɴ�����Ϣ
//
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	return 0;
//}
//
//

//strerror
//perror
//#include <errno.h>
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

#include <ctype.h>

//int main()
//{
//	int ret = isdigit('Q');
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	printf("%c\n", toupper('a'));
//	printf("%c\n", tolower('A'));
//
//	return 0;
//}
//

//I Have An Apple.
//int main()
//{
//	char arr[] = "I Have An Apple.";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//