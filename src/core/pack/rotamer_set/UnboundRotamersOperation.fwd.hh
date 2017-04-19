// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   core/pack/rotamer_set/UnboundRotamersOperation.fwd.hh
///
/// @brief
/// @author Ian W. Davis


#ifndef INCLUDED_core_pack_rotamer_set_UnboundRotamersOperation_fwd_hh
#define INCLUDED_core_pack_rotamer_set_UnboundRotamersOperation_fwd_hh

#include <utility/pointer/owning_ptr.hh>

namespace core {
namespace pack {
namespace rotamer_set {


class UnboundRotamersOperation; // fwd declaration
typedef utility::pointer::shared_ptr< UnboundRotamersOperation > UnboundRotamersOperationOP;
typedef utility::pointer::shared_ptr< UnboundRotamersOperation const > UnboundRotamersOperationCOP;


} // namespace rotamer_set
} // namespace pack
} // namespace core

#endif // INCLUDED_core_pack_rotamer_set_UnboundRotamersOperation_FWD_HH
