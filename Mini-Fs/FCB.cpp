#define _CRT_SECURE_NO_WARNINGS//ȡ������
#include<time.h>
#include "FCB.h"

using namespace std;

FCB::FCB()
{
		this->Date = getTime();//*�ļ��Ĵ������޸�����
		this->size = N;//*�ļ���С�����ֽڻ��Ϊ��λ���ļ�����
}


FCB::~FCB()
{
}
string FCB::getTime() {
	time_t t = time(NULL);//time_t time(time_t *t),�����Լ�Ԫ1970-01-01 00:00:00�𾭹���ʱ�䣬����Ϊ��λ
	char timeNow[64] = { 0 };
	strftime(timeNow, sizeof(timeNow) , "%Y-%m-%d %H:%M:%S", localtime(&t));     //��-��-�� ʱ-��-��
	return timeNow;////*���� format �ж���ĸ�ʽ�����򣬸�ʽ���ṹ timeptr ��ʾ��ʱ�䣬�������洢�� str �С�
}
