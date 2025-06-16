#include <iostream>

using namespace std;

//function prototypes
int promptUser();
void printArrStats(int*, int, int);
int mystery(int);

/**
* Doubles the size of the given array
*
* Params:
*  - current_arr: the array to be doubled
*  - current_size: the size of current_arr
* Returns:
*  - a pointer to the new array
**/
int* doubleArr(int *current_arr, int current_size) {
    for (int i = 0; i < current_size; i++) {
        *(current_arr+i) = i*2;
    }

    return 0;
    //TODO: follow the specifications above
}

int main() {
    //TODO: initialize an array of size 1 on the heap
    int x = int(rand()%20);
    //int arr[1];
    int* arr_ptr = new int[x];

    /**
    * TODO: fill the array with values found by 
    * calling mystery on the numbers 1 through final_size.
    * Double the array as needed.
    **/

    int final_size = promptUser();
    
    //TODO: call printArrStats
    
    printArrStats (arr_ptr, *(arr_ptr.size()), final_size);
    //TODO: free up any memory
}

//TODO: trace through the function to find out what it does
int mystery(int n) {
    if(n <= 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    }
    
    return mystery(n - 1) + mystery(n - 2);
}

/**
* Prints array statistics. 
*
* Params:
*  - arr: an array of integers
*  - capacity: the capacity of the array
*  - current_size: the number of items in the array
**/

void printArrStats(int* arr, int capacity, int current_size) {
    cout << "Current number of items in array: " << current_size << endl;
    cout << "Array capacity: " << capacity << endl;
    for(int i = 0; i < current_size; i++) {
        cout << "arr[" << i << "]: " << *(arr + i) << endl;
    }
    return;
}

/**
* Prompts the user to pick a number greater than 1.
*
* Returns:
*  - the integer chosen by the user.
**/

int promptUser() {
    int num;
    do {
        cout << "Pick a number greater than 1: " << endl;
        cin >> num;
    }while(num <= 1);

    return num;
}
