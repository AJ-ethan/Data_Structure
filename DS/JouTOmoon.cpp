#include <bits/stdc++.h>
#include<vector>
#include<set>
#include<map>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'journeyToMoon' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY astronaut
 */

int journeyToMoon(int n, vector<vector<int>> astronaut) {
    map<int,list<int>> adj;
    set<int> visited;
    int i,j,s = astronaut.size(),c;
    vector<int> count;
    for(i=0;i<s;i++)
        adj[astronaut[i][0]].push_back(astronaut[i][1]);
    for (auto& x: adj) {
   // std::cout << x.first << ": " << x.second << '\n';
        c = 0;
        int len =0;
        int q [1000];
        q[len] = x.first;
        cout<< x.first<<"any\n";
        while(len >=0)
        {
            int current = q[len];
            cout<<len<<"\n";
            len--;
            if(visited.find(current)!=visited.end())
                break;
            c = c+1;
             cout<<current<<"\n";
            visited.insert(current);
            for(auto j =x.second.begin();j!=x.second.end();++j)
            {
                if(visited.find(*j)!=visited.end()){
                    q[++len] = *j;
                    cout<<len<<"\n";
                    visited.insert(*j);
                    c++;
                    }
            }
           cout<<c<<"\n";
            
        }
         if(c!=0)
            count.push_back(c);
    }
    c = 1;
    for(int i=0;i<count.size();i++)
        for(int k = i+1;count.size();k++)
            c += count[i]*count[k];
   
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int p = stoi(first_multiple_input[1]);

    vector<vector<int>> astronaut(p);

    for (int i = 0; i < p; i++) {
        astronaut[i].resize(2);

        string astronaut_row_temp_temp;
        getline(cin, astronaut_row_temp_temp);

        vector<string> astronaut_row_temp = split(rtrim(astronaut_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int astronaut_row_item = stoi(astronaut_row_temp[j]);

            astronaut[i][j] = astronaut_row_item;
        }
    }

    int result = journeyToMoon(n, astronaut);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

