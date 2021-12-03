#pragma once

class UIntSplitter
{
public:
	UIntSplitter();
	~UIntSplitter();

	unsigned char m_bytes[4];

	void StoreUInt(unsigned int value); // Store "1 unsigned int" value into "4 unsigned char".
	unsigned int GetInt(void); // Merge the bytes(unsigned char) and return the unsigned int value.
};
