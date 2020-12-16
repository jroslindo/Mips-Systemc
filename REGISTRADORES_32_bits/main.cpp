#include "systemc.h"
#include "registradores.h"
#include "test_registradores.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<bool> mi_RegWrite;
    sc_signal< sc_uint<5> > mi_ReadRegister1, mi_ReadRegister2, mi_WriteRegister;
    sc_signal< sc_int<32> > mi_WriteData;
    sc_signal< sc_int<32> > mo_ReadData1;
    sc_signal< sc_int<32> > mo_ReadData2;

    sc_clock CLK("i_CLK", 50, SC_NS);

    registradores REGISTRADORES("REGISTRADORES");
    REGISTRADORES(CLK, mi_RegWrite, mi_ReadRegister1, mi_ReadRegister2, mi_WriteRegister, mi_WriteData, mo_ReadData1, mo_ReadData2);

    test_registradores TEST_REGISTRADORES("TEST_REGISTRADORES");
    TEST_REGISTRADORES(CLK, mi_RegWrite, mi_ReadRegister1, mi_ReadRegister2, mi_WriteRegister, mi_WriteData, mo_ReadData1, mo_ReadData2);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_registradores");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_RegWrite, "mi_RegWrite");
    sc_trace(tf, mi_ReadRegister1, "i_ReadRegister1");
    sc_trace(tf, mi_ReadRegister2, "i_ReadRegister2");
    sc_trace(tf, mi_WriteRegister, "i_WriteRegister");
    sc_trace(tf, mi_WriteData, "i_WriteData");
    sc_trace(tf, mo_ReadData1, "o_ReadData1");
    sc_trace(tf, mo_ReadData2, "o_ReadData2");

    sc_start(600, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}