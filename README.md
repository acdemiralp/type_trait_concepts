### Type Traits Concepts
Reference implementation of the proposal "Concept equivalents of boolean type traits". Try it out on [Godbolt](https://godbolt.org/z/KjY8aevGh).

### Example Usage
```cpp
#include "type_traits_concepts.hpp"

template <std::experimental::integral_c type>
bool is_even(const type& input)
{
  return input % 2 == 0;
}

int main(int argc, char** argv)
{
  is_even(1   ); // OK
  is_even(2ul ); // OK
  is_even(3ull); // OK
  //is_even(0.1f); // Compile-time error.

  return 0;
}
```
