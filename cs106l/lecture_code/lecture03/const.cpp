#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{ 1, 2, 3 };  /// a normal vector
    const std::vector<int> const_vec{ 1, 2, 3 };  /// a const vector
    std::vector<int>& ref_vec{ vec };  /// a reference to 'vec'
    const std::vector<int>& const_ref{ vec };  /// a const reference

    vec.push_back(3); // this is allowed, as 'vec' is not const
    const_vec.push_back(3); // this will cause a compilation error, as 'const_vec' is const
    ref_vec.push_back(3); // this is allowed, as 'ref_vec' is a reference to 'vec'
    const_ref.push_back(3); // this will cause a compilation error, as 'const_ref' is a const reference

    // aconst vector
    const std::vector<int> const_vec2{ 1, 2, 3 };
    std::vector<int>& bad_ref_vec{ const_vec2 }; // this will cause a compilation error, as 'const_vec2' is const
    const std::vector<int>& bad_const_ref{ const_vec2 }; // this is allowed, as 'bad_const_ref' is a const reference

    return 0;
}

