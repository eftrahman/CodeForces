#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
    string model_name;
    float price;
    void takedata(){
        cin>>model_name>>price;
    }
    void viewdata(){
        cout<<"Model : "<<model_name<<endl<<"Price : "<<price<<endl;
    }
};
class Sales{
public :
    float sale_of_month[4];
    void takedataSales(){
        cin>>sale_of_month[0]>>sale_of_month[1]>>sale_of_month[2]>>sale_of_month[3];
    }
    void viewdataSales(){
        cout<<"1st Month :"<<sale_of_month[0]<<endl<<"2nd Month :"<<sale_of_month[1]<<endl<<"3rd Month "<<sale_of_month[2]<<endl<<"4rth Month :"<<sale_of_month[3]<<endl<<endl;
    }
};
class Truck: public Vehicle,public Sales{
public:
    double weight;
    void takedata1(){
        cin>>model_name>>price>>weight;
        cin>>sale_of_month[0]>>sale_of_month[1]>>sale_of_month[2]>>sale_of_month[3];
    }
    void viewdata1(){
        cout<<endl<<"Model : "<<model_name<<endl<<"Price : "<<price<<endl<<"Weight : "<<endl<<endl;
        cout<<"1st Month :"<<sale_of_month[0]<<endl<<"2nd Month :"<<sale_of_month[1]<<endl<<"3rd Month "<<sale_of_month[2]<<endl<<"4rth Month :"<<sale_of_month[3]<<endl<<endl;

    }
};
class Bus: public Vehicle, public Sales{
public:
    int sit;
    void takedata2(){
        cin>>model_name>>price>>sit;
        cin>>sale_of_month[0]>>sale_of_month[1]>>sale_of_month[2]>>sale_of_month[3];
    }
    void viewdata2(){
        cout<<endl<<"Model : "<<model_name<<endl<<"Price : "<<price<<endl<<"Sit : "<<sit<<endl<<endl;
        cout<<"1st Month :"<<sale_of_month[0]<<endl<<"2nd Month :"<<sale_of_month[1]<<endl<<"3rd Month "<<sale_of_month[2]<<endl<<"4rth Month :"<<sale_of_month[3]<<endl<<endl;

    }
};

int main()
{
    Bus abus;
    Truck atruck;
    abus.takedata2();
    abus.viewdata2();
    abus.takedata2();
    abus.viewdata2();
    atruck.takedata1();
    atruck.viewdata1();
}
