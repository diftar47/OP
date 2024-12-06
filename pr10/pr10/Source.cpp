#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void startProgram(); //displays information about the program and starts a function when the program is selected
void deleteSpaces(string&); //deletes spaces in string
bool isPalindrome(string); //checks if the string is a palindrome
string uniqueChars(string); //returns unique characters from string

int main() 
{
    startProgram();

    return 0;
}

void startProgram()
{
    int choose;
    string str;
    cout << "Select the program:" << endl
        << "1. Delete Spaces" << endl
        << "2. Palindrome check" << endl
        << "3. Get unique chars" << endl;
    cin >> choose;

    if (choose == 1)
    {
        cout << "Enter your string:" << endl;
        cin.ignore();
        getline(cin, str);
        deleteSpaces(str);
        cout << str;
    }
    else if(choose == 2)
    {
        cout << "Enter your string:" << endl;
        cin.ignore();
        getline(cin, str);
        if (isPalindrome(str))
        {
            cout << "String is a polindrome";
        }
        else
        {
            cout << "String is not a polindrome";
        }
    }
    else if (choose == 3)
    {
        cout << "Enter your string:" << endl;
        cin.ignore();
        getline(cin, str);
        cout << "Unique chars: " << uniqueChars(str);
    }
    else
    {
        cout << "Program not found";
    }
}
void deleteSpaces(string& str) 
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
}
bool isPalindrome(string str)
{
    int length = str.length();
    if (length % 2 == 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (str[i] != str[length - i - 1])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}
string uniqueChars(string str)
{
    string result;
    int length = str.length();
    
    if (length == 1)
    {
        return str;
    }

    for (int i = 0; i < length; i++)
    {
        bool isUnique = true;
        for (int j = 1; j < length; j++)
        {
            if (i != j && str[i] == str[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique && str[i] != ' ')
        {
            result.push_back(str[i]);
            result.push_back(' ');
        }
    }
    return result;
}