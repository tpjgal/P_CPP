# Best Practice

## Style


* `CamelCase`
 * `snake_case`
 
 *snake_case* has the advantage that it can also work with spell checkers
 
 
 
 ```cpp
struct Size
{
  int width;
  int height;

  Size(int t_width, int t_height) : width(t_width), height(t_height) {}
};

// This version might make sense for thread safety or something,
// but more to the point, sometimes we need to hide data, sometimes we don't.
class PrivateSize
{
  public:
    int width() const { return m_width; }
    int height() const { return m_height; }
    PrivateSize(int t_width, int t_height) : m_width(t_width), m_height(t_height) {}

  private:
    int m_width;
    int m_height;
};
```

## Well-Formed Example

```cpp
class MyClass
{
public:
  MyClass(int t_data)
    : m_data(t_data)
  {
  }

  int getData() const
  {
    return m_data;
  }

private:
  int m_data;
};

```

## Use `nullptr`

C++11 introduces `nullptr` which is a special value denoting a null pointer. 
This should be used instead of `0` or `NULL` to indicate a null pointer.



## Never Use `using namespace` in a Header File

This causes the namespace you are `using` to be pulled into the namespace of all files that include the header file.
It pollutes the namespace and it may lead to name collisions in the future.
Writing `using namespace` in an implementation file is fine though.


## Include Guards

Header files must contain a distinctly-named include guard to avoid problems with including the same header multiple times and to prevent conflicts with headers from other projects.

```cpp
#ifndef MYPROJECT_MYCLASS_HPP
#define MYPROJECT_MYCLASS_HPP

namespace MyProject {
  class MyClass {
  };
}

#endif
```

You may also consider using the `#pragma once` directive instead which is quasi-standard across many compilers.
It's short and makes the intent clear.


## {} Are Required for Blocks.
Leaving them off can lead to semantic errors in the code.

```cpp
// Bad Idea
// This compiles and does what you want, but can lead to confusing
// errors if modification are made in the future and close attention
// is not paid.
for (int i = 0; i < 15; ++i)
  std::cout << i << std::endl;

// Bad Idea
// The cout is not part of the loop in this case even though it appears to be.
int sum = 0;
for (int i = 0; i < 15; ++i)
  ++sum;
  std::cout << i << std::endl;


// Good Idea
// It's clear which statements are part of the loop (or if block, or whatever).
int sum = 0;
for (int i = 0; i < 15; ++i) {
  ++sum;
  std::cout << i << std::endl;
}
```

## Keep Lines a Reasonable Length

```cpp
// Bad Idea
// hard to follow
if (x && y && myFunctionThatReturnsBool() && caseNumber3 && (15 > 12 || 2 < 3)) {
}

// Good Idea
// Logical grouping, easier to read
if (x && y && myFunctionThatReturnsBool()
    && caseNumber3
    && (15 > 12 || 2 < 3)) {
}
```

## Use "" for Including Local Files
... `<>` is [reserved for system includes](http://blog2.emptycrate.com/content/when-use-include-verses-include).

```cpp
// Bad Idea. Requires extra -I directives to the compiler
// and goes against standards.
#include <string>
#include <includes/MyHeader.hpp>

// Worse Idea
// Requires potentially even more specific -I directives and
// makes code more difficult to package and distribute.
#include <string>
#include <MyHeader.hpp>


// Good Idea
// Requires no extra params and notifies the user that the file
// is a local file.
#include <string>
#include "MyHeader.hpp"
```

## Use "" for Including Local Files
... `<>` is [reserved for system includes](http://blog2.emptycrate.com/content/when-use-include-verses-include).

```cpp
// Bad Idea. Requires extra -I directives to the compiler
// and goes against standards.
#include <string>
#include <includes/MyHeader.hpp>

// Worse Idea
// Requires potentially even more specific -I directives and
// makes code more difficult to package and distribute.
#include <string>
#include <MyHeader.hpp>


// Good Idea
// Requires no extra params and notifies the user that the file
// is a local file.
#include <string>
#include "MyHeader.hpp"
```

## Initialize Member Variables
...with the member initializer list.

For POD types, the performance of an initializer list is the same as manual initialization, but for other types there is a clear performance gain, see below.

```cpp
// Bad Idea
class MyClass
{
public:
  MyClass(int t_value)
  {
    m_value = t_value;
  }

private:
  int m_value;
};

// Bad Idea
// This leads to an additional constructor call for m_myOtherClass
// before the assignment.
class MyClass
{
public:
  MyClass(MyOtherClass t_myOtherClass)
  {
    m_myOtherClass = t_myOtherClass;
  }

private:
  MyOtherClass m_myOtherClass;
};

// Good Idea
// There is no performance gain here but the code is cleaner.
class MyClass
{
public:
  MyClass(int t_value)
    : m_value(t_value)
  {
  }

private:
  int m_value;
};

// Good Idea
// The default constructor for m_myOtherClass is never called here, so
// there is a performance gain if MyOtherClass is not is_trivially_default_constructible.
class MyClass
{
public:
  MyClass(MyOtherClass t_myOtherClass)
    : m_myOtherClass(t_myOtherClass)
  {
  }

private:
  MyOtherClass m_myOtherClass;
};
```


In C++11 you can assign default values to each member (using `=` or using `{}`).

### Assigning default values with =

```cpp
// ... //
private:
  int m_value = 0; // allowed
  unsigned m_value_2 = -1; // narrowing from signed to unsigned allowed
// ... //
```
This ensures that no constructor ever "forgets" to initialize a member object.

### Assigning default values with brace initialization

Using brace initialization does not allow narrowing at compile-time.

```cpp
// Best Idea

// ... //
private:
  int m_value{ 0 }; // allowed
  unsigned m_value_2 { -1 }; // narrowing from signed to unsigned not allowed, leads to a compile time error
// ... //
```

Prefer `{}` initialization over `=` unless you have a strong reason not to.

Forgetting to initialize a member is a source of undefined behavior bugs which are often extremely hard to find.

If the member variable is not expected to change after the initialization, then mark it `const`.

```cpp
class MyClass
{
public:
  MyClass(int t_value)
    : m_value{t_value}
  {
  }

private:
  const int m_value{0};
};
```

Since a const member variable cannot be assigned a new value, such a class may not have a meaningful copy assignment operator.


## Use the Correct Integer Type for Standard Library Features

The standard library generally uses `std::size_t` for anything related to size. The size of `size_t` is implementation defined.

In general, using `auto` will avoid most of these issues, but not all.

Make sure you stick with the correct integer types and remain consistent with the C++ standard library. It might not warn on the platform you are currently using, but it probably will when you change platforms.

*Note that you can cause integer underflow when performing some operations on unsigned values. For example:*

```cpp
std::vector<int> v1{2,3,4,5,6,7,8,9};
std::vector<int> v2{9,8,7,6,5,4,3,2,1};
const auto s1 = v1.size();
const auto s2 = v2.size();
const auto diff = s1 - s2; // diff underflows to a very large number
```

## Avoid Implicit Conversions

### Single Parameter Constructors

Single parameter constructors can be applied at compile time to automatically convert between types. This is handy for things like `std::string(const char *)` but should be avoided in general because they can add to accidental runtime overhead.

Instead mark single parameter constructors as `explicit`, which requires them to be explicitly called.

### Conversion Operators

Similarly to single parameter constructors, conversion operators can be called by the compiler and introduce unexpected overhead. They should also be marked as `explicit`.

```cpp
//bad idea
struct S {
  operator int() {
    return 2;
  }
};
```

```cpp
//good idea
struct S {
  explicit operator int() {
    return 2;
  }
};
```




