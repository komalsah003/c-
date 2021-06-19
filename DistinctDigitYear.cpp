#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1e3
int main()
{
    int a, fir, sec, thi, fo;
    cin >> a;
    while (1)
    {
        a++;
        fir = a / 1000;
        sec = (a / 100)%10;
        thi = (a / 10)%10;
        fo = a %10;
        if (fir != sec && sec != thi && thi != fo && fo != fir && sec != fo && thi != fir)
            break;
    }
    cout << a;
    return 0;
}
//
//
//
//
//
//
// char c[1000] ;
// cin >> c;
// for (int i = 0; c[i] != '\0'; i++)
// {
//     if (i == 0)
//     {
//         if (c[i] >= 'a' && c[i] <= 'z')
//             c[i] = c[i] - 32;
//     }
// }
// cout << c;
//
//
//
//
//
//
//

// char c[201];
// int m, n, p;
// cin >> c;
// for (int i = 0; c[i] != '\0'; i++)
// {
//     if (c[i] == '.')
//         cout << '0';
//     else if (c[i + 1] == '.')
//     {
//         cout << "1";
//         ++i;
//     }
//     else
//     {
//         cout << "2";
//         ++i;
//     }
// }

//
//
//
//
//

// int a[6][6];
// int x, y;
// for (int i = 1; i < 6; i++)
// {
//     for (int j = 1; j < 6; j++)
//     {
//         cin >> a[i][j];
//     }
// }
// int i, j;
// for (i = 1; i < 6; i++)
// {
//     for (j = 1; j < 6; j++)
//     {
//         if (a[i][j] == 1)
//         {
//             x = i;
//             y = j;
//         }
//     }
// }
// cout << abs(x-3) + abs(y-3);

//
//
//
//

// int t;
// cin >> t;
// int x[t], y[t], z[t];
// for(int i = 0; i < t; i++){
//     cin >> x[i] >> y[i] >> z[i];      }
// long long sum1 = 0, sum2 = 0, sum3 = 0;
// for (int i = 0; i < t; i++){
//     sum1 = sum1 + x[i];
//     sum2 = sum2 + y[i];
//     sum3 = sum3 + z[i]; }
// if (sum1 == 0 && sum2 == 0 && sum3 == 0){
//     cout << "YES" << '\n';}else{
//     cout << "NO" << '\n';}
// }
//
//
//
//
// while (t--)
// {
//     int n;
//     cin>>n;
//     string s;
//     for(int i=0;i<n;i++){
//     cin >> s;
//     }
//     int count=0;
//     for (int i = 0; i < s.size(); i++)
//     {
//
//
//
//
//
//         if(s[i]==s[i+1]){
//             count--;
//         }
//         else{
//             count++;
//         }
//     cout<<count<<endl;
//     }
// }