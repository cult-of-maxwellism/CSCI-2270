#include <iostream>
#include <iomanip>

using namespace std;

struct Item {
    string type;
    double cost;
};

//function prototypes
int promptUser();

int main() {    
    //ask the user to pick a number
    int random_num = promptUser();

    //TODO: dynamically allocate an array of Items of that size
    Item *my_items = new Item[random_num];
    //fill our array with items
    for(int i = 0; i < random_num; i++)
    {
        //TODO
        (my_items + i)->cost = 100+i;
        (my_items + i)->type = "Type " + to_string(i);
    }

    //TODO: format the output to print two decimal places
    cout << fixed << setprecision(2);

    for(int i = 0; i < random_num; i++) {
        //TODO: print our array with items
        cout << (my_items + i)->type << ": $" << (my_items + i)->cost << endl;
    }

    //TODO: free up the memory
    delete[] my_items;

    return 0;
}

int promptUser() {
    int num;
    do {
        cout << "Pick a number greater than 1: " << endl;
        cin >> num;
    } while(num <= 1);

    return num;
}
