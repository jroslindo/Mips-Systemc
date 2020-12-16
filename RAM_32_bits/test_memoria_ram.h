#include "systemc.h"

SC_MODULE(test_memoria_ram) {
    sc_in<bool> clock;
    sc_out<bool> i_MemWrite;
    sc_out<bool> i_MemRead;
    sc_out<sc_uint<32>> i_Address;
    sc_out<sc_int<32>> i_Data;
    sc_in<sc_int<32>> o_Data;


    void do_test();
    void print();

    SC_CTOR(test_memoria_ram) {
        SC_CTHREAD(do_test, clock.pos());
    }
};

