#include <iostream>
using namespace std;
//1．编写程序，从键盘输入一个字符串，判断字符串的长度，然后以字符串的长度的两倍作为域宽打印出该字符。
//int main()
//{
//	cout << "请输入两个字符串:";
//	char s[100] = "";//需要初始化
//	string  t ;
//	cin >> t;
//	cin >> s;
//	int width;
//	int width1;
//	width = strlen(s);
//	width1 = sizeof(t)/8;//每一个大小为8 longlong;
//	cout << s<<"的长度为:"<<width<<endl;
//	cout << "以两倍长度的宽度输出为:" << endl;
//	cout.width(width*2);
//	cout << s<< endl;
//	cout << t << "的长度为:" << width1 << endl;
//	cout << "以两倍长度的宽度输出为:" << endl;
//	cout.width(width1 * 2);
//	cout <<t;
//	return 0;
//}


//2．编一个程序拷贝文本文件，在拷贝文件过程中，将所有小写改成大写。
#include <fstream>
#include <string>
using namespace std;
//int main()
//{
//	char arr1[100];
//	ofstream outfile("f3.dat", ios::out);
//	if (!outfile)
//	{
//		cerr << "打开错误!！" << endl;
//		exit(1);
//	}
//	cout <<"请为创造文件输入一段字符串:" << endl;
//	/*cin >> arr1;*/
//	/*int x = strlen(arr1);*/
//	for(int i=0;i<10;i++)
//	{ 
//		cin >> arr1[i];
//		outfile << arr1[i]<<' ';
//
//	}
//	outfile.close();
//	cout << "文件小写全部转化为大写后为:" << endl;
//	ifstream infile("f3.dat", ios::in);
//	if (!infile)
//	{
//		cerr << "打开错误!" << endl;
//		exit(1);
//	}
//	char arr2[100];
//	for (int i = 0; i < 10; i++)
//	{
//		
//			infile >> arr2[i];
//			if (islower(arr2[i]))
//			{
//				arr2[i] -= 32;//字符输出
//			}
//			cout << arr2[i];
//		
//	}
//	infile.close();
//	cout << "拷贝文件显示也为:" << endl;
//	ofstream outfile2("fcopy.dat", ios::out);
//	if (!outfile2)
//	{
//		cerr << "打开错误!！" << endl;
//		exit(1);
//	}
//	/*cin >> arr1;*/
//	/*int x = strlen(arr1);*/
//	for (int i = 0; i < 10; i++)
//	{
//		outfile2 << arr2[i] << ' ';
//		cout << arr2[i];
//	}
//	return 0;
//	
//}


//3．编写程序，实现两个文本文件的内容连接成一个文件。

//int main()
//{
//	char arr2[100];
//	cout << "第一个文件内容:" << endl;
//	ifstream infile("f2.dat", ios::in);
//	if (!infile)
//	{
//		cerr << "打开错误!" << endl;
//		exit(1);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//
//		infile >> arr2[i];
//		cout << arr2[i];
//
//	}
//	infile.close();
//	cout << endl;
//	cout << "第二个文件内容:" << endl;
//		ifstream infile1("f3.dat", ios::in);
//	if (!infile1)
//	{
//		cerr << "打开错误!" << endl;
//		exit(1);
//	}
//	for (int i = 10; i < 20; i++)
//	{
//		
//			infile1 >> arr2[i];
//			cout << arr2[i];
//		
//	}
//	infile1.close();
//	cout << endl;
//	cout << "将两个文件内容合并一起为:" << endl;
//	ofstream outfile("fhe.dat", ios::out);
//	if (!outfile)
//	{
//		cerr << "打开错误!！" << endl;
//		exit(1);
//	}
//	for(int i=0;i<20;i++)
//	{ 
//		outfile << arr2[i];
//
//	}
//	outfile.close();
//	ifstream infile4("fhe.dat", ios::in);
//	if (!infile4)
//	{
//		cerr << "打开错误!" << endl;
//		exit(1);
//	}
//	for (int i = 0; i < 20; i++)
//	{
//
//		infile4 >> arr2[i];
//		cout << arr2[i];
//
//	}
//	infile4.close();
//	return 0;
//}


//4、建立两个磁盘文件f1.dat和f2.dat, 编程序实现以下工作：
//①从键盘输入20个整数，分别存放在两个磁盘文件中（每个文件中放10个整数）；
//②从f1.dat读入10个数，然后存放到f2.dat文件原有数据的后面；
//③从f2.dat中读入20个整数，将它们按从小到大的顺序存放到f2.dat（不保留原来的数据）。

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outfile1("f1.dat", ios::out);
	if (!outfile1)
	{
		cerr << "打开错误！" << endl;
		exit(1);
	}
	cout << "请为第一个文件输入10个整数:" << endl;
	int x[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> x[i];
		outfile1 << x[i]<<' ';
	}
	/*outfile1.close();*/
	ofstream outfile2("f2.dat", ios::out);
	if (!outfile2)
	{
		cerr << "打开错误！" << endl;
		exit(1);
	}
	cout << "请为第二个文件输入10个整数:" << endl;
	int y[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> y[i];
		outfile2<< y[i]<<' ';
	}
	//将文件1的十个数字输入到文件2的后面
	cout << "将文件1的十个数字输入到文件2的后面" << endl;
	for (int i = 0; i < 10; i++)
	{
		outfile2 << x[i] << ' ';
	}
	outfile1.close();
	outfile2.close();
	ifstream infile("f2.dat", ios::in);
	if (!infile)
	{
		cerr << "打开错误" << endl;
		exit(1);
	}
	int arr2[20];
	for (int i = 0; i < 20; i++)
	{
		infile >> arr2[i];
		cout << arr2[i] << ' ';
	}
	cout << endl;
	cout << "排序后的结果为:" << endl;
	for (int i = 0; i < 20; i++)
	{
		for (int j = i; j < 20 ; j++)
		{
			if (arr2[i] > arr2[j])
			{
				int big = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = big;
			}
		}
	}
	for (int i = 0; i < 20; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;
	/*outfile2.close();*/

}