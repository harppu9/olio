#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum) {

    srand(time(NULL));
    int satluku = rand() % maxnum + 1;

    int arvaus = 0;
    int count = 0;

    while (true) {
        cout << "Arvauksesi? ";
        cin >> arvaus;
        count++;

        if (arvaus == satluku) {
            cout << "Arvasit oikein!" << endl;
            break;
        }
        else if (arvaus > satluku) {
            cout << "Lukusi on suurempi kuin salainen luku." << endl;
        }
        else {
            cout << "Lukusi on pienempi kuin salainen luku." << endl;
        }
    }

    return count;
}

int main() {

    int maxnum = 20;
    int arvaukset = game(maxnum);

    cout << "Arvauksia yhteensa: " << arvaukset << endl;

    return 0;
}
