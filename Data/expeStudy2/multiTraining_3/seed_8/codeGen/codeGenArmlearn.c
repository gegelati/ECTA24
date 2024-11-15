/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:43:12
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, A19, A20, A21, A22, A23, A24, A25, };

int inferenceTPG() {
	enum vertices currentVertex = T18;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A21, A19,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A19, A21,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A21, A21,  };

			double T2Scores[2];

			T2Scores[0] = P3();
			T2Scores[1] = P4();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { T0, A21, A19,  };

			double T3Scores[3];

			T3Scores[0] = P5();
			T3Scores[1] = P6();
			T3Scores[2] = P2();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T1, A19, A22,  };

			double T4Scores[3];

			T4Scores[0] = P7();
			T4Scores[1] = P8();
			T4Scores[2] = P9();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T4, A21,  };

			double T5Scores[2];

			T5Scores[0] = P10();
			T5Scores[1] = P3();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T3, T2, A22,  };

			double T6Scores[3];

			T6Scores[0] = P11();
			T6Scores[1] = P12();
			T6Scores[2] = P13();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T6, T5,  };

			double T7Scores[2];

			T7Scores[0] = P14();
			T7Scores[1] = P15();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { T5, T6, A20, T5, A22, A21,  };

			double T8Scores[6];

			T8Scores[0] = P16();
			T8Scores[1] = P14();
			T8Scores[2] = P17();
			T8Scores[3] = P18();
			T8Scores[4] = P13();
			T8Scores[5] = P19();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { A20, T8,  };

			double T9Scores[2];

			T9Scores[0] = P17();
			T9Scores[1] = P20();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { T5, A20, A25, T9, T8, T5,  };

			double T10Scores[6];

			T10Scores[0] = P21();
			T10Scores[1] = P22();
			T10Scores[2] = P23();
			T10Scores[3] = P24();
			T10Scores[4] = P25();
			T10Scores[5] = P18();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T8, T10, A24,  };

			double T11Scores[3];

			T11Scores[0] = P26();
			T11Scores[1] = P27();
			T11Scores[2] = P28();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[5] = { T10, T11, A20, T8, T8,  };

			double T12Scores[5];

			T12Scores[0] = P29();
			T12Scores[1] = P30();
			T12Scores[2] = P31();
			T12Scores[3] = P32();
			T12Scores[4] = P33();

			int best = bestProgram(T12Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[7] = { T10, T11, A20, A22, A22, A20, A24,  };

			double T13Scores[7];

			T13Scores[0] = P29();
			T13Scores[1] = P30();
			T13Scores[2] = P31();
			T13Scores[3] = P34();
			T13Scores[4] = P35();
			T13Scores[5] = P36();
			T13Scores[6] = P37();

			int best = bestProgram(T13Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T12, T10, T8, A24,  };

			double T14Scores[4];

			T14Scores[0] = P38();
			T14Scores[1] = P39();
			T14Scores[2] = P40();
			T14Scores[3] = P41();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[4] = { A24, T7, T12, T13,  };

			double T15Scores[4];

			T15Scores[0] = P42();
			T15Scores[1] = P43();
			T15Scores[2] = P38();
			T15Scores[3] = P44();

			int best = bestProgram(T15Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[3] = { T15, A23, T13,  };

			double T16Scores[3];

			T16Scores[0] = P45();
			T16Scores[1] = P46();
			T16Scores[2] = P44();

			int best = bestProgram(T16Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[7] = { T15, A23, T13, T14, T0, T11, T2,  };

			double T17Scores[7];

			T17Scores[0] = P47();
			T17Scores[1] = P46();
			T17Scores[2] = P44();
			T17Scores[3] = P48();
			T17Scores[4] = P49();
			T17Scores[5] = P50();
			T17Scores[6] = P12();

			int best = bestProgram(T17Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[2] = { T16, T17,  };

			double T18Scores[2];

			T18Scores[0] = P51();
			T18Scores[1] = P52();

			int best = bestProgram(T18Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A19: {
			return 1;
			break;
		}
		case A20: {
			return 2;
			break;
		}
		case A21: {
			return 7;
			break;
		}
		case A22: {
			return 0;
			break;
		}
		case A23: {
			return 3;
			break;
		}
		case A24: {
			return 4;
			break;
		}
		case A25: {
			return 5;
			break;
		}
		}
	}
}
