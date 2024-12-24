// Lab1 Exactly.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<string>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int Smallest = 0;
	int Largest = 0;
	cout << "请输入三个数字" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	Smallest = a;
	if (a > b) { Smallest = b; }
	if (Smallest > c) { Smallest = c; }
	Largest = a;
	if (b > a) { Largest = b; }
	if (c > Largest) { Largest = c; }
	cout << "Sum is " << a + b + c << endl;
	cout << "Average is " << (a + b + c) / 3 << endl;
	cout << "Product is " << a * b*c << endl;
	cout << "Smallest is " << Smallest << endl;
	cout << "Largest is " << Largest << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
