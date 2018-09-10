#pragma once
#include<string>
#include"FAT.h"
const int N = 262144;
using namespace std;

class FCB//文件和文件夹共有的类
{
public:
	string name;//文件名：文件名+扩展名
	string  path;//文件位置
	int size;//文件大小
	string Date;//文件创建日期或者修改日期
	FCB *index[N];//索引表
	FCB *father;//父节点
	string getTime();//系统时间
	FCB();
	~FCB();
};

