#include <iostream>
using namespace std;

int main() {
cout << "Code to take 2 inputs X and Y, and print their quadrant \n";
int x;
int y;
cout << "Enter the X-Cordinate : \n";
cin >> x;
cout << "Enter the Y-Cordinate : \n";
cin >> y;
if( x > 0 && y > 0)
{
    cout << "1st Quadrant \n";
}
else if(x < 0 && y > 0)
{
    cout << "2nd Quadrant \n";
}
else if(x < 0 && y < 0)
{
    cout << "3rd Quadrant \n";
}
else if(x > 0 && y < 0)
{
    cout << "4th Quadrant \n";
}
else if( x == 0)
{
    cout << "Y axis \n";
 
}
else if( y == 0)
{
    cout << "X axis \n";
}
else
{
    cout << "point is at origin \n";
}
  return 0;
}
