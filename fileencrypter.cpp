#include <fstream>
#include <iostream>
using namespace std;

int encrypt(string file, int k)
{
    char c;
    ifstream fin;
    ofstream fout;
    fin.open(file, ios::binary);
    fout.open("encrypted.txt", ios::binary);
    while (fin >> noskipws >> c)
    {

        fout << char((int)c + k);
    }
    fin.close();
    fout.close();
    return 0;
}

int decrypt(string file, int k)
{
    char c;
    ifstream fin;
    ofstream fout;
    fin.open(file, ios::binary);2
    fout.open("decrypted.txt", ios::binary);
    while (fin >> noskipws >> c)
    {

        fout << char((c - k));
    }
    fin.close();
    fout.close();
    return 0;
}

int main()
{
    int choice, key;
    string filename;
    cout << "ENTER YOUR CHOICE \n 1.Encrypt Your File\n2.Decrypt a File\n ";
    cin >> choice;
    cout << "Enter the Key\n";
    cin >> key;
    cout << "Enter Filename(With its Extension)\n";
    cin >> filename;
    if (choice == 1)
        encrypt(filename, key);
    else if (choice == 2)
        decrypt(filename, key);
    else
        cout << "You did not enter a valid choice.\nTerminating...";
    return 0;
}
