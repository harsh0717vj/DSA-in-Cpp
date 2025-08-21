#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void display(const vector<int>& prices) {
    for (int price : prices) {
        cout << price << " ";
    }
    cout << endl;
}

int maxProfit(const vector<int>& prices) {
    int minPrice = INT_MAX;  // should start with maximum possible
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice) minPrice = price;
        int profit = price - minPrice;
        if (profit > maxProfit) maxProfit = profit;
    }

    return maxProfit;
}

int main() {
    vector<int> prices;
    int n, x;

    cout << "Enter Number of days: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter Price on day " << i + 1 << ": ";
        cin >> x;
        prices.push_back(x);
    }

    cout << "PRICE ARRAY: " << endl;
    display(prices);

    cout << "MAXIMUM PROFIT: " << maxProfit(prices) << endl;

    return 0;
}
