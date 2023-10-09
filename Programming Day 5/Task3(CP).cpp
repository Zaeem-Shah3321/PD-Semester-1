#include <iostream>
using namespace std;
float tax (char v_type , float price);
main (){
    char type;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    float price_1;
    cout << "Ente the price of the vehicle: $";
    cin >> price_1;
    float ans ;
    ans = tax(type,price_1);
    cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << ans; 
}
float tax (char v_type , float price)
{
    if (v_type == 'M')
    {
        float tax_m = 0;
        tax_m = price + (price * 0.06);
        return tax_m;
    }
    if (v_type == 'E')
    {
        float tax_e = 0;
        tax_e = price + (price * 0.08);
        return tax_e;
    }
    if (v_type == 'S')
    {
        float tax_s;
        tax_s = price + (price * 0.1);
        return tax_s;
    }
    if (v_type == 'V')
    {
        float tax_v;
        tax_v = price + (price * 0.12);
        return tax_v;
    }
    if (v_type == 'T')
    {
        float tax_t;
        tax_t = price + (price * 0.15);
        return tax_t;
    }
    return 0;
}