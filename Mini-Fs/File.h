#pragma once
#include "FCB.h"
#include"FAT.h"
class File : public FCB
{
public:
	int index[N];//�����������ļ���Ϣ��
	void addContent(string  blosks[],string content,FAT &fat);//�����ļ�����
	void Delete(string blocks[],FAT &fat);//ɾ���ļ�
	File();
	~File();
};

