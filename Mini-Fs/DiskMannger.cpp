#define _CRT_SECURE_NO_WARNINGS//ȡ������
#include<string.h>
#include<iostream>
#include <stdio.h>
#include "DiskMannger.h"
#include"Folder.h"
#include"FCB.h"

using namespace std;

//const int N = 262144;//N���ܴ��̿�
FAT fat;//
DiskMannger::~DiskMannger()
{
}

DiskMannger::DiskMannger(){
	string opear, cmd;//
	while (cin >> cmd)
	{
		/*if (cmd == "format") {//*��ʽ������
			this->format(blocks);
		}
		else if (cmd == "mkdir") {//�����ļ���Ŀ¼
			this->Mkdir();
		}
		else if (cmd == "rmdir") {//*ɾ���ļ���Ŀ¼
			this->Rmdir();
		}
		else if (cmd == "ls") {//*������ʾĿ¼
			this->ls();
		}
		else if (cmd == "cd") {//*���ڸ��ĵ�ǰĿ¼
			this->cd();
		}
		else if (cmd == "create") {//*���ڴ����ļ�
			this->create();
		}
		else if (cmd == "open") {//*���ڴ��ļ�
			this->open();
		}
		else if (cmd == "close") {//*���ڹر��ļ�
			this->close();
		}
		else if (cmd == "rm") {//*����ɾ���ļ�
			this->rm();
		}
		else if (cmd == "exit") {//*�˳�ϵͳ
			printf("%s\n", "�ټ���");
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
			cout << "����ָ��������������룡��" << endl;
		}
		
	}

}
void DiskMannger::create(string name) {//����һ���� mini-FS �ռ�
	FILE *SName;
	SName = fopen("C:\\Users\\22776\\Desktop\\Mini-Fs\\Debug\\SName","w+");
	if (SName != NULL)
		cout << "�����ļ��ɹ�" << endl;
	else
		cout << "�����ļ�ʧ��" << endl;
	fseek(SName, 1*1024*1024*1024-1,SEEK_SET);
	fputc(EOF, SName);
	fclose(SName);
}
void DiskMannger::mount(string name) {//��װҪ�����Ŀռ�
	//Folder *folder;
	FILE *SName;
	SName = fopen("C:\\Users\\22776\\Desktop\\Mini-Fs\\Debug\\SName", "rb+");
	if (SName!= NULL)
		cout << "��װ�ռ�ɹ�" << endl;
	else
		cout << "��װ�ռ�ʧ��" << endl;
}
void DiskMannger::format() {//: ���ļ��洢�����и�ʽ����
//	fat.InitializeDisklock(blocks);
	/*while (root->father != root) {//*ɾ���ļ�Ŀ¼
		this->root = (Folder*)(this->root->father);
	}

	this->DiskRmdir(this->root);//*ɾ����Ŀ¼

	root->child.clear();

	printf("%s\n", "���̸�ʽ���ɹ���");
	*/
}
void DiskMannger::dir() {//dr��ʾ�ռ��е��ļ�Ŀ¼��dir

}
void DiskMannger::copy() {//�����ļ���copy

}
void DiskMannger::del() {//dl		ɾ���ռ��е��ļ���del

}
void DiskMannger::map() {//��ʾָ���ļ��ڿռ���ռ�õ�ȫ����ġ���š���

}
void DiskMannger::opt() {//�Ż������ռ䣬��ÿ���ļ�������������ţ�ʹ�������Ŀ�Ŵ洢�ļ����ݣ�

}
void DiskMannger::att() {//att	��ʾ�ռ��ļ�����

}
void DiskMannger::help() {//������Ϣ

}
void DiskMannger::close() {//: close�˳��ռ䣬���ز���ϵͳ

}
