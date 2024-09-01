#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << " Usage: cat [FILE]...\n";
        cout << " Concatenate FILE(s) to standard output.\n";
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        string filename = argv[i];
        ifstream inf{filename};
        if (!inf) {
            cerr << "[ERROR] Unable to open file \"" << filename << "\"." << endl;
            return 1;
        }
        cout << inf.rdbuf();
    }

    // string strInput{};

    // // inf >> strInput reads word by word which is not the desired output
    // while(getline(inf, strInput)) {
    //     cout << strInput << endl;g
    // }

    return 0;
}