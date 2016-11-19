# vector
Occam's C++ Vector Literals + Sub-Queries
## Fully templated! Uses (abuses?) varadics!

## Examples:
### Create & populate a vector of c-strings:
```C++
auto strings = v("a test", "b test", "c test", 
"c test", "c test", "c test", "c test", 
"c test", "d test", "c test", "c test", 
"c test", "c test", "e test", "c test",
"c test", "c test", "c test", "c test",
"c test", "c test", "f test", "c test",
"c test");
```

### Create & populate a vector of ints:
```C++
auto ints = v(0, 283, 344,
  345, 384, 403, 
  584, 104384, 403, 
  584, 10484, 403, 
  584, 10384, 403, 
  584, 104);
```

