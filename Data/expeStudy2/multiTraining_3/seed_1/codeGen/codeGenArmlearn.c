/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:40:39
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, A17, A18, A19, A20, A21, A22, A23, };

int inferenceTPG() {
	enum vertices currentVertex = T16;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A17, A19, A18,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[5] = { A19, A20, A18, A17, A21,  };

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
			const enum vertices next[4] = { A19, A18, A17, A17,  };

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
			const enum vertices next[4] = { A18, A17, A19, A21,  };

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
			const enum vertices next[5] = { A21, A19, T0, A17, A21,  };

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
			const enum vertices next[5] = { T3, A19, T2, A17, T1,  };

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
			const enum vertices next[2] = { A18, T1,  };

			double T7Scores[2];

			T7Scores[0] = P8();
			T7Scores[1] = P22();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A19, A19, T6, A17,  };

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
			const enum vertices next[6] = { T3, A19, T4, T7, A18, A17,  };

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
			const enum vertices next[2] = { T6, A17,  };

			double T10Scores[2];

			T10Scores[0] = P24();
			T10Scores[1] = P6();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T3, A22, T10,  };

			double T11Scores[3];

			T11Scores[0] = P28();
			T11Scores[1] = P29();
			T11Scores[2] = P30();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { T9, T11,  };

			double T12Scores[2];

			T12Scores[0] = P31();
			T12Scores[1] = P32();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[6] = { T8, T9, A21, A23, A22, A17,  };

			double T13Scores[6];

			T13Scores[0] = P33();
			T13Scores[1] = P34();
			T13Scores[2] = P35();
			T13Scores[3] = P36();
			T13Scores[4] = P37();
			T13Scores[5] = P38();

			int best = bestProgram(T13Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T13, A23, A20, T13,  };

			double T14Scores[4];

			T14Scores[0] = P39();
			T14Scores[1] = P40();
			T14Scores[2] = P41();
			T14Scores[3] = P42();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[3] = { T12, T14, T14,  };

			double T15Scores[3];

			T15Scores[0] = P43();
			T15Scores[1] = P44();
			T15Scores[2] = P45();

			int best = bestProgram(T15Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[5] = { T14, T15, T13, T14, T12,  };

			double T16Scores[5];

			T16Scores[0] = P46();
			T16Scores[1] = P47();
			T16Scores[2] = P48();
			T16Scores[3] = P49();
			T16Scores[4] = P50();

			int best = bestProgram(T16Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A17: {
			return 1;
			break;
		}
		case A18: {
			return 5;
			break;
		}
		case A19: {
			return 3;
			break;
		}
		case A20: {
			return 7;
			break;
		}
		case A21: {
			return 2;
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
		}
	}
}
