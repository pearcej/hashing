
/*  C++ hashing code by Dr. Jan Pearce, Berea College
    to demonstrate unordered_maps the hashing.txt text file is the 
    lowercase words and numbers from the 2020 version of the hashing chapter of 
    https://runestone.academy/runestone/books/published/cppds/index.html */

// LOGICAL SECTION 1
#include <iostream> // needed for typical i/o
#include <fstream> // needed for filehanding
#include <unordered_map> // FIXME
#include <string> // declares a string
using namespace std; // allows use of methods without requiring std::
     
int main() {
	// LOGICAL SECTION 2
    /* unordered maps have keys called first and vlaues called second */
    unordered_map<string, int> countwords; // FIXME
    string s;
    ifstream infile; // creates input file stream object called infile
	// LOGICAL SECTION 3
    infile.open("hashing.txt"); // opens hashing.txt file and connects with infile

	// LOGICAL SECTION 4 (be careful here with the implied else!)
    while (infile >> s){ // This reads the file word by word into the variable s
        countwords[s]++; // FIXME
    }

	// LOGICAL SECTION 5
    /* Unordered_maps have iterators-- iter is an iterator  in the following */
    for (auto iter=countwords.begin(); iter!=countwords.end(); iter++){ // FIXME
        cout << iter->first << " : " << iter->second << endl; // FIXME
    }

	// LOGICAL SECTION 6
    infile.close(); // closes file connected to infile
    return 0;
}
