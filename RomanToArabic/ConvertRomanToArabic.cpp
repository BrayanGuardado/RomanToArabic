#include "ConvertRomanToArabic.h"
#include<iostream>
using namespace std;

int romToDec(char inputRom[]) {

	int value = 0, obtainArabic = 0;

	for (int i = 0; i < strlen(inputRom); i++) {

		switch(inputRom[i]) {
		case 'I': value = 1;break;
		case 'V': value = 5; break;
		case 'X': value = 10; break;
		case 'L': value = 50; break;
		case 'C': value = 100; break;
		case 'D': value = 500; break;
		case 'M': value = 1000; break;
		}

		obtainArabic += value;

	}

	return obtainArabic;
}

void ConvertRomanToArabic::romanToArabicCpp() {

	while (exit != 2) {

		system("cls");
		cout << "Convertion of Roman to Arabic" << endl << endl;
		cout << "Type the Roman number: ";
		cin >> inputRom;
		valueObtained = romToDec(inputRom);
		cout << "\nThe Arabic number is: " << valueObtained;

		cout << "\n\nYou want to do another conversion? " << endl;
		cout << "1) Yes" << endl;
		cout << "2) No" << endl;
		cout << "Option: ";
		cin >> exit;

	}

}