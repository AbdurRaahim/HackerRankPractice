#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int main() 
{
    int n , q ; 
    cin >> n >> q ;
    vector <vector<int>> v(n) ; 
    
    for(int i = 0 ; i < n ; i++){
        int num ; cin >> num ; 
        v[i].resize(num); 
        for(int j = 0 ; j < num ;j++){
			cin >> v[i][j] ;   
        }
    }
    
    for(int i = 0 ; i < q ; i++){ 
		int m , n ; 
		cin >> m >> n ; 
		cout << v[m][n] << endl ;
	}
    return 0;
}
