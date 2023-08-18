# Concept equivalents of `<type_traits>`.
Try out a preliminary example on [Godbolt](https://godbolt.org/z/7MTve7jKW).

## TODO: Getting started

## TODO: Example usage
```cpp
#include "type_trait_concepts.hpp"

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

## TODO: Motivation, the why?

## TODO: Proposal
