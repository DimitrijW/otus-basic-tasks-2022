#include <iostream>
#include <limits>
#include "Min.h"

	Min::Min() : m_min{0}, i{0} {}
	
	void Min::update(double next)
	{
		if (i < 1)
		{
			m_min = next;
			i++;
		}
		if (next <= m_min)
		{
			m_min = next;
		}
	}

	double Min::eval() const
	{
		return m_min;
	}

	const char* Min::name() const
	{
		return "min";
	}