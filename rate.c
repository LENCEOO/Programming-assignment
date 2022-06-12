#include <stdio.h>
#include "calcdata.h"
#include "rate.h"

extern float fatalrate(int a) { // 함수 사용

	
	int cona[10] = { 87246309, 43215435, 31417341, 29753370, 26802782, 22382352, 18369557, 18218078, 17611607, 15072747 }; // [평가항목 3] : 배열 사용
	int deaa[10] = { 1035675, 524757, 668007, 148710, 140115, 179217, 379883, 24351, 167305, 98965 };
	int* p; // [평가항목 4] : 포인터 사용
	float fatp;

	p = cona;

	float m = (float)deaa[a];
	float n = (float)p[a];

	fatp = (float)((m / n) * 100.0);
	return fatp;

}
extern float curerate(int a) {   // 함수 사용

	int cona[10] = { 87246309, 43215435, 31417341, 29753370, 26802782, 22382352, 18369557, 18218078, 17611607, 15072747 };
	int cura[10] = { 83014518, 42648308, 30178187, 29189275, 25870800, 22019878, 17786254, 969524, 16820881, 14971256 };
	float curp;

	float m = (float)cura[a];
	float n = (float)cona[a];

	curp = (float)((m / n) * 100.0); // 완치율 계산
	return curp;

}
