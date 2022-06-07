#include<iostream>
using namespace std;
int main()
{
    int order1,order2,order3,drink1,drink2,drink3,sum1,sum2,total;
    cout<<"******WELCOME TO ZETECH RESTURANT******"<<endl;
    cout<< "********TODAYS SPECIAL**********"<<endl;
    cout<<"1.Fish served with rice          500"<<endl;
    cout<<"2.Beef served with Ugali         150"<<endl;
    cout<<"3.Chicken served with chapati    300"<<endl;
    cout<<"PRICE FOR TODAY'S SPECIAL:"<<endl;
    cin>>order1;
    cout<<"PRICE FOR TODAY'S SPECIAL:"<<endl;
    cin>>order2;
    cout<<"PRICE FOR TODAY'S SPECIAL:"<<endl;
    cin>>order3;
    sum1=order1+order2+order3;
    cout<<"THE TOTAL PRICE FOR FOOD:"<<sum1<<endl;
    cout<<"****DRINKS****"<<endl;
    cout<<"1.Fruit Juice      100"<<endl;
    cout<<"2.Soda              50"<<endl;
    cout<<"3.Lemon water       40"<<endl;
    cout<<"4.Tea               30"<<endl;
    cout<<"PRICE FOR DRINKS:"<<endl;
    cin>>drink1;
    cout<<"PRICE FOR DRINKS:"<<endl;
    cin>>drink2;
    cout<<"PRICE FOR DRINKS:"<<endl;
    cin>>drink3;
    sum2=drink1+drink2+drink3;
    cout<<"THE TOTAL PRICE FOR DRINKS:"<<sum2<<endl;
    total=sum1+sum2;
    cout<<"THE OVERALL PRICE IS:"<<total<<endl;
    cout<<"*******THANK YOU*********"<<endl;
    return 0;

}
