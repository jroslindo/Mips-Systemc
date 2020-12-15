#include <systemc.h>

SC_MODULE(ula) {

    sc_in< sc_bv<32> >  i_op1;
    sc_in< sc_bv<32> >  i_op2;
    sc_in< sc_bv<3> >  i_code;
    sc_out< sc_bv<32> > o_out;
    sc_out< sc_bv<1>  > o_zero;

    SC_CTOR(ula)
    {
        SC_METHOD(calc);
        sensitive << i_op1 << i_op2 << i_code;
    }

    void calc();
};


