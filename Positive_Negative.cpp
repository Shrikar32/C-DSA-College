#include <iostream>
using namespace std;
//Code to find positive and negative number
int main() {
int number;
cout << "Enter a number : ";
cin >> number;
cout << "Checking for positive and negative \n";
if(number %2 == 0)
{
    cout << "The number is even \n";
}
else 
{
    cout << "The number is odd \n";
}
return 0;
}