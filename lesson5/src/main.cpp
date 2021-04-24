#include <iostream>
#include <string>
#include "pairs.h"

using namespace std;

int main(int argc, char **argv)
{
	Pair1<int> p1(6, 9);
	cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
	const Pair1<double> p2(3.4, 7.8);
	cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	Pair<int, double> p3(6, 7.8);
    cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';
    const Pair<double, int> p4(3.4, 5);
    cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';

	//Pair<int> svp(std::string("Amazing"), 7);
	StringValuePair<int> svp(std::string("Amazing"), 7);
	//StringPair<int> svp(std::string("Amazing"), 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
	
	return 0;
}
