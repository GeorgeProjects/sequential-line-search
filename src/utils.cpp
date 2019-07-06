#include <Eigen/Core>
#include <fstream>
#include <sequential-line-search/utils.h>

using Eigen::MatrixXd;
using Eigen::VectorXd;

namespace sequential_line_search
{
    namespace utils
    {
        Eigen::VectorXd generateRandomVector(unsigned n)
        {
            return 0.5 * (Eigen::VectorXd::Random(n) + Eigen::VectorXd::Ones(n));
        }

        void exportMatrixToCsv(const std::string& filePath, const Eigen::MatrixXd& X)
        {
            std::ofstream   file(filePath);
            Eigen::IOFormat format(Eigen::StreamPrecision, Eigen::DontAlignCols, ",");
            file << X.format(format);
        }
    } // namespace utils
} // namespace sequential_line_search
