#include <iostream>
using namespace std;
int main()
{
    int l, t, n, i, j;
    bool lg1=false,lg2= false;
    cin >> l >> t >> n;
    n-=t;
    t=t%(2*l);
    if(t>=l) { lg1 = true; t=l-(t-l); }
    i=t;
    j=l;
    while (n--)
    {
        if(!lg1)
        {
            if(i+1>l)
            {
                lg1= true;
                i--;
            }
            else i++;
        }
        else
        {
            if(i-1<0)
            {
                lg1= false;
                i++;
            }
            else i--;
        }
        if(!lg2)
        {
            if(j-1<0)
            {
                lg2= true;
                j++;
            }
            else j--;
        }
        else
        {
            if(j+1>l)
            {
                lg2= false;
                j--;
            }
            else j++;
        }
    }
    cout<<abs(j-i);
    system("pause");
    return 0;
}