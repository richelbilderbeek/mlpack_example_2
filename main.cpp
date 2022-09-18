#pragma GCC diagnostic ignored "-Wshadow"
#include <mlpack/core.hpp>
#include <mlpack/methods/reinforcement_learning/q_learning.hpp>
#include <mlpack/methods/reinforcement_learning/policy/greedy_policy.hpp>
#include <mlpack/methods/reinforcement_learning/policy/policy.hpp>
#include <mlpack/methods/reinforcement_learning/training_config.hpp>
#include <mlpack/methods/reinforcement_learning/environment/env_type.hpp>
#pragma GCC diagnostic pop

// Follow mlpack naming convention: class names start with uppercase
struct Action
{

};

// Follow mlpack naming convention: class names start with uppercase
struct State
{
  bool is_alive;
  bool has_vital_item;
};

// Follow mlpack naming convention: class names start with uppercase
struct Environment
{
  using Action = ::Action;
  using State = ::State;
};


// Follow mlpack naming convention: class names start with uppercase
struct Network
{

};

// Follow mlpack naming convention: class names start with uppercase
using Policy = mlpack::rl::GreedyPolicy<Environment>;


// Follow mlpack naming convention: class names start with uppercase
struct Updater
{
  using Policy = ::Policy;
};


// Follow mlpack naming convention: class names start with uppercase
struct Replay
{
  // No idea
};


// Follow mlpack naming convention: class names start with uppercase
using Learner = mlpack::rl::QLearning<
  Environment,
  Network,
  Updater,
  Policy,
  Replay
>;

int main()
{
  /*
  mlpack::rl::TrainingConfig config;
  Network network;
  const Policy policy(1.0, 1000, 0.1);
  mlpack::rl::PrioritizedReplay<mlpack::rl::DiscreteActionEnv<1,2,3>> replayMethod(64, 5000, 0.6, 3);
  const Learner learner(
    config,
    network,
    policy,
    replayMethod
  );
  */
}
