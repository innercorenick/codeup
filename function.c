#include<stdio.h>
#include<string.h>
#define MAX 20 // stackÀÇ Å©±â 

int stack[MAX] = { 0, };
int i;
int push(int n) {
	for (i = MAX - 1; i >= 0; i--) {
		if (stack[i] == 0) {
			stack[i] = n;
			break;
		}
	}
}
int pop() {
	for (i = MAX - 1; i >= 0; i--) {
		if (stack[i] == 0) {
			return stack[i + 1];
			stack[i - 1] = 0;
			break;
		}
	}
}
int size() {
	int sum = 0;
	for (i = 0; i < MAX; i++)
		if (stack[i] != 0)
			sum++;
	return sum;
}
int empty() {
	for (i = 0; i < MAX; i++)
		if (stack[i] != 0) {
			return 1;
			break;
		}
	return 0;
}
int top() {
	for (i = 0; i < MAX; i++) {
		if (stack[i]!=0) {
			return stack[i];
			break;
		}
	}
}