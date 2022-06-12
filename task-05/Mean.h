#ifndef MEAN_H_
#define MEAN_H_

#include "IStatistics.h"

class Mean : public IStatistics
{
public:
	Mean();

	void update(double next) override;
	double eval() const override;
	double m_mean;

private:
	double sum;
	int i;

	const std::string name() const override;
};

#endif /* MEAN_H_ */