#include <print>
#include <chrono>
#include "solutions.hpp"

using std::chrono::duration_cast, std::chrono::milliseconds;

int main() {
	// sauto start = std::chrono::system_clock::now();

	day5a();

	// auto end = std::chrono::system_clock::now();
	// println("\n{} elapsed", duration_cast<milliseconds>(end - start));
}
