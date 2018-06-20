#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
#define N 11

int max, min, mossz = min + max;
int elso, o;
void main(){
	int tomb[4];
	int i, osszeg = 0;
	cout << "4 elemu tomb beolvasasa novekvo sorrendben.\n" << "A keretertek: " << N << "\n";
	for (i = 0; i < 4; i++){
		cout << i + 1 << ": ";
		cin >> tomb[i];
		osszeg = osszeg + tomb[i];
	}
	/*for (int i = 0; i< 4; i++) {
		for (int j = i + 1; j<4; j++) {
		if (tomb[i] > tomb[j]) {
		elso = tomb[i];
		tomb[i] = tomb[j];
		tomb[j] = elso;
		}
		}
		}
		min = elso;
		max = tomb[3];*/
	if (osszeg == N){
		cout << "Egyetlen halmaz keszitheto, amely megfelel a kovetelmenynek(>=11).\n";
		cout << tomb[0] << " ";
		cout << tomb[1] << " ";
		cout << tomb[2] << " ";
		cout << tomb[3] << " ";
	}
	else if (osszeg < N){
		cout << "Az elemekbol nem lehet kivant halmazokat csinalni.\n";
	}
	else {/*
			for (int i = 3; i >= 0; i--){
			if (tomb[i] >= N){
			cout << tomb[i] << endl;
			}
			else
			}
			}
			else {*/
		int faszanyos=3;
		int osszeg = 0;
		for (int i = 3; i >= 0; i--){
			osszeg = osszeg + tomb[i];
			if (osszeg >= N){
				for (int j=i; faszanyos >= j;j++){
					cout << tomb[j] << "  ";
				}
				osszeg = 0;
				faszanyos = i - 1;
				cout << endl;
			}
		}
	}
}