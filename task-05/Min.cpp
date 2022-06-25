#include <limits>
#include "Min.h"

	Min::Min() : m_min{std::numeric_limits<double>::max()}, i{0} {}
	
	void Min::update(double next)
	{
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