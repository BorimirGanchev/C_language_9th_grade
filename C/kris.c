#include <iostream>
using namespace std;

void fun (int a, int b)
{
    bool con=false;
    int br=0;
    int sum=0;
    int lent=0;
    int ost=0;
    int sbor=0;
    int mas[100];
    int den[100];

    for(int i=0; a<=b; i++)
    {
        while (a!=0)
        {
            ost=a%10;
            a=a/10;
            sum=sum+ost;
        }

        if(sum/3==0)
        {
            mass[i]=a;
        }
        a++;
    }
    lent=len(mass);
    for(int i=0;i<lent;i++)
    {
        cout<<mass[i]<<endl;
    }
}


int main()
{

    int a,b;
    int qr=0;
    cin>>a>>b;
        while (a!=0 || b!=0)
        {
        for (int i=a;i<=b;i++)
        {
            if(fun(i))
            {
                cout<<i<<" ";
                qr++;
            }

        }
        

        if (qr==0)
        {
            cout<<"NO"<<endl;
        }
        qr=0;
        cin>>a>>b;
        }




    return 0;
}