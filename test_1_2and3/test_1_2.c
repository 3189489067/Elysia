#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
int main()
{
	ListNode* plist = NULL;
	ListInit(&plist);
	//ListPrint(&plist);
	ListFrontPlug(plist,1);
	ListTailPulg(plist, 2);
	ListPrint(plist);
	ListNode* pos = ListFind(plist,2);
	ListInsert(pos, 3);
	ListInsert(pos, 4);
	ListInsert(pos, 3);
	ListTailDel(plist);
	ListPrint(plist);
	DestoryList(plist);
	return 0;
}