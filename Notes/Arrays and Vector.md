# 📌 Arrays and Vectors in C++ (STL)

---

## ✅ Array

- **Fixed Size** – Size is defined at declaration and **cannot change**.  
- **Contiguous Memory** – Fast access via indexing `O(1)`.  
- **Indexing** – Accessed using indices like in `for` loops (`i++`).

### 🔧 Basic Operations
| Operation       | Time Complexity |
|----------------|------------------|
| Access         | `O(1)`           |
| Update         | `O(1)`           |
| Insert/Delete  | `O(n)` *(due to shifting)* |

### 🧪 Syntax
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### 💡 Use Case
Use when **size is fixed and known in advance**.

---

## ✅ Vectors (`#include <vector>`)

- **Dynamic Array** – Auto-resizes as elements are added.
- **Internally Uses Arrays** – On resizing, a new array of double the capacity is created and elements are copied.
- `v.size()` – Current size  
- `v.capacity()` – Total capacity before resize  

### 🔧 Time Complexities
| Operation                      | Time Complexity |
|-------------------------------|------------------|
| Random Access (via index)     | `O(1)`           |
| Insert at End (`push_back`)   | `O(1)` *(amortized)* |
| Insert/Delete at middle/start | `O(n)`           |

### 🧪 Syntax
```cpp
vector<int> v = {1, 2, 3};
vector<int> v;                 // Empty vector
vector<int> v(5, 0);           // Size 5, all values initialized to 0
```

### ⚙️ Useful Functions
```cpp
v.push_back(4);        // Insert at end
v.pop_back();          // Remove last element
v.size();              // Current size
v.clear();             // Removes all elements
v.begin();             // Iterator to first element
v.end();               // Iterator past last element
```

### 💡 Use Case
Use when **size changes dynamically** or for **easier syntax in interviews**.

---

## 🔁 Iterators

> Think of iterators as **pointers** used to **traverse STL containers**.

### 🔹 Iterator Features
- Can be incremented: `++it`  
- Can be dereferenced: `*it`  
- Can be compared: `it1 != it2`

### 🧪 Example
```cpp
vector<int> v = {10, 20, 30, 40};

auto it = v.begin();     // Points to v[0]
auto end = v.end();      // Points past the last element

for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
}
```

### ✅ Common Usage
```cpp
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
```
