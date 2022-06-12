#include "Std.h"

	Std::Std() : m_std{0}, sum{0}, m_mean{0}, i{1} {}

	void Std::update(double next)
	{
		v.push_back(next);
		sum += next;
		m_mean = sum / i;
		i++;
	}

	double Std::eval() const
	{
		double quad_std = 0;
		double x = 0;
		for (int j = 1; j < i; j++) 
		{
			quad_std += abs((v[j] - m_mean) * (v[j] - m_mean));
			x = quad_std;
			x /= (i);
		}
		return sqrt(x);
	}

	const std::string Std::name() const 
	{
		std::string c_str("std");
		return c_str;
	}