#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec = {'a', 'b', 'c', 'd', 'e'};
    cout<<"size="<<vec.size()<<endl;
    for(char val:vec){
        cout<<val<<endl;
    }
    vec.push_back(25);
    cout<<"After push back size="<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.back()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.at(0)<<endl;
    return 0;
}