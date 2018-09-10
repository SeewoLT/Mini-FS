#pragma once
#include "FCB.h"
#include"FAT.h"
class File : public FCB
{
public:
	int index[N];//磁盘索引表，文件信息块
	void addContent(string  blosks[],string content,FAT &fat);//增加文件内容
	void Delete(string blocks[],FAT &fat);//删除文件
	File();
	~File();
};

