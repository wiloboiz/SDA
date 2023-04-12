#include <iostream>
#include <fstream>
using namespace std;

int main(){
//   fstream inFile ("example.txt");
//   
//   inFile << "saya fakhri";
//   
//   inFile.close();
//
//	string teks;
//	ifstream outFile("example.txt");
//	
//	while (getline (outFile, teks)){
//		cout << teks;
//	}
	
	string barang[4];
	
	for (int i = 0 ; i < 4 ; i++){
		cin >> barang[i];
	}
	
	ofstream readFile("barang.txt");
	
	for (int i = 0 ; i < 4 ; i++){
		readFile << barang[i] << endl;
	}
}
