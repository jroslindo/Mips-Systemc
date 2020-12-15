#include "test_pc.h"

void test_pc::do_test() {

    while (true) {

        ti_Next_PC.write(0b00000000000000000000000000000000);
        print();
        wait(1);

        ti_Next_PC.write(0b00000000000000000000000000000001);
        print();
        wait(1);

        ti_Next_PC.write(0b00000000000000000000000000000010);
        print();
        wait(1);

        ti_Next_PC.write(0b00000000000000000000000000000100);
        print();
        wait(1);

    }
}

void test_pc::print() {

}