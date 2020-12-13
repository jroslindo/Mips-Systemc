#include "sign_extend.h"

void sign_extend::entry()
{
	sc_bv<32> aux_data;

	for (int i = 0; i < 32; i++)
	{
		if (i<16)
		{
			aux_data[i] = i_Data0.read()[i];
		}else{
			aux_data[i] = i_Data0.read()[15];;
		}		
	}
	o_Data.write(aux_data);
	
}
