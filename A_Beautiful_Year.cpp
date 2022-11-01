#include <iostream>
using namespace std;
int main()
{
    int given_number;
    cin >> given_number;
    while (true)
    {
        given_number += 1;
        int a = given_number / 1000;
        int b = given_number / 100 % 10;
        int c = given_number / 10 % 10;
        int d = given_number % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << given_number << endl;
    return 0;
}