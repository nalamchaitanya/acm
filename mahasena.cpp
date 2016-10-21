#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <math.h>
#include <unordered_map>
#include <queue>
#include <vector>
#include <climits>
#include <math.h>
#include <queue>
#include <assert.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,temp,even,odd;
    cin >> n;
    even = 0;
    odd = 0;

    for(int i=0;i<n;i++)
    {
        cin >> temp;
        if(temp%2==0) even++;
        else odd++;
    }
    if(even>odd) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;
    return 0;
}
