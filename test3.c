#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = { 'a','b','c','\0'};
//	char arr2[] = "abc";
//	printf("%d\n",strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(int));
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int age =10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >=18 && age <28)
//		printf("青年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		    printf("haha\n");
//return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (0 == i % 2)
//			printf("i=%d为偶数\n", i);
//		else
//			printf("i=%d为奇数\n", i);
//		i++;
//	}
//	return 0;
//}


//#/include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	swich(n);
//	{
//		case 1:
//			m++;
//		case 2:
//			n++;
//		case 3:
//			swich(n)
//		{
//			case1:
//				n++;
//			case2:
//				m++;
//		}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//         
//	}
//	printf("m =%d,n=%d\n"m,n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;


//#include <stdio.h>
//int main()
//{
//	char ret = 0;
//	char ch = 0;
//	char password[20] = { 0 };
//	printf("输入密码:>");
//	scanf("%s",password);
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:>");
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i < 10);
//	return 0;
//}

//#include <stdio.h>//（n的阶乘）
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for (i = 1;i<=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1;n<=3;n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum = ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n",arr);
//	return 0;
//}

//(function)
//#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = Max(a, b);
//	printf("m=%d\n",m);
//	return 0;
//}

//#include <stdio.h>
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	swap1(a, b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}

//#include <stdio.h>//由于ab，xy地址不同，所以用指针来建立联系
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	swap2(&a,&b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}



//#include <stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d",i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for(year = 1000; year<=2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d",year);
//		}
//	}
//	return 0;
//}


//
//#include <stdio.h>
//#include <math.h>
//int binary_search(int arr[], int k,int sz)
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
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//	{
//		printf("找到了,下标是:%d\n",ret);
//	}
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num  = %d", num);
//	add(&num);
//	printf("num  = %d", num);
//	add(&num);
//	printf("num  = %d", num);
//	return 0;
//}
//
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//}
//int main()
//{
	//char arr[] = "bit";
	//int len = my_strlen(arr);
	//printf("len=%d\n",len);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	//求n的阶乘
	//int n = 0;
	//int ret = 0;
	//scanf("%d",&n);
	//ret = fac1(n);
	//printf("%d\n", ret);
	//return 0;
//}

//int fac2(int n)
//{
//	if (n <= 1)
//		return n;
//	else
//		return fac2(n - 1);
//}
//int main()
//{
//	//用递归的方式求n的阶乘(??)
//	int n = 0;
//	int ret =0;
//	scanf_s("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>//操作符部分
//int main()
//{
//	int a = 8;
//	int b = a >> 1;//一般是算术右移
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	printf("%d\n",b);
//	return 0;
//}

//int my_strlen(char* arr)//srelen函数的指针实现
//{
//	char* start =arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len =my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


