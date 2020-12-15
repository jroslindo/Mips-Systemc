#include "systemc.h"

SC_MODULE(adder_shift) {
	sc_in< 	sc_bv<32>  >	i_Data0, i_Data1;
	sc_out< sc_bv<32>  >	o_Data;

	void adder_shiftzin();

	// Constructor
	SC_CTOR(adder_shift) {
		SC_METHOD(adder_shiftzin);
		sensitive << i_Data0 << i_Data1;
	}
};