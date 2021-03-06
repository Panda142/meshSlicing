#ifndef PLANE_H
#define PLANE_H
#include "v3.h"
class Plane
{
public:
	Plane(double distance,const v3 & normal);
	~Plane();
	double distanceToPoint(const v3 & point) const;
	void setNormal(const v3 & n);
	void setDistance(double a);

private:
	double mDistance;
	v3 normal;

};

#endif
