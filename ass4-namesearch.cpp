#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void) {

	string input, ask;
	string all, getcontent, arr[200];
	int i=0, n=0, keyF=0;
	bool key=true;

	//File Copying into String Array Process
	ifstream infile;
	infile.open("words.txt");

	if(infile.is_open()) {

		while(getline(infile,getcontent)) {

			arr[i]=getcontent;
			i++;
		}
	}

	//Text Name Search Engine Menu
	cout << "		NationalCyberCity&winhtut SEARCH ENGINE" << endl << endl;

	while(key) {
		keyF=1;
		cout << "Enter you are looking for NationalCyberCity or winhtut: " << endl;

		cin >> input;
		cout << endl;

		//N counter
		for(i=0;i<200;i++) {
			if(arr[i].find(input) != std::string::npos) {
				n++;
			}
		}

		for(i=0;i<200;i++) {

			if(keyF==1)
			cout << "There are :" << n << " results for " << input << ":" << endl;

			if(arr[i].find(input) != std::string::npos && n>0) {
				cout << "	" << arr[i] << endl;
			}
			keyF=0;
		}
		n=0;

		while(key) {

		cout << endl;
		cout << "Would you like to run again (yes/no)?: ";
		cin >> ask;

		if(ask == "yes")
			break;

		else if(ask == "no") {
			key=false;
			cout << "Bye.....";
		}

		else
			cout << "Invalid input." << endl;
		}
	}

	return 0;
}
