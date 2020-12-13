#include "mux_05.h"

void mux_05::entry()
{
	if(!i_Sel.read()){
		o_Data.write(i_Data0.read());
	}else{
		o_Data.write(i_Data1.read());
	}
}
