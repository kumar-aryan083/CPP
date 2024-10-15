// There are some useful classes for working with files in C++
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// Using the constructor
// Using the member function open() of the class

#include<iostream> 
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str1, str2;

    ofstream asout; // declaring an object of the type ofstream
    asout.open("sampleFile.txt"); //connecting the object out to the text file using the member function open()
    getline(cin, str2);  // using getline to fill the whole line in str2
    asout<<str2; //writing to the file
    asout.close(); //closing the file connection

    ifstream asin;
    asin.open("sampleFile.txt");
    // getline(asin, str1);
    // giving output the string lines by storing in str2 until the file reaches the end of it
    while(asin.eof() == 0){
        getline(asin, str2);
        cout<<str2<<endl;
    }
    // cout<<str1<<endl;
    asin.close();
//---------------------------------------------------------------
    /* Opening files using constructor and Writing it 
    */
    // ofstream asout("sampleFile.txt");
    // asout<<"Aryan is a good boy";
    // getline(cin, str1);
    // asout<<str1;
    // asout.close();

    /* Opening files using constructor and Reading it 
        */
    // ifstream asin("sampleFile.txt");
    // getline(asin, str2);
    // cout<<str2<<endl;
    // asin.close();

    
    return 0;
}