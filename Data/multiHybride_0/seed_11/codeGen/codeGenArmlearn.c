/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:48:11
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, A14, A15, A16, A17, A18, A19, A20, };

int inferenceTPG() {
	enum vertices currentVertex = T13;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A15, A16, A17,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A14, T0, A16, A15,  };

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
			const enum vertices next[2] = { T1, A15,  };

			double T2Scores[2];

			T2Scores[0] = P7();
			T2Scores[1] = P8();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A16, A17, A15, T2, T2,  };

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
			const enum vertices next[7] = { A15, T2, T2, A17, T3, A14, A16,  };

			double T4Scores[7];

			T4Scores[0] = P0();
			T4Scores[1] = P13();
			T4Scores[2] = P12();
			T4Scores[3] = P10();
			T4Scores[4] = P14();
			T4Scores[5] = P15();
			T4Scores[6] = P9();

			int best = bestProgram(T4Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A15, T4, T2, A14,  };

			double T5Scores[4];

			T5Scores[0] = P16();
			T5Scores[1] = P17();
			T5Scores[2] = P18();
			T5Scores[3] = P19();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[10] = { A18, A14, T4, T2, T2, A16, A14, A16, A16, T3,  };

			double T6Scores[10];

			T6Scores[0] = P20();
			T6Scores[1] = P21();
			T6Scores[2] = P22();
			T6Scores[3] = P23();
			T6Scores[4] = P18();
			T6Scores[5] = P24();
			T6Scores[6] = P25();
			T6Scores[7] = P26();
			T6Scores[8] = P27();
			T6Scores[9] = P28();

			int best = bestProgram(T6Scores, 10);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { A19, T5,  };

			double T7Scores[2];

			T7Scores[0] = P29();
			T7Scores[1] = P30();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T2, T6, A19,  };

			double T8Scores[3];

			T8Scores[0] = P31();
			T8Scores[1] = P32();
			T8Scores[2] = P33();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[6] = { T7, T7, T8, T7, T5, A14,  };

			double T9Scores[6];

			T9Scores[0] = P34();
			T9Scores[1] = P35();
			T9Scores[2] = P36();
			T9Scores[3] = P37();
			T9Scores[4] = P38();
			T9Scores[5] = P25();

			int best = bestProgram(T9Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[7] = { T7, T8, T7, T8, A16, T7, A14,  };

			double T10Scores[7];

			T10Scores[0] = P35();
			T10Scores[1] = P39();
			T10Scores[2] = P40();
			T10Scores[3] = P41();
			T10Scores[4] = P42();
			T10Scores[5] = P43();
			T10Scores[6] = P15();

			int best = bestProgram(T10Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { A14, A16, T8, T8,  };

			double T11Scores[4];

			T11Scores[0] = P44();
			T11Scores[1] = P45();
			T11Scores[2] = P46();
			T11Scores[3] = P47();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[6] = { T10, T11, A16, A20, A16, T7,  };

			double T12Scores[6];

			T12Scores[0] = P48();
			T12Scores[1] = P49();
			T12Scores[2] = P50();
			T12Scores[3] = P51();
			T12Scores[4] = P5();
			T12Scores[5] = P52();

			int best = bestProgram(T12Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[5] = { T10, A20, T12, T9, A19,  };

			double T13Scores[5];

			T13Scores[0] = P53();
			T13Scores[1] = P54();
			T13Scores[2] = P55();
			T13Scores[3] = P56();
			T13Scores[4] = P57();

			int best = bestProgram(T13Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A14: {
			return 0;
			break;
		}
		case A15: {
			return 1;
			break;
		}
		case A16: {
			return 5;
			break;
		}
		case A17: {
			return 3;
			break;
		}
		case A18: {
			return 8;
			break;
		}
		case A19: {
			return 2;
			break;
		}
		case A20: {
			return 4;
			break;
		}
		}
	}
}
