#include<stdio.h>
#include<string.h>
#include"function.h"

int main() {
	char ord[10];
	int n;

	puts("input help(you can get information)");
	while (1) {
		puts("input order");
		gets(ord);
		if (strcmp(ord, "push") == 0) {        //stack�� �����Է�
			scanf_s(" %d", &n);
			push(n);
		}
		else if (strcmp(ord, "pop") == 0)    //���� ���� �ִ� ���ڸ� ����ϰ� ����
			printf("%d\n", pop());
		else if (strcmp(ord, "size") == 0) //stack�ȿ� ����Ǿ��ִ� ������ ����
			printf("%d\n", size());
		else if (strcmp(ord, "empty") == 0)    //��������� 0��� �ϳ��� ��� ������ 1���
			printf("%d\n", empty());
		else if (strcmp(ord, "top") == 0)  //���� ���� �ִ� ���� ���
			printf("%d\n", top());
		else if (strcmp(ord, "help") == 0) //��ɾ ���� ������ ���� �� �ִ�. 
			printf("push= put value in stack\npop= the highest one out and print\nsize= print size of stack\nempty= if stack empty print 1 else print 0\ntop= print the highest one\nexit= escape\n");
		else
			puts("wrong");
		if (strcmp(ord, "exit") == 0)
			break;
	}
}