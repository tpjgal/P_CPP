// Argument indices for std::format()
import <iostream>;
import <format>;
import <numbers>;

int main()
{
  const double pi{ std::numbers::pi };
  std::cout << std::format("Default: {:.2}, fixed: {:.2f}, scientific: {:.2e}, "
    "general: {:.2g}\n", pi, pi, pi, pi);
  std::cout << std::format("Default: {0}, binary: {0:b}, hex.: {0:x}\n", 314);
  std::cout << std::format("Default: {0}, decimal: {0:d}, hex.: {0:x}\n", 'c');
  std::cout << std::format("Alternative hex.: {0:#x}, binary: {0:#b}, HEX.: {0:#X}\n", 314);
  std::cout << std::format("Forced sign: {0:+}, space sign: {0: }\n", 314);
  std::cout << std::format("All together: {:*<+10.4f}, {:+#09x}\n", pi, 314);
}
