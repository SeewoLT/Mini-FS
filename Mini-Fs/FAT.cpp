#include<string>
#include "FAT.h"

using namespace std;

FAT::FAT()
{
}

FAT::~FAT()
{
}
void FAT::InitializeDisklock(string blocks[]) {//初始化磁盘,blocks[]存贮磁盘块内容
	for (int i = 0;i < BLOCK_SIZE;i++) {//BlOCK_SIZE=4KB
		this->freeDiskBlock.push(i);
		blocks[i].clear();
	}
}

int FAT::getFreeDiskBlock(){//获取空磁盘块
	if (this->freeDiskBlock.size()> 0) {
		int block = this->freeDiskBlock.top();
		this->freeDiskBlock.pop();//出栈
		this->fullDiskBlock.push(block);//进栈
		return block;
	}
	else
		return -1;
}
void FAT::rcoverFreeDiskBlockr(int block) {//回收空磁盘块
	this->fullDiskBlock.pop();
	this->freeDiskBlock.push(block);
}
