#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TEL 20
#define MAX_ADDR 100
#define MAX_COUNT 100
typedef struct Peo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}Peo;
typedef struct Contact
{
	Peo data[100];
	int count;
}Con;
//初始化
void Inticontact(Con* pc);
//增加联系人
void Addcontact(Con* pc);
//显示
void ShowContract(Con* pc);
//删除联系人
void DelContract(Con* pc);
//查找联系人
static int FindContract(Con* pc);
//排序
void SortContract(Con* pc);
//搜索联系人
void SearchContract(Con* pc);