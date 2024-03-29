# Type Trait Concepts
Concept equivalents of `<type_traits>`.

## Motivation and proposal
TODO

## Example: Constrain an operation involving % to integral types.
```cpp
#include <std/experimental/type_trait_concepts.hpp>

using namespace std::experimental;

template <integral_c type>
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

## Using
The cmake project exports the `std::experimental::type_trait_concepts` target, hence you can:
```cmake
find_package         (type_trait_concepts CONFIG REQUIRED)
target_link_libraries([YOUR_PROJECT_NAME] PRIVATE std::experimental::type_trait_concepts)
```
And then point the `type_trait_concepts_DIR` to the build or installation directory.

Alternatively, you can just copy [type_traits_concepts.hpp](include/std/experimental/type_trait_concepts.hpp) to your project.

## Testing online
Check the latest version on [Godbolt](https://godbolt.org/z/fcYoMEaG9).