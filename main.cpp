#include <iostream>

using namespace std;
void Showmessage(string, string);

int main()

{
    string name, address;


    cout << "Please enter your name" << endl;
    getline(cin, name);

    cout << endl;
    cout << "please enter your address" << endl;
    getline(cin, address);

    Showmessage(name,address);

    return 0;
}

void Showmessage(string name, string address)
    {
      cout << "Welcome "  << name << endl;
      cout << "We will visit " << address << " very soon!" << endl;
    }
