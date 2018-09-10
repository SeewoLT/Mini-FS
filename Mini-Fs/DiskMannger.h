#pragma once
#include<string>

using namespace std;

class DiskMannger
{
public:
	DiskMannger();
	~DiskMannger();
	void create(string name);//建立一个新 mini-FS 空间
	void mount(string name);//安装要操作的空间
	void format();//: 对文件存储器进行格式化。
	void dir();//dr显示空间中的文件目录：dir
	void copy();//复制文件：copy
	void del();//dl		删除空间中的文件：del
	void map();// 显示指定文件在空间所占用的全部块的“块号”。
	void opt();//优化整个空间，将每个文件尽可能连续存放（使用连续的块号存储文件内容）	 
	void att();//att 显示空间文件属性
	void help();//	帮助信息
	void close(); //: close	退出空间，返回操作系统
};

