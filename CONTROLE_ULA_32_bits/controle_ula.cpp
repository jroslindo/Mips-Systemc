#include "controle_ula.h"

void controle_ula::ulactrl()
{
    sc_uint<2> ALUOp = i_ALUOp.read();
    sc_uint<6> Func = i_Func.read();
    sc_uint<3> ALUControl;

	switch (ALUOp) {

		case 0b00:	//LOAD / STORE
			ALUControl = 0b010;
			break;

		case 0b01:	//BRANCH
			ALUControl = 0b110;
			break;

		case 0b10:	//OPERAÇÕES FORMATO R
			switch (Func) {
				case 0b100000: 
					ALUControl = 0b010; 
					break;
				case 0b100010: 
					ALUControl = 0b110; 
					break;
				case 0b100100: 
					ALUControl = 0b000; 
					break;
				case 0b100101: 
					ALUControl = 0b001; 
					break;
				case 0b101010: 
					ALUControl = 0b111; 
					break;
			}
		break;

	}

	o_ALUControl.write(ALUControl);

}
