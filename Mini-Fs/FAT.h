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
	stack<int>freeDiskBlock;//©у╢еел©И
	stack<int>fullDiskBlock;//бЗ╢еел©И
	void InitializeDisklock(string blocks[]);//ЁУй╪╩╞╢еел,blocks[]╢ФжЭ╢еел©Идзхщ
	int getFreeDiskBlock();//╩Ях║©у╢еел©И
	void rcoverFreeDiskBlockr(int block);//╩ьйу©у╢еел©И
	FAT();
	~FAT();
	
};

