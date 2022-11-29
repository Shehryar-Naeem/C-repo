#include<iostream>
using namespace std;
int main(){
cout << fixed << right;
 cout.fill('0');
for (int seconds = 0; seconds < 60; seconds++)
 cout  << seconds << endl;
cout << fixed << right;
 cout.fill('0');
for (int minutes = 0; minutes < 60; minutes++)
 {
 for (int seconds = 0; seconds < 60; seconds++)
 {
 cout << minutes << ":";
 cout  << seconds << endl;
 }
 }
 }
