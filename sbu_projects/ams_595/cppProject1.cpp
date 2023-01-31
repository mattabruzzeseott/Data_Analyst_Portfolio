//
//  cppProject1.cpp
//  cppProject1
//
//  Created by Matthew Abruzzese Ott on 11/9/21.
//
//  * Comment out code that is not being ran for particular question *

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// Question 1: Conditional Statements

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == -1){
        cout << "Negative One ";
    }
    else if (num == 0){
        cout << "Zero ";
    }
    else if (num == 1){
        cout << "Positive One ";
    }
    else{
        cout << "Other Value ";
    }
}

// Question 2: Printing a Vector

void print_vector(vector<int> const &v){
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++){ // iterate through vector v
        cout << v.at(i) << ' '; // output value i within vector v
        }
    cout << endl;
}
int main(){
    vector<int> v = {0,1,2,3,4,5,6}; // example using print_vector function defined above
    print_vector(v);
    return 0;
}

// Question 3: While Loops

int main(){
    int x = 1; // define initial values of Fibonacci sequence
    int y = 0;
    while ((x + y) <= 4000000){
        int z = x + y; // define new value z for recursion
        cout << z << endl; // output z, an element of the Fibonacci sequence
        y = x; // update values for next iteration
        x = z;
    }
}

// Question 4: Functions

// Part A: If Prime

bool isprime(int n){
    bool result = true; // initialize result
    int i;
    if (n == 0 || n == 1){ // 0 and 1 are not prime numbers
        result = false;
    }
    else{
        for (i = 2; i <= (n / 2); ++i){ // interations beyond (n / 2) are redundant
            if (n % i == 0){ // no factors for n beyond (n/2)
                result = false; // if n is divisible by i, then it is not prime
                break;
            }
        }
    }
    if (result == true){
        cout << "True, Boolean Value: "; // generate output for function
    }
    else{
        cout << "False, Boolean Value: ";
    }
    return result;
}
int main(){
    cout << "isprime(2) = " << isprime(2) << '\n'; // test cases
    cout << "isprime(10) = " << isprime(10) << '\n';
    cout << "isprime(17) = " << isprime(17) << '\n';
}

// Part B: Factorize

vector<int> factorize(int n){
    vector<int> answer;
    int i;
    for (i = 1; i <= n; ++i){ // iterate from 1 to n
        if (n % i == 0){ // if n is divisible by i, then i is a factor of n
            answer.push_back(i); // append i to answer vector (factors of n)
        }
    }
    return answer;
}
void print_vector(vector<int> const &v){ // modified function from Question 2
    cout << "The factors of n are: ";
    for (int i = 0; i < v.size(); i++){
        cout << v.at(i) << ' ';
        }
    cout << endl;
}
int main(){
    print_vector(factorize(2)); // test cases
    print_vector(factorize(72));
    print_vector(factorize(196));
}

// Part C: Prime Factorization

vector<int> prime_factorize(int n){
    vector<int> answer;
    int i = 2;
    while ((i * i) <= n){
        if (n % i){
            i += 1; // i is not a prime factor
        }
        else{
            n = floor(n /= i);
            answer.push_back(i); // i is a prime factor, so add it to list of prime factors
        }
    }
    if (n > 1){
        answer.push_back(n); // add n to list of prime factors
    }
    return answer;
}
void print_vector(vector<int> const &v){ // modified function from Question 2
    cout << "The prime factorization of n is: ";
    for (int i = 0; i < v.size(); i++){
        cout << v.at(i) << ' ';
        }
    cout << endl;
}
int main(){
    print_vector(prime_factorize(2)); // test cases
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

// Question 5: Recursive Functions and Loops

int main(){
    int n; // declare variables
    int i;
    int j;
    int k;
    cout << "Enter number of rows: ";
    cin >> n; // input n, the number of rows for Pascal's triangle
    cout << endl;
    for (i = 0; i < n; i++){
        int value = 1; // the start of a row is always 1
        for (j = 1; j < (n - i); j++){ // loop to print spaces
            cout << " ";
        }
        for (k = 0; k <= i; k++){ // loop to append values
            cout << " " << value;
            value = value * (i - k) / (k + 1); // update value for iteration
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}

