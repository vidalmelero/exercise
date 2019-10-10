#include "iostream"
#include "vec3.h"
#include <math.h>  

vec3::vec3(int x, int y, int z) {
	this->x = x;
	this-> y = y;
	this->z = z;
}

vec3::vec3()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

vec3::vec3(const vec3 & v)
{
	this->x = v.x;
	this->y = v.y;
	this->z = v.z;
}

double vec3::normalize()
{
	double norm;

	norm = sqrt(x*x +y*y + z*z);

	return norm;
}

double vec3::distance_to(vec3 b)
{
	double dist;
	dist = sqrt((x - b.x)* (x - b.x) + (y - b.y)* (y - b.y) + (z - b.z)* (z - b.z));

	return dist;
}

vec3 vec3::operator+(vec3 const & obj)
{
	vec3 res;
	res.x = x + obj.x;
	res.y = y + obj.y;
	res.z = z + obj.z;

	return res;
}

void vec3::toString()
{
	std::cout << "(" << x << "," << y<< "," << z << ")";
}


