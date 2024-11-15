/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:50:04
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, A18, A19, A20, A21, A22, A23, A24, A25, };

int inferenceTPG() {
	enum vertices currentVertex = T17;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A18, A20,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A20, A21, A19,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T0, A19,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T0, A23,  };

			double T3Scores[2];

			T3Scores[0] = P5();
			T3Scores[1] = P7();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[6] = { T3, A20, T1, T0, T2, T0,  };

			double T4Scores[6];

			T4Scores[0] = P8();
			T4Scores[1] = P9();
			T4Scores[2] = P10();
			T4Scores[3] = P11();
			T4Scores[4] = P12();
			T4Scores[5] = P13();

			int best = bestProgram(T4Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T4, A24, T3, A21,  };

			double T5Scores[4];

			T5Scores[0] = P14();
			T5Scores[1] = P15();
			T5Scores[2] = P8();
			T5Scores[3] = P3();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T4, A24,  };

			double T6Scores[2];

			T6Scores[0] = P16();
			T6Scores[1] = P15();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T1, T4, A24,  };

			double T7Scores[3];

			T7Scores[0] = P17();
			T7Scores[1] = P18();
			T7Scores[2] = P19();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T6, T4, A24, T4,  };

			double T8Scores[4];

			T8Scores[0] = P20();
			T8Scores[1] = P14();
			T8Scores[2] = P15();
			T8Scores[3] = P18();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[8] = { T5, T8, T1, T0, A24, A21, T1, A23,  };

			double T9Scores[8];

			T9Scores[0] = P21();
			T9Scores[1] = P22();
			T9Scores[2] = P23();
			T9Scores[3] = P24();
			T9Scores[4] = P25();
			T9Scores[5] = P3();
			T9Scores[6] = P26();
			T9Scores[7] = P27();

			int best = bestProgram(T9Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { T9, T4, T1, T1, T4,  };

			double T10Scores[5];

			T10Scores[0] = P28();
			T10Scores[1] = P29();
			T10Scores[2] = P30();
			T10Scores[3] = P31();
			T10Scores[4] = P32();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T9, T5, T7, T4,  };

			double T11Scores[4];

			T11Scores[0] = P33();
			T11Scores[1] = P34();
			T11Scores[2] = P35();
			T11Scores[3] = P32();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T9, T10, T11, T5,  };

			double T12Scores[4];

			T12Scores[0] = P36();
			T12Scores[1] = P37();
			T12Scores[2] = P38();
			T12Scores[3] = P39();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T10, T12, T11, T0,  };

			double T13Scores[4];

			T13Scores[0] = P40();
			T13Scores[1] = P41();
			T13Scores[2] = P42();
			T13Scores[3] = P43();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { A22, T5, T13,  };

			double T14Scores[3];

			T14Scores[0] = P44();
			T14Scores[1] = P45();
			T14Scores[2] = P46();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[8] = { T13, T4, T12, T0, T14, T12, T14, A20,  };

			double T15Scores[8];

			T15Scores[0] = P47();
			T15Scores[1] = P48();
			T15Scores[2] = P49();
			T15Scores[3] = P13();
			T15Scores[4] = P50();
			T15Scores[5] = P51();
			T15Scores[6] = P52();
			T15Scores[7] = P53();

			int best = bestProgram(T15Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[8] = { T12, T3, T14, T12, A25, T1, T15, T0,  };

			double T16Scores[8];

			T16Scores[0] = P54();
			T16Scores[1] = P55();
			T16Scores[2] = P56();
			T16Scores[3] = P57();
			T16Scores[4] = P58();
			T16Scores[5] = P31();
			T16Scores[6] = P59();
			T16Scores[7] = P60();

			int best = bestProgram(T16Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[5] = { T3, T16, A25, T15, A22,  };

			double T17Scores[5];

			T17Scores[0] = P55();
			T17Scores[1] = P61();
			T17Scores[2] = P62();
			T17Scores[3] = P63();
			T17Scores[4] = P64();

			int best = bestProgram(T17Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A18: {
			return 5;
			break;
		}
		case A19: {
			return 1;
			break;
		}
		case A20: {
			return 3;
			break;
		}
		case A21: {
			return 7;
			break;
		}
		case A22: {
			return 4;
			break;
		}
		case A23: {
			return 0;
			break;
		}
		case A24: {
			return 6;
			break;
		}
		case A25: {
			return 2;
			break;
		}
		}
	}
}
