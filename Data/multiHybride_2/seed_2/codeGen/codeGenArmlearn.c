/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:24:32
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
			const enum vertices next[2] = { A21, A22,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A21, A23, T0,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A22, A21,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A22, A21, A21,  };

			double T3Scores[3];

			T3Scores[0] = P5();
			T3Scores[1] = P6();
			T3Scores[2] = P7();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A22, A21, T1, A24, A21,  };

			double T4Scores[5];

			T4Scores[0] = P8();
			T4Scores[1] = P7();
			T4Scores[2] = P9();
			T4Scores[3] = P10();
			T4Scores[4] = P6();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A23, T4, T3, A22,  };

			double T5Scores[4];

			T5Scores[0] = P11();
			T5Scores[1] = P12();
			T5Scores[2] = P13();
			T5Scores[3] = P14();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { A25, T5,  };

			double T6Scores[2];

			T6Scores[0] = P15();
			T6Scores[1] = P16();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { A25, T5,  };

			double T7Scores[2];

			T7Scores[0] = P15();
			T7Scores[1] = P17();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T5, T7, T4, T7,  };

			double T8Scores[4];

			T8Scores[0] = P18();
			T8Scores[1] = P19();
			T8Scores[2] = P20();
			T8Scores[3] = P21();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T7, T5,  };

			double T9Scores[2];

			T9Scores[0] = P22();
			T9Scores[1] = P23();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T8, A22,  };

			double T10Scores[2];

			T10Scores[0] = P24();
			T10Scores[1] = P25();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T6, T10, A25, T8,  };

			double T11Scores[4];

			T11Scores[0] = P26();
			T11Scores[1] = P27();
			T11Scores[2] = P28();
			T11Scores[3] = P29();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T5, T8, T11,  };

			double T12Scores[3];

			T12Scores[0] = P30();
			T12Scores[1] = P31();
			T12Scores[2] = P32();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T8, T11,  };

			double T13Scores[2];

			T13Scores[0] = P33();
			T13Scores[1] = P34();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T4, T13, T11, T12,  };

			double T14Scores[4];

			T14Scores[0] = P35();
			T14Scores[1] = P36();
			T14Scores[2] = P37();
			T14Scores[3] = P38();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[4] = { T11, T14, T0, T8,  };

			double T15Scores[4];

			T15Scores[0] = P39();
			T15Scores[1] = P40();
			T15Scores[2] = P41();
			T15Scores[3] = P42();

			int best = bestProgram(T15Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[5] = { T9, T9, A21, A25, T8,  };

			double T16Scores[5];

			T16Scores[0] = P43();
			T16Scores[1] = P44();
			T16Scores[2] = P6();
			T16Scores[3] = P45();
			T16Scores[4] = P46();

			int best = bestProgram(T16Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[6] = { T15, T8, T14, A25, T16, A25,  };

			double T17Scores[6];

			T17Scores[0] = P47();
			T17Scores[1] = P48();
			T17Scores[2] = P49();
			T17Scores[3] = P50();
			T17Scores[4] = P51();
			T17Scores[5] = P45();

			int best = bestProgram(T17Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[3] = { T17, A26, T8,  };

			double T18Scores[3];

			T18Scores[0] = P52();
			T18Scores[1] = P53();
			T18Scores[2] = P54();

			int best = bestProgram(T18Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[7] = { T17, T2, T9, T5, T15, T18, T2,  };

			double T19Scores[7];

			T19Scores[0] = P55();
			T19Scores[1] = P56();
			T19Scores[2] = P57();
			T19Scores[3] = P18();
			T19Scores[4] = P58();
			T19Scores[5] = P59();
			T19Scores[6] = P60();

			int best = bestProgram(T19Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[4] = { A25, T17, T19, A22,  };

			double T20Scores[4];

			T20Scores[0] = P61();
			T20Scores[1] = P62();
			T20Scores[2] = P63();
			T20Scores[3] = P64();

			int best = bestProgram(T20Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A21: {
			return 3;
			break;
		}
		case A22: {
			return 5;
			break;
		}
		case A23: {
			return 0;
			break;
		}
		case A24: {
			return 1;
			break;
		}
		case A25: {
			return 2;
			break;
		}
		case A26: {
			return 6;
			break;
		}
		}
	}
}
