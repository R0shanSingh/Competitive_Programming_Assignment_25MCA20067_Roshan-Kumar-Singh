#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int t,n,max_value,min_value,min_index,max_index,count;
    string str;
    char excep_el;
    cin>>t;
    
    while(t--){
        cin>>n;
        cin>>str;
        set <char> character;
        min_value=n-1,max_value=0,min_index=-1,max_index=-1;
        if(n!=1){
            for(int i=0;i<n;i++){
                if(character.count(str[i])){
                    continue;
                }
                character.insert(str[i]);
                excep_el = str[i];
                count = 0;
                for(int j=i+1;j<n;j++){
                    count++;
                }
                if(max_value<count){
                    max_value = count;
                    max_index = i;
                }
                if(min_value>count){
                    min_value = count;
                    min_index = i;
                }
            }
            if(max_index==min_index) str[min_index] = excep_el;
            else str[min_index] = str[max_index];
        }
        cout<<str<<endl;
    }
    return 0;
}
