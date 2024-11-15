/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:26:17
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, A29, A30, A31, A32, A33, A34, };

int inferenceTPG() {
	enum vertices currentVertex = T28;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A29, A30,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[5] = { T0, A29, A31, A30, A31,  };

			double T1Scores[5];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();
			T1Scores[4] = P6();

			int best = bestProgram(T1Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A34, T1, A34, A32, A33,  };

			double T2Scores[5];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P9();
			T2Scores[3] = P10();
			T2Scores[4] = P11();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T1, A34,  };

			double T3Scores[2];

			T3Scores[0] = P12();
			T3Scores[1] = P13();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { T1, T3, T1, A33, A34,  };

			double T4Scores[5];

			T4Scores[0] = P14();
			T4Scores[1] = P15();
			T4Scores[2] = P16();
			T4Scores[3] = P17();
			T4Scores[4] = P18();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T1, A34, A33,  };

			double T5Scores[3];

			T5Scores[0] = P8();
			T5Scores[1] = P19();
			T5Scores[2] = P20();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T1, T2, T1,  };

			double T6Scores[3];

			T6Scores[0] = P21();
			T6Scores[1] = P22();
			T6Scores[2] = P23();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T1, A34, T1, A33,  };

			double T7Scores[4];

			T7Scores[0] = P8();
			T7Scores[1] = P24();
			T7Scores[2] = P25();
			T7Scores[3] = P17();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T4, T1, A33, T1,  };

			double T8Scores[4];

			T8Scores[0] = P26();
			T8Scores[1] = P27();
			T8Scores[2] = P28();
			T8Scores[3] = P29();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[6] = { A33, T7, T8, A34, T6, A33,  };

			double T9Scores[6];

			T9Scores[0] = P30();
			T9Scores[1] = P31();
			T9Scores[2] = P32();
			T9Scores[3] = P18();
			T9Scores[4] = P33();
			T9Scores[5] = P17();

			int best = bestProgram(T9Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T6, T8, A33,  };

			double T10Scores[3];

			T10Scores[0] = P34();
			T10Scores[1] = P32();
			T10Scores[2] = P35();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T9, T4, T10, A34,  };

			double T11Scores[4];

			T11Scores[0] = P36();
			T11Scores[1] = P37();
			T11Scores[2] = P38();
			T11Scores[3] = P39();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T10, T6, T4, T5,  };

			double T12Scores[4];

			T12Scores[0] = P40();
			T12Scores[1] = P41();
			T12Scores[2] = P42();
			T12Scores[3] = P43();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T12, T4, T6, T9,  };

			double T13Scores[4];

			T13Scores[0] = P44();
			T13Scores[1] = P37();
			T13Scores[2] = P45();
			T13Scores[3] = P36();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { A34, T9,  };

			double T14Scores[2];

			T14Scores[0] = P46();
			T14Scores[1] = P36();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T14, T13,  };

			double T15Scores[2];

			T15Scores[0] = P47();
			T15Scores[1] = P48();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[3] = { A31, T15, T9,  };

			double T16Scores[3];

			T16Scores[0] = P49();
			T16Scores[1] = P50();
			T16Scores[2] = P36();

			int best = bestProgram(T16Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[2] = { T15, T4,  };

			double T17Scores[2];

			T17Scores[0] = P51();
			T17Scores[1] = P26();

			int best = bestProgram(T17Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[5] = { T16, T4, T9, T4, T11,  };

			double T18Scores[5];

			T18Scores[0] = P52();
			T18Scores[1] = P53();
			T18Scores[2] = P36();
			T18Scores[3] = P26();
			T18Scores[4] = P54();

			int best = bestProgram(T18Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[3] = { T16, T4, T18,  };

			double T19Scores[3];

			T19Scores[0] = P55();
			T19Scores[1] = P56();
			T19Scores[2] = P57();

			int best = bestProgram(T19Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[6] = { T17, T4, T16, T9, T6, T5,  };

			double T20Scores[6];

			T20Scores[0] = P58();
			T20Scores[1] = P59();
			T20Scores[2] = P60();
			T20Scores[3] = P61();
			T20Scores[4] = P62();
			T20Scores[5] = P43();

			int best = bestProgram(T20Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[3] = { T6, T17, T19,  };

			double T21Scores[3];

			T21Scores[0] = P63();
			T21Scores[1] = P64();
			T21Scores[2] = P65();

			int best = bestProgram(T21Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[3] = { T19, T20, T6,  };

			double T22Scores[3];

			T22Scores[0] = P65();
			T22Scores[1] = P66();
			T22Scores[2] = P67();

			int best = bestProgram(T22Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T23: {
			const enum vertices next[3] = { A31, T9, T6,  };

			double T23Scores[3];

			T23Scores[0] = P68();
			T23Scores[1] = P69();
			T23Scores[2] = P70();

			int best = bestProgram(T23Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T24: {
			const enum vertices next[7] = { T22, A31, T17, A33, T6, T20, T21,  };

			double T24Scores[7];

			T24Scores[0] = P71();
			T24Scores[1] = P72();
			T24Scores[2] = P73();
			T24Scores[3] = P74();
			T24Scores[4] = P75();
			T24Scores[5] = P76();
			T24Scores[6] = P77();

			int best = bestProgram(T24Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T25: {
			const enum vertices next[6] = { A31, T6, T6, T20, T23, T21,  };

			double T25Scores[6];

			T25Scores[0] = P68();
			T25Scores[1] = P78();
			T25Scores[2] = P79();
			T25Scores[3] = P76();
			T25Scores[4] = P80();
			T25Scores[5] = P81();

			int best = bestProgram(T25Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T26: {
			const enum vertices next[5] = { T24, T25, T6, A31, T24,  };

			double T26Scores[5];

			T26Scores[0] = P82();
			T26Scores[1] = P83();
			T26Scores[2] = P84();
			T26Scores[3] = P85();
			T26Scores[4] = P86();

			int best = bestProgram(T26Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T27: {
			const enum vertices next[5] = { T24, T26, T25, T6, T15,  };

			double T27Scores[5];

			T27Scores[0] = P86();
			T27Scores[1] = P87();
			T27Scores[2] = P88();
			T27Scores[3] = P89();
			T27Scores[4] = P90();

			int best = bestProgram(T27Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T28: {
			const enum vertices next[7] = { T24, T22, T27, T26, T25, T6, T4,  };

			double T28Scores[7];

			T28Scores[0] = P86();
			T28Scores[1] = P91();
			T28Scores[2] = P92();
			T28Scores[3] = P87();
			T28Scores[4] = P93();
			T28Scores[5] = P84();
			T28Scores[6] = P94();

			int best = bestProgram(T28Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A29: {
			return 0;
			break;
		}
		case A30: {
			return 1;
			break;
		}
		case A31: {
			return 3;
			break;
		}
		case A32: {
			return 6;
			break;
		}
		case A33: {
			return 5;
			break;
		}
		case A34: {
			return 2;
			break;
		}
		}
	}
}
