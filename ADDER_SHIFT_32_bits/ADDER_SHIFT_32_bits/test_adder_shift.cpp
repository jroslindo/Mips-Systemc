#include "test_adder_shift.h"

void test_adder_shift::do_test() {

    while (true) {

        ti_Data0.write(0b00000000000000000000000000000001);
        ti_Data1.write(0b00000000000000000000000000000001);
        print();
        wait(1);

        ti_Data0.write(0b00000000000000000000000000000010);
        ti_Data1.write(0b00000000000000000000000000000001);
        print();
        wait(1);

        ti_Data0.write(0b00000000010000000000000000000010);
        ti_Data1.write(0b00000000001000000000000000000001);
        print();
        wait(1);

    }
}

void test_adder_shift::print() {

}