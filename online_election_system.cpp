#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
    int congress=0,bjp=0,aap=0,bsp=0,cpi=0;
    int majority = INT_MIN;
     string majorityParty;
     unordered_map<string,int> m;
     vector<string> majorityParties;
    while(true){
        system("CLS");
        cout<<"\t\t\t********------ Welcome to Online Election System ------********"<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t1. Vote for a party"<<endl;
        cout<<"\t\t\t\t\t2. View The Results Till Now"<<endl;
        cout<<"\t\t\t\t\t3. Exit"<<endl<<endl;
        cout<<endl<<"\t\t\t\t\tSelect one Option : ";
        int choice; cin>>choice;
        system("CLS");
        switch(choice){
        case 1:
            system("CLS");
            cout<<endl<<"\t\t\t\t\tThe List of parties are : "<<endl<<endl;
            cout<<"\t\t\t\t\t1. Congress"<<endl;
            cout<<"\t\t\t\t\t2. BJP"<<endl;
            cout<<"\t\t\t\t\t3. AAP"<<endl;
            cout<<"\t\t\t\t\t4. BSP"<<endl;
            cout<<"\t\t\t\t\t5. CPI"<<endl<<endl;
            cout<<"\t\t\t\t\tYour vote goes to : ";
            int vote; cin>>vote;
            if(vote==1) congress++;
            else if(vote==2) bjp++;
            else if(vote==3) aap++;
            else if(vote==4) bsp++;
            else if(vote==5) cpi++;
            else {
                cout<<"\t\t\t\t\tYou have to select only (1-4)";
            }
            break;
        case 2:
            system("CLS");
            cout<<endl<<"\t\t\t\t\t1. Congress : "<<congress<<endl;
            cout<<"\t\t\t\t\t2. BJP : "<<bjp<<endl;
            cout<<"\t\t\t\t\t3. AAP : "<<aap<<endl;
            cout<<"\t\t\t\t\t4. BSP : "<<bsp<<endl;
            cout<<"\t\t\t\t\t5. CPI : "<<cpi<<endl<<endl;
            m["Congress"] = congress;
            m["BJP"] = bjp;
            m["AAP"] = aap;
            m["BSP"] = bsp;

            for(auto x:m){
                if(x.second>majority){
                    majority=x.second;
                    majorityParty=x.first;
                }
            }
            //If two or more parties got equal majority
            for(auto x : m){
                if(x.second == majority){
                    majorityParties.push_back(x.first);
                }
            }
            cout<<"\t\t\t\t\t";
            if(majorityParties.size()>1){
                for(auto x : majorityParties){
                    cout<<x<<",";
                }
                cout<<" Got equal Majority of "<<majority<<" votes"<<endl<<endl;
            }
            else{
                cout<<endl<<"\t\t\t\t\t"<<majorityParty<<" Got Majority of "<<majority<<" votes"<<endl<<endl;
            }
            Sleep(4000);
            majorityParties.clear();
            break;
        case 3:
            return 0;
        default:
            cout<<"\t\t\t\t\tPlease select (1-3)";
            break;
        }
    }
}
