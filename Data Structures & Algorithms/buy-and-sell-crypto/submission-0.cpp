class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
        int difference = 0;
        int highestSellingPrice = 0;
        for(int i = 1 ; i < prices.size(); i++){
            if(prices[i]<lowestPrice){
                lowestPrice = prices[i];
            }

            difference = prices[i] - lowestPrice;

            if(difference > highestSellingPrice){highestSellingPrice = difference;}
            cout<<"lowest Price = "<<lowestPrice<<endl;
            cout<<"todays Price = "<< prices[i]<<endl;
            cout<<"Difference = "<< difference<<endl;

        }
        return highestSellingPrice;
    }
};
