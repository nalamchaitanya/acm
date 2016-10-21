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
    int n;

    cin >> n;
    char *str = (char*)malloc(1000);
    scanf("%s",str );

    int sum = 0;
    // cout << strlen(str);
    for(int i=0;i<strlen(str);i++)
    {
        if('1' <= str[i] && str[i] <= '9') sum += str[i] - '0';
    }
    cout << sum << endl;
    return 0;
}
