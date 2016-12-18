#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int Ancho,Largo,cont=0;
    char aux;
    bool flag=false;
    pair<int,int> x,y;
    cin >> Largo >> Ancho;
    for(int iA=0; iA<Largo;iA++){
        for(int iB=0; iB<Ancho;iB++){
            cin >> aux;
            if (aux == 'X'){
                    cont++;
                if(!flag){
                    flag = true;
                    x.first=iB;
                    x.second=iB;
                    y.first=iA;
                    y.first=iA;
                }
                x.first = min(iB,x.first);
                x.second = max(iB,x.second);
                y.first = min(iA,y.first);
                y.second = max (iA,y.second);
            }
        }
    }
    if((x.second-x.first+1)*(y.second-y.first+1) == cont){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
