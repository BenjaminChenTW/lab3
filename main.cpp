#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	int total = 0, size;
	vector<int> data;
	ifstream inFile("file.in", ios::in);
	if (!inFile){
		cerr << "Failed opening!" << endl;
		exit(1);
	}
	inFile >> size;
	//cout << size << endl;
	if (size < 10000 && size > 5){
		data.resize(size);
		//cout << 1 << endl;
	}
	else {
		cerr << "Size error!";
		exit(2);
	}
	//cout << 2 << endl;
	for (int i=0; i < size; i++){
		inFile >> data.at(i);
		//cout << data.at(i) << endl;
	}
	sort(data.begin(),data.end());
	for (int i = size - 1; i >= size - 5; i--){
		total += data.at(i);
		//cout << data.at(i);
	}
	cout << "Total weight of top five cows: " << total << endl;
	return 0;
}
