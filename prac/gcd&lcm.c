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
//    // 输入两个整数
//    printf("请输入两个整数 (a b): ");
//    scanf("%d%d", &a, &b);
//
//    // 使用辗转相除法计算 GCD
//    int original_a = a;  // 记录原始值用于输出
//    int original_b = b;
//
//    // 确保 a 和 b 是正数
//    if (a < 0) a = -a;
//    if (b < 0) b = -b;
//
//    while (b != 0)  // 当 b 为 0 时，a 即为 GCD
//    {
//        int temp = b;
//        b = a % b; // 更新 b 为 a 除以 b 的余数
//        a = temp;  // 更新 a 为原来的 b
//    }
//
//    // 输出 GCD
//    printf("GCD(%d, %d) = %d\n", original_a, original_b, a);
//    return 0;  // 返回 0 表示程序正常结束
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
