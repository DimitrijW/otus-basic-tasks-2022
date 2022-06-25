#include <limits>
#include "Max.h"

	Max::Max() : m_max{std::numeric_limits<double>::lowest()}, i{0} {}


	void Max::update(double next) 
	{
		if (next >= m_max) 
		{
			m_max = next;
		}
	}

	double Max::eval() const 
	{
		return m_max;
	}

	const std::string Max::name() const 
	{
		std::string c_str("max");
		return c_str;
	}