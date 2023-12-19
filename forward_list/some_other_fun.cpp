#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

int main() {
    // Creating forward lists
    forward_list<int> list1 = {1, 3, 5, 7};
    forward_list<int> list2 = {2, 4, 6, 8};

    // Displaying original lists
    cout << "Original List 1: ";
    for (const auto& elem : list1) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Original List 2: ";
    for (const auto& elem : list2) {
        cout << elem << " ";
    }
    cout << endl;

    // Reversing the first list
    list1.reverse();
    cout << "Reversed List 1: ";
    for (const auto& elem : list1) {
        cout << elem << " ";
    }
    cout << endl;

    // Merging the two lists
    list1.merge(list2);
    cout << "Merged List (after merging and removing duplicates): ";
    for (const auto& elem : list1) {
        cout << elem << " ";
    }
    cout << endl;

    // Sorting the merged list
    list1.sort();
    cout << "Sorted Merged List: ";
    for (const auto& elem : list1) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
