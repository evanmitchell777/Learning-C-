#include <iostream>
#include <cstdlib>
using namespace std;

void search() {
    cout << "Enter the file you would like to search for: ";
    string file;
    cin >> file;

    string command = "find / -name " + file + " 2>/dev/null";
    system(command.c_str());
}

int main() {
    search();
}
