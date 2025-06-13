// IMP Imp
//leet code 415

/*
class Solution {
public:
    string addStrings(string num1, string num2) {
         int i = num1.length() -1;
        int j = num2.length() -1;
        int carry = 0;

        string result = "";
        while(i >= 0 || j >= 0 || carry){
            int sum = carry;
            if(i >= 0) sum += num1[i--] - '0'; // convert char to int
            if(j >= 0) sum += num2[j--] - '0';

            result += (sum%10) + '0';   //convert int to char
            carry = sum/10;
        }

        reverse(result.begin(), result.end());

        return result;
        
    }
};
*/

#include <bits/stdc++.h>
using namespace std;

void solve(string &num1, string &num2, string &add, int carry, int i, int j)
{

    if (i < 0 && j < 0)
    {
        if (carry == 1)
        {
            add.push_back('1');
        }
        return;
    }

    int fn = (i >= 0 ? num1[i] : '0') - '0';
    int sn = (j >= 0 ? num2[j] : '0') - '0';

    int sum = fn + sn + carry;
    if (sum > 9)
    {
        carry = 1;
    }
    int d = sum % 10;
    string p = to_string(d);

    add += p;

     solve(num1, num2, add, carry, i-1, j-1);
    
}

int main()
{

    string num1 = "1";
    string num2 = "999";
    string add = "";

    solve(num1, num2, add, 0, num1.size() - 1, num2.size() - 1);
    reverse(add.begin(), add.end());
    cout << add << endl;
}


// IMP NOTE

// if you paas num1 ans num2 as pass by refernce then its take bahut baht time ...(yaad rkhe)