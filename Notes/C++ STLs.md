# C++ STLs

## **1. `unordered_set`** 🔹

- Stores **unique elements** in **no particular order**.
- **O(1)** average time for insert, erase, find.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s = {10, 20, 30};

    s.insert(40);         // Insert element
    s.erase(20);          // Erase element
    cout << s.count(30);  // Check existence (1 or 0)
    cout << *s.begin();   // First element (unordered)
    return 0;
}

```

---

## **2. `vector`** 🔹🔥 *(Most Used in DSA)*

- Dynamic array → **random access O(1)**.
- Supports resizing, push, pop, sort, reverse.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 3, 8};
    v.push_back(10);      // Add at end
    v.pop_back();         // Remove last
    sort(v.begin(), v.end());  // 🔥 Sort vector
    reverse(v.begin(), v.end());
    cout << v.front() << " " << v.back(); // First & last
    return 0;
}

```

---

## **3. `set`** 🔹

- Stores **unique sorted elements**.
- **O(log n)** for insert, erase, find.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {5, 1, 3};
    s.insert(2);
    s.erase(1);
    cout << *s.begin();    // Smallest
    cout << *s.rbegin();   // Largest
    cout << s.count(3);    // Check existence
    return 0;
}

```

---

## **4. `unordered_multiset`** 🔹

- Similar to `unordered_set` but **allows duplicates**.
- **O(1)** average operations.

```cpp
unordered_multiset<int> ms;
ms.insert(10);
ms.insert(10);
ms.erase(ms.find(10));  // Erase only one occurrence

```

---

## **5. `multiset`** 🔹

- Stores **sorted elements** but **allows duplicates**.
- **O(log n)** for insert/erase.

```cpp
multiset<int> ms = {1,1,2};
ms.insert(2);
ms.erase(ms.find(1));  // Erase one occurrence

```

---

## **6. `unordered_map`** 🔹🔥 *(DSA Essential)*

- Stores **key-value pairs**, **O(1)** average.
- Keys are unique, order **not maintained**.

```cpp
unordered_map<string, int> mp;
mp["apple"] = 10;
mp["banana"] = 20;
cout << mp["apple"];
cout << mp.count("mango");   // 0 if not exists

```

---

## **7. `map`** 🔹🔥 *(Frequently Used in Interviews)*

- Stores **key-value pairs** in **sorted order**.
- **O(log n)** operations.

```cpp
map<int, string> mp;
mp[1] = "One";
mp[2] = "Two";
for (auto &p : mp) cout << p.first << " -> " << p.second;

```

---

## **8. `unordered_multimap`** 🔹

- Like `unordered_map` but **allows duplicate keys**.

```cpp
unordered_multimap<int, string> ump;
ump.insert({1, "A"});
ump.insert({1, "B"});   // ✅ duplicate key allowed

```

---

## **9. `queue`** 🔹

- **FIFO** structure → Push from back, pop from front.
- **O(1)** operations.

```cpp
queue<int> q;
q.push(10);
q.push(20);
q.pop();
cout << q.front();

```

---

## **10. `stack`** 🔹

- **LIFO** structure → Push & pop from top.
- **O(1)** operations.

```cpp
stack<int> st;
st.push(10);
st.push(20);
cout << st.top();
st.pop();

```

---

## **11. `deque`** 🔹

- **Double-ended queue** → Insert & delete from both ends.
- **O(1)** at both ends.

```cpp
deque<int> dq = {1, 2, 3};
dq.push_front(0);
dq.push_back(4);
dq.pop_front();
dq.pop_back();

```

---

## **12. `priority_queue`** 🔹🔥 *(Max/Min Heaps)*

- By default → **Max Heap**.
- Use custom comparator for **Min Heap**.

```cpp
// Max Heap
priority_queue<int> pq;
pq.push(10);
pq.push(20);
cout << pq.top();  // 20

// Min Heap
priority_queue<int, vector<int>, greater<int>> minpq;
minpq.push(10);
minpq.push(20);
cout << minpq.top(); // 10

```

---

## **13. `multimap`** 🔹

- Stores **sorted key-value pairs** but **allows duplicate keys**.

```cpp
multimap<int, string> mmp;
mmp.insert({1, "A"});
mmp.insert({1, "B"});

```

---

## **14. `list`** 🔹

- **Doubly linked list**.
- Fast insertions/deletions but slower random access.

```cpp
list<int> l = {1, 2, 3};
l.push_front(0);
l.push_back(4);
l.pop_front();

```

---

## **15. `next_permutation()`** 🔹🔥 *(Very Common in DSA)*

- Generates the **next lexicographical permutation**.

```cpp
vector<int> v = {1, 2, 3};
next_permutation(v.begin(), v.end()); // v = {1,3,2}

```

---

## **16. `__builtin_popcount()`** 🔹🔥 *(Bit Manipulation Shortcut)*

- Returns the number of **set bits (1s)** in an integer.

```cpp
int x = 7; // Binary: 111
cout << __builtin_popcount(x); // Output: 3

```

---

## **17. `sort()`** 🔹🔥 *(Most Used)*

- Default → Ascending.
- Pass comparator for descending.

```cpp
vector<int> v = {3, 1, 4};
sort(v.begin(), v.end());                    // Asc
sort(v.rbegin(), v.rend());                  // Desc

```

---

## **18. `min_element()` & `max_element()`** 🔹

- Find minimum & maximum in a range.

```cpp
vector<int> v = {3, 5, 1, 7};
cout << *min_element(v.begin(), v.end());  // 1
cout << *max_element(v.begin(), v.end());  // 7

```