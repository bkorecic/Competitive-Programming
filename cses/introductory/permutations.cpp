#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  if(n == 1){
    cout << "1\n";
    return 0;
  }
  if(n == 4){
    cout << "3 1 4 2\n";
    return 0;
  }
  if(n <= 3){
    cout << "NO SOLUTION\n";
    return 0;
  }
  for(int i=1; i<=n; i+=2){
    cout << i << ' ';
  }
  for(int i=2; i<=n; i+=2){
    cout << i << ' ';
  }
  return 0;
}
/*
1 2 3 4 5
1 4 2 5 3

1 2 3 4
3 1 4 2
*/
