// test 4
#include <iostream>
#include <string>
using namespace std;

string encryptShiftCipher(const string& text, int shift) {
    string result = "";
    for (char ch : text) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base + shift) % 26 + base;
        }
        result += ch;
    }
    return result;
}

int main() {
    string text;
    int shift;
    cout << "Masukkan teks yang akan dienkripsi: ";
    getline(cin, text);
    cout << "Masukkan pergeseran: ";
    cin >> shift;

    string encryptedText = encryptShiftCipher(text, shift);
    cout << "Teks terenkripsi: " << encryptedText << endl;
    text.clear();
    shift = 0;
    
    return 0;
}

