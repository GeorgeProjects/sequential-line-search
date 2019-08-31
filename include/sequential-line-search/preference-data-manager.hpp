#ifndef SEQUENTIAL_LINE_SEARCH_PREFERENCE_DATA_MANAGER_H
#define SEQUENTIAL_LINE_SEARCH_PREFERENCE_DATA_MANAGER_H

#include <Eigen/Core>
#include <sequential-line-search/preference.hpp>
#include <vector>

namespace sequential_line_search
{
    /// \brief Utility class for managing observed data during optimization.
    class PreferenceDataManager
    {
    public:
        Eigen::MatrixXd         m_X;
        std::vector<Preference> m_D;

        void AddNewPoints(const Eigen::VectorXd&              x_preferable,
                          const std::vector<Eigen::VectorXd>& xs_other,
                          const bool                          merge_close_points = true,
                          const double                        epsilon            = 1e-04);
    };
} // namespace sequential_line_search

#endif // SEQUENTIAL_LINE_SEARCH_PREFERENCE_DATA_MANAGER_H