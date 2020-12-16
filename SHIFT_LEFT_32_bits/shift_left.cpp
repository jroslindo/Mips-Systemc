#include "shift_left.h"

void shift_left::shift_leftzin()
{
	sc_uint<32> Data = i_Data.read();

	o_Data.write(Data*4);

}
