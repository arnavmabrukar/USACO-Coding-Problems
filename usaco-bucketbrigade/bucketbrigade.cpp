#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

    vector<vector<char>> grid(10,vector<char>(10));

    pair<int,int> barn;
    pair<int,int> lake;
    pair<int,int> rock;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            char character;
            cin >> character;
            grid[i][j] = character;

            if(character=='B'){
                barn = {i, j};
            }
            if(character=='L'){
                lake = {i, j};
            }
            if(character=='R'){
                rock = {i, j};
            }
        }
    }

    queue<pair<int,int>> q;

    vector<vector<int>> distance(10,vector<int>(10,0));
    vector<vector<bool>> visited(10,vector<bool>(10,false));

    q.push({lake.first, lake.second});
    visited[lake.first][lake.second] = true;

    int dr[4] = {1,-1,0,0};
    int dc[4] = {0,0,-1,1};

    while(!q.empty()){
        auto [r,c] = q.front();
        q.pop();
        
        for(int i=0; i<4; i++){
            int newR = r + dr[i];
            int newC = c + dc[i];

            if(newR>=0 
                && newR <10 
                && newC>=0 
                && newC<10 
                && visited[newR][newC]==false
                && grid[newR][newC]!='R'){
                distance[newR][newC] = distance[r][c] + 1;
                visited[newR][newC] = true;
                q.push({newR,newC});
            }

        }
    }

    cout << distance[barn.first][barn.second] - 1;

    return 0;
}