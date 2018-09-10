#define _CRT_SECURE_NO_WARNINGS//取消警告
#include<string.h>
#include<iostream>
#include <stdio.h>
#include "DiskMannger.h"
#include"Folder.h"
#include"FCB.h"

using namespace std;

//const int N = 262144;//N是总磁盘块
FAT fat;//
DiskMannger::~DiskMannger()
{
}

DiskMannger::DiskMannger(){
	string opear, cmd;//
	while (cin >> cmd)
	{
		/*if (cmd == "format") {//*格式化磁盘
			this->format(blocks);
		}
		else if (cmd == "mkdir") {//创建文件子目录
			this->Mkdir();
		}
		else if (cmd == "rmdir") {//*删除文件子目录
			this->Rmdir();
		}
		else if (cmd == "ls") {//*用于显示目录
			this->ls();
		}
		else if (cmd == "cd") {//*用于更改当前目录
			this->cd();
		}
		else if (cmd == "create") {//*用于创建文件
			this->create();
		}
		else if (cmd == "open") {//*用于打开文件
			this->open();
		}
		else if (cmd == "close") {//*用于关闭文件
			this->close();
		}
		else if (cmd == "rm") {//*用于删除文件
			this->rm();
		}
		else if (cmd == "exit") {//*退出系统
			printf("%s\n", "再见！");
			break;
		}
		*/
		if (cmd == "create") {
			string name;
			cin >> name;
			this->create(name);
		}
		else if (cmd == "mount") {
			string name;
			cin>> name;
			this->mount(name);
		}
		else if (cmd == "fmt") {
			this->format();
		}
		else if (cmd == "dr") {
			this->dir();
		}
		else if (cmd == "cp") {
			this->copy();
		}
		else if (cmd == "dl") {
			this->del();
		}
		else if (cmd == "map") {
			this->map();
		}
		else if (cmd == "opt") {
			this->opt();
		}
		else if (cmd == "att") {
			this->att();
		}
		else if (cmd == "help") {
			
		}
		else if (cmd == "close") {

		}
		else {
			cout << "输入指令错误，请重新输入！！" << endl;
		}
		
	}

}
void DiskMannger::create(string name) {//建立一个新 mini-FS 空间
	FILE *SName;
	SName = fopen("C:\\Users\\22776\\Desktop\\Mini-Fs\\Debug\\SName","w+");
	if (SName != NULL)
		cout << "创建文件成功" << endl;
	else
		cout << "创建文件失败" << endl;
	fseek(SName, 1*1024*1024*1024-1,SEEK_SET);
	fputc(EOF, SName);
	fclose(SName);
}
void DiskMannger::mount(string name) {//安装要操作的空间
	//Folder *folder;
	FILE *SName;
	SName = fopen("C:\\Users\\22776\\Desktop\\Mini-Fs\\Debug\\SName", "rb+");
	if (SName!= NULL)
		cout << "安装空间成功" << endl;
	else
		cout << "安装空间失败" << endl;
}
void DiskMannger::format() {//: 对文件存储器进行格式化。
//	fat.InitializeDisklock(blocks);
	/*while (root->father != root) {//*删除文件目录
		this->root = (Folder*)(this->root->father);
	}

	this->DiskRmdir(this->root);//*删除根目录

	root->child.clear();

	printf("%s\n", "磁盘格式化成功！");
	*/
}
void DiskMannger::dir() {//dr显示空间中的文件目录：dir

}
void DiskMannger::copy() {//复制文件：copy

}
void DiskMannger::del() {//dl		删除空间中的文件：del

}
void DiskMannger::map() {//显示指定文件在空间所占用的全部块的“块号”。

}
void DiskMannger::opt() {//优化整个空间，将每个文件尽可能连续存放（使用连续的块号存储文件内容）

}
void DiskMannger::att() {//att	显示空间文件属性

}
void DiskMannger::help() {//帮助信息

}
void DiskMannger::close() {//: close退出空间，返回操作系统

}
