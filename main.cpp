#include<bits/stdc++.h>
using namespace std;
#define Endl endl
class House
{
private:
    int number ; string city ,street; double price ,tax;
public:
    House();
    void SetNumberOfHouse(int number);
    void SetNameOfCity(string city);
    void SetNameOfStreet(string street);
    void SetPriceOfHouse(double price);
    double GetPropertyTax(double rate);
    void print ();
};
House ::House():number(0),city("no city"),street("no street"),price(0.0),tax(0.0){};
void House::SetNumberOfHouse(int number) {
    this-> number = number;
}
void House ::SetNameOfCity(string city) {
    this -> city = city;
}
void House ::SetNameOfStreet(std::string street) {this -> street =street ;}
void House ::SetPriceOfHouse(double price) {this -> price =price;}
double House ::GetPropertyTax(double rate) {
    tax = (rate /100 )*price;
    return tax;
}
void House::print() {
    cout<<"House of number : "<<number<<endl;
    cout<<"in th city : "<<city<<endl;
    cout<<"at the street : "<<street<<Endl;
    cout<<"amount of tax is "<<tax;
}
int main()
{
    // First object of House class
    House ob1;
}
