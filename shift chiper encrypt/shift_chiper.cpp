// test 4
#include <iostream>
#include <string>
using namespace std;
string lanjutkan = "";

string encryptShiftCipher(const string& text, string shiftValue) { // enkripsi shift cipher
    string result = "";
    int shift = stoi(shiftValue);
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
    while (true) {
        cout << "Program Enkripsi Shift Cipher" << endl;
        cout << "1. Enkripsi Teks" << endl;
        cout << "2. Keluar" << endl;
        cout << "Pilih opsi: ";
        int choice;
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        if (choice == 2) {
            break; // Exit the loop
        } else if (choice != 1) {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            continue; // Prompt again
        }
        string text;
        string shift;
        cout << "Masukkan teks yang akan dienkripsi: ";
        getline(cin, text);
        cout << "Masukkan pergeseran: ";
        cin >> shift;

        string encryptedText = encryptShiftCipher(text, shift);
        cout << "Teks terenkripsi: " << encryptedText << endl;
        text.clear();
        shift = "0";
        cout << "apakah anda ingin melanjutkan? (y/n): " << lanjutkan << endl;
        if (lanjutkan == "y" || lanjutkan == "Y") {
            continue;
        } else if (lanjutkan == "n" || lanjutkan == "N") {
            break;
        }
    }

    return 0;
}

