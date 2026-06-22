class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> gr(m, string(n, '#'));

        for(int a = 0; a < m; a++){
            gr[a][0] = '.';
        }
        for(int b = 0; b < n; b++){
            gr[m-1][b] = '.';
        }
        return gr;
    }
};