#include "resistance.h"
resistance::resistance(float r = 0.0) {
	this->r = r;
}
void resistance::setR(float r) {
	this->r = r;
}
const float resistance::getR() {
	return r;
}
float resistance::current(float v) {
	float i;
	i = v / r;
	return i;
}
float resistance::voltage(float i) {
	float v;
	v = i * r;
	return v;
}
float resistance::operator[](float i) {
	float p;
	p = r * i * i;
	return p;
}
float resistance::operator()(float v) {
	float p;
	p = (v * v) / r;
	return p;
}