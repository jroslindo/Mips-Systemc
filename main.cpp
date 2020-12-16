#include "systemc.h"
#include "CLOCK_DIV/clock_div.h"
// #include "test_memoria_ram.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<bool> m_clock_out;


    sc_clock CLK("i_CLK", 50, SC_NS);

    clock_div CLOCK_DIV("CLOCK_DIV");
    CLOCK_DIV(CLK, m_clock_out);

    // test_memoria_ram TEST_MEMORIA_RAM("TEST_MEMORIA_RAM");
    // TEST_MEMORIA_RAM(CLK, m_clock_out);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_memoria_ram");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, m_clock_out, "m_clock_out");


    sc_start(500, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}