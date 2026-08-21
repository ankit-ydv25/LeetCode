class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2,
                     vector<int>& p3, vector<int>& p4) {

        // Calculate all 6 squared distances
        int d12 = pow(p1[0]-p2[0], 2) + pow(p1[1]-p2[1], 2);
        int d13 = pow(p1[0]-p3[0], 2) + pow(p1[1]-p3[1], 2);
        int d14 = pow(p1[0]-p4[0], 2) + pow(p1[1]-p4[1], 2);
        int d23 = pow(p2[0]-p3[0], 2) + pow(p2[1]-p3[1], 2);
        int d24 = pow(p2[0]-p4[0], 2) + pow(p2[1]-p4[1], 2);
        int d34 = pow(p3[0]-p4[0], 2) + pow(p3[1]-p4[1], 2);

        // p1 and p2 are diagonally opposite
        if (d12 > 0 &&
            d13 == d14 &&
            d14 == d23 &&
            d23 == d24 &&
            d12 == d34 &&
            d12 == 2 * d13)
            return true;

        // p1 and p3 are diagonally opposite
        if (d13 > 0 &&
            d12 == d14 &&
            d14 == d23 &&
            d23 == d34 &&
            d13 == d24 &&
            d13 == 2 * d12)
            return true;

        // p1 and p4 are diagonally opposite
        if (d14 > 0 &&
            d12 == d13 &&
            d13 == d24 &&
            d24 == d34 &&
            d14 == d23 &&
            d14 == 2 * d12)
            return true;

        return false;
    }
};