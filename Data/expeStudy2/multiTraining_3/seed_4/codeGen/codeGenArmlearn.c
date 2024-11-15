/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:41:36
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, A13, A14, A15, A16, A17, A18, A19, };

int inferenceTPG() {
	enum vertices currentVertex = T12;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A15, A16, A14,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A17, A14,  };

			double T1Scores[2];

			T1Scores[0] = P3();
			T1Scores[1] = P2();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { T1, T0, A17,  };

			double T2Scores[3];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A16, T1,  };

			double T3Scores[2];

			T3Scores[0] = P1();
			T3Scores[1] = P7();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T2, T2, A14, T0,  };

			double T4Scores[4];

			T4Scores[0] = P8();
			T4Scores[1] = P9();
			T4Scores[2] = P10();
			T4Scores[3] = P11();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A18, T0,  };

			double T5Scores[2];

			T5Scores[0] = P12();
			T5Scores[1] = P11();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T2, A19, T2, A14, A18,  };

			double T6Scores[5];

			T6Scores[0] = P13();
			T6Scores[1] = P14();
			T6Scores[2] = P15();
			T6Scores[3] = P16();
			T6Scores[4] = P12();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[7] = { A16, T4, A14, A18, T5, T0, T2,  };

			double T7Scores[7];

			T7Scores[0] = P17();
			T7Scores[1] = P18();
			T7Scores[2] = P19();
			T7Scores[3] = P20();
			T7Scores[4] = P21();
			T7Scores[5] = P11();
			T7Scores[6] = P22();

			int best = bestProgram(T7Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T7, T2, T2, T6,  };

			double T8Scores[4];

			T8Scores[0] = P23();
			T8Scores[1] = P24();
			T8Scores[2] = P13();
			T8Scores[3] = P25();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T7, A13, T2, T6, T4,  };

			double T9Scores[5];

			T9Scores[0] = P23();
			T9Scores[1] = P26();
			T9Scores[2] = P13();
			T9Scores[3] = P25();
			T9Scores[4] = P27();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { T8, T9, A16, T3,  };

			double T10Scores[4];

			T10Scores[0] = P28();
			T10Scores[1] = P29();
			T10Scores[2] = P30();
			T10Scores[3] = P31();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { A14, T10,  };

			double T11Scores[2];

			T11Scores[0] = P32();
			T11Scores[1] = P33();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { T10, T8, T10, A18, T2, A15, T11,  };

			double T12Scores[7];

			T12Scores[0] = P34();
			T12Scores[1] = P35();
			T12Scores[2] = P33();
			T12Scores[3] = P12();
			T12Scores[4] = P22();
			T12Scores[5] = P36();
			T12Scores[6] = P37();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A13: {
			return 8;
			break;
		}
		case A14: {
			return 3;
			break;
		}
		case A15: {
			return 5;
			break;
		}
		case A16: {
			return 0;
			break;
		}
		case A17: {
			return 1;
			break;
		}
		case A18: {
			return 2;
			break;
		}
		case A19: {
			return 4;
			break;
		}
		}
	}
}
