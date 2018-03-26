#include <iostream>

using namespace std;
void divisor (int n)
{
    int div;
    cout << "divisores: " << endl;
    for (int i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            cout <<  i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Digite um numero" << endl;
    cin >> n;
    if (n < 0)
        cout << "numero menor que zero" << endl;
    else
    {
        divisor(n);
    }

    return 0;
}
