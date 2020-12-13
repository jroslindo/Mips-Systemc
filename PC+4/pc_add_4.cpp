#include "pc_add_4.h"

void pc_add_4::entry()
{
	o_Data.write(static_cast<sc_bv<32> >(i_Data0.read().to_uint() + 4));
}
