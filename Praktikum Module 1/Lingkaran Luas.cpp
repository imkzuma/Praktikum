#include <iostream>
#include <math.h>

#define Phi 3.14

using namespace std;

float Luas(float r){
    return Phi * pow(r , 2);
}

float Keliling(float r){
    return 2 * Phi * r;
}

int main(){
    int select; float r;
    
    Menu:
    cout << "Menu: " << endl;
    cout << "1. Hitung Keliling Lingkaran" << endl;
    cout << "2. Hitung Luas Lingkaran" << endl;
    cout << "3. Exit" << endl;
    cout << "Masukkan Pilihan : >> "; cin >> select;
    
    if(select == 1){
        cout << endl << "Menghitung Keliling Lingkaran " << endl;
        cout << "Masukkan jari-jari = "; cin >> r; 
        cout << "Keliling Lingkaran = " << Keliling(r) << " cm \n\n";
        goto Menu;
    }
    else if(select == 2){
        cout << endl << "Menghitung Luas Lingkaran" << endl;
        cout << "Masukkan jari - jari = "; cin >> r;
        cout << "Luas Lingkaran = " << Luas(r) << " cm2"<< endl << endl; 
        goto Menu;
    }
    else if(select == 3){
        cout << "Exit sukses"; return 0;
    }
    else{
        cout << "Inputan tidak dikenali, input ulang !" << endl << endl; 
        goto Menu;  
    }
    return 0;
}

