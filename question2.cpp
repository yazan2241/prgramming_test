#include <bits/stdc++.h>

using namespace std;

map<int,int>allDivisors;
set<int>uniqueDivisors;

void getDivisorsCount(vector<int>numbers){

    for(int i=0;i<numbers.size();i++){
        int num = numbers[i];
        for(int i=1;i*i<=num;i++){
            if(num%i == 0){
                if(i==num/i){
                    uniqueDivisors.insert(i);
                    allDivisors[i]++;
                }else{

                    uniqueDivisors.insert(i);
                    allDivisors[i]++;

                    uniqueDivisors.insert(num/i);
                    allDivisors[num/i]++;
                }
            }

        }

    }

}


vector<int>getDivisors(vector<int>numbers){

    getDivisorsCount(numbers);

    vector<int>ans;

    for(auto itr : uniqueDivisors){
        if(allDivisors[itr] == numbers.size())ans.push_back(itr);
    }

    return ans;

}


int main()
{
    char x=' ';
    int a;
    vector<int>numbers;

    while(1){
        cin>>a;
        numbers.push_back(a);
        x = getchar();
        if(x=='\n')break;
    }

    vector<int>divisors = getDivisors(numbers);

    for(int i=0;i<divisors.size();i++){
        cout<<divisors[i]<<" ";
    }

    return 0;
}
