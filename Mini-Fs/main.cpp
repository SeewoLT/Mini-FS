#define _CRT_SECURE_NO_WARNINGS//取消警告
#include<algorithm>
#include"DiskMannger.h"

#define system_size 1024*1024*1024   //系统大小
#define block_szie 4*1024 //盘块大小
#define block_count system_size/block_szie //系统盘块数目

using namespace std;

int main(){
	DiskMannger();
	return 0;
}