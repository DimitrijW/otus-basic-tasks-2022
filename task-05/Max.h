#ifndef MAX_H_
#define MAX_H_

#include "IStatistics.h"

class Max : public IStatistics
{
public:
	Max();
	
	void update(double next) override;
	double eval() const override;
	const char* name() const override;

private:
	double m_max;
	int i;
};

#endif /* MAX_H_ */