// Author : Junth Basnet

/*
Question 3:
Write a Program to test whether a given identifier is valid or not.
*/

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{

    char identifier[50];
    int valid;

    cout << "Enter identifier:" << endl;
    cin >> identifier;

    if (isalpha(identifier[0]) || identifier[0] == '_')
    {
        valid = 1;
    }
    else
    {
        valid = 0;
    }
    if (valid == 1)
    {
        for (int i = 1; i < strlen(identifier); i++)
        {
            if (!(isalpha(identifier[i]) || identifier[i] == '_' || isdigit(identifier[i])))
            {
                valid = 0;
                break;
            }
        }
    }
    if (valid == 0)
    {
        cout << "Given identifier is invalid!";
    }
    else
    {
        cout << "Given identifier is valid.";
    }

    return 0;
}