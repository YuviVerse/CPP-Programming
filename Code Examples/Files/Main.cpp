#include <iostream>
#include <fstream>

using namespace std;
 
int main () {
   char data[100]; 

   ofstream outfile;
   outfile.open("TextFile.txt");

   cout << "Opening file for writing..." << endl;
   cout << "Enter your name: ";
   cin >> data;

   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("TextFile.txt"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   // write the data at the screen.
   cout << data << endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();

   return 0;
}