#define  _CRT_SECURE_NO_WARNINGS 1


//
//#include<stdio.h>
//#include<stdbool.h>
//
//int main()
//{
//	_Bool flag = 0;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//



//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a > 60)
//			printf("pass\n");
//		else
//			printf("fail\n");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//
//void swap1(int* a,int* b)
//{
//	//*a = *a + *b;
//	//*b = *a - *b;
//	//*a = *a - *b;
//
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d,b=%d\n", a, b);
//
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//
//	swap1(&a,&b);
//	printf("交换后：a=%d,b=%d\n",a,b);
//	return 0;
//}

//
//#include<stdio.h>
//
////只适用于正数的写法
//// 
////int count(int n)
////{
////    int cnt = 0;
////    while (n != 0)
////    {
////        if ((n & 1) == 1)
////        {
////            //cnt += n & 1;
////            cnt++;
////            n >>= 1;
////        }
////    }
////    return cnt;
////}
//
////正负数都使用的方法
//
//int count(int n)
//{
//    int cnt = 0;
//    int flag = 1;
//    while (flag!=0)
//    {
//        if ((n & flag) == flag)
//        {
//            cnt++;
//        }
//        flag <<= 1;
//    }
//    return cnt;
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret=count(n);
//    printf("%d\n",ret);
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        switch (month)
//        {
//        case 2:
//            if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
//            {
//                printf("29\n");
//            }
//            else
//            {
//                printf("28\n");
//            }
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        default:
//            printf("31\n");
//            break;
//        }
//    }
//
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int even=count(n);
//	printf("%d", even);
//	printf();
//	return 0;
//}

//#include<stdio.h>
//int number(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    if (n == 2)
//    {
//        return 2;
//    }
//    else
//    {
//        return number(n - 1) + number(n-2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = number(n);
//    printf("%d\n",ret);
//    return 0;
//}


//#include<stdio.h>
//int number(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return number(n - 1) ;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = number(n);
//    printf("%d\n", ret);
//    return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z)
//{
//    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//float h(float x, float z)
//{
//    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//    {
//        if (f(x, y, z) <= 0.0f)
//            return y;
//    }
//    return 0.0f;
//}
//int main()
//{
//    //PlaySound("heart", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//    //该函数引号内的便是插入的音频文件名，可更改。
//    HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//    _TCHAR buffer[25][80] = { _T(' ') };
//    _TCHAR ramp[] = _T(".:-=+*#%@");
//    for (float t = 0.0f;; t += 0.1f)
//    {
//        int sy = 0;
//        float s = sinf(t);
//        float a = s * s * s * s * 0.2f;
//        for (float z = 1.3f; z > -1.2f; z -= 0.1f)
//        {
//            _TCHAR* p = &buffer[sy++][0];
//            float tz = z * (1.2f - a);
//            for (float x = -1.5f; x < 1.5f; x += 0.05f)
//            {
//                float tx = x * (1.2f + a);
//                float v = f(tx, 0.0f, tz);
//                if (v <= 0.0f)
//                {
//                    float y0 = h(tx, tz);
//                    float ny = 0.01f;
//                    float nx = h(tx + ny, tz) - y0;
//                    float nz = h(tx, tz + ny) - y0;
//                    float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//                    float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//                    *p++ = ramp[(int)(d * 5.0f)];
//                }
//                else
//                    *p++ = ' ';
//            }
//        }
//        for (sy = 0; sy < 25; sy++)
//        {
//            COORD coord = { 0,sy };
//            SetConsoleCursorPosition(o, coord);
//            WriteConsole(o, buffer[sy], 79, NULL, 0);
//        }
//        system("color 0c");
//        Sleep(0);
//    }
//
//}


//#include<stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1,&num2);
//	int num=num1^ num2;
//	int count = 0;
//	while (num!=0)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 0;
//	char arr[32] = { 0 };
//	scanf("%d",&num);
//	_itoa(num, arr, 2);
//	printf("%s",arr);
//
//	return 0;
//}


#include<stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	printf("奇数：");
	//奇数位
	for (i = 31; i >= 1; i-=2)
	{
		if ((num & (1 << i)) )
		{
			printf("%d ",1);
		}
		else
		{
			printf("%d ",0);
		}
	}
	printf("\n");
	printf("偶数：");
	//偶数位
	for (i = 30; i >= 0 ; i -= 2)
	{
		if ((num & (1 << i)))
		{
			printf("%d ",1);
		}
		else
		{
			printf("%d ",0);
		}
	}

	return 0;
}

//
//int main() {
//	int num = 0;
//	printf("请输入一个数:");
//	scanf("%d", &num);
//	printf("奇数位：");
//	for (int i = 31; i >= 1; i -= 2) {
//		if (num & (1 << i)) {
//			printf("%d ", 1);
//		}
//		else {
//			printf("%d ", 0);
//		}
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (int i = 30; i >= 0; i -= 2) {
//		if (num & (1 << i)) {
//			printf("%d ", 1);
//		}
//		else {
//			printf("%d ", 0);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



