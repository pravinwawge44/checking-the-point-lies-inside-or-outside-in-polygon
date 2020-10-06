 #include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a1,b1,x1,y1,a2,b2,x2,y2,len=0,s1,s2;
    cout<<"enter the points for 1st building:"<<endl;
    cin>>x1>>y1>>a1>>b1;

    cout<<"enter the points for 2st building:"<<endl;
    cin>>x2>>y2>>a2>>a2;
    cout<<"enter the cordinate for sun points:";
    cin>>s1>>s2;
    len = sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));
    if(s1<a1)
    {
        len=len+2.20;
    }
    else if(s1>a1)
    {
        len=len-2.20;
    }
    else{
        cout<<"to be continued:";
    }
    cout<<"surface of building exposed sunlight :  "<<len<<endl;
    return 0;
}