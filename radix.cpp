#include <iostream>
#include <vector>
using namespace std;

// Function to get the maximum value in the array
int getMax(const vector<int>& arr) {
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Function to perform counting sort for a specific digit represented by exp
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n); // Output array to store sorted numbers
    vector<int> count(10, 0); // Count array to store the frequency of digits

    // Count the occurrences of digits in the current place value (exp)
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    // Update count[i] to store the actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array in stable order
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy the sorted numbers back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Function to perform Radix Sort
void radixSort(vector<int>& arr) {
    // Get the maximum number to determine the number of digits
    int maxElement = getMax(arr);

    // Perform counting sort for each digit, from the least significant digit to the most
    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

// Helper function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function
int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original array: ";
    printArray(arr);

    radixSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
