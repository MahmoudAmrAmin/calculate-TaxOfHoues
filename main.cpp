#include<bits/stdc++.h>
using namespace std;
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
int main()
{

}
