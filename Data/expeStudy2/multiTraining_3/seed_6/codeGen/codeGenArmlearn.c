/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:42:21
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, A12, A13, A14, A15, A16, A17, A18, A19, };

int inferenceTPG() {
	enum vertices currentVertex = T11;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A12, A16, A12, A13,  };

			double T0Scores[4];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();

			int best = bestProgram(T0Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { T0, A15, A16,  };

			double T1Scores[3];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[7] = { A13, A12, A12, A18, A17, A15, A16,  };

			double T2Scores[7];

			T2Scores[0] = P7();
			T2Scores[1] = P2();
			T2Scores[2] = P8();
			T2Scores[3] = P9();
			T2Scores[4] = P10();
			T2Scores[5] = P11();
			T2Scores[6] = P12();

			int best = bestProgram(T2Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A15, T1,  };

			double T3Scores[2];

			T3Scores[0] = P13();
			T3Scores[1] = P14();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A13, T2,  };

			double T4Scores[2];

			T4Scores[0] = P15();
			T4Scores[1] = P16();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[8] = { A17, A13, A12, A13, T4, A15, A16, T2,  };

			double T5Scores[8];

			T5Scores[0] = P17();
			T5Scores[1] = P18();
			T5Scores[2] = P19();
			T5Scores[3] = P20();
			T5Scores[4] = P21();
			T5Scores[5] = P22();
			T5Scores[6] = P23();
			T5Scores[7] = P24();

			int best = bestProgram(T5Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T2, T3, T5, A12,  };

			double T6Scores[4];

			T6Scores[0] = P25();
			T6Scores[1] = P26();
			T6Scores[2] = P27();
			T6Scores[3] = P0();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T6, A19,  };

			double T7Scores[2];

			T7Scores[0] = P28();
			T7Scores[1] = P29();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T6, A18, A15,  };

			double T8Scores[3];

			T8Scores[0] = P30();
			T8Scores[1] = P31();
			T8Scores[2] = P11();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T2, A14, T7,  };

			double T9Scores[3];

			T9Scores[0] = P32();
			T9Scores[1] = P33();
			T9Scores[2] = P34();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T7, T8,  };

			double T10Scores[2];

			T10Scores[0] = P35();
			T10Scores[1] = P36();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[6] = { A14, T10, T7, T9, T2, A15,  };

			double T11Scores[6];

			T11Scores[0] = P33();
			T11Scores[1] = P37();
			T11Scores[2] = P34();
			T11Scores[3] = P38();
			T11Scores[4] = P39();
			T11Scores[5] = P13();

			int best = bestProgram(T11Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A12: {
			return 1;
			break;
		}
		case A13: {
			return 7;
			break;
		}
		case A14: {
			return 4;
			break;
		}
		case A15: {
			return 0;
			break;
		}
		case A16: {
			return 3;
			break;
		}
		case A17: {
			return 2;
			break;
		}
		case A18: {
			return 5;
			break;
		}
		case A19: {
			return 6;
			break;
		}
		}
	}
}
