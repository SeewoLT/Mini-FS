#pragma once
#include<stack>
#include<algorithm>

#define	B	(1)
#define	KB	(1024*B)
#define	MB	(1024*KB)
#define	GB	(1024*MB)
#define	BLOCK_SIZE	(4*KB)

using namespace std;
class FAT
{
public:
	stack<int>freeDiskBlock;//�մ��̿�
	stack<int>fullDiskBlock;//�����̿�
	void InitializeDisklock(string blocks[]);//��ʼ������,blocks[]�������̿�����
	int getFreeDiskBlock();//��ȡ�մ��̿�
	void rcoverFreeDiskBlockr(int block);//���տմ��̿�
	FAT();
	~FAT();
	
};

