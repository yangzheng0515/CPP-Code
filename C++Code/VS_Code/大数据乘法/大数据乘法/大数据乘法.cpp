#define _CRT_SECURE_NO_WARNINGS  //关闭安全检查
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

void getbigdata(char * data_a, char * data_b)
{
	int length_a = strlen(data_a);
	int length_b = strlen(data_b);
	int * pres = (int *)malloc(sizeof(int)* (length_a + length_b));//初始化
	memset(pres, 0, sizeof(int)* (length_a + length_b));//初始化为零

	int i, j;
	//累乘
	for (i = 0; i < length_a; i++)
	{
		for (j = 0; j < length_b; j++)
		{
			pres[i + j + 1] += (data_a[i] - '0') * (data_b[j] - '0');//data_a[i] - '0' 将字符转化为整数
		}
	}

	for (i = length_a + length_b - 1; i >= 0; i--)
	{
		if (pres[i] >= 10)//进位
		{
			pres[i - 1] += pres[i] / 10;//进位
			pres[i] %= 10; //取出个位数
		}
	}

	i = 0;
	while (pres[i] == 0)
		i++;		//i恰好停在不为零的位置

	char * lastres = (char *)malloc(sizeof(char)* (length_a + length_b));

	for (j = 0; j < length_a + length_b; ++j, ++i)
	{
		lastres[j] = pres[i	] + '0';
	}
	lastres[j] = '\0';
	printf("last结果 = %s\n", lastres);
}


int main(void)
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	scanf("%s%s", str1, str2);
	printf("str1 = %s\nstr2 = %s\n", str1, str2);	
	getbigdata(str1, str2);

	system("pause");
	return 0;
}