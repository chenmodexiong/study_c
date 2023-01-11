#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//#include <string.h>

//strlen返回值为size_t的问题
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

//模拟实现strlen
//#include <stdio.h>
//#include <string.h>

//第一种方法——计数器
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

//第二种方法——递归
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

//第三种方法——指针相减
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;//记录起始地址
//	while (*str)
//	{
//		str++;
//	}
//	return (int)(str - start);//指针相减得到的是中间元素个数
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
////模拟实现strcpy
//#include <assert.h>
//char* my_strcpy(char* des, const char* source)
//{
//	assert(des && source);//判断指针合法性
//	char* ret = des;//记录目标字符串起始地址
//	while (*des++ = *source++)//拷贝
//	{
//		;
//	}
//	return ret;//返回目标起始地址
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char* arr2 = "abcdef";//常量字符串不能被修改
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strcat——追加字符串
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = "hello ";//注意要保证目标空间足够大
//	char arr2[] = "world!!";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////模拟实现strcat
//#include <assert.h>
//char* my_strcat(char* des, const char* source)
//{
//	assert(des && source);//判断指针合法性
//	char* ret = des;//记录起始地址
//	//1.找到目标字符串\0
//	while (*des)
//	{
//		des++;
//	}
//	//2.追加
//	while (*des++ = *source++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";//注意要保证目标空间足够大
//	char arr2[] = "world!!";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp——字符串比较
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "abq";
//	printf("%d\n",strcmp(arr1, arr2));
//	return 0;
//}


////模拟strcmp
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


//模拟strstr

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);//判断指针合法性
//	if (*str2 == '\0')
//	{
//		return (char*)str1;//str2为空字符串不做任何处理，直接返回str1
//	}
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;//记录开始判断的地址
//	//重点是理解下面思路
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
//		printf("没找到");
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


//C语言的库函数在运行的时候，如果发生错误，就会将错误码存在一个变量中，这个变量是：errno
//错误码是一些数字：1 2 3 4 5 
//我们需要讲错误码翻译成错误信息
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//关闭文件
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