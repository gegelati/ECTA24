/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:27:09
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, A18, A19, A20, A21, A22, };

int inferenceTPG() {
	enum vertices currentVertex = T17;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A19, A21, A20,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A18, A20,  };

			double T1Scores[2];

			T1Scores[0] = P3();
			T1Scores[1] = P2();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A19, T1, A20, A20,  };

			double T2Scores[4];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();
			T2Scores[3] = P2();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A19, T2, T0, A21, A18,  };

			double T3Scores[5];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();
			T3Scores[4] = P11();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T0, T3,  };

			double T4Scores[2];

			T4Scores[0] = P12();
			T4Scores[1] = P13();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T0, A18, T3, T0,  };

			double T5Scores[4];

			T5Scores[0] = P14();
			T5Scores[1] = P15();
			T5Scores[2] = P16();
			T5Scores[3] = P12();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[6] = { A20, T4, T5, T1, A19, A20,  };

			double T6Scores[6];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P19();
			T6Scores[3] = P20();
			T6Scores[4] = P21();
			T6Scores[5] = P22();

			int best = bestProgram(T6Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T5, A19, A20, T4,  };

			double T7Scores[4];

			T7Scores[0] = P19();
			T7Scores[1] = P23();
			T7Scores[2] = P22();
			T7Scores[3] = P24();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T6, T3, T7,  };

			double T8Scores[3];

			T8Scores[0] = P25();
			T8Scores[1] = P26();
			T8Scores[2] = P27();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T7, T6, T8,  };

			double T9Scores[3];

			T9Scores[0] = P27();
			T9Scores[1] = P28();
			T9Scores[2] = P29();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { T8, A19, A22, T6, T5,  };

			double T10Scores[5];

			T10Scores[0] = P30();
			T10Scores[1] = P31();
			T10Scores[2] = P32();
			T10Scores[3] = P33();
			T10Scores[4] = P19();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T3, T6, T9, A19,  };

			double T11Scores[4];

			T11Scores[0] = P34();
			T11Scores[1] = P35();
			T11Scores[2] = P36();
			T11Scores[3] = P31();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { A19, T10, A22, A22, T8, T11, T10,  };

			double T12Scores[7];

			T12Scores[0] = P37();
			T12Scores[1] = P38();
			T12Scores[2] = P39();
			T12Scores[3] = P32();
			T12Scores[4] = P29();
			T12Scores[5] = P40();
			T12Scores[6] = P41();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T12, T10,  };

			double T13Scores[2];

			T13Scores[0] = P42();
			T13Scores[1] = P43();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[5] = { T12, A20, T12, T10, T12,  };

			double T14Scores[5];

			T14Scores[0] = P44();
			T14Scores[1] = P45();
			T14Scores[2] = P46();
			T14Scores[3] = P43();
			T14Scores[4] = P42();

			int best = bestProgram(T14Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T12, T10,  };

			double T15Scores[2];

			T15Scores[0] = P44();
			T15Scores[1] = P43();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[2] = { A20, T12,  };

			double T16Scores[2];

			T16Scores[0] = P47();
			T16Scores[1] = P48();

			int best = bestProgram(T16Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[5] = { T14, T15, T13, T16, T6,  };

			double T17Scores[5];

			T17Scores[0] = P49();
			T17Scores[1] = P50();
			T17Scores[2] = P51();
			T17Scores[3] = P52();
			T17Scores[4] = P33();

			int best = bestProgram(T17Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A18: {
			return 1;
			break;
		}
		case A19: {
			return 3;
			break;
		}
		case A20: {
			return 0;
			break;
		}
		case A21: {
			return 5;
			break;
		}
		case A22: {
			return 2;
			break;
		}
		}
	}
}
