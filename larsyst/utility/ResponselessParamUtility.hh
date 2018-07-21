#ifndef LARSYST_UTILITY_RESPONSELESSPARAMUTILITY_SEEN
#define LARSYST_UTILITY_RESPONSELESSPARAMUTILITY_SEEN

#include "larsyst/interface/SystMetaData.hh"

#include <vector>
#include <string>

namespace larsyst {
///\brief Checks that all responseless parameters in the set have the same
///number of configured variations and adds dummy variations for the response
///parameter.
void FinalizeAndValidateDependentParameters(
    SystMetaData &, std::string const &response_parameter_name,
    std::vector<std::string> const &dependent_parameter_names);

} // namespace larsyst

#endif
