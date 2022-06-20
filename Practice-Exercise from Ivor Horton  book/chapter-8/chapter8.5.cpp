#include <iostream>
#include <vector>
#include <string>

void create_num_range(std::vector<unsigned int> &);
void create_prime_vector(std::vector<unsigned int> &, std::vector<unsigned int> &);
int check_prime(unsigned int, std::vector<unsigned int> &);

int main()
{
    std::vector<unsigned int> num_range;
    std::vector<unsigned int> prime_vector;
    // unsigned int start
    create_num_range(num_range);
    create_prime_vector(num_range, prime_vector);
    for (auto a : prime_vector)
    {
        std::cout << "\n"
                  << a << "\n";
    }
}

void create_num_range(std::vector<unsigned int> &range)
{
    std::cout << "\nEnter the end of the range\n";
    unsigned int range_end;
    std::cin >> range_end;
    for (size_t i = 1; i <= range_end; i++)
    {
        range.push_back(i);
    }
}

void create_prime_vector(std::vector<unsigned int> &num_rng, std::vector<unsigned int> &primes)
{
    unsigned int temp{};
    for (size_t i = 0; i < num_rng.size(); i++)
    {
        temp = check_prime(num_rng[i], primes);
        if (temp)
        {
            primes.push_back(temp);
        }
    }
}

int check_prime(unsigned int check_prime, std::vector<unsigned int> &prime_nums)
{
    // bool isprime;
    if (check_prime == 1)
    {
        return 0;
    }
    else if (check_prime == 2)
    {
        return check_prime;
    }
    else if (prime_nums.size() > 0)
    {
        for (size_t i = 0; i < prime_nums.size(); i++)
        {
            if (check_prime % prime_nums[i] == 0)
            {
                return 0;
            }
        }
        // isprime = true;
        return check_prime;
    }
    return 0;
}
