#include <iostream>


using namespace std;

enum GameMode{
    easy = 10,
    mediume = 25,
    hard = 30,

};

int main (void){
    GameMode Diff = mediume;

    switch(Diff){
        case easy:
        cout << "Man, you must suck, enimies will have an HP level of " << easy << endl;
        break;
        case mediume:
        cout << "have fun, enimies will have an HP level of " << mediume << endl;
        break;
        case hard:
        cout << "see you in the after life, enimies will have an HP level of " << mediume << endl;
        break;
    }


    return 0;
}
