#include <iostream>
using namespace std;
int n;
int dim()
{
    cin>>n;
    return n;  
}
int main(void)
{
 
cout<<" ins n ";
n = dim();
cout<<" ins m ";
m = dim();
int mat[n][m],max[n];
   
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {                                                    
            cin >>mat[ i ][j];
        }
    }
    for(i=0;i<n;i++)
    {
        max[ i ]=mat[ i ][0];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {                                                    
            if(mat[ i ][j]>max[ i ])
            {                                  
                max[ i ]=mat[ i ][j];
            }
        }
    }
    cout<<endl;  
    for(i=0; i<n; i++)
    {
        cout<<endl;
        for(j=0; j<m; j++)
        {                                                    
            cout<<mat[ i ][j];
        }
    }
    cout<<endl;                                                        
    for(i=0;i<n;i++)
    {
        cout<<max[ i ]<<" ";
    }
