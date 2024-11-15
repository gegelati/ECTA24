
extern double* in1;

double P0(){
	double reg[4] = {0, 0, 0, 0};
	{
		double op0 = in1[2];
		double op1 = in1[1];
		reg[2] = op0 * op1;
	}
	{
		double op0 = reg[2];
		double op1 = in1[2];
		reg[0] = op0 + op1;
	}
	return reg[0];
}