// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   protocols/protein_interface_design/DockDesignFilterFactory.fwd.hh
/// @brief
/// @author ashworth

#ifndef INCLUDED_protocols_protein_interface_design_DockDesignFilterFactory_fwd_hh
#define INCLUDED_protocols_protein_interface_design_DockDesignFilterFactory_fwd_hh

#include <utility/pointer/owning_ptr.hh>

namespace protocols {
namespace protein_interface_design {

class DockDesignFilterFactory;

typedef utility::pointer::shared_ptr< DockDesignFilterFactory > DockDesignFilterFactoryOP;
typedef utility::pointer::shared_ptr< DockDesignFilterFactory const > DockDesignFilterFactoryCOP;

} //namespace protein_interface_design
} //namespace protocols

#endif
