//if��д��ʽ�ĶԱ�
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
		//���������α������бȽϵ�ʱ�򽫳����������棬�ɱ�����=���������ֵĴ��󣨻����޷�����ķ�ʽ���ѣ�
		printf("hehe\n");
	int num = 15;
	if (num % 2 == 1)
		printf("����\n");//�ж�һ�����ǲ�������

	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i & 2 == 1)
			printf("%d ", i);//��ӡ1 - 100�����е�����

	}

	//������ʽ
	int i = 0;
	for (i = 1; i <= 100; i+=2)
	{
			printf("%d ", i);//��ӡ1 - 100�����е�����
	}


	//C++
	//C99֧������д��
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i & 2 == 1)
	//		printf("%d ", i);

	//}


	return 0;
}
