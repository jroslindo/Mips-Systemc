#include "systemc.h"

SC_MODULE(controle_ula) {
	sc_in< 	sc_bv<2>  >	i_ALUOp;
	sc_in< 	sc_bv<6>  >	i_Func;	
	sc_out< sc_bv<3>  >	o_ALUControl;

	void ulactrl();

	// Constructor
	SC_CTOR(controle_ula) {
		SC_METHOD(ulactrl);
		sensitive << i_ALUOp << i_Func;
	}
};
