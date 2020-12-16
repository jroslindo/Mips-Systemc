#include "registradores.h"

void registradores::registradoreszin() {

	sc_uint<5> AddressReg1 = i_ReadRegister1.read();
	sc_uint<5> AddressReg2 = i_ReadRegister2.read();

	bool RegWrite = i_RegWrite.read();

	if (RegWrite) {
		regs[i_WriteRegister.read()] = i_WriteData.read();
	}
	else {
		o_ReadData1.write(regs[AddressReg1]);
		o_ReadData2.write(regs[AddressReg2]);
	}

}