#include<iostream>
using namespace std;

int main(){
    int score = 0;
    cout <<"Plase type your score: "<<endl;
    cin >> score;

    if(score>90)
    {
        cout<<"extraordinary"<<endl;
    }
    else if (score>80)
    {
        cout<<"excellent"<<endl;
    }
    else if(score>70)
    {
        cout<<"good"<<endl;
    }
    else if(score>60)
    {
        cout <<"passes"<<endl;    
    }
    else
    {
        cout<<"Failed"<<endl; 
    }
    return 0;
}