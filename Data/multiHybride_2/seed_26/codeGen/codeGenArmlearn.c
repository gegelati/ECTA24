/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:26:46
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
			const enum vertices next[4] = { A17, A19, A20, A18,  };

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
			const enum vertices next[3] = { A17, A17, T0,  };

			double T1Scores[3];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { T1, A18, A21, A17, T0,  };

			double T2Scores[5];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P9();
			T2Scores[3] = P4();
			T2Scores[4] = P10();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { T2, A18, T0, T0,  };

			double T3Scores[4];

			T3Scores[0] = P11();
			T3Scores[1] = P8();
			T3Scores[2] = P12();
			T3Scores[3] = P13();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T0, T2,  };

			double T4Scores[2];

			T4Scores[0] = P13();
			T4Scores[1] = P11();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A21, A20, T3, T0,  };

			double T5Scores[4];

			T5Scores[0] = P9();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T4, T3,  };

			double T6Scores[2];

			T6Scores[0] = P17();
			T6Scores[1] = P15();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T4, T3, T3, A19, A20, A20,  };

			double T7Scores[6];

			T7Scores[0] = P17();
			T7Scores[1] = P15();
			T7Scores[2] = P18();
			T7Scores[3] = P19();
			T7Scores[4] = P14();
			T7Scores[5] = P20();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { T5, T2, T6, A20, A20,  };

			double T8Scores[5];

			T8Scores[0] = P21();
			T8Scores[1] = P22();
			T8Scores[2] = P23();
			T8Scores[3] = P24();
			T8Scores[4] = P25();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T8, A23, A20,  };

			double T9Scores[3];

			T9Scores[0] = P26();
			T9Scores[1] = P27();
			T9Scores[2] = P28();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { A23, T7, T9, A20,  };

			double T10Scores[4];

			T10Scores[0] = P29();
			T10Scores[1] = P30();
			T10Scores[2] = P31();
			T10Scores[3] = P32();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { A23, A20, A23, T7, T9,  };

			double T11Scores[5];

			T11Scores[0] = P33();
			T11Scores[1] = P32();
			T11Scores[2] = P34();
			T11Scores[3] = P30();
			T11Scores[4] = P35();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { T10, T11,  };

			double T12Scores[2];

			T12Scores[0] = P36();
			T12Scores[1] = P37();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { A22, T12, A23, T11,  };

			double T13Scores[4];

			T13Scores[0] = P38();
			T13Scores[1] = P39();
			T13Scores[2] = P40();
			T13Scores[3] = P41();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T11, T13, T13, T13,  };

			double T14Scores[4];

			T14Scores[0] = P42();
			T14Scores[1] = P43();
			T14Scores[2] = P44();
			T14Scores[3] = P45();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T13, T14,  };

			double T15Scores[2];

			T15Scores[0] = P46();
			T15Scores[1] = P47();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[3] = { T14, T15, T13,  };

			double T16Scores[3];

			T16Scores[0] = P47();
			T16Scores[1] = P48();
			T16Scores[2] = P49();

			int best = bestProgram(T16Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A17: {
			return 5;
			break;
		}
		case A18: {
			return 3;
			break;
		}
		case A19: {
			return 1;
			break;
		}
		case A20: {
			return 0;
			break;
		}
		case A21: {
			return 8;
			break;
		}
		case A22: {
			return 4;
			break;
		}
		case A23: {
			return 2;
			break;
		}
		}
	}
}
