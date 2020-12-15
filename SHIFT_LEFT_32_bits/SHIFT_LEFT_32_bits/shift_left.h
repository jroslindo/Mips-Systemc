#pragma once
#include "systemc.h"

SC_MODULE(shift_left) {
	sc_in< 	sc_bv<32>  >	i_Data;
	sc_out< 	sc_bv<32>  >	o_Data;

	void shift_leftzin();

	// Constructor
	SC_CTOR(shift_left) {
		SC_METHOD(shift_leftzin);
		sensitive << i_Data;
	}
};