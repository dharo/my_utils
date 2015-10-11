/* 
 * File:   main.cpp
 * Author: david
 *
 * Created on October 11, 2015, 2:26 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
//function prototypes
string convertInt(int);

int main(int argc, char** argv) {
    int num = 234;
    string newString = convertInt(num);
    
    cout<<newString;
    
    
    
    return 0;
}

string convertInt(int number){
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}

