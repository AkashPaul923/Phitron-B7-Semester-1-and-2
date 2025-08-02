# STL Operations Reference

## String Operations

| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Access character | `str[index]` or `str.at(index)` | O(1) | Access character at specific position |
| Length | `str.length()` or `str.size()` | O(1) | Get length of string |
| Empty check | `str.empty()` | O(1) | Check if string is empty |
| Append | `str.append(str2)` | O(n) | Append another string |
| Concatenate | `str1 + str2` | O(n) | Concatenate two strings |
| Compare | `str1.compare(str2)` | O(n) | Compare two strings |
| Substring | `str.substr(pos, len)` | O(n) | Get substring |
| Find | `str.find(substr)` | O(n*m) | Find substring |
| Replace | `str.replace(pos, len, str2)` | O(n) | Replace portion of string |
| Insert | `str.insert(pos, str2)` | O(n) | Insert string at position |
| Erase | `str.erase(pos, len)` | O(n) | Remove characters |
| Clear | `str.clear()` | O(1) | Clear the string |
| Push back | `str.push_back(c)` | O(1) | Append character |
| Pop back | `str.pop_back()` | O(1) | Remove last character |

## Vector Operations

| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Access element | `v[index]` or `v.at(index)` | O(1) | Access element at index |
| Front | `v.front()` | O(1) | First element |
| Back | `v.back()` | O(1) | Last element |
| Size | `v.size()` | O(1) | Number of elements |
| Empty check | `v.empty()` | O(1) | Check if empty |
| Push back | `v.push_back(value)` | O(1) (amortized) | Add element at end |
| Pop back | `v.pop_back()` | O(1) | Remove last element |
| Insert | `v.insert(pos, value)` | O(n) | Insert at position |
| Erase | `v.erase(pos)` | O(n) | Remove element |
| Clear | `v.clear()` | O(n) | Remove all elements |
| Reserve | `v.reserve(n)` | O(n) | Reserve capacity |
| Resize | `v.resize(n)` | O(n) | Change size |
| Swap | `v1.swap(v2)` | O(1) | Swap contents |
| Emplace back | `v.emplace_back(args)` | O(1) (amortized) | Construct element in-place |

## List Operations

| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Front | `l.front()` | O(1) | First element |
| Back | `l.back()` | O(1) | Last element |
| Size | `l.size()` | O(1) | Number of elements |
| Empty check | `l.empty()` | O(1) | Check if empty |
| Push front | `l.push_front(value)` | O(1) | Add to front |
| Push back | `l.push_back(value)` | O(1) | Add to end |
| Pop front | `l.pop_front()` | O(1) | Remove first element |
| Pop back | `l.pop_back()` | O(1) | Remove last element |
| Insert | `l.insert(pos, value)` | O(1) | Insert at position |
| Erase | `l.erase(pos)` | O(1) | Remove element |
| Clear | `l.clear()` | O(n) | Remove all elements |
| Remove | `l.remove(value)` | O(n) | Remove all matching elements |
| Unique | `l.unique()` | O(n) | Remove consecutive duplicates |
| Sort | `l.sort()` | O(n log n) | Sort elements |
| Merge | `l1.merge(l2)` | O(n) | Merge sorted lists |
| Splice | `l1.splice(pos, l2)` | O(1) | Transfer elements |
| Reverse | `l.reverse()` | O(n) | Reverse the list |

## Stack Operations

| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Push | `s.push(value)` | O(1) | Add element to top |
| Pop | `s.pop()` | O(1) | Remove top element |
| Top | `s.top()` | O(1) | Access top element |
| Size | `s.size()` | O(1) | Number of elements |
| Empty check | `s.empty()` | O(1) | Check if empty |
| Emplace | `s.emplace(args)` | O(1) | Construct element in-place at top |

## Queue Operations

| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Push | `q.push(value)` | O(1) | Add element to back |
| Pop | `q.pop()` | O(1) | Remove front element |
| Front | `q.front()` | O(1) | Access front element |
| Back | `q.back()` | O(1) | Access back element |
| Size | `q.size()` | O(1) | Number of elements |
| Empty check | `q.empty()` | O(1) | Check if empty |
| Emplace | `q.emplace(args)` | O(1) | Construct element in-place at back |

## Sorting Operations

### String Sorting
| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Ascending | `std::sort(str.begin(), str.end())` | O(n log n) | Sort in ascending order |
| Descending | `std::sort(str.begin(), str.end(), std::greater<char>())` | O(n log n) | Sort in descending order |

### Vector Sorting
| Operation | Syntax | Time Complexity | Description |
|-----------|--------|-----------------|-------------|
| Ascending | `std::sort(vec.begin(), vec.end())` | O(n log n) | Sort in ascending order |
| Descending | `std::sort(vec.begin(), vec.end(), std::greater<T>())` | O(n log n) | Sort in descending order |
| Custom | `std::sort(vec.begin(), vec.end(), comparator)` | O(n log n) | Sort with custom comparator |