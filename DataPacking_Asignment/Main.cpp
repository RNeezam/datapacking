#include "UIntPacker.h"
#include "UIntSplitter.h"
#include <iostream>
#include <bitset>

#define bitCount0 4
#define bitCount1 1
#define bitCount2 5
#define bitCount3 1

int main(void)
{
	
	std::cout << "\n" << "=== Pack & Extract ===" << "\n" << std::endl;

	unsigned int value0 = 4;
	unsigned int value1 = 1;
	unsigned int value2 = 19;
	unsigned int value3 = 0;

	UIntPacker* packer = new UIntPacker;
	packer->Pack(value0, bitCount0);
	packer->Pack(value1, bitCount1);
	packer->Pack(value2, bitCount2);
	packer->Pack(value3, bitCount3);

	std::cout << "Pack Value " << packer->GetData() << std::endl;

	unsigned int value3T = packer->Extract(bitCount3);
	unsigned int value2T = packer->Extract(bitCount2);
	unsigned int value1T = packer->Extract(bitCount1);
	unsigned int value0T = packer->Extract(bitCount0);

	std::cout << "Extract Value " << value0T << std::endl;
	std::cout << "Extract Value " << value1T << std::endl;
	std::cout << "Extract Value " << value2T << std::endl;
	std::cout << "Extract Value " << value3T << std::endl;

	std::cout << "\n" << "=== Split & Merge ===" << "\n" << std::endl;

	UIntSplitter* splitter = new UIntSplitter;
	splitter->StoreUInt(23126579);

	unsigned char aChar0 = splitter->m_bytes[0];
	unsigned char aChar1 = splitter->m_bytes[1];
	unsigned char aChar2 = splitter->m_bytes[2];
	unsigned char aChar3 = splitter->m_bytes[3];

	std::cout << "Split Symbol " << aChar0 << " || " <<
		"Binary " << std::bitset<8>(aChar0).to_string() << std::endl;
	std::cout << "Split Symbol " << aChar1 << " || " <<
		"Binary " << std::bitset<8>(aChar1).to_string() << std::endl;
	std::cout << "Split Symbol " << aChar2 << " || " <<
		"Binary " << std::bitset<8>(aChar2).to_string() << std::endl;
	std::cout << "Split Symbol " << aChar3 << " || " <<
		"Binary " << std::bitset<8>(aChar3).to_string() << std::endl;
	std::cout << "Merge Value " << splitter->GetInt() << std::endl;

	std::cout << "\n";
	system("PAUSE");
};