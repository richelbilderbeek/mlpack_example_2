#include <mlpack/core.hpp>
#include <mlpack/methods/neighbor_search/neighbor_search.hpp>

using namespace mlpack;
using namespace mlpack::neighbor; // NeighborSearch and NearestNeighborSort
using namespace mlpack::metric; // ManhattanDistance

int main()
{
  // Armadillo is a C++ linear algebra library; mlpack uses its matrix data type.
  arma::mat data;

 /*
   * Create a NeighborSearch model. The parameters of the model are specified
   * with templates:
   *  - Sorting method: "NearestNeighborSort" - This class sorts by increasing
   *    distance.
   *  - Distance metric: "ManhattanDistance" - The L1 distance, sum of absolute
   *    distances.
   *
   * Pass the reference dataset (the vectors to be searched through) to the
   * constructor.
   */
  NeighborSearch<NearestNeighborSort, ManhattanDistance> nn;

  /*
   * Create the matrices to hold the results of the search.
   *   neighbors [k  x  n] - Indeces of the nearest neighbor(s).
   *                         One column per data query vector and one row per
   *                        'k' neighbors.
   *   distances [k  x  n] - Calculated distance values.
   *                         One column per data query vector and one row per
   *                        'k' neighbors.
   */
  arma::Mat<size_t> neighbors;
  arma::mat distances;
}
