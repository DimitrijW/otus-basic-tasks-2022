#include <limits>
#include "Min.h"

	Min::Min() : m_min{std::numeric_limits<double>::min()}, i{0} {}
	
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

	const std::string Min::name() const 
	{
		std::string c_str("min");
		return c_str;
	}