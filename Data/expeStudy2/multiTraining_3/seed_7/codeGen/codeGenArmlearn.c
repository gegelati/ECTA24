/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:42:46
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, A15, A16, A17, A18, A19, A20, A21, };

int inferenceTPG() {
	enum vertices currentVertex = T14;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A15, A17,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A17, A18, A16,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T0, A16,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T0, A20,  };

			double T3Scores[2];

			T3Scores[0] = P5();
			T3Scores[1] = P7();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A17, T0, A20,  };

			double T4Scores[3];

			T4Scores[0] = P8();
			T4Scores[1] = P5();
			T4Scores[2] = P9();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T3, A17, T1, T0, T2, T0,  };

			double T5Scores[6];

			T5Scores[0] = P10();
			T5Scores[1] = P11();
			T5Scores[2] = P12();
			T5Scores[3] = P13();
			T5Scores[4] = P14();
			T5Scores[5] = P15();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T1, T5, A21, T3, A18,  };

			double T6Scores[5];

			T6Scores[0] = P16();
			T6Scores[1] = P17();
			T6Scores[2] = P18();
			T6Scores[3] = P10();
			T6Scores[4] = P3();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T1, T1, T5, A21,  };

			double T7Scores[4];

			T7Scores[0] = P19();
			T7Scores[1] = P20();
			T7Scores[2] = P21();
			T7Scores[3] = P22();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T5, T5, A21, T5,  };

			double T8Scores[4];

			T8Scores[0] = P23();
			T8Scores[1] = P17();
			T8Scores[2] = P18();
			T8Scores[3] = P21();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[6] = { T6, T8, T1, A21, A18, T4,  };

			double T9Scores[6];

			T9Scores[0] = P24();
			T9Scores[1] = P25();
			T9Scores[2] = P26();
			T9Scores[3] = P27();
			T9Scores[4] = P3();
			T9Scores[5] = P28();

			int best = bestProgram(T9Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { T9, T5, T6, T1, T1, T5,  };

			double T10Scores[6];

			T10Scores[0] = P29();
			T10Scores[1] = P30();
			T10Scores[2] = P31();
			T10Scores[3] = P32();
			T10Scores[4] = P33();
			T10Scores[5] = P34();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { T9, T6, T7, T1, T5,  };

			double T11Scores[5];

			T11Scores[0] = P35();
			T11Scores[1] = P36();
			T11Scores[2] = P37();
			T11Scores[3] = P32();
			T11Scores[4] = P34();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[6] = { T10, T10, T11, T6, T0, T1,  };

			double T12Scores[6];

			T12Scores[0] = P38();
			T12Scores[1] = P39();
			T12Scores[2] = P40();
			T12Scores[3] = P41();
			T12Scores[4] = P42();
			T12Scores[5] = P43();

			int best = bestProgram(T12Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { T1, T12, A19,  };

			double T13Scores[3];

			T13Scores[0] = P43();
			T13Scores[1] = P44();
			T13Scores[2] = P45();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[6] = { A19, T13, T6, T0, T1, T12,  };

			double T14Scores[6];

			T14Scores[0] = P45();
			T14Scores[1] = P46();
			T14Scores[2] = P47();
			T14Scores[3] = P15();
			T14Scores[4] = P32();
			T14Scores[5] = P48();

			int best = bestProgram(T14Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A15: {
			return 5;
			break;
		}
		case A16: {
			return 1;
			break;
		}
		case A17: {
			return 3;
			break;
		}
		case A18: {
			return 7;
			break;
		}
		case A19: {
			return 4;
			break;
		}
		case A20: {
			return 0;
			break;
		}
		case A21: {
			return 6;
			break;
		}
		}
	}
}
