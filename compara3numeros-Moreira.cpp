#include<iostream>
using namespace std;
int main()
{
        int a,b,c,r;
        cout<<"ingrese los tres numeros"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;

        if(a<b){
        r=a;
        }
        else
                r=b;
                        if(r<c){
                                cout<<"el menor es"<<r<<endl;
                        }
                        else
                                cout<<"el menor es"<<c<<endl;

                                                                                                                                            
                        if(a>b){
                                r=a;
                        }
                        else
                                r=b;
                        if(r>c){
                                cout<<"el mayor es"<<r<<endl;
                        }
                        else
                                cout<<"el mayor es"<<c<<endl;


        return 0;
}
