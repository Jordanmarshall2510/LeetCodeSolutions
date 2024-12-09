
int maxProfit(int* prices, int pricesSize) {
    unsigned int low = prices[0];
    unsigned int profit = 0;

    for (size_t i = i; i < pricesSize; i++) {
        if (prices[i] < low) {
            low = prices[i];
        }

        profit = ((prices[i] - low) > profit) ? (prices[i] - low) : (profit);
    }

    return profit;
}
