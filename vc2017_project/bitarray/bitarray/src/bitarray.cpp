#include "bitarray.h"

bitarray::bitarray(size_t size)
	: m_size(size)
{
	if (size & 7)
	{
		m_array = new unsigned char[(size >> 3) + 1];
	}
	else
	{
		m_array = new unsigned char[size >> 3];
	}

}

bitarray::~bitarray()
{
	delete[] m_array;
}

bool bitarray::get(size_t index)
{
	return (m_array[index >> 3] >> (index & 7)) & 1;
}

void bitarray::set(size_t index, bool state)
{
	if (state)
	{
		m_array[index >> 3] = m_array[index >> 3] | (1 << (index & 7));
	}
	else
	{
		m_array[index >> 3] = m_array[index >> 3] & (~(1 << (index & 7)));
	}
}

size_t bitarray::size()
{
	return m_size;
}

size_t bitarray::size_byte()
{
	if (m_size & 7)
	{
		return (m_size >> 3) + 1;
	}
	else
	{
		return (m_size >> 3);
	}
}