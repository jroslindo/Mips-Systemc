#include "systemc.h"
#include "pc.h"
#include "test_pc.h"

int sc_main(int argc, char* argv[]) {

    //sc_signal<bool> mi_CLK;
    sc_signal<  sc_bv<32>   > mi_Next_PC;
    sc_signal<  sc_bv<32>  > mo_PC;

    sc_clock CLK("i_CLK", 50, SC_NS);

    pc PC("PC");
    PC(CLK, mi_Next_PC, mo_PC);

    test_pc TEST_PC("TEST_PC");
    TEST_PC(CLK, mi_Next_PC, mo_PC);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_pc");
    sc_trace(tf, CLK, "i_CLK");
    sc_trace(tf, mi_Next_PC, "i_Next_PC");
    sc_trace(tf, mo_PC, "o_PC");

    sc_start(600, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}