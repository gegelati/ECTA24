/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:25:52
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, A14, A15, A16, A17, A18, };

int inferenceTPG() {
	enum vertices currentVertex = T13;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A14, A15, A16, A15,  };

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
			const enum vertices next[3] = { A17, A15, A16,  };

			double T1Scores[3];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P2();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A17, A14,  };

			double T2Scores[2];

			T2Scores[0] = P6();
			T2Scores[1] = P7();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A16, A14, A15, T2,  };

			double T3Scores[4];

			T3Scores[0] = P2();
			T3Scores[1] = P8();
			T3Scores[2] = P5();
			T3Scores[3] = P9();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A16, T0, T3, T1, A15,  };

			double T4Scores[5];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P12();
			T4Scores[3] = P13();
			T4Scores[4] = P14();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { T3, T0, T1, T1, A17,  };

			double T5Scores[5];

			T5Scores[0] = P15();
			T5Scores[1] = P16();
			T5Scores[2] = P17();
			T5Scores[3] = P18();
			T5Scores[4] = P19();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T0, T4, T5, T3,  };

			double T6Scores[4];

			T6Scores[0] = P20();
			T6Scores[1] = P21();
			T6Scores[2] = P22();
			T6Scores[3] = P23();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T5, T4, T0, T0, T6,  };

			double T7Scores[5];

			T7Scores[0] = P24();
			T7Scores[1] = P25();
			T7Scores[2] = P26();
			T7Scores[3] = P20();
			T7Scores[4] = P27();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T0, T5, A18, T4,  };

			double T8Scores[4];

			T8Scores[0] = P28();
			T8Scores[1] = P24();
			T8Scores[2] = P29();
			T8Scores[3] = P30();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T8, A18, A16, T4, A18,  };

			double T9Scores[5];

			T9Scores[0] = P31();
			T9Scores[1] = P32();
			T9Scores[2] = P33();
			T9Scores[3] = P34();
			T9Scores[4] = P35();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { A18, T7, T9,  };

			double T10Scores[3];

			T10Scores[0] = P36();
			T10Scores[1] = P37();
			T10Scores[2] = P38();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[6] = { A18, T10, T9, T0, A18, T7,  };

			double T11Scores[6];

			T11Scores[0] = P39();
			T11Scores[1] = P40();
			T11Scores[2] = P41();
			T11Scores[3] = P16();
			T11Scores[4] = P29();
			T11Scores[5] = P42();

			int best = bestProgram(T11Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { A16, T11,  };

			double T12Scores[2];

			T12Scores[0] = P43();
			T12Scores[1] = P44();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[5] = { T12, T11, T11, A16, T0,  };

			double T13Scores[5];

			T13Scores[0] = P45();
			T13Scores[1] = P46();
			T13Scores[2] = P47();
			T13Scores[3] = P48();
			T13Scores[4] = P11();

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
			return 2;
			break;
		}
		}
	}
}
