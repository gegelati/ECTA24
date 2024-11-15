/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:50:30
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, A21, A22, A23, A24, A25, A26, A27, };

int inferenceTPG() {
	enum vertices currentVertex = T20;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A23, A21,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A21, A23,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A23, A23, A23, A21,  };

			double T2Scores[4];

			T2Scores[0] = P3();
			T2Scores[1] = P4();
			T2Scores[2] = P5();
			T2Scores[3] = P2();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { T0, A23, A21,  };

			double T3Scores[3];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P2();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T1, A21, A24,  };

			double T4Scores[3];

			T4Scores[0] = P8();
			T4Scores[1] = P9();
			T4Scores[2] = P10();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T4, A23,  };

			double T5Scores[2];

			T5Scores[0] = P11();
			T5Scores[1] = P3();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T3, T2, A24,  };

			double T6Scores[3];

			T6Scores[0] = P12();
			T6Scores[1] = P13();
			T6Scores[2] = P14();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T6, T5, A26,  };

			double T7Scores[3];

			T7Scores[0] = P15();
			T7Scores[1] = P16();
			T7Scores[2] = P17();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { T5, T6, A22, T5, A24, A23,  };

			double T8Scores[6];

			T8Scores[0] = P18();
			T8Scores[1] = P15();
			T8Scores[2] = P19();
			T8Scores[3] = P20();
			T8Scores[4] = P14();
			T8Scores[5] = P21();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[7] = { A26, T5, A22, A27, T8, T8, T5,  };

			double T9Scores[7];

			T9Scores[0] = P22();
			T9Scores[1] = P23();
			T9Scores[2] = P24();
			T9Scores[3] = P25();
			T9Scores[4] = P26();
			T9Scores[5] = P27();
			T9Scores[6] = P20();

			int best = bestProgram(T9Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T8, T9, A26,  };

			double T10Scores[3];

			T10Scores[0] = P28();
			T10Scores[1] = P29();
			T10Scores[2] = P30();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T9, A22, T8,  };

			double T11Scores[3];

			T11Scores[0] = P31();
			T11Scores[1] = P32();
			T11Scores[2] = P33();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { T9, T10, A22, A24, A24, A22, A26,  };

			double T12Scores[7];

			T12Scores[0] = P31();
			T12Scores[1] = P34();
			T12Scores[2] = P32();
			T12Scores[3] = P35();
			T12Scores[4] = P36();
			T12Scores[5] = P37();
			T12Scores[6] = P38();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[5] = { T12, T11, T9, T8, A26,  };

			double T13Scores[5];

			T13Scores[0] = P39();
			T13Scores[1] = P40();
			T13Scores[2] = P41();
			T13Scores[3] = P42();
			T13Scores[4] = P17();

			int best = bestProgram(T13Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { A26, T7, T11, T12,  };

			double T14Scores[4];

			T14Scores[0] = P43();
			T14Scores[1] = P44();
			T14Scores[2] = P40();
			T14Scores[3] = P45();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { A25, T12,  };

			double T15Scores[2];

			T15Scores[0] = P46();
			T15Scores[1] = P45();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[7] = { T10, T14, A25, T12, T13, T0, T2,  };

			double T16Scores[7];

			T16Scores[0] = P47();
			T16Scores[1] = P48();
			T16Scores[2] = P46();
			T16Scores[3] = P45();
			T16Scores[4] = P49();
			T16Scores[5] = P50();
			T16Scores[6] = P13();

			int best = bestProgram(T16Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[6] = { T14, A25, T12, T13, T0, T10,  };

			double T17Scores[6];

			T17Scores[0] = P51();
			T17Scores[1] = P46();
			T17Scores[2] = P45();
			T17Scores[3] = P52();
			T17Scores[4] = P50();
			T17Scores[5] = P47();

			int best = bestProgram(T17Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[4] = { T12, T15, T17, A26,  };

			double T18Scores[4];

			T18Scores[0] = P53();
			T18Scores[1] = P54();
			T18Scores[2] = P55();
			T18Scores[3] = P56();

			int best = bestProgram(T18Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[8] = { A25, T9, A23, T7, T16, A21, T12, T18,  };

			double T19Scores[8];

			T19Scores[0] = P57();
			T19Scores[1] = P58();
			T19Scores[2] = P59();
			T19Scores[3] = P60();
			T19Scores[4] = P61();
			T19Scores[5] = P62();
			T19Scores[6] = P63();
			T19Scores[7] = P64();

			int best = bestProgram(T19Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[2] = { T16, T19,  };

			double T20Scores[2];

			T20Scores[0] = P65();
			T20Scores[1] = P66();

			int best = bestProgram(T20Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A21: {
			return 1;
			break;
		}
		case A22: {
			return 2;
			break;
		}
		case A23: {
			return 7;
			break;
		}
		case A24: {
			return 0;
			break;
		}
		case A25: {
			return 3;
			break;
		}
		case A26: {
			return 4;
			break;
		}
		case A27: {
			return 5;
			break;
		}
		}
	}
}
