#include <iostream>
using namespace std;
int countWays(int n) {
if (n == 0) {
return 1; 
}
if (n < 0) {
return 0;
}
return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}
int main() {
int n;
cout << "Enter the number of stairs: ";
cin >> n;
int ways = countWays(n);
cout << "Number of ways to reach the top: " << ways << endl;
return 0;
}