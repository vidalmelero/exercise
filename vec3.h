
class vec3 {

private:
	int x, y, z;

public:

	vec3(int x, int y, int z);
	vec3();
	vec3(const vec3 &v);

	double normalize();
	double distance_to(vec3 b);
	vec3 operator + (vec3 const &obj);

	void toString();
};