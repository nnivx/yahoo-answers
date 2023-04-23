#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int x = 0;
int y = 0;
int total = 1;

cout<< "Enter a Number: ";
cin>> x;
cout<< "Raise number to the power of: ";
cin>> y;
for(int i=0; i<y; i++){
total = total * x;
}
cout<<x<<"^"<<y<<"="<<total;

cout<< "\n\n";

return(0);
} 
