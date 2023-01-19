#include<stdio.h>
#include<stdlib.h>
struct str
{
	char name[20];
	int age;
	float high;
};
int cmp_s_high(const void* h1, const void* h2)
{
	return (int)(((struct str*)h1)->high - ((struct str*)h2)->high);
}
int cmp_s_age(const void* a1, const void* a2)
{
	return ((struct str*)a1)->age - ((struct str*)a2)->age;
}
int main()
{
	struct str s[3] = { {"zhangsan",20,1.70},{"lisi",18,1.75},{"wangwu",22,1.62} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_s_age);
	return 0;
}