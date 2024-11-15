/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:47:47
 * With the CodeGen::TPGGenerationEngine.
 */

#include "codeGenArmlearn.h"
#include "codeGenArmlearn_program.h"
#include <limits.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bestProgram(double *results, int nb) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
	return bestProgram;
}

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, A28, A29, A30, A31, A32, A33, A34, };

int inferenceTPG() {
	enum vertices currentVertex = T27;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A28, A30, A29,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[5] = { A30, A31, A29, A28, A32,  };

			double T1Scores[5];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();
			T1Scores[3] = P6();
			T1Scores[4] = P7();

			int best = bestProgram(T1Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A30, A29, A28, A28,  };

			double T2Scores[4];

			T2Scores[0] = P3();
			T2Scores[1] = P8();
			T2Scores[2] = P6();
			T2Scores[3] = P9();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A29, A28, A30, A32,  };

			double T3Scores[4];

			T3Scores[0] = P8();
			T3Scores[1] = P10();
			T3Scores[2] = P11();
			T3Scores[3] = P12();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A32, A30, T0, A28, A32,  };

			double T4Scores[5];

			T4Scores[0] = P13();
			T4Scores[1] = P14();
			T4Scores[2] = P15();
			T4Scores[3] = P6();
			T4Scores[4] = P16();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { T3, A30, T2, A28, T1,  };

			double T5Scores[5];

			T5Scores[0] = P17();
			T5Scores[1] = P11();
			T5Scores[2] = P18();
			T5Scores[3] = P6();
			T5Scores[4] = P19();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T1, T5,  };

			double T6Scores[2];

			T6Scores[0] = P20();
			T6Scores[1] = P21();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { A29, T1,  };

			double T7Scores[2];

			T7Scores[0] = P8();
			T7Scores[1] = P22();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A30, A30, T6, A28,  };

			double T8Scores[4];

			T8Scores[0] = P23();
			T8Scores[1] = P3();
			T8Scores[2] = P24();
			T8Scores[3] = P10();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[6] = { T3, A30, T4, T7, A29, A28,  };

			double T9Scores[6];

			T9Scores[0] = P17();
			T9Scores[1] = P11();
			T9Scores[2] = P25();
			T9Scores[3] = P26();
			T9Scores[4] = P27();
			T9Scores[5] = P10();

			int best = bestProgram(T9Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T3, T3,  };

			double T10Scores[2];

			T10Scores[0] = P17();
			T10Scores[1] = P28();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T3, A33, T6, T1,  };

			double T11Scores[4];

			T11Scores[0] = P29();
			T11Scores[1] = P30();
			T11Scores[2] = P31();
			T11Scores[3] = P19();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[6] = { T8, T9, A32, A34, A33, A28,  };

			double T12Scores[6];

			T12Scores[0] = P32();
			T12Scores[1] = P33();
			T12Scores[2] = P34();
			T12Scores[3] = P35();
			T12Scores[4] = P36();
			T12Scores[5] = P37();

			int best = bestProgram(T12Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T12, A34, A31, T12,  };

			double T13Scores[4];

			T13Scores[0] = P38();
			T13Scores[1] = P39();
			T13Scores[2] = P40();
			T13Scores[3] = P41();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T11, T12, T13, T11,  };

			double T14Scores[4];

			T14Scores[0] = P42();
			T14Scores[1] = P43();
			T14Scores[2] = P44();
			T14Scores[3] = P45();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[4] = { T12, T11, T13, T14,  };

			double T15Scores[4];

			T15Scores[0] = P46();
			T15Scores[1] = P42();
			T15Scores[2] = P44();
			T15Scores[3] = P47();

			int best = bestProgram(T15Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[2] = { T13, T13,  };

			double T16Scores[2];

			T16Scores[0] = P48();
			T16Scores[1] = P49();

			int best = bestProgram(T16Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[4] = { T11, A29, T13, T13,  };

			double T17Scores[4];

			T17Scores[0] = P50();
			T17Scores[1] = P51();
			T17Scores[2] = P52();
			T17Scores[3] = P53();

			int best = bestProgram(T17Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[3] = { T17, T12, T13,  };

			double T18Scores[3];

			T18Scores[0] = P54();
			T18Scores[1] = P55();
			T18Scores[2] = P56();

			int best = bestProgram(T18Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[3] = { T18, T13, T17,  };

			double T19Scores[3];

			T19Scores[0] = P57();
			T19Scores[1] = P58();
			T19Scores[2] = P59();

			int best = bestProgram(T19Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[6] = { A33, A32, T16, A30, T17, A28,  };

			double T20Scores[6];

			T20Scores[0] = P60();
			T20Scores[1] = P34();
			T20Scores[2] = P61();
			T20Scores[3] = P62();
			T20Scores[4] = P63();
			T20Scores[5] = P37();

			int best = bestProgram(T20Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[4] = { T20, T12, T12, A32,  };

			double T21Scores[4];

			T21Scores[0] = P64();
			T21Scores[1] = P65();
			T21Scores[2] = P66();
			T21Scores[3] = P13();

			int best = bestProgram(T21Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[6] = { T20, T17, T12, T12, A29, A30,  };

			double T22Scores[6];

			T22Scores[0] = P67();
			T22Scores[1] = P68();
			T22Scores[2] = P69();
			T22Scores[3] = P70();
			T22Scores[4] = P2();
			T22Scores[5] = P71();

			int best = bestProgram(T22Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T23: {
			const enum vertices next[5] = { T19, T18, T17, T21, T4,  };

			double T23Scores[5];

			T23Scores[0] = P72();
			T23Scores[1] = P57();
			T23Scores[2] = P63();
			T23Scores[3] = P73();
			T23Scores[4] = P74();

			int best = bestProgram(T23Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T24: {
			const enum vertices next[6] = { T22, T23, T19, T12, T19, T15,  };

			double T24Scores[6];

			T24Scores[0] = P75();
			T24Scores[1] = P76();
			T24Scores[2] = P77();
			T24Scores[3] = P38();
			T24Scores[4] = P78();
			T24Scores[5] = P79();

			int best = bestProgram(T24Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T25: {
			const enum vertices next[7] = { T22, T23, A30, T21, A34, T15, T12,  };

			double T25Scores[7];

			T25Scores[0] = P80();
			T25Scores[1] = P81();
			T25Scores[2] = P82();
			T25Scores[3] = P83();
			T25Scores[4] = P84();
			T25Scores[5] = P85();
			T25Scores[6] = P86();

			int best = bestProgram(T25Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T26: {
			const enum vertices next[3] = { T25, T24, T25,  };

			double T26Scores[3];

			T26Scores[0] = P87();
			T26Scores[1] = P88();
			T26Scores[2] = P89();

			int best = bestProgram(T26Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T27: {
			const enum vertices next[4] = { T10, T26, A31, A33,  };

			double T27Scores[4];

			T27Scores[0] = P90();
			T27Scores[1] = P91();
			T27Scores[2] = P92();
			T27Scores[3] = P93();

			int best = bestProgram(T27Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A28: {
			return 1;
			break;
		}
		case A29: {
			return 5;
			break;
		}
		case A30: {
			return 3;
			break;
		}
		case A31: {
			return 7;
			break;
		}
		case A32: {
			return 2;
			break;
		}
		case A33: {
			return 4;
			break;
		}
		case A34: {
			return 0;
			break;
		}
		}
	}
}
