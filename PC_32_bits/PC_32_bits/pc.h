#include "systemc.h"

SC_MODULE(pc) {

	sc_in<	bool	> i_CLK;
	sc_in< 	sc_bv<32>  >	i_Next_PC;
	sc_out< sc_bv<32>  >	o_PC;

	void pczin();

	// Constructor
	SC_CTOR(pc) {
		SC_METHOD(pczin);
		sensitive << i_CLK.pos();
	}
};