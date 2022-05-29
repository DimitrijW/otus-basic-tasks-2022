#ifndef MEAN_H_
#define MEAN_H_

#include "IStatistics.h"

class Mean : public IStatistics
{
public:
	Mean();

	void update(double next) override;
	double eval() const override;
	const char* name() const override;

private:
	double m_mean;
	double sum;
	int i;
};

#endif /* MEAN_H_ */