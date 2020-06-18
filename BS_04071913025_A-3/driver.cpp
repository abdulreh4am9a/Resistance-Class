#include"resistance.h"
int main() {
	resistance obj(13.4);
	cout << "Resistance: " << obj.getR() << endl;
	obj.setR(41.5);
	cout << "Resistance: " << obj.getR() << endl;
	cout << "Current: " << obj.current(13.9) << endl;
	cout << "Voltage: " << obj.voltage(39.8) << endl;
	cout << "Power by Current: " << obj[12.5] << endl;
	cout << "Power by Voltage: " << obj(62.3) << endl;
	return 0;
}