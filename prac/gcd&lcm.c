#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void main()
//{
//	int a, b,i,j;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		i = b;
//		j = a;
//	}
//	else
//	{
//		i = a;
//		j = b;
//	}
//	while (i!=0)
//	{
//		
//			if (a % i == 0 && b % i == 0)
//			{
//				break;
//		}
//			else
//			{
//				i--;
//			}
//			while (j != 0)
//			{
//				if (j % a == 0 && j % b == 0)
//				{
//					break;
//				}
//				else
//				{
//					j++;
//				}
//	}
//	}
//	printf("gcd:%d lcm:%d", i,j);
//}



//int main()
//{
//    int a, b, gcd;
//
//    // ������������
//    printf("�������������� (a b): ");
//    scanf("%d%d", &a, &b);
//
//    // ʹ��շת��������� GCD
//    int original_a = a;  // ��¼ԭʼֵ�������
//    int original_b = b;
//
//    // ȷ�� a �� b ������
//    if (a < 0) a = -a;
//    if (b < 0) b = -b;
//
//    while (b != 0)  // �� b Ϊ 0 ʱ��a ��Ϊ GCD
//    {
//        int temp = b;
//        b = a % b; // ���� b Ϊ a ���� b ������
//        a = temp;  // ���� a Ϊԭ���� b
//    }
//
//    // ��� GCD
//    printf("GCD(%d, %d) = %d\n", original_a, original_b, a);
//    return 0;  // ���� 0 ��ʾ������������
//}
int main()
{
	int a, b, i, gcd, lcm, c, d;
	scanf("%d%d", &a, &b);
	c = a;
	d = b;
	i = 1;
	
	while (i > 0 && a > 0 && b > 0)
	{
		i = a % b;
		a = b % i;
		b = i % a;




	}
	
	if (a == 0 && b > i)
	{
		gcd = i;
	}
	else if (a == 0 && b < i)
	{
		gcd = b;

	}
	else if (b == 0 && a > i)
	{
		gcd = i;
	}
	else if (b == 0 && a < i)
	{
		gcd = a;
	}
	else if (i == 0 && a > b)
	{
		gcd = b;

	}
	else if (i == 0 && a < b)
	{
		gcd = a;
	}
	lcm = c * d / gcd;
	printf("gcd=%d,lcm=%d\n", gcd, lcm);
}
