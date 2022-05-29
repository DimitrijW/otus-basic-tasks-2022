#include <iostream>
#include <limits>
#include "Max.h"

	Max::Max() : m_max{0}, i{0} {}

	void Max::update(double next)
	{
		while (i < 1)
		{
			m_max = next;
			i++;
		}
		if (next >= m_max)
		{
			m_max = next;
		}
	}

	double Max::eval() const
	{
		return m_max;
	}

	const char* Max::name() const
	{
		return "max";
	}
