/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-15 14:43:36
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, A13, A14, A15, A16, A17, A18, };

int inferenceTPG() {
	enum vertices currentVertex = T12;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A14, A15, A13,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { T0, A16,  };

			double T1Scores[2];

			T1Scores[0] = P3();
			T1Scores[1] = P4();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A13, A16, A15, A14, A13,  };

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
			const enum vertices next[3] = { T1, A15, A16,  };

			double T3Scores[3];

			T3Scores[0] = P9();
			T3Scores[1] = P1();
			T3Scores[2] = P10();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T1, A14,  };

			double T4Scores[2];

			T4Scores[0] = P11();
			T4Scores[1] = P12();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A16, T3, T1,  };

			double T5Scores[3];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A14, T2, T5,  };

			double T6Scores[3];

			T6Scores[0] = P16();
			T6Scores[1] = P17();
			T6Scores[2] = P18();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T6, A17,  };

			double T7Scores[2];

			T7Scores[0] = P19();
			T7Scores[1] = P20();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { A14, T5, A17, T6, T5, A18,  };

			double T8Scores[6];

			T8Scores[0] = P21();
			T8Scores[1] = P18();
			T8Scores[2] = P22();
			T8Scores[3] = P23();
			T8Scores[4] = P24();
			T8Scores[5] = P25();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[10] = { A14, A16, A16, A18, T5, T6, T4, T2, T5, A17,  };

			double T9Scores[10];

			T9Scores[0] = P26();
			T9Scores[1] = P27();
			T9Scores[2] = P28();
			T9Scores[3] = P25();
			T9Scores[4] = P18();
			T9Scores[5] = P29();
			T9Scores[6] = P30();
			T9Scores[7] = P31();
			T9Scores[8] = P32();
			T9Scores[9] = P33();

			int best = bestProgram(T9Scores, 10);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { T7, T2, A17, T9, A18, T8,  };

			double T10Scores[6];

			T10Scores[0] = P34();
			T10Scores[1] = P35();
			T10Scores[2] = P36();
			T10Scores[3] = P37();
			T10Scores[4] = P38();
			T10Scores[5] = P39();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[6] = { T9, A18, T2, T8, T8, A17,  };

			double T11Scores[6];

			T11Scores[0] = P40();
			T11Scores[1] = P41();
			T11Scores[2] = P42();
			T11Scores[3] = P43();
			T11Scores[4] = P44();
			T11Scores[5] = P36();

			int best = bestProgram(T11Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { A18, T10, T11, T9, A18, A17, T3,  };

			double T12Scores[7];

			T12Scores[0] = P45();
			T12Scores[1] = P46();
			T12Scores[2] = P47();
			T12Scores[3] = P48();
			T12Scores[4] = P41();
			T12Scores[5] = P36();
			T12Scores[6] = P49();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A13: {
			return 0;
			break;
		}
		case A14: {
			return 1;
			break;
		}
		case A15: {
			return 3;
			break;
		}
		case A16: {
			return 7;
			break;
		}
		case A17: {
			return 4;
			break;
		}
		case A18: {
			return 2;
			break;
		}
		}
	}
}
