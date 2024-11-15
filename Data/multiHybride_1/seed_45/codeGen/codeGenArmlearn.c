/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:28:26
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, A23, A24, A25, A26, A27, A28, };

int inferenceTPG() {
	enum vertices currentVertex = T22;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A23, A24,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A25, A23,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A25, A23,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T0, A26,  };

			double T3Scores[2];

			T3Scores[0] = P6();
			T3Scores[1] = P7();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T3, T0, T2,  };

			double T4Scores[3];

			T4Scores[0] = P8();
			T4Scores[1] = P9();
			T4Scores[2] = P10();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T3, A25, T0, A26, T1, T2,  };

			double T5Scores[6];

			T5Scores[0] = P8();
			T5Scores[1] = P11();
			T5Scores[2] = P12();
			T5Scores[3] = P13();
			T5Scores[4] = P14();
			T5Scores[5] = P10();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T5, T5, T3, A25, T4,  };

			double T6Scores[5];

			T6Scores[0] = P15();
			T6Scores[1] = P16();
			T6Scores[2] = P8();
			T6Scores[3] = P17();
			T6Scores[4] = P18();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { A24, T5, T6, A26, T3,  };

			double T7Scores[5];

			T7Scores[0] = P19();
			T7Scores[1] = P20();
			T7Scores[2] = P21();
			T7Scores[3] = P22();
			T7Scores[4] = P23();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[7] = { T3, T6, T5, T5, A26, A24, A24,  };

			double T8Scores[7];

			T8Scores[0] = P24();
			T8Scores[1] = P25();
			T8Scores[2] = P26();
			T8Scores[3] = P20();
			T8Scores[4] = P22();
			T8Scores[5] = P27();
			T8Scores[6] = P28();

			int best = bestProgram(T8Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T8, A27, T7,  };

			double T9Scores[3];

			T9Scores[0] = P29();
			T9Scores[1] = P30();
			T9Scores[2] = P31();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { A27, T8,  };

			double T10Scores[2];

			T10Scores[0] = P32();
			T10Scores[1] = P33();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { A25, T9, T10,  };

			double T11Scores[3];

			T11Scores[0] = P34();
			T11Scores[1] = P35();
			T11Scores[2] = P36();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T9, T5, T10, A25,  };

			double T12Scores[4];

			T12Scores[0] = P37();
			T12Scores[1] = P38();
			T12Scores[2] = P39();
			T12Scores[3] = P40();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T11, T12,  };

			double T13Scores[2];

			T13Scores[0] = P41();
			T13Scores[1] = P42();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { T13, T9,  };

			double T14Scores[2];

			T14Scores[0] = P43();
			T14Scores[1] = P44();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[3] = { T8, T14, T11,  };

			double T15Scores[3];

			T15Scores[0] = P45();
			T15Scores[1] = P46();
			T15Scores[2] = P47();

			int best = bestProgram(T15Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[5] = { T15, T12, A24, A26, T8,  };

			double T16Scores[5];

			T16Scores[0] = P48();
			T16Scores[1] = P49();
			T16Scores[2] = P50();
			T16Scores[3] = P51();
			T16Scores[4] = P52();

			int best = bestProgram(T16Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[5] = { T15, T12, T8, T13, A28,  };

			double T17Scores[5];

			T17Scores[0] = P48();
			T17Scores[1] = P53();
			T17Scores[2] = P54();
			T17Scores[3] = P55();
			T17Scores[4] = P56();

			int best = bestProgram(T17Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[4] = { T12, A24, A28, T17,  };

			double T18Scores[4];

			T18Scores[0] = P57();
			T18Scores[1] = P27();
			T18Scores[2] = P56();
			T18Scores[3] = P58();

			int best = bestProgram(T18Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[2] = { A24, T16,  };

			double T19Scores[2];

			T19Scores[0] = P59();
			T19Scores[1] = P60();

			int best = bestProgram(T19Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[2] = { T19, T16,  };

			double T20Scores[2];

			T20Scores[0] = P61();
			T20Scores[1] = P62();

			int best = bestProgram(T20Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[3] = { T20, T16, T18,  };

			double T21Scores[3];

			T21Scores[0] = P63();
			T21Scores[1] = P64();
			T21Scores[2] = P65();

			int best = bestProgram(T21Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[3] = { T21, T18, T20,  };

			double T22Scores[3];

			T22Scores[0] = P66();
			T22Scores[1] = P67();
			T22Scores[2] = P68();

			int best = bestProgram(T22Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A23: {
			return 3;
			break;
		}
		case A24: {
			return 0;
			break;
		}
		case A25: {
			return 1;
			break;
		}
		case A26: {
			return 5;
			break;
		}
		case A27: {
			return 2;
			break;
		}
		case A28: {
			return 4;
			break;
		}
		}
	}
}
