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
	const char* name() const override;

private:
	double m_std;
	double sum;
	double m_mean;
	int i;
	std::vector<double> v;

};

#endif /* STD_H_ */