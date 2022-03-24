#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isStrPalindrome(string Original){
	string reverseStr = Original;
	reverse(reverseStr.begin() , reverseStr.end()); 
	
	if(Original == reverseStr) return true;	
	return false;
}

bool isBilPalindrome(int Bilangan){
	int reverseInt = 0; int temp = Bilangan; int whileTemp;
	
	while(temp != 0){
		whileTemp = temp % 10;
		reverseInt = (reverseInt * 10) + whileTemp;
		temp = temp / 10;
	}
	
	if(Bilangan == reverseInt) return true;
	
	return false;
}

int main(){
	int Select;
	
	do{
		system("cls");
		cout << "Menu :" << endl; 
		cout << "1. Cek Palindrome Huruf / Kalimat" << endl;
		cout << "2. Cek Palindrome Bilangan" << endl;
		cout << "0. Exit " << endl;
		cout << "Masukkan Pilihan : >> "; cin >> Select;
		
		if(Select == 1){
			string tempStr; cin.ignore();
			cout << endl << "Mengecek Palindrome Kalimat" << endl;
			cout << "Masukkan Kalimat / Huruf : >> "; getline(cin , tempStr); cout << endl;
			
			isStrPalindrome(tempStr) ? cout << tempStr << " Adalah Palindrome \n\n" : cout << tempStr << " Tidak Palindrome \n\n";
		}
		
		else if(Select == 2){
			int tempInt; 
			cout << endl << "Mengecek Palindrome Bilangan" << endl;
			cout << "Masukkan Bilangan : >> "; cin >> tempInt; cout << endl;
			
			isBilPalindrome(tempInt) ? cout << tempInt << " Adalah Palindrome \n\n" : cout << tempInt << " Tidak Palindrome \n\n";
		}
		
		else if(Select == 0)
			cout << endl <<  "Silakan Keluar..... \n\n";
		
		else
			cout << endl << "Inputan tidak dikenali, input ulang... \n\n";
		
		system("pause");
		
	}while(Select != 0);
	
	return 0;
}
