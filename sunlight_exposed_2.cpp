#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a1[10],b1[10],x1[10],y1[10],len=0,p1[10],p2[10],q1[10],q2[10],pt_X[10],b_len=0;
    for(int i=0;i<2;i++)
    {  
    cout<<"enter the point for"<<i<<"building:";
    cin>>x1[i]>>y1[i]>>a1[i]>>b1[i]>>p1[i]>>q1[i]>>p2[i]>>q2[i];
    }

    len = sqrt((y1[1] - x1[1])*(y1[1] - x1[1])+(q1[1] - p1[1])*(p1[1] - q1[1]));
    cout<<"len:"<<len<<endl;
    cout<<"enter the sun point:";
    cin>>pt_X[0]>>pt_X[1];
    if(pt_X[0]&&pt_X[1]>x1[0]&&y1[1])
    {
        b_len=len/1.5;
        cout<<"lenght of building exposed sun light "<<b_len;
    }
    else if(pt_X[0]&&pt_X[1]==x1[0]&&y1[1])
    {
      b_len=len/2;
     cout<<"lenght of building exposed sun light "<<b_len;
    }
    else
    {
        cout<<"to be continued:";
    }
    return 0;
}