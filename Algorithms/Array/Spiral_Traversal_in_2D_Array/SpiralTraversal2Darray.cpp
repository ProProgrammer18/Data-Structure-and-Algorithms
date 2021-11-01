#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int r,c;
    cin>>r>>c;
    int ar[r][c];
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       {
           cin>>ar[i][j];
       }

    }
    int rs=0,re=r-1,cls=0,cle=c-1;
    while(rs<=cls && cle>=rs)
    {
        //row start
        for (int col = cls; col <=cle; col++)
        {
            cout<<ar[rs][col]<<" ";
        }
        rs++;

        //col end
        for (int i = rs; i <=re ; i++)
        {
            cout<<ar[i][cle]<<" ";
        }
        cle--;

        //last row
        for (int i = cle; i >=cls; i--)
        {
            cout<<ar[re][i]<<" ";
        }
        re--;

        //first col
        for (int i = re; i >=rs; i--)
        {
            cout<<ar[i][cls]<<" ";
        }
        cls++;
        
        
        
    }
return 0;
}