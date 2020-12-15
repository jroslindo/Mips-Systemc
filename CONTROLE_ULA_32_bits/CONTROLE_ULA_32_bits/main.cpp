#include "systemc.h"
#include "controle_ula.h"
#include "test_controle_ula.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<sc_bv<2>> mi_ALUOp;
    sc_signal<sc_bv<6>> mi_Func;
    sc_signal<sc_bv<3>> mo_ALUControl;

    sc_clock CLK("clock", 50, SC_NS);

    controle_ula CONTROLE_ULA("CONTROLE_ULA");
    CONTROLE_ULA(mi_ALUOp, mi_Func, mo_ALUControl);

    test_controle_ula TEST_CONTROLE_ULA("TEST_CONTROLE_ULA");
    TEST_CONTROLE_ULA(CLK, mi_ALUOp, mi_Func, mo_ALUControl);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_controle_ula");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_ALUOp, "i_ALUOp");
    sc_trace(tf, mi_Func, "i_Func");
    sc_trace(tf, mo_ALUControl, "o_ALUControl");

    sc_start(600, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}