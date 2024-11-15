/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:40:19
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, A10, A11, A12, A13, A14, A15, A16, };

int inferenceTPG() {
	enum vertices currentVertex = T9;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[5] = { A11, A12, A10, A13, A10,  };

			double T0Scores[5];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();
			T0Scores[4] = P4();

			int best = bestProgram(T0Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A11, A15, A12, A10,  };

			double T1Scores[4];

			T1Scores[0] = P5();
			T1Scores[1] = P6();
			T1Scores[2] = P7();
			T1Scores[3] = P2();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A12, A14, A10, A11, A10,  };

			double T2Scores[5];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P9();
			T2Scores[3] = P10();
			T2Scores[4] = P11();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A12, T0, A13, T1,  };

			double T3Scores[4];

			T3Scores[0] = P12();
			T3Scores[1] = P13();
			T3Scores[2] = P14();
			T3Scores[3] = P15();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T0, A15, T3, A12,  };

			double T4Scores[4];

			T4Scores[0] = P16();
			T4Scores[1] = P17();
			T4Scores[2] = P18();
			T4Scores[3] = P7();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T2, T3, A15, T2,  };

			double T5Scores[4];

			T5Scores[0] = P19();
			T5Scores[1] = P20();
			T5Scores[2] = P17();
			T5Scores[3] = P21();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[7] = { T5, A16, T3, T2, A12, A15, A15,  };

			double T6Scores[7];

			T6Scores[0] = P22();
			T6Scores[1] = P23();
			T6Scores[2] = P24();
			T6Scores[3] = P21();
			T6Scores[4] = P25();
			T6Scores[5] = P17();
			T6Scores[6] = P26();

			int best = bestProgram(T6Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T6, A15, T5, T4, A16, A12,  };

			double T7Scores[6];

			T7Scores[0] = P27();
			T7Scores[1] = P17();
			T7Scores[2] = P28();
			T7Scores[3] = P29();
			T7Scores[4] = P23();
			T7Scores[5] = P30();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { A16, T4, T3, T6, A15,  };

			double T8Scores[5];

			T8Scores[0] = P23();
			T8Scores[1] = P29();
			T8Scores[2] = P18();
			T8Scores[3] = P31();
			T8Scores[4] = P17();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T8, T7, T3,  };

			double T9Scores[3];

			T9Scores[0] = P32();
			T9Scores[1] = P33();
			T9Scores[2] = P34();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A10: {
			return 3;
			break;
		}
		case A11: {
			return 1;
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
			return 7;
			break;
		}
		case A15: {
			return 4;
			break;
		}
		case A16: {
			return 2;
			break;
		}
		}
	}
}
