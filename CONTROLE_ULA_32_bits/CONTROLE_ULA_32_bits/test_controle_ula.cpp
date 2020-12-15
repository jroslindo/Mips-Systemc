#include "test_controle_ula.h"

void test_controle_ula::do_test() {

    while (true) {

        ti_ALUOp.write(0b00);
        ti_Func.write(0b000000);
        print();
        wait(1);

        ti_ALUOp.write(0b01);
        ti_Func.write(0b000000);
        print();
        wait(1);

        ti_ALUOp.write(0b10);
        ti_Func.write(0b100000);
        print();
        wait(1);

        ti_ALUOp.write(0b10);
        ti_Func.write(0b100010);
        print();
        wait(1);

        ti_ALUOp.write(0b10);
        ti_Func.write(0b100100);
        print();
        wait(1);

        ti_ALUOp.write(0b10);
        ti_Func.write(0b100101);
        print();
        wait(1);

        ti_ALUOp.write(0b10);
        ti_Func.write(0b101010);
        print();
        wait(1);

    }
}

void test_controle_ula::print() {

}