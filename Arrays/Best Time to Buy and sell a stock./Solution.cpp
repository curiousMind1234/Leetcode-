/*You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell*/

int maxProfit(vector<int>& prices) {
    int mini = INT_MAX;
    int max_profit = 0;
    for(int i=0; i< prices.size(); ++i){
        mini = min(mini,prices[i]);
        max_profit = max(max_profit, prices[i]-mini);
    }
    return max_profit;

}
