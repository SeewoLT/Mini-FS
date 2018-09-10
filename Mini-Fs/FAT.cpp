#include<string>
#include "FAT.h"

using namespace std;

FAT::FAT()
{
}

FAT::~FAT()
{
}
void FAT::InitializeDisklock(string blocks[]) {//��ʼ������,blocks[]�������̿�����
	for (int i = 0;i < BLOCK_SIZE;i++) {//BlOCK_SIZE=4KB
		this->freeDiskBlock.push(i);
		blocks[i].clear();
	}
}

int FAT::getFreeDiskBlock(){//��ȡ�մ��̿�
	if (this->freeDiskBlock.size()> 0) {
		int block = this->freeDiskBlock.top();
		this->freeDiskBlock.pop();//��ջ
		this->fullDiskBlock.push(block);//��ջ
		return block;
	}
	else
		return -1;
}
void FAT::rcoverFreeDiskBlockr(int block) {//���տմ��̿�
	this->fullDiskBlock.pop();
	this->freeDiskBlock.push(block);
}
