/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:27:35
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, A17, A18, A19, A20, A21, A22, };

int inferenceTPG() {
	enum vertices currentVertex = T16;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A18, A19, A19,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { T0, A20, A21,  };

			double T1Scores[3];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A20, A17, T0,  };

			double T2Scores[3];

			T2Scores[0] = P6();
			T2Scores[1] = P7();
			T2Scores[2] = P3();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[7] = { T0, A20, A21, A17, A17, T0, T1,  };

			double T3Scores[7];

			T3Scores[0] = P3();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();
			T3Scores[4] = P11();
			T3Scores[5] = P12();
			T3Scores[6] = P13();

			int best = bestProgram(T3Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A20, T0, T1,  };

			double T4Scores[3];

			T4Scores[0] = P14();
			T4Scores[1] = P3();
			T4Scores[2] = P13();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T0, A21, A20, A17, T0, A20,  };

			double T5Scores[6];

			T5Scores[0] = P15();
			T5Scores[1] = P9();
			T5Scores[2] = P16();
			T5Scores[3] = P7();
			T5Scores[4] = P3();
			T5Scores[5] = P6();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { A20, T0, T3, A21,  };

			double T6Scores[4];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P19();
			T6Scores[3] = P5();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T4, T3, A20, T2, T0, T3,  };

			double T7Scores[6];

			T7Scores[0] = P20();
			T7Scores[1] = P21();
			T7Scores[2] = P17();
			T7Scores[3] = P22();
			T7Scores[4] = P23();
			T7Scores[5] = P24();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T4, T5, T7, A20,  };

			double T8Scores[4];

			T8Scores[0] = P25();
			T8Scores[1] = P26();
			T8Scores[2] = P27();
			T8Scores[3] = P17();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T3, T6, T5, T7, T6,  };

			double T9Scores[5];

			T9Scores[0] = P19();
			T9Scores[1] = P28();
			T9Scores[2] = P26();
			T9Scores[3] = P29();
			T9Scores[4] = P30();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { T9, T3, T8, T8,  };

			double T10Scores[4];

			T10Scores[0] = P31();
			T10Scores[1] = P21();
			T10Scores[2] = P32();
			T10Scores[3] = P33();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T9, T10, T8, A22,  };

			double T11Scores[4];

			T11Scores[0] = P34();
			T11Scores[1] = P35();
			T11Scores[2] = P36();
			T11Scores[3] = P37();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { A17, T10, A18, T11,  };

			double T12Scores[4];

			T12Scores[0] = P38();
			T12Scores[1] = P39();
			T12Scores[2] = P40();
			T12Scores[3] = P41();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { A21, A22, T8, T11,  };

			double T13Scores[4];

			T13Scores[0] = P42();
			T13Scores[1] = P43();
			T13Scores[2] = P32();
			T13Scores[3] = P41();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[5] = { A22, T13, T12, T8, T12,  };

			double T14Scores[5];

			T14Scores[0] = P44();
			T14Scores[1] = P45();
			T14Scores[2] = P46();
			T14Scores[3] = P47();
			T14Scores[4] = P48();

			int best = bestProgram(T14Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[4] = { T8, T11, T11, T14,  };

			double T15Scores[4];

			T15Scores[0] = P49();
			T15Scores[1] = P50();
			T15Scores[2] = P51();
			T15Scores[3] = P52();

			int best = bestProgram(T15Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[4] = { T14, T11, T8, T15,  };

			double T16Scores[4];

			T16Scores[0] = P53();
			T16Scores[1] = P50();
			T16Scores[2] = P54();
			T16Scores[3] = P55();

			int best = bestProgram(T16Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A17: {
			return 7;
			break;
		}
		case A18: {
			return 3;
			break;
		}
		case A19: {
			return 5;
			break;
		}
		case A20: {
			return 1;
			break;
		}
		case A21: {
			return 6;
			break;
		}
		case A22: {
			return 2;
			break;
		}
		}
	}
}
