#include "adder_shift.h"

void adder_shift::adder_shiftzin()
{
	sc_uint<32> Data0 = i_Data0.read();
	sc_uint<32> Data1 = i_Data1.read();
	sc_uint<32> DataR = 0;

	//DataR = Data1 << 2;
	DataR = Data0 + (Data1*4);

	o_Data.write(DataR);
}
