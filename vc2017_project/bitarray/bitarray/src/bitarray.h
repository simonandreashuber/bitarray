#pragma once

class bitarray
{
private:
	unsigned char* m_array;
	size_t m_size;

public:
	bitarray(size_t size);
	~bitarray();

	bool get(size_t index);
	void set(size_t index, bool state);

	size_t size();
	size_t size_byte();

};
