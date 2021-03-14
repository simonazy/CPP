#include<iostream>
using namespace std;

int main() {
    int score = 0;

    cout << "Your score is: " << endl;
    cin >> score;

    if (score > 600)
    {
        cout << "Class A: " << endl;

        if (score > 700)
        {
            cout << "Class A_1" << endl;
        }
        else if (score > 650)
        {
            cout << "Class A_2" << endl;
        }
        else
        {
            cout << "Class A_3" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "Class B" << endl;
    }
    else if (score > 400)
    {
        cout << "Class C" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }

    system("Pause");
    
    return 0;
}