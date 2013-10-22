// different ways to count from 1 to 10

#include <stdio.h>

int print_to_ten(void)
{
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");
	printf("5\n");
	printf("6\n");
	printf("7\n");
	printf("8\n");
	printf("9\n");
	printf("10\n");
}

int a_for_loop(void)
{
	int i;
	for(i = 1; i < 11; i++) {
		printf("%d\n", i);
	}
	return i;
}

int a_while_loop(void)
{
	int i = 1;
	while(i < 11) {
		printf("%d\n", i);
		i++;
	}
	return i;
}

int recursion(int count)
{
	printf("%d\n", count);
	if(count < 10) {
		recursion(count + 1);
	}
	return count;
}

int main(int argc, char *argv[])
{
	int count = 1;
	
	print_to_ten();
	printf("-----------\n");
	a_for_loop();
	printf("-----------\n");
	a_while_loop();
	printf("-----------\n");
	recursion(count);
	
	return 0;
}
