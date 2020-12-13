#include "mux_32.h"

void mux_32::entry()
{
	if(!i_Sel.read()){
		o_Data.write(i_Data0.read());
	}else{
		o_Data.write(i_Data1.read());
	}
}
