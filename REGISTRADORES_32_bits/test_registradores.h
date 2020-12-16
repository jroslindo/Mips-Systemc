#include "systemc.h"

SC_MODULE(test_registradores) {
	sc_in<	bool	> clock;
	sc_out<	bool	> i_RegWrite;
	sc_out< sc_uint<5> > i_ReadRegister1, i_ReadRegister2, i_WriteRegister;
	sc_out< sc_int<32> > i_WriteData;
	sc_in< sc_int<32> > o_ReadData1;
	sc_in<	sc_int<32> > o_ReadData2;


	void do_test();
	void print();

	SC_CTOR(test_registradores) {
		SC_CTHREAD(do_test, clock.pos());
	}
};