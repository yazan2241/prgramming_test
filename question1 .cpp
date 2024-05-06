#include <bits/stdc++.h>

using namespace std;

string convertNumberToString(int n){

    string num = "";
    while(n%10){

        num += (n%10) + '0';
        n/=10;

    }
    return num;

}

string displayCompter(int n){


    string temp = convertNumberToString(n);
    reverse(temp.begin() , temp.end());

    if(n%10 == 1)temp += " компьютер";
    else if (n%10 == 2 || n%10 == 3 || n%10 == 4)temp += " компьютера";
    else temp += " компьютеров";

    return temp;
}

int main()
{
    int n;
    cin>>n;
    string res = displayCompter(n);
    cout<< res;
    return 0;
}
