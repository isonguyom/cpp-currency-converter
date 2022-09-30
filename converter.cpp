#include <iostream>
using namespace std;

int main() {
    double naira;
    double dollar = 0.00231289;
    double bp = 0.00207515;
    double euro = 0.00236255;
    double cedi = 0.0240039;
    double btc = 0.000000118278;
    double eth = 0.00000171707;

    cout << "Enter Naira to be converted: ";
    cin >> naira;

    cout << "=====================================================";
    cout << "CONVERSION SUMMARY" << endl;
    cout << "US Dollar: " << dollar * naira << endl;
    cout << "British Pound: " << bp * naira << endl;
    cout << "European Euro: " << euro * naira << endl;
    cout << "Ghana Cedi: " << cedi * naira << endl;
    cout << "Bitcoin: " << btc * naira << endl;
    cout << "Etherum: " << eth * naira << endl;
    cout << "=====================================================";

    return 0;

}