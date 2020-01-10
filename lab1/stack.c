#include<stdio.h>
int top, stack[100], choice, n, x, i;
void push() {
	if(top > n-1) {
		printf("\nStack overflow");
	}
	else {
		top++;
		printf("\nEnter the val: ");
		scanf("%d", &x);
		stack[top] = x;
	}
}
void pop() {
	if(top<-1) {
		printf("\nTop is empty");
	}
	else {
		top--;
	}
}
void display() {
	if(top >= 0) {
		for(i = top;i>=0;i--) {
			printf("\n%d", stack[i]);
		}
	}
	else {
		printf("\nstack is empty");
	}
}
int main() {
	top = -1;
	printf("\nEnter the size of the stack: ");
	scanf("%d", &n);
	printf("\nOptions:\n1. PUSH\n2. POP\n3. DISPLAY\n4. Exit");
	do{
		printf("\nYour choice: ");\
		scanf("%d", &choice);
		if(choice == 1) {
			push();
		}
		else if(choice == 2) {
			pop();
		}
		else if(choice == 3) {
			display();
		}
		else if(choice ==4) {
			break;
		}
		else {
			printf("\nEnter a valid choice.");
		}
	}while(choice != 4);
	return 0;
}
