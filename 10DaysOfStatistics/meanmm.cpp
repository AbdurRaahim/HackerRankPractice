#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std ;
#define endl '\n' 
#define mod %
#define REP(i,n) for(int i=0;i<(int)(n);++i)

struct HASH{
  size_t operator()(const pair<int,int>&x)const{
    return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
  }
};
unordered_map<pair<int,int>,int,HASH>mp;
 
#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif 

int ara[5000] , cnt[5000] ; 
int n ; 

void mean() 
{ 
	double sum = 0 ; 
	for(int i = 0 ; i < n ; i++) sum += ara[i] ; 
	printf("%.1lf\n" ,sum/n) ; 
}

void median() 
{ 
	sort(ara,ara+n) ; 
	n /= 2 ; 
	double mid = ara[n] + ara[n-1] ; 
	printf("%.1lf\n" ,mid/2);
} 

void mode() 
{ 
	for(int i = 0 ; i < n ; i++) cnt[ara[i]]++ ; 
	REP(i,n) cout << ara[i] <<  ' ' ; 
}

int main()
{  
	cin >> n ; 
	REP(i,n) cin>> ara[i] ; 
	mode() ; 
	return 0 ; 
} 
