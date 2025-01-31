/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 14:26:17
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "codeGenArmlearn_program.h"
#include "externHeader.h"
extern double* in1;
extern double* in2;
extern double* in3;
extern double* in4;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in2[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in2[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in1[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		reg[4] = log(op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[4];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in2[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		reg[1] = cos(op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		reg[0] = log(op0);
	}
	{
		double op0 = reg[2];
		double op1 = reg[0];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P13(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P14(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P15(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in2[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P16(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		reg[1] = log(op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P17(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P18(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P19(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P20(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P21(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P22(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = reg[2];
		reg[0] = cos(op0);
	}
	return reg[0];
}

double P23(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in1[0];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P24(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P25(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P26(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P27(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in4[0];
		reg[1] = op0 / op1;
	}
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P28(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		double op1 = in4[5];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P29(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		reg[1] = cos(op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P30(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = cos(op0);
	}
	return reg[0];
}

double P31(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[0];
		double op1 = in4[2];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P32(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P33(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P34(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P35(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P36(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in2[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P37(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P38(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in2[2];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P39(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P40(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[4];
		double op1 = in4[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P41(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P42(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[2];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P43(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in2[0];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P44(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in2[2];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P45(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P46(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = reg[3];
		double op1 = in1[0];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P47(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in3[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P48(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P49(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in2[2];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P50(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in3[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P51(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in3[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P52(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[4];
		double op1 = in2[2];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P53(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in3[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P54(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in2[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P55(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in1[2];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P56(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in1[1];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P57(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = reg[7];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P58(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in1[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P59(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in2[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P60(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in3[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P61(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		double op1 = in2[2];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P62(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P63(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P64(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in1[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P65(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[0];
		double op1 = reg[1];
		reg[6] = op0 - op1;
	}
	{
		double op0 = in1[0];
		double op1 = reg[6];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P66(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[1];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P67(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[1];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P68(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = reg[1];
		reg[4] = cos(op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[4];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P69(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P70(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in1[2];
		reg[2] = op0 + op1;
	}
	{
		double op0 = reg[2];
		double op1 = in3[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P71(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in1[0];
		reg[6] = op0 * op1;
	}
	{
		double op0 = in1[0];
		double op1 = reg[6];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P72(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in2[1];
		reg[2] = op0 * op1;
	}
	{
		double op0 = reg[1];
		double op1 = reg[2];
		reg[4] = op0 / op1;
	}
	{
		double op0 = in2[2];
		double op1 = reg[4];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P73(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in1[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P74(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[0];
		double op1 = in2[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P75(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = reg[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P76(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P77(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P78(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in1[2];
		reg[2] = op0 + op1;
	}
	{
		double op0 = reg[2];
		double op1 = in3[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P79(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = reg[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P80(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in1[0];
		reg[6] = op0 - op1;
	}
	{
		double op0 = reg[6];
		double op1 = in2[1];
		reg[6] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	{
		double op0 = in1[0];
		double op1 = reg[6];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P81(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P82(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in1[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P83(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in2[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P84(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P85(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		reg[2] = cos(op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[2];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P86(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[0];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P87(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P88(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in2[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P89(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		double op1 = in3[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P90(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in2[0];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P91(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[1];
		reg[6] = exp(op0);
	}
	{
		double op0 = in1[0];
		double op1 = reg[6];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P92(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in1[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P93(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in2[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P94(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in2[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}
