#define _CRT_SECURE_NO_WARNINGS//ȡ������
#include<algorithm>
#include"DiskMannger.h"

#define system_size 1024*1024*1024   //ϵͳ��С
#define block_szie 4*1024 //�̿��С
#define block_count system_size/block_szie //ϵͳ�̿���Ŀ

using namespace std;

int main(){
	DiskMannger();
	return 0;
}