#include <iostream>
#include <string>

using namespace std;

string rotarUltimo(string s, int k){
    string res;
    res.push_back(k);
    int i = 0;
    while (i < s.size() - 1){
        res.push_back(s[i]);
        i++;
    }
    return res;
}

string rotar(string s, int j){
    string res(s);
    int rotaciones = j % s.size();
    int i = 0;
    while (i < rotaciones) {
        res = rotarUltimo(res, res[res.size() - 1]);
        i++;
    }
    return res;
}

int main()
{
    /* No hace falta modificar el main */
    // Leo la entrada
    string s;
    int j;
    cin >> s >> j;
    
    string res = rotar(s, j);
    cout << res;
    return 0;
}
