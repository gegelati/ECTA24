/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:41:59
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, A16, A17, A18, A19, A20, A21, };

int inferenceTPG() {
	enum vertices currentVertex = T15;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A16, A19,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { T0, A17, A18,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A17, A18, A17, A20,  };

			double T2Scores[4];

			T2Scores[0] = P5();
			T2Scores[1] = P4();
			T2Scores[2] = P3();
			T2Scores[3] = P6();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A18, T1, T2, A17,  };

			double T3Scores[4];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A17, A19, A16,  };

			double T4Scores[3];

			T4Scores[0] = P11();
			T4Scores[1] = P12();
			T4Scores[2] = P13();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A19, T3, A19,  };

			double T5Scores[3];

			T5Scores[0] = P14();
			T5Scores[1] = P15();
			T5Scores[2] = P16();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T3, A19, T4, A21, A16,  };

			double T6Scores[5];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P19();
			T6Scores[3] = P20();
			T6Scores[4] = P21();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T5, T6, T1,  };

			double T7Scores[3];

			T7Scores[0] = P22();
			T7Scores[1] = P23();
			T7Scores[2] = P24();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A16, T6, A21, T4,  };

			double T8Scores[4];

			T8Scores[0] = P25();
			T8Scores[1] = P26();
			T8Scores[2] = P20();
			T8Scores[3] = P27();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T6, A21, A18, A17, T8,  };

			double T9Scores[5];

			T9Scores[0] = P28();
			T9Scores[1] = P20();
			T9Scores[2] = P29();
			T9Scores[3] = P5();
			T9Scores[4] = P30();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T9, T7,  };

			double T10Scores[2];

			T10Scores[0] = P31();
			T10Scores[1] = P32();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { A21, T10, T5, T10,  };

			double T11Scores[4];

			T11Scores[0] = P33();
			T11Scores[1] = P34();
			T11Scores[2] = P35();
			T11Scores[3] = P36();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { T8, T10, T11, A17, A21, T5, T5,  };

			double T12Scores[7];

			T12Scores[0] = P30();
			T12Scores[1] = P37();
			T12Scores[2] = P38();
			T12Scores[3] = P39();
			T12Scores[4] = P40();
			T12Scores[5] = P35();
			T12Scores[6] = P41();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T8, T5, A21, T10,  };

			double T13Scores[4];

			T13Scores[0] = P30();
			T13Scores[1] = P35();
			T13Scores[2] = P42();
			T13Scores[3] = P34();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[5] = { T10, T5, T5, A18, A18,  };

			double T14Scores[5];

			T14Scores[0] = P43();
			T14Scores[1] = P44();
			T14Scores[2] = P45();
			T14Scores[3] = P46();
			T14Scores[4] = P47();

			int best = bestProgram(T14Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[6] = { T10, T12, T14, A18, T13, A21,  };

			double T15Scores[6];

			T15Scores[0] = P48();
			T15Scores[1] = P49();
			T15Scores[2] = P50();
			T15Scores[3] = P51();
			T15Scores[4] = P52();
			T15Scores[5] = P42();

			int best = bestProgram(T15Scores, 6);
			currentVertex = next[best];
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
			return 1;
			break;
		}
		case A19: {
			return 0;
			break;
		}
		case A20: {
			return 8;
			break;
		}
		case A21: {
			return 2;
			break;
		}
		}
	}
}
