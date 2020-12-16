#include "systemc.h"

SC_MODULE(registradores) {

	sc_in<	bool	> i_CLK;
	sc_in<	bool	> i_RegWrite;
	sc_in< sc_uint<5> > i_ReadRegister1, i_ReadRegister2, i_WriteRegister;
	sc_in< sc_int<32> > i_WriteData;
	sc_out< sc_int<32> > o_ReadData1;
	sc_out<	sc_int<32> > o_ReadData2;

	void registradoreszin();
	sc_signal<sc_int<32>> regs[32];

	SC_CTOR(registradores) {
		SC_METHOD(registradoreszin);
		sensitive << i_CLK.pos();
	}

};
