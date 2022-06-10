#include <iostream>
using namespace std;
class Test {
private:
	int count;
public:
	Test() : count(5) {}
	void operator --() {
		count = count - 3;
	}
	void get() { 

		cout << "Count: " << count; }
};

int main() {
	Test a;
	--a;
	a.get();
	return 0;
}