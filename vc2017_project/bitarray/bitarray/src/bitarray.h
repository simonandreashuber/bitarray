#pragma once
#include <cstring>

class bitarray
{
private:
	unsigned char* m_array;
	size_t m_size;
	size_t m_size_byte;

public:
	bitarray(size_t size);
	~bitarray();
	
	bitarray(const bitarray&) = delete;
	bitarray& operator= (const bitarray&) = delete;

	bool get(size_t index);

	void setall(bool state);
	void set(size_t index, bool state);

	size_t size();
	size_t size_byte();

};
