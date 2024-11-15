/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:24:58
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
			const enum vertices next[2] = { A15, A16,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[5] = { A15, A16, A16, A14, A17,  };

			double T1Scores[5];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();
			T1Scores[4] = P6();

			int best = bestProgram(T1Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[7] = { A16, A16, A15, A18, A14, A16, A16,  };

			double T2Scores[7];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P9();
			T2Scores[3] = P10();
			T2Scores[4] = P11();
			T2Scores[5] = P12();
			T2Scores[6] = P13();

			int best = bestProgram(T2Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A18, T1, A14, T2,  };

			double T3Scores[4];

			T3Scores[0] = P14();
			T3Scores[1] = P15();
			T3Scores[2] = P16();
			T3Scores[3] = P17();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T1, A18,  };

			double T4Scores[2];

			T4Scores[0] = P18();
			T4Scores[1] = P14();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T4, T0,  };

			double T5Scores[2];

			T5Scores[0] = P19();
			T5Scores[1] = P20();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T0, T3, A18, T3, T5,  };

			double T6Scores[5];

			T6Scores[0] = P21();
			T6Scores[1] = P22();
			T6Scores[2] = P23();
			T6Scores[3] = P24();
			T6Scores[4] = P25();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T3, A14, A18, T0, T5,  };

			double T7Scores[5];

			T7Scores[0] = P26();
			T7Scores[1] = P27();
			T7Scores[2] = P28();
			T7Scores[3] = P29();
			T7Scores[4] = P25();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { T3, A14, A18, T5, T0,  };

			double T8Scores[5];

			T8Scores[0] = P26();
			T8Scores[1] = P27();
			T8Scores[2] = P28();
			T8Scores[3] = P25();
			T8Scores[4] = P30();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { T6, T7, T8, T5,  };

			double T9Scores[4];

			T9Scores[0] = P31();
			T9Scores[1] = P32();
			T9Scores[2] = P33();
			T9Scores[3] = P34();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { T9, T8, T7, T5, T8, T9,  };

			double T10Scores[6];

			T10Scores[0] = P35();
			T10Scores[1] = P36();
			T10Scores[2] = P37();
			T10Scores[3] = P34();
			T10Scores[4] = P38();
			T10Scores[5] = P39();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T10, T7,  };

			double T11Scores[2];

			T11Scores[0] = P40();
			T11Scores[1] = P32();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { A17, A19, T11,  };

			double T12Scores[3];

			T12Scores[0] = P41();
			T12Scores[1] = P42();
			T12Scores[2] = P43();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { T9, T12, A18,  };

			double T13Scores[3];

			T13Scores[0] = P44();
			T13Scores[1] = P45();
			T13Scores[2] = P46();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A14: {
			return 1;
			break;
		}
		case A15: {
			return 5;
			break;
		}
		case A16: {
			return 3;
			break;
		}
		case A17: {
			return 7;
			break;
		}
		case A18: {
			return 0;
			break;
		}
		case A19: {
			return 2;
			break;
		}
		}
	}
}
