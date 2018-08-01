
#include <iostream>
using namespace std;

int main()
{

      cout<<"give me your number"<<endl;
     int objective;
    int shot;


    cin>>objective;

        int counter= 0;
    while( counter>=counter)  {

    cout<<"guess the number"<<endl;

    cin>>shot;

    if(objective<shot){
            cout<<"too high, try lower"<<endl;}
    else if( objective>shot){
        cout<<"too low, try higher numbers"<<endl;

    }else{cout<<"you guest, bravo"<<endl;}


    if (objective==shot)break;

        counter++;

    }

cout<<"number of your attempts: "<< counter<<endl;

    return 0;
}
