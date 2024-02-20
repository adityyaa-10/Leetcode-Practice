class Solution {
  bool canShipWithinDays(const vector<int>& weights, int days, int capacity) {
    int currentCapacity = capacity;
    int requiredDays = 1;

    for (int weight : weights) {
        if (weight > capacity) {
            return false;
        }
        if (weight > currentCapacity) {
            requiredDays++;
            currentCapacity = capacity;
        }
        currentCapacity -= weight;
    }

    return requiredDays <= days; 
}
public:
int shipWithinDays(vector<int>& weights, int days) {
    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canShipWithinDays(weights, days, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left; 
}
};
