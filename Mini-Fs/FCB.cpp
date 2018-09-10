#define _CRT_SECURE_NO_WARNINGS//取消警告
#include<time.h>
#include "FCB.h"

using namespace std;

FCB::FCB()
{
		this->Date = getTime();//*文件的创建或修改日期
		this->size = N;//*文件大小：以字节或块为单位的文件长度
}


FCB::~FCB()
{
}
string FCB::getTime() {
	time_t t = time(NULL);//time_t time(time_t *t),返回自纪元1970-01-01 00:00:00起经过的时间，以秒为单位
	char timeNow[64] = { 0 };
	strftime(timeNow, sizeof(timeNow) , "%Y-%m-%d %H:%M:%S", localtime(&t));     //年-月-日 时-分-秒
	return timeNow;////*根据 format 中定义的格式化规则，格式化结构 timeptr 表示的时间，并把它存储在 str 中。
}
