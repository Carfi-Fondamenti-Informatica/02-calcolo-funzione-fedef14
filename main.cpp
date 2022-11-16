#include <iostream>
#include <math.h>
using namespace std;

int main() {
   
   float a = 0;
   float b = 0;
   float x = 0;
   float y = 0;
   float z = 0;
   
   cin >> a >> b >> x >> y;
   
   if(x<0 && y>0){
   z = a*x-b*y;   
   } else if(x>=0 && y<=0){
   z = a*pow(x,2)-b*y;
   } else{ 
   z = a*x+b*pow(y,2);
   }
   
   cout << z << endl;
   
   return 0;
}
