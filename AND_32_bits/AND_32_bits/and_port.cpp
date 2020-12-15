#include "and_port.h"

void and_port::andzin()
{
	sc_uint<32> Data0 = i_Data0.read();
	sc_uint<32> Data1 = i_Data1.read();
	sc_uint<32> Data;

	Data = Data0 and Data1;

	o_Data.write(Data);
}
