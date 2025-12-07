vector<int> decrypt(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> v(n, 0);  // Initialize v with size n and all elements as 0

        if (k == 0) {
            return v;  // If k is 0, all elements in v are 0
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    sum += arr[(i + j) % n];  // Wrap around using modulo
                }
            } else {  // k < 0
                for (int j = 1; j <= -k; j++) {
                    sum += arr[(i - j + n) % n];  // Wrap around using modulo
                }
            }
            v[i] = sum;
        }

        return v;
    }