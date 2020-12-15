#include "systemc.h"
#include "memoria_ram.h"
#include "test_memoria_ram.h"

int sc_main(int argc, char* argv[]) {

    sc_signal<bool> mi_MemWrite, mi_MemRead;
    sc_signal<sc_uint<32>> mi_Address;
    sc_signal<sc_int<32>> mi_Data, mo_Data;

    sc_clock CLK("i_CLK", 50, SC_NS);

    memoria_ram MEMORIA_RAM("MEMORIA_RAM");
    MEMORIA_RAM(mi_MemWrite, mi_MemRead, mi_Address, mi_Data, mo_Data);

    test_memoria_ram TEST_MEMORIA_RAM("TEST_MEMORIA_RAM");
    TEST_MEMORIA_RAM(CLK, mi_MemWrite, mi_MemRead, mi_Address, mi_Data, mo_Data);

    sc_trace_file* tf = sc_create_vcd_trace_file("wave_memoria_ram");
    sc_trace(tf, CLK, "clock");
    sc_trace(tf, mi_MemWrite, "i_MemWrite");
    sc_trace(tf, mi_MemRead, "i_MemRead");
    sc_trace(tf, mi_Address, "i_Address");
    sc_trace(tf, mi_Data, "i_Data");
    sc_trace(tf, mo_Data, "o_Data");

    sc_start(600, SC_NS);
    sc_close_vcd_trace_file(tf);

    return(0);

}