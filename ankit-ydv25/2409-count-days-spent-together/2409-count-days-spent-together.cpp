class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int aam = stoi(arriveAlice.substr(0,2));
        int aad = stoi(arriveAlice.substr(3,2));
        int alm = stoi(leaveAlice.substr(0,2));
        int ald = stoi(leaveAlice.substr(3,2));
        int bam = stoi(arriveBob.substr(0,2));
        int bad = stoi(arriveBob.substr(3,2));
        int blm = stoi(leaveBob.substr(0,2));
        int bld = stoi(leaveBob.substr(3,2));
        int aadays=0;
        for(int i=0;i<aam-1;i++)
        {
            aadays += days[i];
        }
        aadays += aad;
        int aldays =0 ;
        for(int i=0;i<alm-1;i++)
        {
            aldays += days[i];
        }
        aldays += ald;

        int badays=0;
        for(int i=0;i<bam-1;i++)
        {
            badays += days[i];
        }
        badays += bad;

        int bldays =0 ;
        for(int i=0;i<blm-1;i++)
        {
            bldays += days[i];
        }
        bldays += bld;

        int start = max(aadays, badays);
        int end = min(aldays, bldays);

        if (start > end)
        {
            return 0;
        }

        return end - start + 1;
    }
};