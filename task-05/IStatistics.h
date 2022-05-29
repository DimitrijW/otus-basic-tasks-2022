#ifndef ISTATISTICS_H_
#define ISTATISTICS_H_

class IStatistics
{
public:
	virtual ~IStatistics() {}

	virtual void update(double next) = 0;
	virtual double eval() const = 0;
	virtual const char* name() const = 0;
};

#endif /* ISTATISTICS_H_ */