#include"test_ula.h"

void test_ula::do_test() {

    while (true) {

        ti_A.write(0);
        ti_B.write(1);
        ti_C.write(0);
        print();
        wait(1);

        ti_A.write(0);
        ti_B.write(1);
        ti_C.write(1);
        print();
        wait(1);

        ti_A.write(1);
        ti_B.write(1);
        ti_C.write(2);
        print();
        wait(1);

        ti_A.write(1);
        ti_B.write(1);
        ti_C.write(6);
        print();
        wait(1);

        ti_A.write(2);
        ti_B.write(1);
        ti_C.write(6);
        print();
        wait(1);

        ti_A.write(1);
        ti_B.write(1);
        ti_C.write(7);
        print();
        wait(1);

    }
}

void test_ula::print() {

}