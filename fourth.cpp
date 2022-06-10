#include <iostream>
using namespace std;
 
void func(int i) {
  cout << " Here int is = " << i << endl;
}
void func(double  f) {
  cout << " Here float is = " << f << endl;
}


 
int main() {
  func(20);
  func(35.10);
  
  return 0;
}