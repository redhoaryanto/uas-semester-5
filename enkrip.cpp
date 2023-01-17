#include <iostream> using namespace std;

int

main() {

string plaintext; 
string key;
cout << "Masukkan plaintext: ";
getline(cin, plaintext);
cout << "Masukkan kunci:";
getline(cin, key);

// proses enkripsi


string chipertext="";
 for (int i = 0; i < plaintext.length(); i++) { 
 chipertext +=plaintext[i] ^key[i % key.length()]; 
} 
cout << "Hasil enkripsi: " << chipertext << endl;
return 0;
}

