#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	int a, n;
	double s = 0.0;      
	double znamenatel = 1.0; 
	int i;              

	printf("Введите значение a: ");
	scanf("%d", &a);
	printf("Введите значение n: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++) {

		znamenatel = znamenatel * (a + i);
		s = s + 1.0 / znamenatel;

		printf("Вычисление %d: добавлено %.6f, текущая сумма: %.6f\n", i + 1, 1.0 / znamenatel, s);
	}

	printf("\nРезультат: сумма ряда S = %.6f\n", s);

	return 0;
}

