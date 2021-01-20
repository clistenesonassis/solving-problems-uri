#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

string firstStep(string input, int encrypt)
{
    string encrypted;

    for (int i = 0; i < input.size(); i++)
    {
        if (isalpha(input[i]))
        {
            char charCode = int(input[i]) + encrypt;
            encrypted += char(charCode);
        }
        else
        {
            encrypted += input[i];
        }
    }

    return encrypted;
}

string secondStep(string input)
{
    string encrypted;
    for (int i = input.size() - 1; i >= 0; i--)
    {
        encrypted += input[i];
    }

    return encrypted;
}

string thirdStep(string input, int encrypt)
{
    string encrypted;

    int center = round(input.size() / 2);

    for (int i = 0; i < input.size(); i++)
    {
        if (i < center)
        {
            encrypted += input[i];
        }
        else
        {
            char charCode = int(input[i]) + encrypt;
            encrypted += char(charCode);
        }
    }

    return encrypted;
}

int main()
{
    int repeat;
    cin >> repeat;

    for (int i = 0; i <= repeat; i++)
    {
        string input;
        getline(cin, input); // Get user input from the keyboard

        string step1 = firstStep(input, 3);
        string step2 = secondStep(step1);
        string encrypted = thirdStep(step2, -1);

        cout << encrypted << endl;
    }

    return 0;
}
