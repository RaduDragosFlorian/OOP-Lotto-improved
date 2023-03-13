#include <iostream>
#include "functions.h"
#include "Ball.h"
using namespace std;
int main()
{
    srand(time(NULL));
    Ball *totalBalls=new Ball[50];

    cout << "Welcome to Lotto 6/49! Good luck!" << endl;
    lottoMenu(totalBalls);


    delete[] totalBalls;
    totalBalls = nullptr;
    return 0;
}