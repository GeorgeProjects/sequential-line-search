#ifndef data_h
#define data_h

#include <Eigen/Core>
#include <sequential-line-search/preference.h>
#include <vector>

namespace sequential_line_search
{
    /// \brief Utility class for managing observed data during optimization.
    class Data
    {
    public:
        Eigen::MatrixXd         X;
        std::vector<Preference> D;

        void AddNewPoints(const Eigen::VectorXd&              x_preferable,
                          const std::vector<Eigen::VectorXd>& xs_other,
                          const bool                          merge_close_points = true);

    private:
        /// \brief Merge sampled points that are sufficiently closer.
        /// \param epsilon The threshold of the distance between sampled points to be merged
        void MergeClosePoints(const double epsilon = 5e-03);
    };
} // namespace sequential_line_search

#endif // data_h
