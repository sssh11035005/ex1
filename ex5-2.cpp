#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            cout << i << "*" << j 
                 << "=" << setw(2) << i * j << " ";
        cout<<"\n";
        }
    }
}
