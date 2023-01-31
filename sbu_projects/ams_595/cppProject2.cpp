//
//  cppProject2.cpp
//  cppProject2
//
//  Created by Matthew Abruzzese Ott on 11/28/21.

#include <iostream>
#include <cmath>
using namespace std;

float calc_f(float x){ // create function to calculate f(x)
    return sqrt(1 - (x * x));
}

int main(){
    int N;
    cout << "Enter N (the number of intervals): ";
    cin >> N; // user inputs the number of intervals (N) to be used in calculating pi
    
    float a = 0; // initialize lower and upper bounds of interval [0,1]
    float b = 1;
    float x[N]; // initialize array for storing N subintervals
    for (int k = 0; k <= N; k++){ // partition the interval [0,1] and store within array
        x[k] = a + (b - a) / N * k; // array entry at index k
    }
    
    float calculated_pi = 0; // initialize calculated value of pi
    for (int k = 1; k <= N; k++){ // loop to evaluate integral using equation (2)
        calculated_pi += (x[k] - x[k - 1]) * ((calc_f(x[k]) + calc_f(x[k - 1])) / 2);
    }
    
    calculated_pi *= 4; // multiply calculated value of pi by 4 (calculated_pi = (pi/4))
    // this yields calculated value of pi
    
    // print computed value of pi and the error between computed pi and true pi
    cout << "Computed Value of Pi: " << calculated_pi << endl;
    cout << "Error: " << ((abs(calculated_pi - M_PI)) / M_PI) * 100 << "%" << endl;
}

