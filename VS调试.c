#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void)//计算1！+...+n!
//{
//    int i = 0;
//    int sum = 0;//保留最后结果
//    int n = 0;
//    int ret = 1;//保留单次n的阶乘
//    scanf ("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        ret = 1;
//        for (j = 1;j<=i;j++)
//        {
//            ret = ret * j;
//        }
//        sum = sum + ret;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

//int main()//调试死循环错误：i 和 arr[12]的地址在栈区重合
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("%d hehe\n", i);
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//模拟实现strcpy函数
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//使用指针前，先判断是否为有效指针
//	{
//		while (*src != '\0')
//		{
//			*dest = *src;
//			src++;
//			dest++;//可替换为*dest ++ = *src ++ ;——>升级：直接写成while（*dest ++ = *src ++）=有两个作用;判断和赋值
//			  //                                                             {
//				 //                                                             ;
//			//                                                                }
//		}
//	}
//	 
//	*dest = *src;//copy"\0"
//}

//改造后
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)//const 产生保护作用，保护源头的数据，以防止while（）判断语句写反
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1 [] = "##########";
//	char arr2 [] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//二次改造
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//const 产生保护作用，保护源头的数据，以防止while（）判断语句写反
//{
//	char* ret = dest;
//
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//模拟实现strlen函数（10分）
#include <assert.h>
int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);//保证指针有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}