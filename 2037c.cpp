#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n<=3) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> odd,even;

        for (int i = 1; i <= n; i++) {
            if (i % 2){
                odd.push_back(i);
            }
            else{
                even.push_back(i);
            }
        }

        for (int i = 0; i < odd.size(); i++) {
            cout <<odd[i]<<" ";
        }

        for (int i =even.size()-1; i>=0;i--) {
            cout <<even[i]<<" ";
        }

        cout << '\n';
    }
    return 0;
}
