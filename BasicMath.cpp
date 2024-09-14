#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //Function to calculate the sum of divisors of a given number N.
    long long sumOfDivisors(int N)
    {
        long long sum = 0;

        //iterating from 1 to N.
        for (int i = 1; i <= N; ++i) 
            //calculating and accumulating the sum of divisors.
            sum += (N / i) * i; 

        //returning the sum of divisors.
        return sum;
    }
};
int main()
{

    int N;
    cin>>N;
    Solution ob;
    long long ans  = ob.sumOfDivisors(N);
    cout<<ans<<endl;
    
    return 0;
}