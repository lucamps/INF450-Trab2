#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    ofstream ofs ("out.txt", ofstream::out);
    vector<char> v;
    char temp;

    while (cin >> temp)
        v.push_back(temp);

    sort(v.begin(),v.end());

    for(char a:v)
        ofs << a;

    ofs.close();

    return 0;
}