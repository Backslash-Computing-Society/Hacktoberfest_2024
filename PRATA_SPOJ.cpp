#include <iostream>
#include<vector>
#include <algorithm> 
#include <climits>
#include <set>
#include <list>
#include <map>
#include <math.h>
#include <cmath>
#include <unordered_map>
#include <utility>
#include <numeric>
using namespace std;


//  Similar to   ------>   Book Allocation Mathod


bool IsPossibleSol ( int P, vector<int> &ranks, int mid ) {
     
     int Pratas = 0;
     for ( auto R: ranks ) {
          int j = 1;             // j is the number of pratas being cooked
          int TimeTaken = 0;

          while ( TimeTaken + j*R <= mid ) {
               Pratas++;
               TimeTaken += j*R;
               j++;
          }

          if ( Pratas >= P ) return true;
     }

     return false;

}


int minTimeToCookPratas(int P, vector<int> &ranks) {

     int low = 1;
     int high = *max( ranks.begin(), ranks.end() ) * ( (P*(P+1) ) / 2 );
     int ans = -1;

     while ( low <= high ) {
          int mid = low + ( high - low )/2;

          if ( IsPossibleSol ( P, ranks, mid ) ){
               ans = mid;
               high = mid - 1;
          } else {
               low = mid + 1;
          }
     }

     return ans;

} 



int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int P;
        cin >> P;
        int L;
        cin >> L;
        vector<int> ranks(L);
        
        for (int i = 0; i < L; i++) {
            cin >> ranks[i];
        }
        
        cout << minTimeToCookPratas(P, ranks) << endl;
    }
    
    return 0;
}