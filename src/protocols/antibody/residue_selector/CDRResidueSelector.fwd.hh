// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available
// (c) under license. The Rosetta software is developed by the contributing
// (c) members of the Rosetta Commons. For more information, see
// (c) http://www.rosettacommons.org. Questions about this can be addressed to
// (c) University of Washington UW TechTransfer,email:license@u.washington.edu.

/// @file protocols/antibody/residue_selector/CDRResidueSelector.fwd.hh
/// @brief Select CDR residues.
/// @author Jared Adolf-Bryfogle (jadolfbr@gmail.com)


#ifndef INCLUDED_protocols_antibody_residue_selector_CDRResidueSelector_fwd_hh
#define INCLUDED_protocols_antibody_residue_selector_CDRResidueSelector_fwd_hh

// Utility headers
#include <utility/pointer/owning_ptr.hh>



// Forward
namespace protocols {
namespace antibody {
namespace residue_selector {

class CDRResidueSelector;

typedef utility::pointer::shared_ptr< CDRResidueSelector > CDRResidueSelectorOP;
typedef utility::pointer::shared_ptr< CDRResidueSelector const > CDRResidueSelectorCOP;



} //protocols
} //antibody
} //residue_selector


#endif //INCLUDED_protocols_antibody_residue_selector_CDRResidueSelector_fwd_hh





