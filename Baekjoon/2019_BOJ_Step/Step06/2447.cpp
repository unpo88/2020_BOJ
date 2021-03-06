#include <iostream>
using namespace std;

void star(int modN, int i, int j){
    if((i/modN) % 3 == 1 && (j / modN) % 3 == 1){
        cout << " ";
    }else{
        if(modN / 3 == 0){
            cout << "*";
        }else{
            star(modN/3, i, j);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),  cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            star(N, i, j);
        }
        cout << "\n";
    }
    return 0;
}