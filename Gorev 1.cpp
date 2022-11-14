#include <iostream>
#define g 9.80665
using namespace std;

int main() {
	float t;
	cout << "Cisim kacinci saniyede? : ";
	cin >> t;
	cout << "\n Cismin aldigi toplam yol : " << 0.5*g*t*t << " metre";
	return 0;
}
