#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    for(char x : letters){
        if(x > target){
            return x;
            break;
        }
    }
    return letters[0];
}

int main(){
    int n ;
    cin >> n;
    vector<char> letters(n);
    char target;

    for(int i=0; i<letters.size(); i++){
        cin >> letters[i];
    }

    cin >> target;
    cout << nextGreatestLetter(letters, target);
}