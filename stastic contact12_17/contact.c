#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void Inticontact(Con* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void Addcontact(Con* pc)
{
	assert(pc);
	if (pc->count== MAX_COUNT)
	{
		printf("存储已满\n");
		return;
	}
	printf("请输入姓名\n");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄\n");
	scanf("%d", &(pc->data[pc->count].age)); 
	printf("请输入性别\n");
	scanf("%s", pc->data[pc->count].sex); 
	printf("请输入电话\n");
	scanf("%s", pc->data[pc->count].tel); 
	printf("请输入地址\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("已添加\n");
}
void ShowContract(Con* pc)
{
	assert(pc);
	int i = 0;
	printf(" %-20s\t %-5s\t %-20s\t %-20s\t %-100s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("% -20s\t% -5d\t% -20s\t% -20s\t% -100s\n", pc->data[i].name,
														   pc->data[i].age,
													       pc->data[i].sex,
													       pc->data[i].tel,
													       pc->data[i].addr);
	}
	
}
static int FindContract(Con* pc)
{
	assert(pc);
	char name[20] = { 0 };
	int i = 0;
	scanf("%s", name);
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	printf("无此联系人\n");
	return -1;
}
void DelContract(Con* pc)
{
	assert(pc);
	printf("输入你要删除的联系人姓名\n");
	int i = FindContract(pc);
	
	for (; i < pc->count; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("已删除\n");
}
int compare_name(const void* e1, const void* e2)
{
	return strcmp(((Peo*)e1)->name, ((Peo*)e2)->name);
}
void SortContract(Con* pc)
{
	assert(pc);
	qsort(pc->data,
		  pc->count,
		  sizeof(Peo),
		  compare_name);
}
void SearchContract(Con* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("输入你要搜索的联系人姓名\n");
	scanf("%s", name);
	int i = 0;
	for (; i < pc->count; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			break;
		}
		else
		{
			printf("无此联系人\n");
		}
	}
	printf(" %-20s\t %-5s\t %-20s\t %-20s\t %-100s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("% -20s\t% -5d\t% -20s\t% -20s\t% -100s\n", pc->data[i].name,
		pc->data[i].age,
		pc->data[i].sex,
		pc->data[i].tel,
		pc->data[i].addr);
}