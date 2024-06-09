#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    int num = 0;
    int guess = rand() % 100 + 1;
    cout << "Enter a number between 1 and 100" << endl;
    do {
        cin >> num;

        if (num == guess) {
            cout << "You are right!!!!" << endl;

        }
        else if (num < guess) {
            cout << "Try a bigger number" << endl;
        }
        else if (num > guess)
        {
            cout << "Try a smaller number " << endl;
        }
    } while (num!=0);
    return 0;
}