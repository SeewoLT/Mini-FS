#pragma once
#include<string>

using namespace std;

class DiskMannger
{
public:
	DiskMannger();
	~DiskMannger();
	void create(string name);//����һ���� mini-FS �ռ�
	void mount(string name);//��װҪ�����Ŀռ�
	void format();//: ���ļ��洢�����и�ʽ����
	void dir();//dr��ʾ�ռ��е��ļ�Ŀ¼��dir
	void copy();//�����ļ���copy
	void del();//dl		ɾ���ռ��е��ļ���del
	void map();// ��ʾָ���ļ��ڿռ���ռ�õ�ȫ����ġ���š���
	void opt();//�Ż������ռ䣬��ÿ���ļ�������������ţ�ʹ�������Ŀ�Ŵ洢�ļ����ݣ�	 
	void att();//att ��ʾ�ռ��ļ�����
	void help();//	������Ϣ
	void close(); //: close	�˳��ռ䣬���ز���ϵͳ
};

