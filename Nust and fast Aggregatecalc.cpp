#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
 float ssc,hssc,t1,t2,nu,nat,net;
 int choice,choice1;

 cout<<"WELCOME TO FAST AND NUST AGGREGATE CALCULATOR"<<endl;
    
cout<<"Enter 1 to calculate aggregate of Fast"<<endl;
cout<<"Enter 2 to calculate aggregate of Nust"<<endl;
cin>>choice;

    cout<<"Enter total marks of SSC=";
    cin>>t1;

    cout<<"Enter obtained marks of SSC=";
    cin>>ssc;

    float p1=(ssc/t1)*100;
    
    
    cout<<"Enter total marks of HSSC=";
    cin>>t2;

    cout<<"Enter obtained marks of HSSC=";
    cin>>hssc;

    float p2=(hssc/t2)*100;

    
    if(choice==1)
    {
        cout<<"On which basis are you applying? 1:Nu 2:NAT";
        cin>>choice1;
        if (choice1==1)
        {
            cout<<"Enter marks obatined in NU test=";
            cin>>nu;
            cout<<"Your Aggregate is"<<(float)(p1 * 0.1) + (p2 * 0.4) + (((nu / 100.0)*100) * 0.5);
        }
        else
        {
            cout<<"Enter marks obatined in NAT test=";
            cin>>nat;
            cout<<"Your Aggregate is="<<(float)(p1 * 0.1) + (p2 * 0.4) + (((nat / 100.0)*100) * 0.5);
        }
    }
    else
    {
        cout<<"Enter Obatined maarks in NET=";
        cin>>net;
        cout<<"Your Aggregate is="<<(float)(p1 * 0.1) + (p2 * 0.15) + (((net / 200.0)*100) * 0.75);
}
}