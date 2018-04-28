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
		if (strcmp(ord, "push") == 0) {        //stack에 숫자입력
			scanf_s(" %d", &n);
			push(n);
		}
		else if (strcmp(ord, "pop") == 0)    //가장 위에 있는 숫자를 출력하고 삭제
			printf("%d\n", pop());
		else if (strcmp(ord, "size") == 0) //stack안에 저장되어있는 숫자의 개수
			printf("%d\n", size());
		else if (strcmp(ord, "empty") == 0)    //비어있으면 0출력 하나라도 들어 있으면 1출력
			printf("%d\n", empty());
		else if (strcmp(ord, "top") == 0)  //가장 위에 있는 값을 출력
			printf("%d\n", top());
		else if (strcmp(ord, "help") == 0) //명령어에 대한 정보를 얻을 수 있다. 
			printf("push= put value in stack\npop= the highest one out and print\nsize= print size of stack\nempty= if stack empty print 1 else print 0\ntop= print the highest one\nexit= escape\n");
		else
			puts("wrong");
		if (strcmp(ord, "exit") == 0)
			break;
	}
}