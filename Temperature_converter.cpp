#include<iostream>
#include<iomanip>
using namespace std;

const float FREEZING_POINT_C = 0.0;
const float FREEZING_POINT_F = 32.0;
const float FREEZING_POINT_K = 0.0;
const double F_to_C = 5.0/9.0;
const double C_to_F = 9.0/5.0;
const double K_to_C = -273.15;
const double K_to_F = ((9.0/5.0) + 32);
const double C_to_K = 273.15;
const double F_to_K = 459.67;


double fahrenheitToCelsius(float fahrenheit){
    return (fahrenheit - 32) * F_to_C;
}
double celsiusToFahrenheit(float celsius){
    return (celsius * C_to_F) + 32 ;
}
double kelvinToCelsius(float kelvin){
    return kelvin + K_to_C;
}
double kelvinToFahrenheit(float kelvin){
    return (kelvin - 273.15) * C_to_F + 32;
}
double celsiusToKelvin(float celsius){
    return celsius + C_to_K;
}
double fahrenheitToKelvin(float fahrenheit){
    return (fahrenheit-32) * F_to_C + 273.15;
}
int main(){
    cout<<"===================================================\n";
    cout<<"--------------TEMPERATURE CONVERTER----------------\n";
    cout<<"===================================================\n"<<endl;

    cout<<"This program converts temperatures between Celsius, Fahrenheit, and Kelvin.\n"<<endl<<endl;


cout << "Temperature Conversion Options:\n" << endl<<endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. Kelvin to Celsius" << endl;
    cout << "4. Kelvin to Fahrenheit" << endl;
    cout << "5. Celsius to Kelvin" << endl;
    cout << "6. Fahrenheit to Kelvin" << endl;
    cout << "7. Exit Program" << endl<<endl;
    cout << "\nEnter your choice (1-7): ";

    int choice;
    cin>>choice;

    float ipTemp;

    switch(choice){
        case 1:
        cout<<"\nEnter the temperature in Fahrenheit:";
        cin>> ipTemp;
        if(ipTemp<-459.67) {cout<<"Enter valid Fahrenheit temperature.";}
        else {double conversion = fahrenheitToCelsius(ipTemp);
        cout << ipTemp << " °F = "<< conversion <<" °C"<<endl; }break;

        case 2:
        cout<<"\nEnter the temperature in Celsius:";
        cin>> ipTemp;
        if(ipTemp < -273.15) {cout<<"Enter valid Celsius temperature.";}
        else { double conversion = celsiusToFahrenheit(ipTemp);
        cout << ipTemp << " °C = "<< conversion <<" °F"<<endl; }break;

        case 3:
        cout<<"\nEnter the temperature in Kelvin:";
        cin>> ipTemp;
        if(ipTemp < 0) {cout<<"Enter valid Kelvin temperature.";}
        else {double conversion = kelvinToCelsius(ipTemp);
        cout << ipTemp << " °K = "<< conversion <<" °C"<<endl;} break;

        case 4:
        cout<<"\nEnter the temperature in Kelvin:";
        cin>> ipTemp;
        if(ipTemp < 0) {cout<<"Enter valid Kelvin temperature.";}
        else {double conversion = kelvinToFahrenheit(ipTemp);
        cout << ipTemp << " °K = "<< conversion <<" °F"<<endl;} break;

        case 5:
        cout<<"\nEnter the temperature in Celsius:";
        cin>> ipTemp;
        if(ipTemp < -273.15) {cout<<"Enter valid Celsius temperature.";}
        else{double conversion = celsiusToKelvin(ipTemp);
        cout << ipTemp << " °C = "<< conversion <<" °K"<<endl;} break;

        case 6:
        cout<<"\nEnter the temperature in Fahrenheit:";
        cin>> ipTemp;
        if(ipTemp<-459.67) {cout<<"Enter valid Fahrenheit temperature.";}
        else{double conversion = fahrenheitToKelvin(ipTemp);
        cout << ipTemp << " °F = "<< conversion <<" °K"<<endl;} break;

        case 7:
        cout << "Thank you for using the Temperature Converter!" << endl;break;

        default:
        cout << "Invalid choice! Please select a number between 1 and 7." << endl;break;
    }
return 0;}
    