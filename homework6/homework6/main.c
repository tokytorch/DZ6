#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	task3();
}
int task3()
{
	int num1, num2;

	printf("Введите первое число: ");
	scanf("%d", &num1);

	printf("Введите второе число: ");
	scanf("%d", &num2);

	if (num2 == 0) {
		printf("Ошибка: Дедение на ноль!\n");
	}
	if (num1 % num2 == 0) {
		printf("Да\n");
	}
	else {
		printf("Нет\n");
	}
}