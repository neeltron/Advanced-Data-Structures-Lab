#include<stdio.h>
union x{
	int a;
	char b;
};
int main() {
	union x u1;
	printf("%ld\n", sizeof(u1));
}
