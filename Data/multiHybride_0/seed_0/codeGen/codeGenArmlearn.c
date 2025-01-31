/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:47:22
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

void bestProgram(double *results, int nb, int* best1, int* best2) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
}

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, A16, A17, A18, A19, A20, A21, A22, };

int inferenceTPG() {
	enum vertices currentVertex = T15;
	int action0 = -1;
	int action1 = -1;
	int action2 = -1; // Tableau d'action

	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[5] = { A17, A18, A16, A19, A16,  };

			double T0Scores[5];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();
			T0Scores[4] = P4();

			int best1, best2;

			// Modifier bestProgram pour modifier les valeurs de best1, best2 avec best1 le plus haut bid et best2 le deuxième plus haut
			bestProgram(T0Scores, 5, best1, best2);


			currentVertex1 = next[best1]; // Team or action
			currentVertex2 = next[best2]; // Team or action

			// Team -> Team
			// Action -> Team
			// Action -> Action
			// Team -> Action

			
			
			break;
		}
		case T1: {
			const enum vertices next[3] = { A17, A21, A18,  };

			double T1Scores[3];

			T1Scores[0] = P5();
			T1Scores[1] = P6();
			T1Scores[2] = P7();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A18, A20, A16, A17, A16,  };

			double T2Scores[5];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P9();
			T2Scores[3] = P10();
			T2Scores[4] = P11();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A18, T0, A19, T1,  };

			double T3Scores[4];

			T3Scores[0] = P12();
			T3Scores[1] = P13();
			T3Scores[2] = P14();
			T3Scores[3] = P15();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T0, T3, A18,  };

			double T4Scores[3];

			T4Scores[0] = P16();
			T4Scores[1] = P17();
			T4Scores[2] = P7();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T3, T2,  };

			double T5Scores[2];

			T5Scores[0] = P18();
			T5Scores[1] = P19();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { A22, T3, T2, A18, A21,  };

			double T6Scores[5];

			T6Scores[0] = P20();
			T6Scores[1] = P21();
			T6Scores[2] = P19();
			T6Scores[3] = P22();
			T6Scores[4] = P23();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T6, A21, T4, A18,  };

			double T7Scores[4];

			T7Scores[0] = P24();
			T7Scores[1] = P25();
			T7Scores[2] = P26();
			T7Scores[3] = P27();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { A22, T4, T3, T6, A21,  };

			double T8Scores[5];

			T8Scores[0] = P20();
			T8Scores[1] = P26();
			T8Scores[2] = P17();
			T8Scores[3] = P28();
			T8Scores[4] = P25();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { T8, T7, T3, A18,  };

			double T9Scores[4];

			T9Scores[0] = P29();
			T9Scores[1] = P30();
			T9Scores[2] = P31();
			T9Scores[3] = P7();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { A19, T9, T5,  };

			double T10Scores[3];

			T10Scores[0] = P32();
			T10Scores[1] = P33();
			T10Scores[2] = P34();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T9, T10,  };

			double T11Scores[2];

			T11Scores[0] = P35();
			T11Scores[1] = P36();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { A21, T11, T2, A19,  };

			double T12Scores[4];

			T12Scores[0] = P6();
			T12Scores[1] = P37();
			T12Scores[2] = P38();
			T12Scores[3] = P39();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { A21, T12, A22,  };

			double T13Scores[3];

			T13Scores[0] = P6();
			T13Scores[1] = P40();
			T13Scores[2] = P41();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T11, T2, A19, A21,  };

			double T14Scores[4];

			T14Scores[0] = P37();
			T14Scores[1] = P42();
			T14Scores[2] = P39();
			T14Scores[3] = P6();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[5] = { T13, T14, A21, T14, T14,  };

			double T15Scores[5];

			T15Scores[0] = P43();
			T15Scores[1] = P44();
			T15Scores[2] = P45();
			T15Scores[3] = P46();
			T15Scores[4] = P47();

			int best = bestProgram(T15Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A16: {
			return 3;
			break;
		}
		case A17: {
			return 1;
			break;
		}
		case A18: {
			return 0;
			break;
		}
		case A19: {
			return 5;
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
