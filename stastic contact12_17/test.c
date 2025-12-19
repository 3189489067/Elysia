#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("**********************通讯录**********************\n");
	printf("**************************************************\n");
	printf("**********1.增加联系人********2.显示联系人********\n");
	printf("**********3.删除联系人********4.查找联系人********\n");
	printf("**********5.排序      ********0.退出      ********\n");
	printf("**************************************************\n");
	printf("**************************************************\n");

}
int main()
{
	menu();
	int input = 0;
	
	Con con;
	Inticontact(&con);

	do
	{
		printf("请输入你要选择的功能序号\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Addcontact(&con);
			break;
		case 2:
			ShowContract(&con);
			break;
		case 3:
			DelContract(&con);
			break;
		case 4:
			SearchContract(&con);
			break;
		case 5:
			SortContract(&con);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，重新输入\n");
		}
		
	} while (input);
	return 0;
}