 #include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    a=10;
    b=20;
    t=a^b;
    b=b^t;
    a=t^b;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}
