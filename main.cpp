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
    cout<<"amount of tax is "<<tax<<endl;
}
int main()
{
    // First object of House class
    House ob1;
    int NumberOfHouse , Price ; string StreetOfHouse , City ; double Rate;
    cout<<"enter number of house "<<endl;
    cin >> NumberOfHouse;
    ob1.SetNumberOfHouse(NumberOfHouse);
    cout<<"enter city of house "<<Endl;
    cin >> City;
    ob1.SetNameOfCity(City);
    cout<<"enter street of house "<<Endl;
    cin >>StreetOfHouse;
    ob1.SetNameOfStreet(StreetOfHouse);
    cout<<"enter price of house "<<endl;
    cin>>Price;
    ob1.SetPriceOfHouse(Price);
    cout<<"enter rate of tax "<<endl;
    cin >>Rate;
    ob1.GetPropertyTax(Rate);
    // print method
    ob1.print();
}
