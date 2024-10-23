#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

template<typename T>
void Init(T* b, const int n)
{
    for (int i = 0; i < n; i++)
        b[i] = -10 + rand() % 21; // random numbers between -10 and 10
}

template<typename T>
void Print(T* b, const int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << (i < n - 1 ? ", " : "");
    cout << " }";
}

// Function to count the number of negative elements
template<typename T>
int CountNegative(T b[], const int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < 0)
            count++;
    }
    return count;
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
    int n;
    cout << "n = ";
    cin >> n;

    int* b = new int[n];
    Init(b, n);

    cout << "Array: ";
    Print(b, n);
    cout << endl;

    // Count the number of negative elements
    int negativeCount = CountNegative(b, n);
    cout << "The number of negative elements: " << negativeCount << endl;

    delete[] b;
    b = nullptr;
    return 0;
}

