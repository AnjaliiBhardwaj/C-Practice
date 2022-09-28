/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
 you need to convert all Fahrenheit values from Start to End at the gap of W,
 into their corresponding Celsius values and print the table.*/
 
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

