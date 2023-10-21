#include <iostream>
#include <iomanip>
using namespace std;
main (){
    int cargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargo;
    float tonnage;
    float minibus = 0;
    float truck = 0;
    float train = 0;
    for (int x = 1 ; x <= cargo ; x++)
    {
        cout << "Enter the tonnage of cargo " << x << ": ";
        cin >> tonnage;
        if (tonnage <= 3)
        {
            minibus = minibus + tonnage;
        }
        if (tonnage > 3 && tonnage <= 11)
        {
            truck = truck + tonnage;
        } 
        if (tonnage > 11)
        {
            train = train + tonnage;
        }
    }
        float finalprice = 0;
        finalprice = minibus + truck + train;
        float miniBusPerc = 0;
        miniBusPerc = (minibus / finalprice) * 100;
        float truckPerc = 0;
        truckPerc = (truck / finalprice) * 100;
        float trainPerc = 0;
        trainPerc = (train / finalprice) * 100;
        float average = 0;
        average = (minibus * 200 + truck * 175 + train * 120) / finalprice;
        cout << fixed << setprecision(2) << average << endl;
        cout << fixed << setprecision(2) << miniBusPerc << "%" << endl;
        cout << fixed << setprecision(2) << truckPerc << "%" << endl;
        cout << fixed << setprecision(2) << trainPerc << "%" ;
}