#include<bits/stdc++.h>
#include<chrono>
#include<random>

using namespace std;
using namespace std::chrono;


#define pb push_back
#define nl "\n"
#define db double
#define INF INT_MAX
const int MOD=1e9+7;



#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<"->" <<x<< endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}



//debug vector
template <class T>
void debugvec(vector<T>arr){
    for(auto it:arr){
        cerr<<it<<" ";
    }
    cerr<<"\n";
    
}
//Random number generator
random_device rd;
mt19937 gen(rd());
ll random(ll low,ll high){
    uniform_int_distribution<>dist(low,high);
    return dist(gen);
}










// ---------------------------------------------------------------------------------//


void solve(){
    int tc;
    cin>>tc;
  
// --------------------------------------------------------------------------------------------
    while(tc--)
    {
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int counter=1;
      sort(arr.begin(),arr.end());
      debugvec(arr);
      for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])counter++;
      }
      cout<<counter<<nl;
}
    
// ------------------------------------------------------------------------------  


}







    





/*-------------------------------------------------------------------------------*/



int main(){
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Debugging.txt", "w", stderr);
#endif
    /*--------------------------------------*/
    auto start = high_resolution_clock::now();
     solve();
     auto stop = high_resolution_clock::now();
     auto duration = duration_cast<microseconds>(stop - start);

   // cout << "\nTime: "
   //       << duration.count() << "ms" << endl;

    return 0;
      

     /*--------------------------------------*/
    
}