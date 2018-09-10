#pragma once
#include<vector>
#include "FCB.h"
class Folder :public FCB
{
public:
	vector<FCB>child;
	void addChild(Folder folder);
	void deleteChild();
	Folder(string name);
	bool count(FCB * file);
	~Folder();
};

