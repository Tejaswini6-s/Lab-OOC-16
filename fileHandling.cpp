#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("sample.txt");

    if (!fout)
    {
        cout << "File cannot be opened!";
        return 1;
    }

    cout << "Enter text (-1 to stop):" << endl;

    while (getline(cin, line))
    {
        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    if (!fin)
    {
        cout << "File cannot be read!";
        return 1;
    }

    cout << "\nContents of file:" << endl;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
