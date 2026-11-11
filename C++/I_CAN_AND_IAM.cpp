#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>

#define ll long long int
#define vv vector
#define strr string
#define FWD(i, n) for (int i = 0; i < n; i++)
#define CENDL(x) cout << x << '\n'

using namespace std;

int t = 0;

void solve() {

    int wires = 0;
    cin >> wires;

    vector<int> birds;

    int temp = wires;
    while (temp --)
    {
        int bird = 0;
        cin >> bird;
        birds.push_back(bird);
    }
    

    int shots =0;
    cin >> shots;
    while(shots--){
        int line = 0, bird = 0;
        cin >> line >> bird;

        for(int i=0 ; i < wires; i ++){
            while (birds[i]--)
            {
                
            }
            
        }
    }
    

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    while (t--)
        solve();
}