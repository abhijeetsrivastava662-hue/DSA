class Solution {
public:
    int calculateScore(int a, int b) {
        int cna=0;
        int cnb=0;
        while(a>0){
            cna+=(a&1);
            a>>=1;
        }
        while(b>0){
            cnb+=(b&1);
            b>>=1;
        }
        if(cna>=cnb) return cna*cnb;
        else return cnb/cna;
    }
};