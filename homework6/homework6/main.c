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

	printf("������� ������ �����: ");
	scanf("%d", &num1);

	printf("������� ������ �����: ");
	scanf("%d", &num2);

	if (num2 == 0) {
		printf("������: ������� �� ����!\n");
	}
	if (num1 % num2 == 0) {
		printf("��\n");
	}
	else {
		printf("���\n");
	}
}