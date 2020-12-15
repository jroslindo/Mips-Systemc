#include "memoria_ram.h"

void memoria_ram::memoria_ramzinha() {

	sc_uint<32> Address = i_Address.read();

	bool MemWrite = i_MemWrite.read();
	bool MemRead = i_MemRead.read();

	if (MemRead) {
		cout << "entrou no read";
		o_Data.write(ram[Address]);
	}

	if (MemWrite) {
		cout << "entrou no write";
		ram[Address] = i_Data.read();
		//ram[i_Address.read()].write(io_WriteData.read());
	}

}