#include <stdio.h>

void main(){
	int a, b;
	a = 3;
	b = 2;
	printf("%d ++ %d = %d\n", a, b, a+b);
}

void get_median(int a, int b){
	return (a+b)/2;
}

int get_Sum_ver2(int n){
	return n(n+1)/2;
}
