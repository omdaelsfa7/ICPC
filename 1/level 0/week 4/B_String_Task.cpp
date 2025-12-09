#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cin.tie(nullptr);

void sol()
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u' , 'A' , 'E' , 'I' ,'O','U'};
    string result ;
    string s ;
    cin >> s;
    for(char c : s){
        c = tolower(c);
        if (find(vowels.begin(), vowels.end(), c) != vowels.end())
        {
            continue ;
        }
        else if (find(vowels.begin(), vowels.end(), c) != vowels.end() && find(vowels.begin(), vowels.end(), c) == vowels.end()){
            result += c ;
        }
        else
        {
            result += '.';
            result += c;
        }
    }
    cout << result << endl;
    return;
}

int32_t main()
{
    FIO;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}