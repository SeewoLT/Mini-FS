#include<vector>
#include "Folder.h"
#include"FCB.h"


Folder::Folder(string name) {
	this->name = name;
}

Folder::~Folder()
{
}
void Folder::addChild(Folder folder) {
	this->child.push_back(folder);
}
bool Folder::count(FCB * file) {
	/*int size = child.size();
	for (int i = 0; i < size; i++) {
		if (child[i]->type == file->type&&child[i]->name == file->name) {
			return true;
		}
	}*/
	return false;
}
