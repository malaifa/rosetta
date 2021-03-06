// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file protocols/canonical_sampling/mc_convergence_checks/HPool.fwd.hh
/// @brief hierarchical pool
/// @author Yuan Liu (wendao@u.washington.edu)

#ifndef INCLUDED_protocols_canonical_sampling_mc_convergence_checks_HPool_fwd_hh
#define INCLUDED_protocols_canonical_sampling_mc_convergence_checks_HPool_fwd_hh

#include <utility/pointer/owning_ptr.hh>

// Package headers
namespace protocols {
namespace canonical_sampling {
namespace mc_convergence_checks {

class HPool_RMSD;
typedef utility::pointer::shared_ptr< HPool_RMSD > HPool_RMSD_OP;
typedef utility::pointer::shared_ptr< HPool_RMSD const > HPool_RMSD_COP;

} // mc_conv
} // moves
} // prot

#endif

