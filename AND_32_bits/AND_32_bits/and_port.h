#pragma once
#include "systemc.h"

SC_MODULE(and_port) {
	sc_in< 	sc_bv<32>  > i_Data0, i_Data1;
	sc_out< sc_bv<32>  >	o_Data;

	void andzin();

	// Constructor
	SC_CTOR(and_port) {
		SC_METHOD(andzin);
		sensitive << i_Data0 << i_Data1;
	}
};
