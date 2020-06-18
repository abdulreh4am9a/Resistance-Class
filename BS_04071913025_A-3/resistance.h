#include<iostream>
using namespace std;
class resistance {
	float r;
public:
	resistance(float r);
	void setR(float r);
	const float getR();
	float current(float v);
	float voltage(float i);
	float operator[](float i);
	float operator()(float v);
};