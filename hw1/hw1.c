#include <stdio.h>


int main(int argc, char *argv[]) {
	int16_t A = 4314;
	int16_t C = 15420;
	int16_t x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12;
	x1 =  A; x2 = C; x3 = A+C; x4 = A+C+C; x5 = C-A; x6 = 65536-x4;
	x7 = -x1; x8 = -x2; x9 = -x3; x10 = -x4; x11 = -x5; x12 = -x6;
	printf("1  %d\n", x1);
	printf("2  %d\n", x2);
	printf("3  %d\n", x3);
	printf("4  %d\n", x4);
	printf("5  %d\n", x5);
	printf("6  %d\n", x6);
	printf("7  %d\n", x7);
	printf("8  %d\n", x8);
	printf("9  %d\n", x9);
	printf("10 %d\n", x10);
	printf("11 %d\n", x11);
	printf("12 %d\n", x12);
	return 0;
}
