/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:28:00
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, A14, A15, A16, A17, A18, A19, };

int inferenceTPG() {
	enum vertices currentVertex = T13;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A14, A17, A17,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A17, A18, T0,  };

			double T1Scores[3];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[6] = { T0, A15, A15, A19, A19, A17,  };

			double T2Scores[6];

			T2Scores[0] = P5();
			T2Scores[1] = P6();
			T2Scores[2] = P7();
			T2Scores[3] = P8();
			T2Scores[4] = P9();
			T2Scores[5] = P3();

			int best = bestProgram(T2Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { T2, T0, A19, A18, A17,  };

			double T3Scores[5];

			T3Scores[0] = P10();
			T3Scores[1] = P11();
			T3Scores[2] = P12();
			T3Scores[3] = P4();
			T3Scores[4] = P3();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { T2, A16, A15, T0, A17,  };

			double T4Scores[5];

			T4Scores[0] = P13();
			T4Scores[1] = P14();
			T4Scores[2] = P15();
			T4Scores[3] = P11();
			T4Scores[4] = P16();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T4, A16, T4,  };

			double T5Scores[3];

			T5Scores[0] = P17();
			T5Scores[1] = P18();
			T5Scores[2] = P19();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T5, T0,  };

			double T6Scores[2];

			T6Scores[0] = P20();
			T6Scores[1] = P21();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T0, T6, A16,  };

			double T7Scores[3];

			T7Scores[0] = P22();
			T7Scores[1] = P23();
			T7Scores[2] = P24();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { A16, T5,  };

			double T8Scores[2];

			T8Scores[0] = P25();
			T8Scores[1] = P26();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T0, A19, A16, A15, A16,  };

			double T9Scores[5];

			T9Scores[0] = P22();
			T9Scores[1] = P27();
			T9Scores[2] = P28();
			T9Scores[3] = P29();
			T9Scores[4] = P30();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T7, T0, A19,  };

			double T10Scores[3];

			T10Scores[0] = P31();
			T10Scores[1] = P22();
			T10Scores[2] = P27();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[8] = { T1, T10, T9, T0, A19, A15, A16, T8,  };

			double T11Scores[8];

			T11Scores[0] = P32();
			T11Scores[1] = P33();
			T11Scores[2] = P34();
			T11Scores[3] = P22();
			T11Scores[4] = P35();
			T11Scores[5] = P29();
			T11Scores[6] = P36();
			T11Scores[7] = P37();

			int best = bestProgram(T11Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T8, T3, T10,  };

			double T12Scores[3];

			T12Scores[0] = P38();
			T12Scores[1] = P39();
			T12Scores[2] = P40();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T12, T11,  };

			double T13Scores[2];

			T13Scores[0] = P41();
			T13Scores[1] = P42();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A14: {
			return 3;
			break;
		}
		case A15: {
			return 1;
			break;
		}
		case A16: {
			return 2;
			break;
		}
		case A17: {
			return 0;
			break;
		}
		case A18: {
			return 7;
			break;
		}
		case A19: {
			return 5;
			break;
		}
		}
	}
}
