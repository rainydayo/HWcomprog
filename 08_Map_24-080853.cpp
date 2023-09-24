#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    map<string, double> prices;
    map<string, float> sales;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        string name;
        double price;
        cin >> name >> price;
        prices[name] = price;
    }

    cin >> M;
    for (int i = 0; i < M; ++i) {
        string name;
        float quantity;
        cin >> name >> quantity;
        if(prices.find(name) == prices.end()){
            quantity = 0;
        }
        sales[name] += quantity*prices[name];
    }

    double totalSales = 0;
    for (auto& sale : sales) {
        totalSales += sale.second;
    }

    if (totalSales == 0) {
        cout << "No ice cream sales" << endl;
    } else {
        cout << "Total ice cream sales: " << totalSales << endl;
        float maxSale = 0;
        vector<string> maxNames;
        for (auto& sale : sales) {
            if (sale.second > maxSale) {
                maxSale = sale.second;
                maxNames.clear();
                maxNames.push_back(sale.first);
            } else if (sale.second == maxSale) {
                maxNames.push_back(sale.first);
            }
        }
        sort(maxNames.begin(), maxNames.end());
        cout << "Top sales:";
        for (auto& name : maxNames) {
            cout << ' ' << name;
        }
    }
}
