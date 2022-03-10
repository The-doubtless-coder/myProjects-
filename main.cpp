#include <iostream>

using namespace std;
class Biz
{
    private:
        double Buying_p, transport_p, selling_p, profit, loss;
    public:
        void input(), calculate (), output();
};

int main()
{
    Biz goods;
    cout<<"Enter Details about the Product: ";
    goods.input();
    cout << "Calculating the Profit and Loss... ";
    goods.calculate();
    goods.output();
    return 0;
}
void Biz::input()
{
    cout << "\nEnter Buying Price: ";
    cin >> Buying_p;
    cout << "Enter Transport Price: ";
    cin >> transport_p;
    cout << "Enter Selling Price: ";
    cin >> selling_p;
}
void Biz::calculate()
{
    if(Buying_p + transport_p > selling_p)
    {
        loss = (Buying_p + transport_p) - selling_p;
        profit = 0;
    }
    else
    {
        profit = selling_p - (Buying_p + transport_p);
        loss = 0;
    }
}
void Biz::output()
{
    cout <<"\nBuying Price = "<<Buying_p<<"\nTransport Price= "<<transport_p<<"\nSelling price = "<<selling_p<<"\nLoss = "
        <<loss<<"\nProfit = "<<profit;
}
