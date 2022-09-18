#pragma GCC diagnostic ignored "-Wshadow"
#include <mlpack/core.hpp>
#include <mlpack/methods/reinforcement_learning/q_learning.hpp>
#include <mlpack/methods/reinforcement_learning/policy/greedy_policy.hpp>
#pragma GCC diagnostic pop

struct action
{

};

struct environment
{
  using Action = action;
};

struct state
{
  bool is_alive;
  bool has_vital_item;
};

int main()
{
  mlpack::rl::GreedyPolicy<environment> policy(1.0, 1000, 0.1);

}
