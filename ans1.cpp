#include <iostream>
using namespace std;
void printIncreasing(int current, int n) {
if (current > n) {
return;
}
cout << current << " ";
printIncreasing(current + 1, n);
}
void printDecreasing(int current) {
if (current < 1) {
return;
}
cout << current << " ";
printDecreasing(current - 1);
}
void printSequence(int n) {
printIncreasing(1, n);
printDecreasing(n - 1);

cout << endl;
}
int main() {
int n;
cout << "Enter a number: ";
cin >> n;
cout << "Increasing%Decreasing seuence: ";
printSequence(n);
return 0;
}