/*********************************
 * The following code is full of leaks!
 * Use valgrind to debug this code and fix the leaks.
 * 
 * You may add or change any of the delete statements.
 * You may not remove any of the dynamic memory allocations.
 * 
 * Example valgrind usage:
 * g++ -std=c++17 leakyMemory.cpp
 * valgrind --leak-check=summary ./a.out
 *********************************/
#include <iostream>
#include <ctime>

using namespace std;

void foo(char *my_str);
void bar(int my_nums[], int length);

void switcheroo(int *ptr1, int *ptr2)
{
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    return;
}

void switcherooTwo(int *&ptr1, int *&ptr2)
{
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    return;
}

void esrever(int nums[], int len, int *out)
{
    out = new int[len * 2];
    int *arr_idx = nums;
    for(int i = 0; i < len; i++)
    {
        out[i] = *arr_idx;
        arr_idx++;
    }
    for(int i = 0; i < len; i++)
    {
        out[i] = *arr_idx;
        arr_idx--;
    }
}

int main()
{
    srand(time(0));
    int *ptr = NULL;
    int *more_ptr = NULL;
    char *string1 = new char[30];
    foo(string1);
    const int LEN = 4;
    int num_arr[LEN];
    bar(num_arr, LEN);
    ptr = &num_arr[3];
    more_ptr = &num_arr[0];
    switcheroo(ptr, more_ptr);
    int *rra_mun = new int[LEN * 2];
    esrever(num_arr, LEN, rra_mun);
    switcherooTwo(more_ptr, ptr);

    delete string1;
    return 0;
}

void foo(char *my_str)
{
    my_str = new char[40];
    return;
}

void bar(int my_nums[], int length)
{
    int pos = rand() % length;
    int val = rand() % 10;
    my_nums[pos] = val;
    return;
}
