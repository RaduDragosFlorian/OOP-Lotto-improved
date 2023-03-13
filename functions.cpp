#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Ball.h"
using namespace std;

void populateArr( Ball totalBalls[]) {
	for (int i = 1; i <=49; i++) {
		totalBalls[i].setBallNo(i);
		totalBalls[i].setExtractedParam(0);
	}
}
void randomize(int &randIndex) {
	randIndex = 1 + (rand() % 49);
}

int ballPicker(Ball totalBalls[]) {
	int randIndex;
	randomize(randIndex);
	if (totalBalls[randIndex].getExtracted() == 1) {
		randomize(randIndex);
		ballPicker(totalBalls);
	}
	else 
		totalBalls[randIndex].setExtractedParam(1);
	return totalBalls[randIndex].getBallNo();
}

void displayBalls(Ball totalBalls[]) {
	cout << endl << "The extracted balls are: "; 
	for (int i = 0; i < 6; i++)
		cout << ballPicker(totalBalls) << " ";
	cout << endl;

}

void lottoMenu(Ball totalBalls[]) {
	int OK = 1;
	int option = 0;
	while (OK) {
		populateArr(totalBalls);
		cout << "Press 1 to extract Lotto balls" << endl << "Press 0 to exit" << endl;
		cin >> option;
		switch (option)
		{
		case 1: {
			displayBalls(totalBalls);
			break;
		}
		case 0: {
			OK = 0;
			break;
		}
		default:
			cout << "Invalid key, try again!" << endl;
			cout << endl;
			break;
		}
	}
}