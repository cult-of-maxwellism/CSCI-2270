#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Series
{
    string title;
    int book_count;
};

/*
* Create a new series struct and add it to the array at 
*   the specified position. Assume the array is large enough.
*/
void createSeries(Series my_books[], int pos, string name, int num_books) {
    Series new_series {name, num_books};
    
    my_books[pos] = new_series;
}

/*
* Use stringstream to separate a line from the csv file
*   into portions. Store the portions in the result array.
*/
void splitLine(string line, string result[]) {
    istringstream iss(line);
    int idx = 0;
    while (getline(iss, result[idx],',')) {
        idx++;
    }
}

/*
* Display information stored in the array of Series.
*/
void displayResults(Series books[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << books[i].title << " has " 
            << books[i].book_count << " books." << endl;
    }
}

int main(int argc, char* argv[]) {
	
    //process command line args
    if(argc != 2) {
        cout << "Incorrect arguments" << endl;
        return 0;
    }

    //open file
    string fname = argv[2];
    ifstream infile;
    infile.open(fname);

    if(infile.fail()) {
        cout << "Error opening input file." << endl;
        return 0;
    }

    //create an array of Series of size 10
    Series books[10];
    int num_books = 0;

    //process the lines and add them to the array
    string line;
    while(getline(infile,line)) {
        string info[2];
        splitLine(line, info);

        createSeries(books, num_books, info[0], stoi(info[1]));
        num_books++;
    }

    infile.close();

    //display results

    return 0;
}
