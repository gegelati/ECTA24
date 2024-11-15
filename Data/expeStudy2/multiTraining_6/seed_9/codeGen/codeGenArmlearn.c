/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:50:57
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
			const enum vertices next[3] = { A18, A19, A17,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { T0, A20,  };

			double T1Scores[2];

			T1Scores[0] = P3();
			T1Scores[1] = P4();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A17, A20, A19, A18, A17,  };

			double T2Scores[5];

			T2Scores[0] = P5();
			T2Scores[1] = P6();
			T2Scores[2] = P1();
			T2Scores[3] = P7();
			T2Scores[4] = P8();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { T1, A19, A20,  };

			double T3Scores[3];

			T3Scores[0] = P9();
			T3Scores[1] = P1();
			T3Scores[2] = P10();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T1, A18,  };

			double T4Scores[2];

			T4Scores[0] = P11();
			T4Scores[1] = P12();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A20, T3, T1, A21,  };

			double T5Scores[4];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A18, T2, T5,  };

			double T6Scores[3];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P19();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T6, A21,  };

			double T7Scores[2];

			T7Scores[0] = P20();
			T7Scores[1] = P21();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { A18, T5, A21, T6, T5, A22,  };

			double T8Scores[6];

			T8Scores[0] = P22();
			T8Scores[1] = P19();
			T8Scores[2] = P23();
			T8Scores[3] = P24();
			T8Scores[4] = P25();
			T8Scores[5] = P26();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[10] = { A18, A20, A20, A22, T5, T6, T4, T2, T5, A21,  };

			double T9Scores[10];

			T9Scores[0] = P27();
			T9Scores[1] = P28();
			T9Scores[2] = P29();
			T9Scores[3] = P26();
			T9Scores[4] = P19();
			T9Scores[5] = P30();
			T9Scores[6] = P31();
			T9Scores[7] = P32();
			T9Scores[8] = P33();
			T9Scores[9] = P34();

			int best = bestProgram(T9Scores, 10);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { T7, T2, A21, T9, A22, T8,  };

			double T10Scores[6];

			T10Scores[0] = P35();
			T10Scores[1] = P36();
			T10Scores[2] = P37();
			T10Scores[3] = P38();
			T10Scores[4] = P39();
			T10Scores[5] = P40();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[6] = { T9, A22, T2, T8, T8, A21,  };

			double T11Scores[6];

			T11Scores[0] = P41();
			T11Scores[1] = P42();
			T11Scores[2] = P43();
			T11Scores[3] = P44();
			T11Scores[4] = P45();
			T11Scores[5] = P37();

			int best = bestProgram(T11Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { T11, A21, A22, T3, T9, A22, T10,  };

			double T12Scores[7];

			T12Scores[0] = P46();
			T12Scores[1] = P37();
			T12Scores[2] = P42();
			T12Scores[3] = P47();
			T12Scores[4] = P48();
			T12Scores[5] = P49();
			T12Scores[6] = P50();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T12, T3, T10, T5,  };

			double T13Scores[4];

			T13Scores[0] = P51();
			T13Scores[1] = P47();
			T13Scores[2] = P50();
			T13Scores[3] = P52();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[6] = { T13, T12, A20, T10, T9, A20,  };

			double T14Scores[6];

			T14Scores[0] = P53();
			T14Scores[1] = P54();
			T14Scores[2] = P55();
			T14Scores[3] = P56();
			T14Scores[4] = P57();
			T14Scores[5] = P58();

			int best = bestProgram(T14Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[3] = { T14, T13, A20,  };

			double T15Scores[3];

			T15Scores[0] = P59();
			T15Scores[1] = P53();
			T15Scores[2] = P60();

			int best = bestProgram(T15Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[4] = { T15, A22, T12, T14,  };

			double T16Scores[4];

			T16Scores[0] = P61();
			T16Scores[1] = P49();
			T16Scores[2] = P62();
			T16Scores[3] = P63();

			int best = bestProgram(T16Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A17: {
			return 0;
			break;
		}
		case A18: {
			return 1;
			break;
		}
		case A19: {
			return 3;
			break;
		}
		case A20: {
			return 7;
			break;
		}
		case A21: {
			return 4;
			break;
		}
		case A22: {
			return 2;
			break;
		}
		}
	}
}
