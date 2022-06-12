/* [평가항목 1] : 과제 설명

	컴퓨터프로그래밍 평가과제 (배점 25점)
	학과 : 컴퓨터공학과
	학번 : 202203234
	이름 : 정종원

	과제 주제: COVID-19 국가별 정보 ( 치명률, 완치율 )

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calcdata.h"


int main(void) { // [평가항목 2] : 함수 사용


	FILE* fp = NULL; // 파일 입출력 사용
	fp = fopen("sample.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
	
	}
	else {
		printf("파일 열기 성공\n");
		
	}
	fputc("O", fp);

		char* country[10] = { "0. 미국", "1. 인도", "2. 브라질", "3. 프랑스", "4. 독일", "5. 영국", "6. 러시아", "7. 대한민국", "8. 이탈리아", "9. 터키" }; // [평가항목 6] : 포인터 배열 ( 포인터 활용 )
		int a;
		int b;
		float curerate();
		float fatalrate();

		printf("이는 COVID-19에 관련된 정보 프로그램입니다.\n");
		printf("0. 미국 1. 인도 2. 브라질 3. 프랑스 4. 독일 5. 영국 6. 러시아 7. 대한민국 8. 이탈리아 9. 터키\n");
		printf("어떤 나라에 대해 알고 싶나요?? \n번호를 입력해주세요. [ 2022.06.11 기준 ] : ");
		scanf_s("%d", &a);

		if (a == 0) {

			printf("미국에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요? \n1. 치명률 2, 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);

			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}

		}
		else if (a == 1) {

			printf("인도에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);

			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}

		}
		else if (a = 2) {

			printf("브라질에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] :");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 3) {

			printf("프랑스에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 4) {

			printf("독일에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 5) {

			printf("영국에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 6) {

			printf("러시아에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 7) {

			printf("대한민국에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 8) {

			printf("이탈리아에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else if (a = 9) {

			printf("터키에 대한 정보를 알려드리겠습니다! \n어떤 정보가 궁금한가요?? \n1. 치명률 2. 완치율 \n번호를 입력해주세요 : ");
			scanf_s("%d", &b);
			if (b == 1) {
				printf("[치명률] : ");
				float fata = fatalrate(a);
				printf("%lf", fata);
			}
			else if (b == 2) {
				printf("[완치율] : ");
				float cure = curerate(a);
				printf("%lf", cure);
			}
			else {

				printf("지원되지 않는 정보입니다.");
			}
		}
		else {
			printf("지원되지 않는 국가입니다.");
		}
	
	fclose(fp);
	return 0;
}
