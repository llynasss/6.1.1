#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int size, const int Low, const int High);
int sum(int* a, const int n, int& k);
void print(int* a, const int n);

int main() {
    srand((unsigned)time(NULL));

    const int n = 23;
    const int low = 4;
    const int hight = 16;

    int p;
    int k = 0;
    int s[n];

    create(s, n, low, hight);

    print(s, n);

    p = sum(s, n, k);

    print(s, n);

    cout << "---------------------------------------------------------------------------\n";
    cout << "|" << "sum" << "|" << setw(6) << p << "|" << endl << "------------\n";
    cout << "|" << " k " << "|" << setw(6) << k << "|" << endl << "------------\n";
}

void create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

int sum(int* a, const int n, int& k) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (!(a[i] % 2 == 1 && i % 3 == 0) || i == 0) {
            s += a[i];
            k++;
            a[i] = 0;
        }
    }
    return s;
}

void print(int* a, const int n) {
    cout << "---------------------------------------------------------------------------\n" <<
        "| s |";
    for (int i = 0; i < n; i++) {
        cout << " " << setw(2) << a[i];
    }
    cout << "|\n";
}
