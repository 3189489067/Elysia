#pragma once
#include<stdio.h>
#include <stdlib.h>
#include<assert.h>
//这次实现的是双向循环带头链表
typedef int LTDataType;


typedef struct ListNode		//节点结构体
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;
//创建节点的函数
ListNode* CreateListNode(LTDataType x);
//初始化节点
void ListInit(ListNode** pphead);
//打印链表
void ListPrint(ListNode* phead);
//指定插
void ListInsert(ListNode* pos, LTDataType x);
//找位置
ListNode* ListFind(ListNode* phead, LTDataType x);
//头插
void ListFrontPlug(ListNode* phead, LTDataType x);
//尾插
void ListTailPulg(ListNode* phead, LTDataType x);
//指定删
void ListSpeDel(ListNode* pos);
//头删
void ListFrontDel(ListNode* phead);
//尾删
void ListTailDel(ListNode* phead);
//链表销毁
void DestoryList(ListNode** pphead);