#ifndef STD_H_
#define STD_H_

#include <math.h>
#include <vector>
#include "IStatistics.h"
#include "Mean.h"

class Std : public IStatistics
{
public:
	Std();

	void update(double next) override;
	double eval() const override;

private:
	double m_std;
	Mean mean_;
	std::vector<double> v;
	
	const std::string name() const override;
};

#endif /* STD_H_ */