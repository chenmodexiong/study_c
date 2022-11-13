#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int main()
//{
//	//两边都是整数，计算得到的也是整数
//	int i = 10 / 3;
//	printf("i=%d\n",i);
//
//	//除号两边只要有一个浮点数，得到的结果就是浮点数；
//	//float和double类型默认打印小数点后位；
//	//想保留几位直接在%f或者%lf前面加.n即可；
//	double a = 10.0 / 3;
//	printf("a=%lf\n", a);
//	double b = 10 / 3.0;
//	printf("b=%.1lf\n", b);
//	double c = 10.0 / 3.0;
//	printf("c=%.2lf\n", c);
//
//	//需要强调的是%两边只能是整数（整形）；
//	//所以%得到的值也只能是整数；
//	int j = 10 % 3;
//	printf("j=%d\n", j);
//
//	return 0;
//}






//左移操作符  <<
//右移操作符  >>
//左移右移操作符移动的都是是二进制位
//移位操作符只能作用于整数；
//
//int main()
//{
//	int i = 10;
//	int a = 10 << 1;
//	int b = 10 >> 1;
//	printf("a=%d\nb=%d",a,b);
//}
//
//#include<stdio.h>

//int main()
//{
//	int ret = -10 << 1;
//	printf("%d\n",ret);
//	return 0;
//}


//int main()
//{
//	int i = -1;
//	int ret = i >> 1;
//	printf("%d\n",ret);
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int x = 0;
//	int y = 0;
//	x = y = a + b;
//	printf("x=%d y=%d\n",x,y);
//	//这是执行顺序是什么样的呢？
//	//其实是
//	y = a + b;
//	x = y;
//	printf("x=%d y=%d\n", x, y);
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (!i)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		printf("1\n");
//	}
//	return 0;
//}


////布尔类型
//// C99中引入的
////布尔类型就是用来表示真假的类型
////只有两种取值，true或者false
//
//#include<stdio.h>
//#include<stdbool.h>
//
//int main()
//{
//	_Bool flag = false;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
////应用场景举例
////判断闰年
//// 
//_Bool is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa=&a;
//	printf("%p\n",pa);
//
//	char m = '*';
//	int* pb=&m;
//	
//	char arr[10] = { 0 };
//	int* pc = arr;
//	&arr[0];
//	&arr;
//
//	int* p = "abcdef";
//
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int *pa=&i;
//	*pa = 20;
//	printf("%d\n", *pa);
//	printf("%d\n",i);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	printf("%d\n", sizeof(i));
//	printf("%d\n", sizeof i);
//	printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr[0]));
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof (int[10]));
//
//	return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	short b = 5;
//	printf("%d\n",sizeof(b=a+3));
//	printf("%d\n",b);
//
//	return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n",~a);
//	return 0;
//}
//

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = i++;
//	int a = ++i;
//	printf("%d\n",j);
//	printf("%d\n",a);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 5;
//	int j = i--;
//	int a = --i;
//	printf("%d\n", j);
//	printf("%d\n", a);
//	return 0;
//}
//



