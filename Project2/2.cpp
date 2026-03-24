#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu
{
	char name[20];
	int age;
	char sex[10];
	char id[20];

};
void print(struct stu* ps)
{
	//结构体指针变量 ->成员名....
	printf(" %s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
	//解引用结构体指针变量.成员名....
	printf(" %s %d %s %s\n", (*ps).name,(*ps).age,(*ps).sex,(*ps).id);
}
int main()
{
	struct stu s1 = { "zhangsan",20,"man","2020001"};
	printf(" %s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
	print(&s1);
	return 0;
}