#ifndef STD_H_
#define STD_H_

#include <math.h>
#include <vector>
#include "IStatistics.h"

class Std : public IStatistics
{
public:
	Std();

	void update(double next) override;
	double eval() const override;

private:
	double m_std;
	double sum;
	double m_mean;
	int i;
	double x;
	std::vector<double> v;

	const std::string name() const override;
};

#endif /* STD_H_ */