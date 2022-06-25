#include "Std.h"
	Std::Std() : m_std{0} {}

	void Std::update(double next)
	{
		v.push_back(next);
		mean_.update(next);
	}

	double Std::eval() const
	{
		double quad_std = 0;
		double x = 0;
		for (int j = 1; j <= v.size(); j++)
		{
			quad_std += abs((v[j] - mean_.m_mean) * (v[j] - mean_.m_mean));
			x = quad_std;
			x /= v.size();
		}
		return sqrt(x);
	}

	const std::string Std::name() const 
	{
		std::string c_str("std");
		return c_str;
	}