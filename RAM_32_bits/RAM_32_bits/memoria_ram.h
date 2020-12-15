#pragma once
#include "systemc.h"

SC_MODULE(memoria_ram) {

	sc_in<	bool	> i_CLK;
	sc_in<	bool	> i_MemWrite;
	sc_in<	bool	> i_MemRead;
	sc_in< sc_uint<32> > i_Address;
	sc_in< sc_int<32> > i_Data;
	sc_out<	sc_int<32> > o_Data;

	void memoria_ramzinha();
	//sc_lv<32> ram[256];
	sc_signal<sc_int<32>> ram[256];

	SC_CTOR(memoria_ram) {
		SC_METHOD(memoria_ramzinha);
		sensitive << i_CLK.pos();
	}
};