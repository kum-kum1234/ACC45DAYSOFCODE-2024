#include<iostream>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int Dragon_DSA;
        int Dragon_TOC;
        int Dragon_DM;
        int Sloth_DSA;
        int Sloth_TOC;
        int Sloth_DM;
        cin>>Dragon_DSA>>Dragon_TOC>>Dragon_DM;
        cin>>Sloth_DSA>>Sloth_TOC>>Sloth_DM;
        int total_scoreDragon=Dragon_DSA+Dragon_TOC+Dragon_DM;
        int total_scoreSloth=Sloth_DSA+Sloth_TOC+Sloth_DM;
        if(total_scoreDragon>total_scoreSloth){
            cout<<"DRAGON"<<endl;
        }
        else if(total_scoreDragon<total_scoreSloth){
            cout<<"SLOTH"<<endl;
        }
         else{
             if(Sloth_DSA>Dragon_DSA){
                  cout<<"SLOTH"<<endl;
              }
        else if(Sloth_DSA<Dragon_DSA){
                  cout<<"DRAGON"<<endl;
              }
        else{
            if(Sloth_TOC>Dragon_TOC){
            cout<<"SLOTH"<<endl;
        }
        else if(Sloth_TOC<Dragon_TOC){
            cout<<"DRAGON"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
         }
    }

    return 0;
}
