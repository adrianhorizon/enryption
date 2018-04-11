#include <iostream>
#include <math.h>>

using namespace std;

int main(){
    int column;
    string text;
    cin >> text;
    auto n = text.size();
    int row = round(sqrt(n));
    if (row >= sqrt(n)) column = row; else column = row + 1;
    for(int j=0;j<column;++j) {
        for(int i=j; i<n;i+=column)cout << text[i];
        cout << ' ';
    }
    return 0;
}
