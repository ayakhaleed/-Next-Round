#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int counter=0;
    int min_;
    cin>>n>>k;
    int scores[n];
    for(int i=0;i<n;i++)
    {
        cin>>scores[i];
    }
    min_=scores[k-1];
    for(int i=0;i<n;i++)
    {
        if(scores[i]>=min_&&scores[i]>0)
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
