#include "Std.h"

	Std::Std() : m_std{0}, sum{0}, m_mean{0}, i{1} {}

	void Std::update(double next)
	{
		double quad_std = 0;
		double x = 0;
		v.push_back(next);
		sum += next;
		m_mean = sum / i;
		i++;
		for (int j = 1; j < i; j++)
		{
			quad_std += abs((v[j] - m_mean) * (v[j] - m_mean));
			x = quad_std;
			x /= (i);
		}
		m_std = sqrt(x);
	}

	double Std::eval() const
	{
		return m_std;
	}

	const char* Std::name() const
	{
		return "std";
	}