#include <iostream>
using namespace std;

int N, L;
int answer;
int map[40][20];

void init(){
    answer = 0;
    for(int y = 0; y < 41; ++y){
        for(int x = 0; x < 21; ++x){
            map[y][x] = 0;
        }
    }
}

int main()
{
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; ++tc){
        init();

        cin >> N >> L;

        for(int y = 0; y < N; ++y){
            for(int x = 0; x < N; ++x){
                cin >> map[y][x];
            }
        }

        for(int y = 0; y < N; ++y){
            for(int x = 0; x < N; ++x){
                map[N + y][x] = map[x][y];
            }
        }

        int count = 0;

        int y, x;

        for(y = 0; y < 2 * N; ++y){
            count = 1;
            for(x = 0; x < N - 1; ++x){
                if(map[y][x] == map[y][x + 1])  ++count;
                else if(map[y][x] + 1 == map[y][x + 1] && count >= L)   count = 1;
                else if(map[y][x] - 1 == map[y][x + 1] && count >= 0)   count = (1 - L);
                else break;
            }
            if(x == (N - 1) && count >= 0)  ++answer;
        }
        cout << "#" << tc << " " << answer << "\n";
    }
	return 0;
}
