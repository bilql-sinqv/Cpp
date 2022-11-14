#include <iostream>
using namespace std;

int main() {
	float t;
	double g = 9.80665;
	cout << "Cisim kacinci saniyede? : ";
	cin >> t;
	cout << "\n Cismin aldigi toplam yol : " << 0.5*g*t*t << " metre";
	return 0;
}
