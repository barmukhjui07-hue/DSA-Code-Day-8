~~ 🚀 Data Structures & Algorithms Showcase
Daily tracking of DSA problems, C++ implementation, and core concepts.

📌 Day 8: Dynamic Arrays using C++ STL Vectors-
~~ 🧠 Concepts Used:
1. **Dynamic Resizing:** Utilizing `std::vector` from the C++ Standard Template Library (STL) for dynamic array sizing.
2. **Range-Based For Loops:** Modern C++ iteration (`for (char val : vec)`) over dynamic containers.
3. **Container Mutations:** Adding elements dynamically to the back using `push_back()` and deleting the last element using `pop_back()`.
4. **Safe Element Access:** Fetching boundary elements (`front()`, `back()`) and accessing specific indices with bounds-checking using `at()`.

~~ 🛠️ Skills Learnt:
* Declaring and initializing templated STL vectors (`vector<char>`).
* Managing dynamic container size vs static memory bounds.
* Using bounds-checked member functions (`at()`) over raw subscript operators (`[]`) for safe element traversal.

~~ 💡 Key Takeaways:
* **Automatic Type Casting:** Pushing an integer (e.g., `vec.push_back(25)`) into a `vector<char>` implicitly converts the number into its ASCII character representation (`25` corresponds to the *EM* control character).
* **`at()` vs Subscript `[]`:** While `vec[0]` directly accesses memory without verification, `vec.at(0)` performs bounds-checking and throws an `out_of_range` exception if the index is invalid.

