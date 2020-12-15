#include "test_and_port.h"

void test_and_port::do_test() {

    while (true) {

        ti_Data0.write(0b00000000000000000000000000000001);
        ti_Data1.write(0b00000000000000000000000000000000);
        print();
        wait(1);

        ti_Data0.write(0b00000000000000000000000000000001);
        ti_Data1.write(0b00000000000000000000000000000001);
        print();
        wait(1);

        ti_Data0.write(0b00000000000000000000000000000000);
        ti_Data1.write(0b00000000000000000000000000000001);
        print();
        wait(1);

    }
}

void test_and_port::print() {

}