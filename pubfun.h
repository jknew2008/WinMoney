#ifndef PUBFUN_H
#define PUBFUN_H
/*
���Ӽ������1.0�������а棩
��������ģ��
����:zwdnet@163.com
����:2011-10-17
���Э�飺GPL3
�����޸ģ�2012-10-05��ֲ��windows��
*/

#include <iostream>
#include <string>

using namespace std;

//��������,������д�ģ�http://blog.csdn.net/touzani/article/details/1623850
//������ת��Ϊ�ַ���
string num2str(long n)
{
	stringstream ss;
	ss<<n;
	return ss.str();
}

//���ַ���ת��Ϊ����(����)
int str2int(string s)
{
	int num;
	stringstream ss(s);
	ss>>num;
	return num;
}

//���ַ���ת��Ϊ����(С��)
float str2float(string s)
{
	float num;
	stringstream ss(s);
	ss>>num;
	return num;
}

#endif
