#pragma once
#include<string>
#include"FAT.h"
const int N = 262144;
using namespace std;

class FCB//�ļ����ļ��й��е���
{
public:
	string name;//�ļ������ļ���+��չ��
	string  path;//�ļ�λ��
	int size;//�ļ���С
	string Date;//�ļ��������ڻ����޸�����
	FCB *index[N];//������
	FCB *father;//���ڵ�
	string getTime();//ϵͳʱ��
	FCB();
	~FCB();
};

