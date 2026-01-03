#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
ListNode* CreateListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
void ListInit(ListNode** pphead)
{
	*pphead = CreateListNode(0);
	(*pphead)-> prev = *pphead;
	(*pphead)-> next = *pphead;
}
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(ListNode* pos,LTDataType x)
{
	
	ListNode* prev = pos->prev;//找到上一个节点的地址
	ListNode* newNode = CreateListNode(x);
	prev->next = newNode; //在上一个节点的next中存newNode（新结点的地址）
	newNode->prev = prev;
	newNode->next = pos;
	pos->prev = newNode;
}
void ListFrontPlug(ListNode* phead, LTDataType x)
{
	ListNode* Listfrist = phead->next;
	ListNode* newNode = CreateListNode(x);
	phead->next = newNode;
	newNode->next = Listfrist;
	newNode->prev = phead;
	phead->next = newNode;
	Listfrist->prev = newNode;
}
void ListTailPulg(ListNode* phead, LTDataType x)
{
	ListNode* Tail = phead->prev;
	ListNode* newNode = CreateListNode(x);
	newNode->prev = Tail;
	newNode->next = phead;
	Tail->next = newNode;
	phead->prev = newNode;
}
void ListSpeDel(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;
}
void ListFrontDel(ListNode* phead)
{
	ListNode* Listfrist = phead->next;
	ListNode* Listsecond = phead->next->next;
	Listsecond->prev = phead;
	phead->next = Listsecond;
	free(Listfrist);
	Listfrist = NULL;
}
void ListTailDel(ListNode* phead)
{
	ListNode* Tail = phead->prev;
	ListNode* SecondTail = Tail->prev;
	SecondTail->next = phead;
	phead->prev = SecondTail;
	free(Tail);
	Tail = NULL;
}
void DestoryList(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;//销毁cur，就找不到下一个，所以提前把下一个存起来
		free(cur);
		cur = next;
	}
	free(phead);//最后销毁哨兵位
	phead = NULL;
}