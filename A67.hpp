#include <iomanip>
#include <iostream>
using namespace std;

//swap function that swaps a & b
void swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}

//swap function that swaps a, b, & c
void swap(int &a, int &b, int &c)
{
    swap(a, b);
    swap(a, c);

}

//swap function that swaps a, b, c & d
void swap(int &a, int &b, int &c, int &d)
{
    swap(a, b);
    swap(b, c);
    swap(c, d);

}

// Get inputs from user
void getinput(int& num)
{
    cout << "Enter value: ";
    cin >> num;
}
void getinput(int& n1, int& n2)
{
    cout << "Enter two values: ";
    cin >> n1 >> n2;
}
void getinput(int& n1, int& n2, int& n3)
{
    cout << "Enter three values: ";
    cin >> n1 >> n2 >> n3;
}
void getinput(int& n1, int& n2, int& n3, int& n4)
{
    cout << "Enter four values: ";
    cin >> n1 >> n2 >> n3 >> n4;
}