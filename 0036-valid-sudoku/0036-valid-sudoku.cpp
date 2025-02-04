class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
        map <char, int> mp;

        for (int i = 0; i < 9; i++) {
            for (int j = 1; j <= 9; j++) {
                mp[j] = 0;
            }
            for (int j = 0; j < 9; j++) {
                mp[arr[i][j] - '0']++;
            }
            for (int j = 1; j <= 9; j++) {
                if (mp[j] > 1)
                    return false;
            }

            for (int j = 1; j <= 9; j++) {
                mp[j] = 0;
            }
            for (int j = 0; j < 9; j++) {
                mp[arr[j][i] - '0']++;
            }
            for (int j = 1; j <= 9; j++) {
                if (mp[j] > 1)
                    return false;
            }
        }
        int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
        vector<pair<int, int>> s = {{1, 1}, {4, 1}, {7, 1}, {7, 4}, {4, 4}, {1, 4}, {1, 7}, {4, 7}, {7, 7}};

        for (auto i : s) {
            int x = i.first;
            int y = i.second;

            for (int j = 1; j <= 9; j++) {
                mp[j] = 0;
            }
            for (int i = 0; i < 9; i++) {
                mp[(arr[x + dx[i]][y + dy[i]] - '0')]++;;
            }
            for (int j = 1; j <= 9; j++) {
                if (mp[j] > 1)
                    return false;
            }
        }
        
        return true;
    }
};