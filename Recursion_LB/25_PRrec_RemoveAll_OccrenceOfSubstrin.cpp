// leetCode   1910
/*
string removeOccurrences(string s, string part) {

        int position = s.find(part);
        while(position!= string :: npos){
            s.erase(position,part.size());
            position = s.find(part);
        }
        return s;
    }

*/

#include <iostream>
using namespace std;

void solve(string &s, string part)
{
    int found = s.find(part);
    if (found != string::npos)
    {
        string leftpart = s.substr(0, found);
        string rightpart = s.substr(found + part.size(), s.size());
        s = leftpart + rightpart;

        solve(s, part);
    }
    else
        return;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    solve(s, part);
    cout << s << endl;
}

/*

time complxity
find me O(m*n);
leftpart = O(n);
right part = O(n);

ab 1 solution ke liye  = O(m*n)+O(n)+ O(n) ===== O(M*N);

recursive call ke liye == O(m/n)  ====

total = O(N^2);


*/