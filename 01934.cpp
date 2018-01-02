#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a < b)
            swap(a, b);
        cout << a*b/gcd(a, b) << '\n';
    }
    return 0;
}
