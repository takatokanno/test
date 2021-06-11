#include "fucntion.h"
#include <stdio.h>
#include <string.h>


void newFunction()
{
	// 新しい内容
}

// プロフィールの表示
// View profile
void viewProfile()
{
	unsigned char age = 25;
	double height = 166.7;
	float weight = 58.5;

	printf("年齢:%d歳\n", age);
	printf("身長: % fcm\n", height);
	printf("体重:%fkg\n", weight);

}

// 宣言と代入
// Declaration and assignment
void declarationAndAssignement()
{
	int a = 2, b = 5;
	a = b;

	printf("%d\n", a);
	return;
}

void ascllCode()
{
	char a = 65;
	printf("%d\n", a);
	printf("%c\n", a);

}

void String()
{
	char s[6] = "Hello";
	printf("%s\n",s);

}

void assignStringToVariable()
{
	char s[10] = "Hello";
	printf("%s\n", s);
	strcpy_s(s,  "Good bye");
	printf("%s\n", s);

}

void digitNumberSpecification()
{
	printf("%4d\n", 25);
	printf("%04d\n", 25);
	printf("%6.1f\n", 155.32);
	printf("%6.2f\n", 155.32);

	char neme[] = "Akira";
	printf("%6s\n", neme);


	printf("      %8s %8s\n", "商品A", "商品B");
	printf(" 数量 %08d %08d\n", 16, 246);
	printf(" 重量 %8.4f %8.4f\n", 76.3, 556.1);
	printf("%d%c", 20, 10);
	printf("%d\bA\n", 20);
	printf("%d\t%d\n", 20, 30);

}

void calculatingOperator()
{
	printf("5+5は %d です。\n", 5 + 5);
	printf("5-5は %d です。\n", 5 - 5);
	printf("5*5は %d です。\n", 5 * 5);
	printf("5/5は %d です。\n", 5 / 5);
	printf("5/3の余りは %d です。\n",5 % 3);

}

void assignmentOperator()
{
	int a = 90;

	a -= 10;
	printf("90から10を引いたら%dです。\n", a);

}

void incrementDecrementOperator()
{
	int a = 1;
	printf("はじめは%dでした。\n", a);

	a++;
	printf("1増えて%dになりました。\n", a);

	a--;
	printf("1減って%dに戻りました。\n", a);

}

void differenceOfPrepositionalAndPostpositional()
{
	int a, b, c, d;
	a = 1, c = 1;

	b = ++a;
	printf("前置のbは%dです。\n", b);

	d = c++;
	printf("後置のdは%dです。\n", d);

}

void comparisonOperators()
{
	int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b ")
}