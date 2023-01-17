#include <iostream> using namespace std;

int

main() {

string ciphertext; 
string key;
cout << "Masukkan ciphertext: ";
getline(cin, ciphertext);
cout << "Masukkan kunci:";
getline(cin, key);

// proses dekripsi


string plaintext="";
 for (int i = 0; i < ciphertext.length(); i++) { 
 plaintext +=ciphertext[i] ^key[i % key.length()]; 
} 
cout << "Hasil dekripsi: " << plaintext << endl;
return 0;
}
