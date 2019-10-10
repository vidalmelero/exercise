#include "vec3t.h"

int main() {

	vec3t<int> a;
	vec3t<int> b(1, 0, 1);
	vec3t<int> c(b);
	vec3t<int> d = b + c;

	d.toString();
	d.normalize();
	d.distance_to(a);

}