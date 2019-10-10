#include "iostream"
#include <math.h>  

template <class T>
class vec3t {

private:
	T x, y, z;

public:

	vec3t(T x, T y, T z)  {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	vec3t() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	vec3t(const vec3t &v) {
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
	}

	double normalize() {
		double norm;

		norm = sqrt(x*x + y * y + z * z);

		return norm;
	}

	double distance_to(vec3t b) {
		double dist;
		dist = sqrt((x - b.x)* (x - b.x) + (y - b.y)* (y - b.y) + (z - b.z)* (z - b.z));

		return dist;
	}

	vec3t operator + (vec3t const &obj) {
		vec3t res;
		res.x = x + obj.x;
		res.y = y + obj.y;
		res.z = z + obj.z;

		return res;
	}

	void toString() {
		std::cout << "(" << x << "," << y << "," << z << ")";
	
	}
};