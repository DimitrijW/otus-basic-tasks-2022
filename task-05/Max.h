#ifndef MAX_H_
#define MAX_H_

#include "IStatistics.h"

class Max : public IStatistics
{
public:
	Max();
	
	void update(double next) override;
	double eval() const override;

private:
	double m_max;
	int i;

	const std::string name() const override;
};

#endif /* MAX_H_ */