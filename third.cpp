#include <iostream>
using namespace std;
  
class Abstraction
{
    private:
        int a, b;
  
    public:
      
    
        void set(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void get()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
  
int main() 
{
    Abstraction obj;
    obj.set(50, 80);
    obj.get();
    return 0;
}