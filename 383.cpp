#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    int T,M,N,P,size,start,end;
    int mist[30][30];
    map<string, int> index;
    string lk,lk2;

    cin>>T;

    cout<<"SHIPPING ROUTES OUTPUT"<<endl;

    for(int leaf=1;leaf<=T;leaf++){
        cout<<endl<<"DATA SET  "<<leaf<<endl<<endl;

        cin>>M>>N>>P;
        index.clear();

        for(int i=0;i<M;i++){
            cin>>lk;
            index[lk]=i;
        }

        for(int i=0;i<M;i++) fill(mist[i],mist[i]+M,500);

        for(int i=0;i<M;i++) mist[i][i]=0;

        for(int i=0;i<N;i++){
            cin>>lk>>lk2;
            start=index[lk]; end=index[lk2];
            mist[start][end]=mist[end][start]=1;
        }

        for(int k=0;k<M;k++)
            for(int i=0;i<M;i++)
                for(int j=0;j<M;j++)
                    mist[i][j]=min(mist[i][j],mist[i][k]+mist[k][j]);

        for(int i=0;i<P;i++){
            cin>>size>>lk>>lk2;
            start=index[lk]; end=index[lk2];
            if(mist[start][end]==500) cout<<"NO SHIPMENT POSSIBLE"<<endl;
            else cout<<"$"<<size*mist[start][end]*100<<endl;
        }
    }

    cout<<endl<<"END OF OUTPUT"<<endl;

    return 0;
}
