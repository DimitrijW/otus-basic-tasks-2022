#ifndef MIN_H_
#define MIN_H_

#include "IStatistics.h"

class Min : public IStatistics
{
public:
	Min();

	void update(double next) override;
	double eval() const override;

private:
	double m_min;
	int i;

	const std::string name() const override;
};

#endif /* MIN_H_ */