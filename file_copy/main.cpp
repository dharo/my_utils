/* 
 * File:   main.cpp
 * Author: david
 *
 * Created on October 10, 2015, 3:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
//function prototypes
string convertInt(int);


//start execution
int main(int argc, char** argv) {
    //declare variables
    string name;
    char ch;            //will hold character values read from original
    ofstream newFile;   //file stream objet for new file
    int copies;
    
    printf("How many new copies do you want? \n");
    cin>>copies;
    for(int i=0;i<copies;i++){
        //create new file to write in
        name = convertInt(i);
        const char * copy = name.c_str();
        newFile.open(copy);   //open takes in constant char array/string
                                        //make it so I can change this values to whatever I want
                                        //as the value that store it is in a loop.
        
        
        
        
        //Read from original file
        fstream file("test.bin",ios::binary | ios::in);
        if(!file.is_open()){
            cout<<"Error opening File!\n";
        }
        //start looking from the beginning
        file.seekg(0);   
        while(file.good()){
            file.get(ch);
        //write to a new file
            newFile<<ch;
        }

        //close file and exit program 
        newFile.close();
    }                                  
    

    return 0;
}

//use stringstream to convert int to string
string convertInt(int number){
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}