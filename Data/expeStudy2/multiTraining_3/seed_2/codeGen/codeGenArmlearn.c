/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:40:59
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, A12, A13, A14, A15, A16, A17, A18, };

int inferenceTPG() {
	enum vertices currentVertex = T11;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A13, A14, A15,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A12, T0, A14, A13,  };

			double T1Scores[4];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();
			T1Scores[3] = P6();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, A13,  };

			double T2Scores[2];

			T2Scores[0] = P7();
			T2Scores[1] = P8();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A14, A15, A13, T2, T2,  };

			double T3Scores[5];

			T3Scores[0] = P9();
			T3Scores[1] = P10();
			T3Scores[2] = P0();
			T3Scores[3] = P11();
			T3Scores[4] = P12();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A13, T2, A15, T3, A14,  };

			double T4Scores[5];

			T4Scores[0] = P0();
			T4Scores[1] = P12();
			T4Scores[2] = P10();
			T4Scores[3] = P13();
			T4Scores[4] = P9();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A13, T4, T2, A12,  };

			double T5Scores[4];

			T5Scores[0] = P14();
			T5Scores[1] = P15();
			T5Scores[2] = P16();
			T5Scores[3] = P17();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[11] = { A16, A12, T4, T2, T2, A14, A12, A15, A14, A14, T3,  };

			double T6Scores[11];

			T6Scores[0] = P18();
			T6Scores[1] = P19();
			T6Scores[2] = P20();
			T6Scores[3] = P21();
			T6Scores[4] = P16();
			T6Scores[5] = P22();
			T6Scores[6] = P23();
			T6Scores[7] = P10();
			T6Scores[8] = P24();
			T6Scores[9] = P25();
			T6Scores[10] = P26();

			int best = bestProgram(T6Scores, 11);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { A17, T5,  };

			double T7Scores[2];

			T7Scores[0] = P27();
			T7Scores[1] = P28();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T2, T6, A17,  };

			double T8Scores[3];

			T8Scores[0] = P29();
			T8Scores[1] = P30();
			T8Scores[2] = P31();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[7] = { T7, T8, T7, T8, A14, T7, A12,  };

			double T9Scores[7];

			T9Scores[0] = P32();
			T9Scores[1] = P33();
			T9Scores[2] = P34();
			T9Scores[3] = P35();
			T9Scores[4] = P36();
			T9Scores[5] = P37();
			T9Scores[6] = P38();

			int best = bestProgram(T9Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { A12, A14, T8,  };

			double T10Scores[3];

			T10Scores[0] = P39();
			T10Scores[1] = P40();
			T10Scores[2] = P41();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[6] = { T9, T8, T10, A14, A18, T7,  };

			double T11Scores[6];

			T11Scores[0] = P42();
			T11Scores[1] = P43();
			T11Scores[2] = P44();
			T11Scores[3] = P45();
			T11Scores[4] = P46();
			T11Scores[5] = P37();

			int best = bestProgram(T11Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A12: {
			return 0;
			break;
		}
		case A13: {
			return 1;
			break;
		}
		case A14: {
			return 5;
			break;
		}
		case A15: {
			return 3;
			break;
		}
		case A16: {
			return 8;
			break;
		}
		case A17: {
			return 2;
			break;
		}
		case A18: {
			return 4;
			break;
		}
		}
	}
}
