/* [���׸� 1] : ���� ����

	��ǻ�����α׷��� �򰡰��� (���� 25��)
	�а� : ��ǻ�Ͱ��а�
	�й� : 202203234
	�̸� : ������

	���� ����: COVID-19 ������ ���� ( ġ���, ��ġ�� )

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calcdata.h"


int main(void) { // [���׸� 2] : �Լ� ���


	FILE* fp = NULL; // ���� ����� ���
	fp = fopen("sample.txt", "w");
	if (fp == NULL) {
		printf("���� ���� ����\n");
	
	}
	else {
		printf("���� ���� ����\n");
		
	}
	fputc("O", fp);

		char* country[10] = { "0. �̱�", "1. �ε�", "2. �����", "3. ������", "4. ����", "5. ����", "6. ���þ�", "7. ���ѹα�", "8. ��Ż����", "9. ��Ű" }; // [���׸� 6] : ������ �迭 ( ������ Ȱ�� )
		int a;
		int b;
		float curerate();
		float fatalrate();

		printf("�̴� COVID-19�� ���õ� ���� ���α׷��Դϴ�.\n");
		printf("0. �̱� 1. �ε� 2. ����� 3. ������ 4. ���� 5. ���� 6. ���þ� 7. ���ѹα� 8. ��Ż���� 9. ��Ű\n");
		printf("� ���� ���� �˰� �ͳ���?? \n��ȣ�� �Է����ּ���. [ 2022.06.11 ���� ] : ");
		scanf_s("%d", &a);

		if (a == 0) {

			printf("�̱��� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���? \n1. ġ��� 2, ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);

			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}

		}
		else if (a == 1) {

			printf("�ε��� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);

			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}

		}
		else if (a = 2) {

			printf("������� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] :");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 3) {

			printf("�������� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 4) {

			printf("���Ͽ� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 5) {

			printf("������ ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 6) {

			printf("���þƿ� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 7) {

			printf("���ѹα��� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 8) {

			printf("��Ż���ƿ� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else if (a = 9) {

			printf("��Ű�� ���� ������ �˷��帮�ڽ��ϴ�! \n� ������ �ñ��Ѱ���?? \n1. ġ��� 2. ��ġ�� \n��ȣ�� �Է����ּ��� : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[ġ���] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[��ġ��] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("�������� �ʴ� �����Դϴ�.");
			}
		}
		else {
			printf("�������� �ʴ� �����Դϴ�.");
		}
	
	fclose(fp);
	return 0;
}
