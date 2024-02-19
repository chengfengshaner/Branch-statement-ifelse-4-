//if书写形式的对比
#include <stdio.h>
//int test()
//{
//	if (0)
//		return 0;
//
//	printf("hehe\n");
//	return 1;
//}
//int main()
//{
//	if (1)
//		return 0;
//
//	printf("hehe\n");
//	return 1;
//
//	return 0;
//}

int main()
{
	int num = 3;

	if(5 == num)//if (num == 5);
		//当两个整形变量进行比较的时候将常量放在左面，可避免因=减少所出现的错误（会以无法编译的方式提醒）
		printf("hehe\n");
	int num = 15;
	if (num % 2 == 1)
		printf("奇数\n");//判断一个数是不是奇数

	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i & 2 == 1)
			printf("%d ", i);//打印1 - 100的数中的奇数

	}

	//其他方式
	int i = 0;
	for (i = 1; i <= 100; i+=2)
	{
			printf("%d ", i);//打印1 - 100的数中的奇数
	}


	//C++
	//C99支持下面写法
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i & 2 == 1)
	//		printf("%d ", i);

	//}


	return 0;
}
