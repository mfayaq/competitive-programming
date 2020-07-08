#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getMinimumMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY identification as parameter.
 */

int getMinimumMoves(vector<int> identification) {
vector <int> v1; int count =0;
    while(v1.empty())
    {	int temp;
        v1.push_back(identification.back());
        identification.pop_back();
        while(identification.back()<v1.back())
        {
          v1.push_back(identification.back());
          identification.pop_back();
        }
        if(identification.back()>v1.back())
        {
            temp = identification.back();
	    identification.pop_back();
            count++;
        }
        while(v1.empty())
        {
            identification.push_back(v1.back());
            v1.pop_back();
        }
        v1.push_back(temp);
    }
    return count;
}

int main(){
vector <int> v1=[1 2 3];
getMinimumMoves(v1);
}
