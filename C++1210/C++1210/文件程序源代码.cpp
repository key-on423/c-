#include <iostream>
using namespace std;
//1����д���򣬴Ӽ�������һ���ַ������ж��ַ����ĳ��ȣ�Ȼ�����ַ����ĳ��ȵ�������Ϊ����ӡ�����ַ���
//int main()
//{
//	cout << "�����������ַ���:";
//	char s[100] = "";//��Ҫ��ʼ��
//	string  t ;
//	cin >> t;
//	cin >> s;
//	int width;
//	int width1;
//	width = strlen(s);
//	width1 = sizeof(t)/8;//ÿһ����СΪ8 longlong;
//	cout << s<<"�ĳ���Ϊ:"<<width<<endl;
//	cout << "���������ȵĿ�����Ϊ:" << endl;
//	cout.width(width*2);
//	cout << s<< endl;
//	cout << t << "�ĳ���Ϊ:" << width1 << endl;
//	cout << "���������ȵĿ�����Ϊ:" << endl;
//	cout.width(width1 * 2);
//	cout <<t;
//	return 0;
//}


//2����һ�����򿽱��ı��ļ����ڿ����ļ������У�������Сд�ĳɴ�д��
#include <fstream>
#include <string>
using namespace std;
//int main()
//{
//	char arr1[100];
//	ofstream outfile("f3.dat", ios::out);
//	if (!outfile)
//	{
//		cerr << "�򿪴���!��" << endl;
//		exit(1);
//	}
//	cout <<"��Ϊ�����ļ�����һ���ַ���:" << endl;
//	/*cin >> arr1;*/
//	/*int x = strlen(arr1);*/
//	for(int i=0;i<10;i++)
//	{ 
//		cin >> arr1[i];
//		outfile << arr1[i]<<' ';
//
//	}
//	outfile.close();
//	cout << "�ļ�Сдȫ��ת��Ϊ��д��Ϊ:" << endl;
//	ifstream infile("f3.dat", ios::in);
//	if (!infile)
//	{
//		cerr << "�򿪴���!" << endl;
//		exit(1);
//	}
//	char arr2[100];
//	for (int i = 0; i < 10; i++)
//	{
//		
//			infile >> arr2[i];
//			if (islower(arr2[i]))
//			{
//				arr2[i] -= 32;//�ַ����
//			}
//			cout << arr2[i];
//		
//	}
//	infile.close();
//	cout << "�����ļ���ʾҲΪ:" << endl;
//	ofstream outfile2("fcopy.dat", ios::out);
//	if (!outfile2)
//	{
//		cerr << "�򿪴���!��" << endl;
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


//3����д����ʵ�������ı��ļ����������ӳ�һ���ļ���

//int main()
//{
//	char arr2[100];
//	cout << "��һ���ļ�����:" << endl;
//	ifstream infile("f2.dat", ios::in);
//	if (!infile)
//	{
//		cerr << "�򿪴���!" << endl;
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
//	cout << "�ڶ����ļ�����:" << endl;
//		ifstream infile1("f3.dat", ios::in);
//	if (!infile1)
//	{
//		cerr << "�򿪴���!" << endl;
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
//	cout << "�������ļ����ݺϲ�һ��Ϊ:" << endl;
//	ofstream outfile("fhe.dat", ios::out);
//	if (!outfile)
//	{
//		cerr << "�򿪴���!��" << endl;
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
//		cerr << "�򿪴���!" << endl;
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


//4���������������ļ�f1.dat��f2.dat, �����ʵ�����¹�����
//�ٴӼ�������20���������ֱ��������������ļ��У�ÿ���ļ��з�10����������
//�ڴ�f1.dat����10������Ȼ���ŵ�f2.dat�ļ�ԭ�����ݵĺ��棻
//�۴�f2.dat�ж���20�������������ǰ���С�����˳���ŵ�f2.dat��������ԭ�������ݣ���

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outfile1("f1.dat", ios::out);
	if (!outfile1)
	{
		cerr << "�򿪴���" << endl;
		exit(1);
	}
	cout << "��Ϊ��һ���ļ�����10������:" << endl;
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
		cerr << "�򿪴���" << endl;
		exit(1);
	}
	cout << "��Ϊ�ڶ����ļ�����10������:" << endl;
	int y[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> y[i];
		outfile2<< y[i]<<' ';
	}
	//���ļ�1��ʮ���������뵽�ļ�2�ĺ���
	cout << "���ļ�1��ʮ���������뵽�ļ�2�ĺ���" << endl;
	for (int i = 0; i < 10; i++)
	{
		outfile2 << x[i] << ' ';
	}
	outfile1.close();
	outfile2.close();
	ifstream infile("f2.dat", ios::in);
	if (!infile)
	{
		cerr << "�򿪴���" << endl;
		exit(1);
	}
	int arr2[20];
	for (int i = 0; i < 20; i++)
	{
		infile >> arr2[i];
		cout << arr2[i] << ' ';
	}
	cout << endl;
	cout << "�����Ľ��Ϊ:" << endl;
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