class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n = asteroids.size();
        int i = 0;
        long long currmass  = mass;
        while(i<n){
            if(currmass<asteroids[i])
            return false;
            currmass += asteroids[i];
            i++;
        }
        return true;
    }
};