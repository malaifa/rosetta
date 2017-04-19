// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   core/scoring/symmetry/SymmetricScoreFunction.fwd.hh
/// @brief  core::scoring::symmetry::SymmetricScoreFunction forward declarations
/// @author Ingemar Andre


#ifndef INCLUDED_core_scoring_symmetry_SymmetricScoreFunction_fwd_hh
#define INCLUDED_core_scoring_symmetry_SymmetricScoreFunction_fwd_hh

#include <utility/pointer/owning_ptr.hh>


namespace core {
namespace scoring {
namespace symmetry {


// Forward
class SymmetricScoreFunction;

typedef utility::pointer::shared_ptr< SymmetricScoreFunction > SymmetricScoreFunctionOP;
typedef utility::pointer::shared_ptr< SymmetricScoreFunction const > SymmetricScoreFunctionCOP;

} // symmetry
} // namespace scoring
} // namespace core


#endif // INCLUDED_core_scoring_symmetry_SymmetricScoreFunction_FWD_HH