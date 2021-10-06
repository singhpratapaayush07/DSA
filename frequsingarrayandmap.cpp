//Frequency of each element in an array

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    // int a[10] = {1,3,1,5,2,3,6,5,4,14}; // 1 -> 2, 2 -> 1, 3 -> 2, 4 -> 1, 5-> 2, 6 -> 1, 14 -> 1
    string a[4] = {"sohail", "sakshi", "shahbaz", "sohail"};
    
    map <string, int> m;
    
    for(int i=0; i<4; i++){
        if(m.find(a[i]) == m.end()){ // to handle empty condition to avoid segmentation fault
            // m.insert({a[i],1});
            m[a[i]] = 1;
        }
        else{
            // m.insert({a[i], m[a[i]] + 1});
            m[a[i]]++;
        }
    }
    
    for(auto itr : m){
        cout<<itr.first<<"->"<<itr.second<<endl;
    }
   
}



/*
 int n[1000]; // this 1000 can be placed based on the constraints, can be 10^5 or 10^6 or anything
    for(int i=0; i<1000; i++) n[i] = -1;
    
    
    for(int i=0; i<10; i++){
        if(n[a[i]] == -1){
            int count = 0;
            for(int j=0; j<10; j++){
                if(a[j] == a[i]){
                    count++;
                }
            }
            n[a[i]] = count;
        }
    }
    
    for(int i=0; i<1000; i++){
        if(n[i] != -1){
            cout<<i<<"->"<<n[i]<<endl;
        }
    }
*/
