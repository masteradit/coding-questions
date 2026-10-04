#include <iostream>

using namespace std;

class MagicSquare
{
private:
    int n;
    int arr[100][100];

public:
    MagicSquare();
    void read();
    void display();
    bool check();
};

MagicSquare::MagicSquare() {}

void MagicSquare::read()
{
    cout << "Enter the dimention of the matrix\n";
    cin >> n;

    cout << "Enter the elements of the matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void MagicSquare::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

bool MagicSquare::check()
{
    int sum = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        temp = temp + arr[i][n - 1 - i];
    }

    if (sum != temp)
        return false;

    // For sums of Rows
    for (int i = 0; i < n; i++)
    {

        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += arr[i][j];
        }

        // check if every row sum is
        // equal to prime diagonal sum
        if (rowSum != sum)
            return false;
    }

    // For sums of Columns
    for (int i = 0; i < n; i++)
    {

        int colSum = 0;
        for (int j = 0; j < n; j++)
        {
            colSum += arr[j][i];
        }

        // check if every column sum is
        // equal to prime diagonal sum
        if (sum != colSum)
            return false;
    }
}

int main()
{
    MagicSquare ms;
    ms.read();
    ms.display();
    ms.check();
    return 0;
}