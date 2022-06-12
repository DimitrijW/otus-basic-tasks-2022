#include "Mean.h"

	Mean::Mean() : m_mean{0}, sum{0}, i{0} {}

	void Mean::update(double next)
	{
		sum += next;
		i++;
		m_mean = sum / i;
	}

	double Mean::eval() const
	{
		return m_mean;
	}

	const std::string Mean::name() const 
	{
		std::string c_str("mean");
		return c_str;
	}