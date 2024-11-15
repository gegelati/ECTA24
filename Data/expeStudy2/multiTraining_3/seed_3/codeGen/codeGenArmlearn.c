/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:41:19
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, A10, A11, A12, A13, A14, A15, };

int inferenceTPG() {
	enum vertices currentVertex = T9;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A10, A12, A13, A11,  };

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
			const enum vertices next[8] = { A11, A10, A12, A10, A11, A10, A13, A13,  };

			double T1Scores[8];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P1();
			T1Scores[3] = P6();
			T1Scores[4] = P7();
			T1Scores[5] = P0();
			T1Scores[6] = P8();
			T1Scores[7] = P9();

			int best = bestProgram(T1Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A12, A10, A10, A13,  };

			double T2Scores[4];

			T2Scores[0] = P1();
			T2Scores[1] = P10();
			T2Scores[2] = P11();
			T2Scores[3] = P8();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A10, A12, T1, A12, A11, A10,  };

			double T3Scores[6];

			T3Scores[0] = P12();
			T3Scores[1] = P1();
			T3Scores[2] = P13();
			T3Scores[3] = P14();
			T3Scores[4] = P15();
			T3Scores[5] = P6();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T2, T3,  };

			double T4Scores[2];

			T4Scores[0] = P16();
			T4Scores[1] = P17();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T2, A12, T0, T1, A11, A11,  };

			double T5Scores[6];

			T5Scores[0] = P18();
			T5Scores[1] = P19();
			T5Scores[2] = P20();
			T5Scores[3] = P21();
			T5Scores[4] = P22();
			T5Scores[5] = P15();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T4, T5,  };

			double T6Scores[2];

			T6Scores[0] = P23();
			T6Scores[1] = P24();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T4, T5, T1, T0, T0,  };

			double T7Scores[5];

			T7Scores[0] = P25();
			T7Scores[1] = P26();
			T7Scores[2] = P27();
			T7Scores[3] = P28();
			T7Scores[4] = P20();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A14, T1, A11, A11,  };

			double T8Scores[4];

			T8Scores[0] = P29();
			T8Scores[1] = P30();
			T8Scores[2] = P15();
			T8Scores[3] = P31();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { T6, T8, A15, T7,  };

			double T9Scores[4];

			T9Scores[0] = P32();
			T9Scores[1] = P33();
			T9Scores[2] = P34();
			T9Scores[3] = P35();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A10: {
			return 1;
			break;
		}
		case A11: {
			return 3;
			break;
		}
		case A12: {
			return 0;
			break;
		}
		case A13: {
			return 5;
			break;
		}
		case A14: {
			return 2;
			break;
		}
		case A15: {
			return 4;
			break;
		}
		}
	}
}
