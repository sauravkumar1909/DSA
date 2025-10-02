class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int max=numBottles;

        while(numBottles >= numExchange){
        numBottles -= numExchange;
        numBottles+= 1;
        max++;
        numExchange++;
        }
        return max;
    }
};