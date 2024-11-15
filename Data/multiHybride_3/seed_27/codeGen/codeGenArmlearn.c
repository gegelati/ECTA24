/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:49:18
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, A21, A22, A23, A24, A25, A26, };

int inferenceTPG() {
	enum vertices currentVertex = T20;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A22, A23,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A22, T0,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A22, T0, A22, A25, A22,  };

			double T2Scores[5];

			T2Scores[0] = P4();
			T2Scores[1] = P3();
			T2Scores[2] = P2();
			T2Scores[3] = P5();
			T2Scores[4] = P0();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A23, T1, T2, A22, A22,  };

			double T3Scores[5];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P8();
			T3Scores[3] = P9();
			T3Scores[4] = P0();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A22, A24, A21,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P12();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A24, T3, A24, T3,  };

			double T5Scores[4];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T3, A24, T4, A21,  };

			double T6Scores[4];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P19();
			T6Scores[3] = P20();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T5, T6, T1,  };

			double T7Scores[3];

			T7Scores[0] = P21();
			T7Scores[1] = P22();
			T7Scores[2] = P23();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A21, T6, A26, T4,  };

			double T8Scores[4];

			T8Scores[0] = P24();
			T8Scores[1] = P25();
			T8Scores[2] = P26();
			T8Scores[3] = P27();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T6, A26, T0,  };

			double T9Scores[3];

			T9Scores[0] = P28();
			T9Scores[1] = P26();
			T9Scores[2] = P29();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T9, T7,  };

			double T10Scores[2];

			T10Scores[0] = P30();
			T10Scores[1] = P31();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T10, T5, T10,  };

			double T11Scores[3];

			T11Scores[0] = P32();
			T11Scores[1] = P33();
			T11Scores[2] = P34();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T5, A26, T10,  };

			double T12Scores[3];

			T12Scores[0] = P33();
			T12Scores[1] = P35();
			T12Scores[2] = P32();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[7] = { T10, T5, T5, T12, A23, A23, T11,  };

			double T13Scores[7];

			T13Scores[0] = P36();
			T13Scores[1] = P37();
			T13Scores[2] = P38();
			T13Scores[3] = P39();
			T13Scores[4] = P40();
			T13Scores[5] = P41();
			T13Scores[6] = P42();

			int best = bestProgram(T13Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[6] = { A26, T13, T11, A25, T8, A24,  };

			double T14Scores[6];

			T14Scores[0] = P43();
			T14Scores[1] = P44();
			T14Scores[2] = P45();
			T14Scores[3] = P46();
			T14Scores[4] = P47();
			T14Scores[5] = P48();

			int best = bestProgram(T14Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[4] = { T13, T14, T8, A22,  };

			double T15Scores[4];

			T15Scores[0] = P49();
			T15Scores[1] = P50();
			T15Scores[2] = P47();
			T15Scores[3] = P4();

			int best = bestProgram(T15Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[3] = { T14, T13, A24,  };

			double T16Scores[3];

			T16Scores[0] = P51();
			T16Scores[1] = P52();
			T16Scores[2] = P53();

			int best = bestProgram(T16Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[3] = { T14, A24, A25,  };

			double T17Scores[3];

			T17Scores[0] = P51();
			T17Scores[1] = P54();
			T17Scores[2] = P5();

			int best = bestProgram(T17Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[2] = { T16, A26,  };

			double T18Scores[2];

			T18Scores[0] = P55();
			T18Scores[1] = P56();

			int best = bestProgram(T18Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[3] = { A22, T16, A22,  };

			double T19Scores[3];

			T19Scores[0] = P57();
			T19Scores[1] = P58();
			T19Scores[2] = P59();

			int best = bestProgram(T19Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[8] = { T17, A26, A22, T16, T18, T15, A26, T19,  };

			double T20Scores[8];

			T20Scores[0] = P60();
			T20Scores[1] = P61();
			T20Scores[2] = P62();
			T20Scores[3] = P63();
			T20Scores[4] = P64();
			T20Scores[5] = P65();
			T20Scores[6] = P66();
			T20Scores[7] = P67();

			int best = bestProgram(T20Scores, 8);
			currentVertex = next[best];
			break;
		}
		case A21: {
			return 3;
			break;
		}
		case A22: {
			return 7;
			break;
		}
		case A23: {
			return 1;
			break;
		}
		case A24: {
			return 0;
			break;
		}
		case A25: {
			return 8;
			break;
		}
		case A26: {
			return 2;
			break;
		}
		}
	}
}
