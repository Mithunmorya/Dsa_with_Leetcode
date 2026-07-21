class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        int n = s.length();

        int currZeroCnt = 0;
        int prevZeroCnt = 0;
        int oneCnt = 0;
        int zeroSeg = 0;
        int mxGain = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] == '0') {
                currZeroCnt++;
            }
            else {
                oneCnt++;

           
                mxGain = max(mxGain, currZeroCnt + prevZeroCnt);

                if (currZeroCnt != 0) {
                    prevZeroCnt = currZeroCnt;
                    zeroSeg++;
                }

                currZeroCnt = 0;
            }
        }


        if (currZeroCnt != 0) {
            zeroSeg++;
            mxGain = max(mxGain, currZeroCnt + prevZeroCnt);
        }

        return oneCnt + (zeroSeg > 1 ? mxGain : 0);
    }
};
