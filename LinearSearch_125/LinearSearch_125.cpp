#include <iostream>
using namespace std;

int arr[20];                        //array to be searched
int n;                              //number of element in the array
int i;                              //index of array element

void input()
{
    while (true)
    {
        cout << "enter the number of element in the array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }
    //accept array element
    cout << "\n---------------\n";
    cout << "enter array elements \n";
    cout << "-----------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}


void linearsearch()
{
    char ch;
    int ctr;                //number of comparisons

    do
    {
        //accept the number to be searched
        cout << "\nenter the element you want to search: ";         //langkah no 1 algoritma
        int item;
        cin >> item;

        
    }
}




int main()
{
    std::cout << "Hello World!\n";
}

