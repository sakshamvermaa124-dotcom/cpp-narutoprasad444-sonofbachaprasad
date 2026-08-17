#include <iostream>
#include <memory>
#include <utility>

void demonstratePointer() {
int value = 10;
int* ptr = &value;

```
std::cout << "Value: " << value << '\n';
std::cout << "Address: " << ptr << '\n';
std::cout << "Value through pointer: " << *ptr << '\n';

*ptr = 20;
std::cout << "Updated value: " << value << '\n';
```

}

void demonstrateDynamicMemory() {
auto value = std::make_unique<int>(50);

```
std::cout << "Dynamic value: " << *value << '\n';

*value = 100;
std::cout << "Updated dynamic value: " << *value << '\n';
```

}

void demonstrateArray() {
int numbers[] = {10, 20, 30, 40, 50};
int* ptr = numbers;

```
for (std::size_t i = 0; i < 5; ++i) {
    std::cout << *(ptr + i) << ' ';
}

std::cout << '\n';
```

}

int main() {
demonstratePointer();
demonstrateDynamicMemory();
demonstrateArray();

```
return 0;
```

}
