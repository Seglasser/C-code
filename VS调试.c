#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void)//����1��+...+n!
//{
//    int i = 0;
//    int sum = 0;//���������
//    int n = 0;
//    int ret = 1;//��������n�Ľ׳�
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

//int main()//������ѭ������i �� arr[12]�ĵ�ַ��ջ���غ�
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

//ģ��ʵ��strcpy����
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//ʹ��ָ��ǰ�����ж��Ƿ�Ϊ��Чָ��
//	{
//		while (*src != '\0')
//		{
//			*dest = *src;
//			src++;
//			dest++;//���滻Ϊ*dest ++ = *src ++ ;����>������ֱ��д��while��*dest ++ = *src ++��=����������;�жϺ͸�ֵ
//			  //                                                             {
//				 //                                                             ;
//			//                                                                }
//		}
//	}
//	 
//	*dest = *src;//copy"\0"
//}

//�����
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)//const �����������ã�����Դͷ�����ݣ��Է�ֹwhile�����ж����д��
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
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

//���θ���
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//const �����������ã�����Դͷ�����ݣ��Է�ֹwhile�����ж����д��
//{
//	char* ret = dest;
//
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
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

//ģ��ʵ��strlen������10�֣�
#include <assert.h>
int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤����Ч��
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