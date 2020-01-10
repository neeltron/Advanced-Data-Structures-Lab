#include<stdio.h>
struct a {
	int a;
	char x;
	char y,z,b,c;
};
int main() {
	struct a s1;
	printf("%ld\n",sizeof(s1));
}
