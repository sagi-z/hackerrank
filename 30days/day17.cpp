#include <cmath>
#include <iostream>
#include <exception>
#include <math.h>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator {
    class IllegalValue : public runtime_error {
        public:
            IllegalValue() : runtime_error("n and p should be non-negative") {}
    };

    public:
        int power(int n, int p) {
            if (n < 0 || p < 0) throw IllegalValue();
            return pow(n, p);
        }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
