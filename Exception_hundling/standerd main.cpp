#include<iostream>
#include<string>
using namespace std;
double av(int a, int b) {
	if (b == 0)
		throw 0;
	if (a < 0 || b < 0)
		throw std::string("nagitive value");
	return static_cast<double>(a) / b;
}

int main() {
	int c;
	int d;
	double r;

	cout << "please first value : ";
	cin >> c;
	cout << "please enter the secand value : ";
	cin >> d;
	try
	{
		r = av(c, d);
		cout << "result is :" << r << endl;
	}
	catch (int& ex)
	{
		cerr << "tried to divid by zero\nggs idiot\n ";
	}
	catch (std::string& ex) {
		cerr << ex << endl;
	}
	catch (...) {
		cerr << "unknown error" << endl;
	}
	return 0;
}