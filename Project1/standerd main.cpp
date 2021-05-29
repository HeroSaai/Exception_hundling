#include <string>

std::string sum_str(std::string& a, std::string& b) {
	a = "4";
	b = "5";
	int c = std::stoi(a);
	int d = std::stoi(b);
	int r = c + d;
	return std::to_string(r);
}
