/*Dr. Strange has an experimental laboratory in a mysterious enclave.
He is conducting an experiment to strange genes which will make him the most powerful sorcerer in the existence .
He needs to create particular amount of bacteria. The bacteria multiplies exponentially.
If he lets m bacteria to multiply n exponential times, he should check whether he will get the required amount of bacteria.
Input consists of three inputs. The no. of bacteria, m. The number in which it gets multiplied, n. The required number, req .

Input (stdin)
2
3
7

Output (stdout)
Doctor, you can proceed with your experiment.
*/

#include <iostream>
int main()
{
    int m, n, r, x = 1;
    std::cin >> m >> n >> r;
    for (int i = 1; i <= n; i++)
    {
        x = x * m;
    }
    if (x >= r)
        std::cout << "Doctor, you can proceed with your experiment.";
    else
        std::cout << "Sorry Doctor! You need more bacteria.";
}