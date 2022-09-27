#include<iostream>
using namespace std;

int main(){

    int Start,End,Step;
    cin>>Start>>End>>Step;
    
    int FahrenheitVal=Start;
    while(FahrenheitVal<=End){
        int celsiusVal= int((5.0/9)*(FahrenheitVal-32));
        cout<< FahrenheitVal<<" "<< celsiusVal <<endl;
        FahrenheitVal+=Step;
    }
    
}

