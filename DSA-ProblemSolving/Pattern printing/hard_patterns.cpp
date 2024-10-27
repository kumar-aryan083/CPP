#include <iostream>
using namespace std;

void pattern1(int n)
{
    int initSpace = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= initSpace; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        initSpace += 2;
    }
    initSpace = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= initSpace; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        initSpace -= 2;
    }
}
void pattern2(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = 2*n-2 -j;
            int down = 2*n-2 - i;
            cout<<(n - min(min(top, left), min(right, down)))<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    pattern4(n);
    return 0;
}