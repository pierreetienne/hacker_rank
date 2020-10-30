#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int j;
    double p;
    string q;
    // Read and save an integer, double, and String to your variables.
    cin >> j >> p;
    getline(cin >> ws, q);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    // Print the sum of both integer variables on a new line.
    cout << j + i<< endl;
    // Print the sum of the double variables on a new line.
    cout <<  fixed << setprecision(1) << p + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + q << endl;
    return 0;
}
